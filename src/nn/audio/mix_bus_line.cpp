#include "nn/audio/mix_bus.hpp"

#include "nn/audio/vector_fill.hpp"

namespace nn::audio::util {

// The per sample mixing kernel of the line, kept out of line.
[[gnu::visibility("hidden")]] void MixSignal(MixBusSignalBuffer* pOutput,
  const MixBusSignalBuffer* pInput, int sampleCount, bool isOverwrite,
  float startGain, float endGain);

namespace {

constexpr float MaxGain = 128.0f;

bool IsUsable(const MixBusSignalBuffer& buffer, int sampleCount) {
  return buffer.buffer != nullptr && buffer.sampleCount >= sampleCount;
}

void ZeroFill(const MixBusSignalBuffer& buffer) {
  if (buffer.sampleSize == sizeof(int16_t)) {
    VecFill<int16_t>(static_cast<int16_t*>(buffer.buffer), 0,
      buffer.sampleCount);
  }
  else if (buffer.sampleSize == sizeof(int32_t)) {
    VecFill<int32_t>(static_cast<int32_t*>(buffer.buffer), 0,
      buffer.sampleCount);
  }
}

}

void MixBusLine::Initialize(MixBus* pBus) {
  m_pBus = pBus;
  m_InputJunctions.head = nullptr;
  m_InputJunctions.count = 0;
  m_OutputJunctions.head = nullptr;
  m_OutputJunctions.count = 0;
  m_MixedJunctionCount = 0;
  m_IsOutputWritten = false;
}

void MixBusLine::Finalize() {
  while (MixBusJunctionElement* pJunction = m_InputJunctions.head) {
    pJunction->Finalize();
    Pool<MixBusJunctionElement>* pPool = m_pBus->GetJunctionPool();
    m_InputJunctions.Remove(pJunction);
    pPool->Free(pJunction);
  }
  while (MixBusJunctionElement* pJunction = m_OutputJunctions.head) {
    pJunction->Finalize();
    Pool<MixBusJunctionElement>* pPool = m_pBus->GetJunctionPool();
    m_OutputJunctions.Remove(pJunction);
    pPool->Free(pJunction);
  }
}

void MixBusLine::DestroyJunction(List<MixBusJunctionElement>* pList,
  MixBusJunction* pJunction) {
  if (pJunction == nullptr) {
    return;
  }
  pJunction->Finalize();
  Pool<MixBusJunctionElement>* pPool = m_pBus->GetJunctionPool();
  MixBusJunctionElement* pElement =
    static_cast<MixBusJunctionElement*>(pJunction);
  pList->Remove(pElement);
  pPool->Free(pElement);
}

Pool<MixBusJunctionElement>* MixBusLine::GetJunctionPool() const {
  return m_pBus->GetJunctionPool();
}

MixBusJunction* MixBusLine::CreateJunction(
  List<MixBusJunctionElement>* pList, MixBusInterface* pInterface,
  int channel, float weight) {
  MixBusJunctionElement* pJunction = m_pBus->GetJunctionPool()->Allocate();
  if (pJunction != nullptr) {
    pList->PushFront(pJunction);
    pJunction->Initialize(this, pInterface, channel, weight);
  }
  return pJunction;
}

List<MixBusJunctionElement>* MixBusLine::GetJunctionList(bool isInput) {
  return isInput ? &m_InputJunctions : &m_OutputJunctions;
}

void MixBusLine::ZeroFillFirstExistingOutputSignal(int sampleCount) {
  MixBusJunctionElement* pJunction = m_OutputJunctions.head;
  if (pJunction == nullptr) {
    return;
  }
  MixBusSignalBuffer buffer = {};
  pJunction->GetSignalBuffer(&buffer);
  if (IsUsable(buffer, sampleCount)) {
    ZeroFill(buffer);
  }
}

void MixBusLine::StartMixCycle(int) {
  m_MixedJunctionCount = 0;
  m_IsOutputWritten = false;
}

void MixBusLine::MixInputInterface(MixBusLineScratch* pScratch,
  int sampleCount, MixBusInterface* pInterface, float startGain,
  float endGain) {
  for (MixBusJunctionElement* pJunction = m_InputJunctions.head;
    pJunction != nullptr; pJunction = pJunction->next) {
    if (pJunction->GetAttachedInterface() == pInterface) {
      MixInputJunction(pScratch, sampleCount, pJunction, startGain, endGain);
    }
  }
}

void MixBusLine::MixInputJunction(MixBusLineScratch*, int sampleCount,
  MixBusJunction* pJunction, float startGain, float endGain) {
  ++m_MixedJunctionCount;
  MixBusSignalBuffer input = {};
  pJunction->GetSignalBuffer(&input);
  if (!IsUsable(input, sampleCount)) {
    return;
  }
  MixBusJunctionElement* pOutputJunction = m_OutputJunctions.head;
  if (pOutputJunction == nullptr) {
    return;
  }
  MixBusSignalBuffer output = {};
  pOutputJunction->GetSignalBuffer(&output);
  if (!IsUsable(output, sampleCount)) {
    return;
  }

  float start = startGain * pJunction->GetWeight();
  float end = endGain * pJunction->GetWeight();
  start = start > MaxGain ? MaxGain : start;
  end = end > MaxGain ? MaxGain : end;
  if (m_IsOutputWritten) {
    MixSignal(&output, &input, sampleCount, false, start, end);
  }
  else {
    MixSignal(&output, &input, sampleCount, true, start, end);
    m_IsOutputWritten = true;
  }
}

void MixBusLine::StopMixCycle(MixBusLineScratch*, int sampleCount) {
  if (!m_IsOutputWritten) {
    ZeroFillFirstExistingOutputSignal(sampleCount);
    m_IsOutputWritten = true;
  }

  if (m_OutputJunctions.count < 2) {
    return;
  }
  MixBusJunctionElement* pFirst = m_OutputJunctions.head;
  MixBusSignalBuffer source = {};
  pFirst->GetSignalBuffer(&source);
  if (!IsUsable(source, sampleCount)) {
    return;
  }
  for (MixBusJunctionElement* pJunction = pFirst->next; pJunction != nullptr;
    pJunction = pJunction->next) {
    MixBusSignalBuffer destination = {};
    pJunction->GetSignalBuffer(&destination);
    if (!IsUsable(destination, sampleCount) ||
      !IsUsable(source, sampleCount)) {
      continue;
    }
    if (destination.sampleSize == sizeof(int16_t)) {
      VecCopy<int16_t, int16_t>(static_cast<int16_t*>(destination.buffer),
        static_cast<const int16_t*>(source.buffer), sampleCount);
    }
    else if (destination.sampleSize == sizeof(int32_t)) {
      VecCopy<int32_t, int32_t>(static_cast<int32_t*>(destination.buffer),
        static_cast<const int32_t*>(source.buffer), sampleCount);
    }
  }
}

void MixBusLine::RunCompleteBusLineMixCycle(MixBusLineScratch* pScratch,
  int sampleCount, float startGain, float endGain) {
  m_MixedJunctionCount = 0;
  m_IsOutputWritten = false;
  for (MixBusJunctionElement* pJunction = m_InputJunctions.head;
    pJunction != nullptr; pJunction = pJunction->next) {
    MixInputJunction(pScratch, sampleCount, pJunction, startGain, endGain);
  }
  StopMixCycle(pScratch, sampleCount);
}

}
