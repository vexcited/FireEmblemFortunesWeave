#include "nn/audio/mix_bus.hpp"

namespace nn::audio::util {

namespace {

// The sample format of float buffers, named after IEEE 754.
constexpr int FloatFormat = 754;

}

void MixBusStream::Initialize(MixBusMatrix* pMatrix, int channelCount) {
  m_pMatrix = pMatrix;
  m_ChannelCount = channelCount;
  m_InputInterfaces.head = nullptr;
  m_InputInterfaces.count = 0;
  m_OutputInterfaces.head = nullptr;
  m_OutputInterfaces.count = 0;
  ResetBuffers();
}

void MixBusStream::Finalize() {
  while (m_InputInterfaces.head != nullptr) {
    m_InputInterfaces.head->m_pBus->DetachOutputStream(this);
  }
  while (m_OutputInterfaces.head != nullptr) {
    m_OutputInterfaces.head->m_pBus->DetachInputStream(this);
  }
}

Pool<MixBusInterfaceElement>* MixBusStream::GetInterfacePool() const {
  return m_pMatrix->GetInterfacePool();
}

int MixBusStream::GetChannelCount() const {
  return m_ChannelCount;
}

MixBusInterface* MixBusStream::CreateInputInterface() {
  MixBusInterfaceElement* pInterface =
    m_pMatrix->GetInterfacePool()->Allocate();
  if (pInterface != nullptr) {
    m_InputInterfaces.PushFront(pInterface);
    pInterface->Initialize(this, true);
  }
  return pInterface;
}

MixBusInterface* MixBusStream::CreateOutputInterface() {
  MixBusInterfaceElement* pInterface =
    m_pMatrix->GetInterfacePool()->Allocate();
  if (pInterface != nullptr) {
    m_OutputInterfaces.PushFront(pInterface);
    pInterface->Initialize(this, false);
  }
  return pInterface;
}

void MixBusStream::DestroyInputInterface(MixBusInterface* pInterface) {
  if (pInterface == nullptr) {
    return;
  }
  pInterface->Finalize();
  Pool<MixBusInterfaceElement>* pPool = m_pMatrix->GetInterfacePool();
  MixBusInterfaceElement* pElement =
    static_cast<MixBusInterfaceElement*>(pInterface);
  m_InputInterfaces.Remove(pElement);
  pPool->Free(pElement);
}

void MixBusStream::DestroyOutputInterface(MixBusInterface* pInterface) {
  if (pInterface == nullptr) {
    return;
  }
  pInterface->Finalize();
  Pool<MixBusInterfaceElement>* pPool = m_pMatrix->GetInterfacePool();
  MixBusInterfaceElement* pElement =
    static_cast<MixBusInterfaceElement*>(pInterface);
  m_OutputInterfaces.Remove(pElement);
  pPool->Free(pElement);
}

void MixBusStream::ResetBuffers() {
  m_Buffers.sampleSize = 0;
  for (void*& pBuffer : m_Buffers.buffers) {
    pBuffer = nullptr;
  }
  m_Buffers.channelCount = 0;
  m_Buffers.format = 0;
  m_Buffers.sampleCount = 0;
}

void MixBusStream::ConfigureBuffers(void* const* pBuffers, int format,
  int sampleCount, size_t sampleSize) {
  for (int i = 0; i < m_ChannelCount; ++i) {
    m_Buffers.buffers[i] = pBuffers[i];
  }
  m_Buffers.channelCount = m_ChannelCount;
  m_Buffers.format = format;
  m_Buffers.sampleCount = sampleCount;
  m_Buffers.sampleSize = sampleSize;
}

void MixBusStream::ConfigureBuffers(int16_t* const* pBuffers, int format,
  int sampleCount) {
  for (int i = 0; i < m_ChannelCount; ++i) {
    m_Buffers.buffers[i] = pBuffers[i];
  }
  m_Buffers.channelCount = m_ChannelCount;
  m_Buffers.format = format;
  m_Buffers.sampleCount = sampleCount;
  m_Buffers.sampleSize = sizeof(int16_t);
}

void MixBusStream::ConfigureBuffers(int32_t* const* pBuffers, int format,
  int sampleCount) {
  for (int i = 0; i < m_ChannelCount; ++i) {
    m_Buffers.buffers[i] = pBuffers[i];
  }
  m_Buffers.channelCount = m_ChannelCount;
  m_Buffers.format = format;
  m_Buffers.sampleCount = sampleCount;
  m_Buffers.sampleSize = sizeof(int32_t);
}

void MixBusStream::ConfigureBuffers(float* const* pBuffers,
  int sampleCount) {
  for (int i = 0; i < m_ChannelCount; ++i) {
    m_Buffers.buffers[i] = pBuffers[i];
  }
  m_Buffers.channelCount = m_ChannelCount;
  m_Buffers.format = FloatFormat;
  m_Buffers.sampleCount = sampleCount;
  m_Buffers.sampleSize = sizeof(float);
}

const MixBusBuffers* MixBusStream::GetMixBuffers() const {
  return &m_Buffers;
}

MixBusBuffers* MixBusStream::GetWriteableMixBuffers() {
  return &m_Buffers;
}

void MixBusStream::TransferBuffers(MixBusStream* pDestination) {
  pDestination->m_Buffers = m_Buffers;
  m_Buffers.sampleSize = 0;
  for (void*& pBuffer : m_Buffers.buffers) {
    pBuffer = nullptr;
  }
  m_Buffers.channelCount = 0;
  m_Buffers.format = 0;
  m_Buffers.sampleCount = 0;
}

void MixBusStream::RetrieveBuffers(void** pOutBuffers, int, int,
  size_t) const {
  const MixBusBuffers buffers = m_Buffers;
  for (int i = 0; i < m_ChannelCount; ++i) {
    pOutBuffers[i] = buffers.buffers[i];
  }
}

void MixBusStream::GetBuffers(int16_t** pOutBuffers, int, int) const {
  const MixBusBuffers buffers = m_Buffers;
  for (int i = 0; i < m_ChannelCount; ++i) {
    pOutBuffers[i] = static_cast<int16_t*>(buffers.buffers[i]);
  }
}

void MixBusStream::GetBuffers(int32_t** pOutBuffers, int, int) const {
  const MixBusBuffers buffers = m_Buffers;
  for (int i = 0; i < m_ChannelCount; ++i) {
    pOutBuffers[i] = static_cast<int32_t*>(buffers.buffers[i]);
  }
}

void MixBusStream::GetBuffers(float** pOutBuffers, int) const {
  const MixBusBuffers buffers = m_Buffers;
  for (int i = 0; i < m_ChannelCount; ++i) {
    pOutBuffers[i] = static_cast<float*>(buffers.buffers[i]);
  }
}

bool MixBusStream::ConfigureOutputFader(MixBus* pBus, float level,
  int frames) {
  for (MixBusInterfaceElement* pInterface = m_OutputInterfaces.head;
    pInterface != nullptr; pInterface = pInterface->next) {
    if (pInterface->m_pBus == pBus) {
      pInterface->ConfigureFader(level, frames);
      return true;
    }
  }
  return false;
}

bool MixBusStream::ConfigureOutputFader(float level, int frames) {
  const int count = m_OutputInterfaces.count;
  if (count == 1) {
    m_OutputInterfaces.head->ConfigureFader(level, frames);
  }
  return count == 1;
}

MixBus* MixBusStream::GetAttachedOutputNode() {
  if (m_OutputInterfaces.count == 1) {
    return m_OutputInterfaces.head->m_pBus;
  }
  return nullptr;
}

}
