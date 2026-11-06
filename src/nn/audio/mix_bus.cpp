#include "nn/audio/mix_bus.hpp"

#include "nn/audio/vector_fill.hpp"

namespace nn::audio::util {

[[gnu::visibility("hidden")]] extern const float* const
  g_MixBusWeightTables[8][8];

namespace {

class MicBusWeightProvider final : public MixBus::JunctionWeightProvider {
public:
  float GetWeight(int outputCount, int output, int inputCount, int input)
    const override {
    return GetMicBusWeight(outputCount, output, inputCount, input);
  }
};

class IdentityWeightProvider final : public MixBus::JunctionWeightProvider {
public:
  float GetWeight(int outputCount, int output, int inputCount, int input)
    const override {
    return output == input && outputCount == inputCount ? 1.0f : 0.0f;
  }
};

class MixBusWeightProvider final : public MixBus::JunctionWeightProvider {
public:
  float GetWeight(int outputCount, int output, int inputCount, int input)
    const override {
    return GetMixBusWeight(outputCount, output, inputCount, input);
  }
};

struct WeightProviders {
  MicBusWeightProvider mic;
  IdentityWeightProvider identity;
  MixBusWeightProvider mix;
};

WeightProviders g_WeightProviders;

}

void MixBus::Initialize(MixBusMatrix* pMatrix,
  const JunctionWeightProvider& inputWeightProvider,
  const JunctionWeightProvider& outputWeightProvider) {
  m_pMatrix = pMatrix;
  m_pInputWeightProvider = &inputWeightProvider;
  m_pOutputWeightProvider = &outputWeightProvider;
  m_Lines.head = nullptr;
  m_Lines.count = 0;
  m_InputInterfaces.head = nullptr;
  m_InputInterfaces.count = 0;
  m_OutputInterfaces.head = nullptr;
  m_OutputInterfaces.count = 0;
  m_Fader.level = 0.0f;
  m_Fader.targetLevel = 0.0f;
  m_Fader.rampFrames = 0;
  m_IsInMixCycle = false;
  m_CycleStartLevel = 0.0f;
  m_CycleEndLevel = 0.0f;
  m_MixedStreamCount = 0;
}

void MixBus::Finalize() {
  while (m_InputInterfaces.head != nullptr) {
    DetachInputStream(m_InputInterfaces.head->m_pStream);
  }
  while (m_OutputInterfaces.head != nullptr) {
    DetachOutputStream(m_OutputInterfaces.head->m_pStream);
  }
  while (MixBusLineElement* pLine = m_Lines.head) {
    pLine->Finalize();
    Pool<MixBusLineElement>* pPool = m_pMatrix->GetLinePool();
    m_Lines.Remove(pLine);
    pPool->Free(pLine);
  }
}

bool MixBus::DetachInputStream(MixBusStream* pStream) {
  MixBusInterface* pInterface = m_InputInterfaces.head;
  for (; pInterface != nullptr; pInterface = pInterface->m_pBusNext) {
    if (pInterface->m_pStream == pStream) {
      break;
    }
  }
  if (pInterface == nullptr) {
    return false;
  }

  for (MixBusLineElement* pLine = m_Lines.head; pLine != nullptr;
    pLine = pLine->next) {
    List<MixBusJunctionElement>* pList = pLine->GetJunctionList(true);
    MixBusJunctionElement* pJunction = pList->head;
    while (pJunction != nullptr) {
      MixBusJunctionElement* pNext = pJunction->next;
      if (pJunction->GetAttachedInterface() == pInterface) {
        pLine->DestroyJunction(pList, pJunction);
      }
      pJunction = pNext;
    }
  }

  if (pInterface->m_pBusPrev != nullptr) {
    pInterface->m_pBusPrev->m_pBusNext = pInterface->m_pBusNext;
  }
  else {
    m_InputInterfaces.head = pInterface->m_pBusNext;
  }
  if (pInterface->m_pBusNext != nullptr) {
    pInterface->m_pBusNext->m_pBusPrev = pInterface->m_pBusPrev;
  }
  --m_InputInterfaces.count;
  pInterface->m_pBus = nullptr;
  pStream->DestroyOutputInterface(pInterface);
  return true;
}

bool MixBus::DetachOutputStream(MixBusStream* pStream) {
  MixBusInterface* pInterface = m_OutputInterfaces.head;
  for (; pInterface != nullptr; pInterface = pInterface->m_pBusNext) {
    if (pInterface->m_pStream == pStream) {
      break;
    }
  }
  if (pInterface == nullptr) {
    return false;
  }

  for (MixBusLineElement* pLine = m_Lines.head; pLine != nullptr;
    pLine = pLine->next) {
    List<MixBusJunctionElement>* pList = pLine->GetJunctionList(false);
    MixBusJunctionElement* pJunction = pList->head;
    while (pJunction != nullptr) {
      MixBusJunctionElement* pNext = pJunction->next;
      if (pJunction->GetAttachedInterface() == pInterface) {
        pLine->DestroyJunction(pList, pJunction);
      }
      pJunction = pNext;
    }
  }

  if (pInterface->m_pBusPrev != nullptr) {
    pInterface->m_pBusPrev->m_pBusNext = pInterface->m_pBusNext;
  }
  else {
    m_OutputInterfaces.head = pInterface->m_pBusNext;
  }
  if (pInterface->m_pBusNext != nullptr) {
    pInterface->m_pBusNext->m_pBusPrev = pInterface->m_pBusPrev;
  }
  --m_OutputInterfaces.count;
  pInterface->m_pBus = nullptr;
  pStream->DestroyInputInterface(pInterface);
  return true;
}

void MixBus::DestroyLine(MixBusLine* pLine) {
  if (pLine == nullptr) {
    return;
  }
  pLine->Finalize();
  Pool<MixBusLineElement>* pPool = m_pMatrix->GetLinePool();
  MixBusLineElement* pElement = static_cast<MixBusLineElement*>(pLine);
  m_Lines.Remove(pElement);
  pPool->Free(pElement);
}

Pool<MixBusLineElement>* MixBus::GetLinePool() const {
  return m_pMatrix->GetLinePool();
}

Pool<MixBusJunctionElement>* MixBus::GetJunctionPool() const {
  return m_pMatrix->GetJunctionPool();
}

MixBusLine* MixBus::CreateLine() {
  MixBusLineElement* pLine = m_pMatrix->GetLinePool()->Allocate();
  if (pLine != nullptr) {
    m_Lines.PushFront(pLine);
    pLine->Initialize(this);
  }
  return pLine;
}

int MixBus::GetLineCount() const {
  return m_Lines.count;
}

bool MixBus::ConfigureLevel(float level, int frames) {
  m_Fader.Configure(level, frames);
  return true;
}

void MixBus::InitiateMixCycle(int sampleCount) {
  m_IsInMixCycle = true;
  m_CycleStartLevel = m_Fader.GetCycleStartLevel();
  m_Fader.Advance(sampleCount);
  m_CycleEndLevel = m_Fader.level;
  m_MixedStreamCount = 0;
  for (MixBusLineElement* pLine = m_Lines.head; pLine != nullptr;
    pLine = pLine->next) {
    pLine->StartMixCycle(sampleCount);
  }
}

void MixBus::TerminateMixCycle(MixBusLineScratch* pScratch,
  int sampleCount) {
  for (MixBusLineElement* pLine = m_Lines.head; pLine != nullptr;
    pLine = pLine->next) {
    pLine->StopMixCycle(pScratch, sampleCount);
  }
  m_IsInMixCycle = false;
  m_CycleStartLevel = 0.0f;
  m_CycleEndLevel = 0.0f;
  m_MixedStreamCount = 0;
}

void MixBus::RunCompleteBusMixCycle(MixBusLineScratch* pScratch,
  int sampleCount) {
  m_IsInMixCycle = true;
  m_CycleStartLevel = m_Fader.GetCycleStartLevel();
  m_Fader.Advance(sampleCount);
  m_CycleEndLevel = m_Fader.level;
  m_MixedStreamCount = 0;
  for (MixBusLineElement* pLine = m_Lines.head; pLine != nullptr;
    pLine = pLine->next) {
    pLine->StartMixCycle(sampleCount);
  }

  for (MixBusInterface* pInterface = m_InputInterfaces.head;
    pInterface != nullptr; pInterface = pInterface->m_pBusNext) {
    const float busStart = m_CycleStartLevel;
    const float busEnd = m_CycleEndLevel;
    const float start = pInterface->m_Fader.GetCycleStartLevel();
    pInterface->m_Fader.Advance(sampleCount);
    ++m_MixedStreamCount;
    for (MixBusLineElement* pLine = m_Lines.head; pLine != nullptr;
      pLine = pLine->next) {
      pLine->MixInputInterface(pScratch, sampleCount, pInterface,
        busStart * start, busEnd * pInterface->m_Fader.level);
    }
  }

  for (MixBusLineElement* pLine = m_Lines.head; pLine != nullptr;
    pLine = pLine->next) {
    pLine->StopMixCycle(pScratch, sampleCount);
  }
  m_IsInMixCycle = false;
  m_CycleStartLevel = 0.0f;
  m_CycleEndLevel = 0.0f;
  m_MixedStreamCount = 0;
}

bool MixBus::AttachInputStream(MixBusStream* pStream) {
  MixBusInterface* pInterface = pStream->CreateOutputInterface();
  const bool isAttached = AttachInterface(pInterface, &m_InputInterfaces,
    true);
  if (!isAttached) {
    pStream->DestroyOutputInterface(pInterface);
  }
  return isAttached;
}

bool MixBus::AttachOutputStream(MixBusStream* pStream) {
  MixBusInterface* pInterface = pStream->CreateInputInterface();
  const bool isAttached = AttachInterface(pInterface, &m_OutputInterfaces,
    false);
  if (!isAttached) {
    pStream->DestroyInputInterface(pInterface);
  }
  return isAttached;
}

bool MixBus::ConfigureInputStreamFader(MixBusStream* pStream, float level,
  int frames) {
  for (MixBusInterface* pInterface = m_InputInterfaces.head;
    pInterface != nullptr; pInterface = pInterface->m_pBusNext) {
    if (pInterface->m_pStream == pStream) {
      pInterface->ConfigureFader(level, frames);
      return true;
    }
  }
  return false;
}

bool MixBus::MixInputStream(MixBusLineScratch* pScratch, int sampleCount,
  MixBusStream* pStream, bool isFadingIn) {
  MixBusInterface* pInterface = m_InputInterfaces.head;
  for (; pInterface != nullptr; pInterface = pInterface->m_pBusNext) {
    if (pInterface->m_pStream == pStream) {
      break;
    }
  }
  if (pInterface == nullptr) {
    return false;
  }

  const float busEnd = m_CycleEndLevel;
  const float start = m_CycleStartLevel *
    pInterface->m_Fader.GetCycleStartLevel();
  pInterface->m_Fader.Advance(sampleCount);
  const float startGain = isFadingIn ? 0.0f : start;
  ++m_MixedStreamCount;
  for (MixBusLineElement* pLine = m_Lines.head; pLine != nullptr;
    pLine = pLine->next) {
    pLine->MixInputInterface(pScratch, sampleCount, pInterface, startGain,
      busEnd * pInterface->m_Fader.level);
  }
  return true;
}

MixBusMatrix* MixBus::GetOwner() {
  return m_pMatrix;
}

MixBusStream* MixBus::CreateInputStream(int channelCount) {
  MixBusMatrix* pMatrix = m_pMatrix;
  MixBusStream* pStream = pMatrix->CreateStream(channelCount);
  if (pStream == nullptr) {
    return pStream;
  }
  MixBusInterface* pInterface = pStream->CreateOutputInterface();
  if (AttachInterface(pInterface, &m_InputInterfaces, true)) {
    return pStream;
  }
  pStream->DestroyOutputInterface(pInterface);
  return pMatrix->DestroyStream(pStream);
}

MixBusStream* MixBus::CreateOutputStream(int channelCount) {
  MixBusMatrix* pMatrix = m_pMatrix;
  MixBusStream* pStream = pMatrix->CreateStream(channelCount);
  if (pStream == nullptr) {
    return pStream;
  }
  MixBusInterface* pInterface = pStream->CreateInputInterface();
  if (AttachInterface(pInterface, &m_OutputInterfaces, false)) {
    return pStream;
  }
  pStream->DestroyInputInterface(pInterface);
  return pMatrix->DestroyStream(pStream);
}

MixBusStream* MixBus::DestroyStream(MixBusStream* pStream) {
  return m_pMatrix->DestroyStream(pStream);
}

void MixBusInterface::Initialize(MixBusStream* pStream, bool isInput) {
  m_pStream = pStream;
  m_pBus = nullptr;
  m_Fader.level = 0.0f;
  m_Fader.targetLevel = 0.0f;
  m_Fader.rampFrames = 0;
  m_IsInput = isInput;
  m_pBusNext = nullptr;
  m_pBusPrev = nullptr;
}

void MixBusInterface::Finalize() {
}

int MixBusInterface::GetChannelCount() const {
  return m_pStream->GetChannelCount();
}

const MixBusBuffers* MixBusInterface::GetMixBuffers() const {
  return m_pStream->GetMixBuffers();
}

void MixBusInterface::ConfigureFader(float level, int frames) {
  m_Fader.Configure(level, frames);
}

void MixBusJunction::Initialize(MixBusLine* pOwner,
  MixBusInterface* pInterface, int channel, float weight) {
  m_pOwner = pOwner;
  m_pInterface = pInterface;
  m_Channel = channel;
  m_Weight = weight;
}

void MixBusJunction::Finalize() {
}

MixBusInterface* MixBusJunction::GetAttachedInterface() {
  return m_pInterface;
}

int MixBusJunction::GetChannel() const {
  return m_Channel;
}

float MixBusJunction::GetWeight() const {
  return m_Weight;
}

void MixBusJunction::GetSignalBuffer(MixBusSignalBuffer* pOutBuffer) {
  const MixBusBuffers* pBuffers = m_pInterface->GetMixBuffers();
  pOutBuffer->buffer = pBuffers->buffers[m_Channel];
  pOutBuffer->format = pBuffers->format;
  pOutBuffer->sampleCount = pBuffers->sampleCount;
  pOutBuffer->sampleSize = pBuffers->sampleSize;
}

MixBusLine* MixBusJunction::GetOwner() {
  return m_pOwner;
}

void MixBusMatrix::Initialize() {
  m_Streams.head = nullptr;
  m_Streams.count = 0;
  m_pResources = nullptr;
  m_Buses.head = nullptr;
  m_Buses.count = 0;
}

void MixBusMatrix::Finalize() {
  if (m_pResources == nullptr) {
    return;
  }
  while (MixBusStreamElement* pStream = m_Streams.head) {
    pStream->Finalize();
    Pool<MixBusStreamElement>* pPool = m_pResources->streamPool;
    m_Streams.Remove(pStream);
    pPool->Free(pStream);
  }
  while (MixBusElement* pBus = m_Buses.head) {
    pBus->Finalize();
    Pool<MixBusElement>* pPool = m_pResources->busPool;
    m_Buses.Remove(pBus);
    pPool->Free(pBus);
  }
  m_pResources = nullptr;
}

MixBusStream* MixBusMatrix::DestroyStream(MixBusStream* pStream) {
  if (pStream == nullptr || m_pResources == nullptr) {
    return nullptr;
  }
  pStream->Finalize();
  Pool<MixBusStreamElement>* pPool = m_pResources->streamPool;
  MixBusStreamElement* pElement = static_cast<MixBusStreamElement*>(pStream);
  m_Streams.Remove(pElement);
  pPool->Free(pElement);
  return nullptr;
}

MixBus* MixBusMatrix::DestroyBus(MixBus* pBus) {
  if (pBus == nullptr || m_pResources == nullptr) {
    return nullptr;
  }
  pBus->Finalize();
  Pool<MixBusElement>* pPool = m_pResources->busPool;
  MixBusElement* pElement = static_cast<MixBusElement*>(pBus);
  m_Buses.Remove(pElement);
  pPool->Free(pElement);
  return nullptr;
}

void MixBusMatrix::RegisterResources(const MixBusResources* pResources) {
  m_pResources = pResources;
}

Pool<MixBusElement>* MixBusMatrix::GetBusPool() {
  return m_pResources->busPool;
}

Pool<MixBusLineElement>* MixBusMatrix::GetLinePool() {
  return m_pResources->linePool;
}

Pool<MixBusJunctionElement>* MixBusMatrix::GetJunctionPool() {
  return m_pResources->junctionPool;
}

Pool<MixBusStreamElement>* MixBusMatrix::GetStreamPool() {
  return m_pResources->streamPool;
}

Pool<MixBusInterfaceElement>* MixBusMatrix::GetInterfacePool() {
  return m_pResources->interfacePool;
}

MixBus* MixBusMatrix::CreateBus(int lineCount, bool isMicrophoneBus) {
  if (m_pResources == nullptr) {
    return nullptr;
  }
  Pool<MixBusElement>* pPool = m_pResources->busPool;
  MixBusElement* pBus = pPool->Allocate();
  if (pBus == nullptr) {
    return nullptr;
  }
  m_Buses.PushFront(pBus);
  pBus->Initialize(this,
    isMicrophoneBus ? static_cast<const MixBus::JunctionWeightProvider&>(
      g_WeightProviders.mic) : g_WeightProviders.mix,
    g_WeightProviders.identity);
  for (int i = 0; i < lineCount; ++i) {
    if (pBus->CreateLine() == nullptr) {
      break;
    }
  }
  if (pBus->GetLineCount() == lineCount) {
    return pBus;
  }

  // The lines created so far are not released.
  Pool<MixBusElement>* pBusPool = m_pResources->busPool;
  m_Buses.Remove(pBus);
  pBusPool->Free(pBus);
  return nullptr;
}

MixBusStream* MixBusMatrix::CreateStream(int channelCount) {
  if (m_pResources == nullptr) {
    return nullptr;
  }
  MixBusStreamElement* pStream = m_pResources->streamPool->Allocate();
  if (pStream != nullptr) {
    m_Streams.PushFront(pStream);
    pStream->Initialize(this, channelCount);
  }
  return pStream;
}

float GetMixBusWeight(int outputCount, int output, int inputCount,
  int input) {
  const float* pTable = g_MixBusWeightTables[inputCount - 1][outputCount - 1];
  if (pTable == nullptr) {
    return 0.0f;
  }
  return pTable[input * outputCount + output];
}

}
