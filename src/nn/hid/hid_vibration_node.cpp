#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/hid_vibration_node.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::hid {

namespace detail {

Result FlushEnqueuedVibrationValues();

}

namespace {

constexpr float DefaultFrequencyLow = 160.0f;
constexpr float DefaultFrequencyHigh = 320.0f;

uint8_t g_SampleNumber;
os::SdkRecursiveMutexType g_GraphMutex;
os::SdkRecursiveMutexType g_ValueMutex;
util::IntrusiveList<VibrationNode> g_NodeList;

class ScopedLock {
 public:
  explicit ScopedLock(os::SdkRecursiveMutexType& mutex) : m_Mutex(mutex) {
    m_Mutex.Lock();
  }

  ~ScopedLock() {
    m_Mutex.Unlock();
  }

 private:
  os::SdkRecursiveMutexType& m_Mutex;
};

VibrationNodeConnection* GetConnection(util::IntrusiveListNode* node) {
  return util::IntrusiveListBaseNodeTraits<VibrationNodeConnection>::GetItem(
    node);
}

}

VibrationNodeConnection::VibrationNodeConnection() :
  m_pSource(nullptr), m_pDestination(nullptr),
  m_Modulation{1.0f, 1.0f, 1.0f, 1.0f} {}

VibrationNodeConnection::VibrationNodeConnection(VibrationNode* pSource,
  VibrationNode* pDestination) :
  m_pSource(nullptr), m_pDestination(nullptr),
  m_Modulation{1.0f, 1.0f, 1.0f, 1.0f} {
  Connect(pSource, pDestination);
}

VibrationNodeConnection::~VibrationNodeConnection() {
  Disconnect();
}

bool VibrationNodeConnection::Connect(VibrationNode* pSource,
  VibrationNode* pDestination) {
  ScopedLock graphLock(g_GraphMutex);
  ScopedLock valueLock(g_ValueMutex);
  if (IsConnected() || pSource->IsConnectedTo(pDestination)) {
    return false;
  }
  m_pSource = pSource;
  m_pDestination = pDestination;
  pDestination->m_InputConnections.push_back(*this);
  return true;
}

void VibrationNodeConnection::Disconnect() {
  ScopedLock graphLock(g_GraphMutex);
  ScopedLock valueLock(g_ValueMutex);
  if (IsConnected()) {
    m_pDestination->m_InputConnections.erase(*this);
    m_pSource = nullptr;
    m_pDestination = nullptr;
  }
}

bool VibrationNodeConnection::IsConnected() const {
  ScopedLock lock(g_ValueMutex);
  return m_pDestination != nullptr;
}

VibrationNode* VibrationNodeConnection::GetSource() const {
  return m_pSource;
}

VibrationNode* VibrationNodeConnection::GetDestination() const {
  return m_pDestination;
}

void VibrationNodeConnection::SetModulation(
  const VibrationModulation& modulation) {
  ScopedLock lock(g_ValueMutex);
  m_Modulation = modulation;
}

VibrationModulation VibrationNodeConnection::GetModulation() const {
  ScopedLock lock(g_ValueMutex);
  return m_Modulation;
}

VibrationNode::VibrationNode() :
  m_CurrentVibration{0.0f, DefaultFrequencyLow, 0.0f, DefaultFrequencyHigh},
  m_SampleNumber(g_SampleNumber) {
  ScopedLock lock(g_GraphMutex);
  g_NodeList.push_back(*this);
}

VibrationNode::~VibrationNode() {
  ScopedLock lock(g_GraphMutex);
  g_NodeList.erase(*this);
}

void VibrationNode::Update() {
  ScopedLock lock(g_GraphMutex);
  ++g_SampleNumber;
  for (util::IntrusiveListNode* node = g_NodeList.GetFirstNode();
    !g_NodeList.IsEnd(node); node = node->GetNext()) {
    util::IntrusiveListBaseNodeTraits<VibrationNode>::GetItem(node)->
      SyncSampleNumber();
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::FlushEnqueuedVibrationValues());
}

VibrationValue VibrationNode::GetCurrentVibration() const {
  ScopedLock lock(g_ValueMutex);
  return m_CurrentVibration;
}

void VibrationNode::SetCurrentVibration(const VibrationValue& value) {
  ScopedLock lock(g_ValueMutex);
  m_CurrentVibration = value;
}

void VibrationNode::DisconnectFrom(VibrationNode* pDestination) {
  ScopedLock graphLock(g_GraphMutex);
  ScopedLock valueLock(g_ValueMutex);
  VibrationNodeConnection* pConnection = GetConnectionTo(pDestination);
  if (pConnection != nullptr) {
    pConnection->Disconnect();
  }
}

VibrationNodeConnection* VibrationNode::GetConnectionTo(
  const VibrationNode* pDestination) const {
  ScopedLock lock(g_ValueMutex);
  const VibrationNodeConnectionList& inputs =
    pDestination->m_InputConnections;
  for (const util::IntrusiveListNode* node = inputs.GetFirstNode();
    !inputs.IsEnd(node); node = node->GetNext()) {
    VibrationNodeConnection* pConnection =
      GetConnection(const_cast<util::IntrusiveListNode*>(node));
    if (pConnection->m_pSource == this) {
      return pConnection;
    }
  }
  return nullptr;
}

bool VibrationNode::IsConnectedTo(const VibrationNode* pDestination) const {
  return GetConnectionTo(pDestination) != nullptr;
}

void VibrationNode::SetModulationTo(const VibrationNode* pDestination,
  const VibrationModulation& modulation) {
  ScopedLock lock(g_ValueMutex);
  VibrationNodeConnection* pConnection = GetConnectionTo(pDestination);
  if (pConnection != nullptr) {
    pConnection->SetModulation(modulation);
  }
}

VibrationModulation VibrationNode::GetModulationTo(
  const VibrationNode* pDestination) const {
  ScopedLock lock(g_ValueMutex);
  VibrationNodeConnection* pConnection = GetConnectionTo(pDestination);
  if (pConnection == nullptr) {
    return VibrationModulation{1.0f, 1.0f, 1.0f, 1.0f};
  }
  return pConnection->GetModulation();
}

void VibrationNode::SyncSampleNumber() {
  for (util::IntrusiveListNode* node = m_InputConnections.GetFirstNode();
    !m_InputConnections.IsEnd(node); node = node->GetNext()) {
    GetConnection(node)->m_pSource->SyncSampleNumber();
  }
  if (m_SampleNumber == g_SampleNumber) {
    return;
  }
  VibrationValue value = GetCurrentVibration();
  OnNextSampleRequired(&value, &m_InputConnections);
  SetCurrentVibration(value);
  m_SampleNumber = g_SampleNumber;
}

}
