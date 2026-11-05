#include "nn/hid/detail/hid_npad_shared_memory_accessor.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultNpadNotInitialized = {0x58aca};
constexpr Result ResultNpadActivationUpperLimitOver = {0x58eca};
constexpr Result ResultNpadDeactivationLowerLimitOver = {0x590ca};

constexpr int NpadRevision = 5;

constexpr size_t NpadInternalStateOffset = 0x9a00;
constexpr size_t NpadInternalStateSize = 0x5000;
constexpr size_t NpadConditionOffset = 0x3e200;

constexpr int NpadStyleIndexJoyDual = 2;
constexpr int NpadStyleIndexJoyLeft = 3;
constexpr int NpadStyleIndexSystem = 29;

int GetInternalStateIndex(NpadIdType id) {
  if (id < 8) {
    return id;
  }
  return id == 0x10 ? 9 : 8;
}

}

NpadSharedMemoryAccessor::NpadSharedMemoryAccessor() :
  m_pInternalStates(), m_pCondition(nullptr) {
  SetResultActivationUpperLimitOver(ResultNpadActivationUpperLimitOver);
  SetResultDeactivationLowerLimitOver(ResultNpadDeactivationLowerLimitOver);
  for (auto& pState : m_pInternalStates) {
    pState.store(nullptr);
  }
  for (int i = 0; i < StyleCountMax; ++i) {
    m_RestrictionTypes[i] = ControlPadRestrictionType{};
    m_IsRestrictionEnabled[i] = true;
  }
  m_IsRestrictionEnabled[NpadStyleIndexJoyDual] = false;
  m_IsRestrictionEnabled[NpadStyleIndexJoyLeft] = false;
  m_IsRestrictionEnabled[NpadStyleIndexSystem] = false;
}

NpadSharedMemoryAccessor::~NpadSharedMemoryAccessor() {}

const NpadInternalState* NpadSharedMemoryAccessor::GetInternalState(
  NpadIdType id) const {
  return m_pInternalStates[GetInternalStateIndex(id)].load();
}

const NpadConditionState* NpadSharedMemoryAccessor::GetNpadCondition() const {
  return m_pCondition.load();
}

void NpadSharedMemoryAccessor::SetControlPadRestrictionType(
  NpadStyleSet style, ControlPadRestrictionType type) {
  for (int i = 0; i < StyleCountMax; ++i) {
    if ((style._storage[0] >> i & 1) != 0) {
      m_RestrictionTypes[i] = type;
    }
  }
}

ControlPadRestrictionType NpadSharedMemoryAccessor::
  GetControlPadRestrictionType(unsigned int styleIndex) {
  return m_RestrictionTypes[styleIndex];
}

void NpadSharedMemoryAccessor::EnableControlPadRestriction(
  const NpadStyleSet& style, bool isEnabled) {
  for (int i = 0; i < StyleCountMax; ++i) {
    if ((style._storage[0] >> i & 1) != 0) {
      m_IsRestrictionEnabled[i] = isEnabled;
    }
  }
}

bool NpadSharedMemoryAccessor::IsControlPadRestrictionEnabled(
  unsigned int styleIndex) {
  return m_IsRestrictionEnabled[styleIndex];
}

ControlPadRestrictionType NpadSharedMemoryAccessor::
  GetControlPadRestrictionType(NpadStyleSet style) {
  for (int i = 0; i < StyleCountMax; ++i) {
    if ((style._storage[0] >> i & 1) != 0) {
      return m_RestrictionTypes[i];
    }
  }
  return ControlPadRestrictionType{};
}

Result NpadSharedMemoryAccessor::Attach(server::SharedMemoryFormat* pFormat) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  NN_RESULT_DO(proxy->ActivateNpadWithRevision(
    utility::GetAppletResourceUserId(), NpadRevision));
  uint8_t* pBase = reinterpret_cast<uint8_t*>(pFormat);
  for (int i = 0; i < InternalStateCountMax; ++i) {
    m_pInternalStates[i].store(reinterpret_cast<const NpadInternalState*>(
      pBase + NpadInternalStateOffset + i * NpadInternalStateSize));
  }
  m_pCondition.store(
    reinterpret_cast<const NpadConditionState*>(pBase + NpadConditionOffset));
  return Result{};
}

Result NpadSharedMemoryAccessor::Detach() {
  sf::SharedPointer<IHidDebugServer> proxy;
  NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
  NN_RESULT_DO(proxy->DeactivateNpad(utility::GetAppletResourceUserId()));
  for (auto& pState : m_pInternalStates) {
    pState.store(nullptr);
  }
  m_pCondition.store(nullptr);
  return Result{};
}

NpadSharedMemoryAccessor* GetNpadSharedMemoryAccessor() {
  return utility::StaticObject<
    NpadSessionManager<NpadSharedMemoryAccessor>>::Get().Get();
}

Result InitializeNpad() {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  NN_RESULT_DO(
    pAccessor->SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  return pAccessor->Activate();
}

Result FinalizeNpad() {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  return pAccessor->Deactivate();
}

}
