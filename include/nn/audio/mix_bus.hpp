#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio::util {

template <typename T>
struct Element : T {
  Element* next;
  Element* prev;
};

template <typename T>
struct List {
  T* head;
  int count;

  void PushFront(T* element) {
    element->next = head;
    if (head != nullptr) {
      head->prev = element;
    }
    head = element;
    element->prev = nullptr;
    ++count;
  }

  void Remove(T* element) {
    if (element->prev != nullptr) {
      element->prev->next = element->next;
    }
    else {
      head = element->next;
    }
    if (element->next != nullptr) {
      element->next->prev = element->prev;
    }
    --count;
  }
};

template <typename T>
struct Pool {
  T* head;
  int freeCount;
  int minFreeCount;
  int maxFreeCount;

  T* Allocate() {
    T* element = head;
    if (element == nullptr) {
      return nullptr;
    }
    head = element->next;
    element->next = nullptr;
    if (--freeCount < minFreeCount) {
      minFreeCount = freeCount;
    }
    return element;
  }

  void Free(T* element) {
    element->next = head;
    element->prev = nullptr;
    head = element;
    if (++freeCount > maxFreeCount) {
      maxFreeCount = freeCount;
    }
  }
};

class MixBus;
class MixBusInterface;
class MixBusJunction;
class MixBusLine;
class MixBusMatrix;
class MixBusStream;
struct MixBusLineScratch;

struct MixBusBuffers {
  void* buffers[8];
  int channelCount;
  int format;
  int sampleCount;
  size_t sampleSize;
};

struct MixBusSignalBuffer {
  void* buffer;
  int format;
  int sampleCount;
  size_t sampleSize;
};

struct MixBusFader {
  float level;
  float targetLevel;
  int rampFrames;

  float GetCycleStartLevel() const {
    return rampFrames != 0 ? level : targetLevel;
  }

  void Configure(float target, int frames) {
    targetLevel = target;
    rampFrames = level == target ? 0 : frames;
    if (frames == 0) {
      level = target;
    }
  }

  void Advance(int frames) {
    if (level != targetLevel) {
      if (rampFrames > frames) {
        level = level + (targetLevel - level) * static_cast<float>(frames) /
          static_cast<float>(rampFrames);
        rampFrames -= frames;
      }
      else {
        level = targetLevel;
        rampFrames = 0;
      }
    }
  }
};

using MixBusElement = Element<MixBus>;
using MixBusLineElement = Element<MixBusLine>;
using MixBusJunctionElement = Element<MixBusJunction>;
using MixBusStreamElement = Element<MixBusStream>;
using MixBusInterfaceElement = Element<MixBusInterface>;

struct MixBusResources {
  Pool<MixBusElement>* busPool;
  Pool<MixBusLineElement>* linePool;
  Pool<MixBusJunctionElement>* junctionPool;
  Pool<MixBusStreamElement>* streamPool;
  Pool<MixBusInterfaceElement>* interfacePool;
};

class MixBusInterface {
public:
  void Initialize(MixBusStream* pStream, bool isInput);
  void Finalize();
  int GetChannelCount() const;
  const MixBusBuffers* GetMixBuffers() const;
  void ConfigureFader(float level, int frames);

  MixBusStream* m_pStream;
  MixBus* m_pBus;
  MixBusFader m_Fader;
  bool m_IsInput;
  MixBusInterface* m_pBusNext;
  MixBusInterface* m_pBusPrev;
};

struct MixBusInterfaceList {
  MixBusInterface* head;
  int count;
};

class MixBusJunction {
public:
  void Initialize(MixBusLine* pOwner, MixBusInterface* pInterface,
    int channel, float weight);
  void Finalize();
  MixBusInterface* GetAttachedInterface();
  int GetChannel() const;
  float GetWeight() const;
  void GetSignalBuffer(MixBusSignalBuffer* pOutBuffer);
  MixBusLine* GetOwner();

  MixBusLine* m_pOwner;
  MixBusInterface* m_pInterface;
  int m_Channel;
  float m_Weight;
};

class MixBusLine {
public:
  void Initialize(MixBus* pBus);
  void Finalize();
  void DestroyJunction(List<MixBusJunctionElement>* pList,
    MixBusJunction* pJunction);
  Pool<MixBusJunctionElement>* GetJunctionPool() const;
  MixBusJunction* CreateJunction(List<MixBusJunctionElement>* pList,
    MixBusInterface* pInterface, int channel, float weight);
  List<MixBusJunctionElement>* GetJunctionList(bool isInput);
  void ZeroFillFirstExistingOutputSignal(int sampleCount);
  void StartMixCycle(int sampleCount);
  void MixInputInterface(MixBusLineScratch* pScratch, int sampleCount,
    MixBusInterface* pInterface, float startGain, float endGain);
  void MixInputJunction(MixBusLineScratch* pScratch, int sampleCount,
    MixBusJunction* pJunction, float startGain, float endGain);
  void StopMixCycle(MixBusLineScratch* pScratch, int sampleCount);
  void RunCompleteBusLineMixCycle(MixBusLineScratch* pScratch,
    int sampleCount, float startGain, float endGain);

  MixBus* m_pBus;
  List<MixBusJunctionElement> m_InputJunctions;
  List<MixBusJunctionElement> m_OutputJunctions;
  bool m_IsOutputWritten;
  int m_MixedJunctionCount;
};

class MixBus {
public:
  class JunctionWeightProvider {
  public:
    virtual float GetWeight(int outputCount, int output, int inputCount,
      int input) const = 0;
  };

  void Initialize(MixBusMatrix* pMatrix,
    const JunctionWeightProvider& inputWeightProvider,
    const JunctionWeightProvider& outputWeightProvider);
  void Finalize();
  bool DetachInputStream(MixBusStream* pStream);
  bool DetachOutputStream(MixBusStream* pStream);
  void DestroyLine(MixBusLine* pLine);
  Pool<MixBusLineElement>* GetLinePool() const;
  Pool<MixBusJunctionElement>* GetJunctionPool() const;
  MixBusLine* CreateLine();
  int GetLineCount() const;
  bool ConfigureLevel(float level, int frames);
  void InitiateMixCycle(int sampleCount);
  void TerminateMixCycle(MixBusLineScratch* pScratch, int sampleCount);
  void RunCompleteBusMixCycle(MixBusLineScratch* pScratch, int sampleCount);
  bool AttachInputStream(MixBusStream* pStream);
  bool AttachOutputStream(MixBusStream* pStream);
  bool ConfigureInputStreamFader(MixBusStream* pStream, float level,
    int frames);
  bool MixInputStream(MixBusLineScratch* pScratch, int sampleCount,
    MixBusStream* pStream, bool isFadingIn);
  MixBusMatrix* GetOwner();
  MixBusStream* CreateInputStream(int channelCount);
  MixBusStream* CreateOutputStream(int channelCount);
  MixBusStream* DestroyStream(MixBusStream* pStream);

  // Unexported helper that connects every line to the interface channels.
  [[gnu::visibility("hidden")]] bool AttachInterface(MixBusInterface* pInterface,
    MixBusInterfaceList* pList, bool isInput);

  MixBusMatrix* m_pMatrix;
  const JunctionWeightProvider* m_pInputWeightProvider;
  const JunctionWeightProvider* m_pOutputWeightProvider;
  List<MixBusLineElement> m_Lines;
  MixBusInterfaceList m_InputInterfaces;
  MixBusInterfaceList m_OutputInterfaces;
  MixBusFader m_Fader;
  bool m_IsInMixCycle;
  float m_CycleStartLevel;
  float m_CycleEndLevel;
  int m_MixedStreamCount;
};

class MixBusStream {
public:
  void Initialize(MixBusMatrix* pMatrix, int channelCount);
  void Finalize();
  Pool<MixBusInterfaceElement>* GetInterfacePool() const;
  int GetChannelCount() const;
  MixBusInterface* CreateInputInterface();
  MixBusInterface* CreateOutputInterface();
  void DestroyInputInterface(MixBusInterface* pInterface);
  void DestroyOutputInterface(MixBusInterface* pInterface);
  void ResetBuffers();
  void ConfigureBuffers(void* const* pBuffers, int format, int sampleCount,
    size_t sampleSize);
  void ConfigureBuffers(int16_t* const* pBuffers, int format,
    int sampleCount);
  void ConfigureBuffers(int32_t* const* pBuffers, int format,
    int sampleCount);
  void ConfigureBuffers(float* const* pBuffers, int sampleCount);
  const MixBusBuffers* GetMixBuffers() const;
  MixBusBuffers* GetWriteableMixBuffers();
  void TransferBuffers(MixBusStream* pDestination);
  void RetrieveBuffers(void** pOutBuffers, int format, int sampleCount,
    size_t sampleSize) const;
  void GetBuffers(int16_t** pOutBuffers, int format, int sampleCount) const;
  void GetBuffers(int32_t** pOutBuffers, int format, int sampleCount) const;
  void GetBuffers(float** pOutBuffers, int sampleCount) const;
  bool ConfigureOutputFader(MixBus* pBus, float level, int frames);
  bool ConfigureOutputFader(float level, int frames);
  MixBus* GetAttachedOutputNode();

  MixBusMatrix* m_pMatrix;
  int m_ChannelCount;
  List<MixBusInterfaceElement> m_InputInterfaces;
  List<MixBusInterfaceElement> m_OutputInterfaces;
  MixBusBuffers m_Buffers;
};

class MixBusMatrix {
public:
  void Initialize();
  void Finalize();
  MixBusStream* DestroyStream(MixBusStream* pStream);
  MixBus* DestroyBus(MixBus* pBus);
  void RegisterResources(const MixBusResources* pResources);
  Pool<MixBusElement>* GetBusPool();
  Pool<MixBusLineElement>* GetLinePool();
  Pool<MixBusJunctionElement>* GetJunctionPool();
  Pool<MixBusStreamElement>* GetStreamPool();
  Pool<MixBusInterfaceElement>* GetInterfacePool();
  MixBus* CreateBus(int lineCount, bool isMicrophoneBus);
  MixBusStream* CreateStream(int channelCount);

  const MixBusResources* m_pResources;
  List<MixBusElement> m_Buses;
  List<MixBusStreamElement> m_Streams;
};

float GetMixBusWeight(int outputCount, int output, int inputCount,
  int input);

template <typename T>
void SetConstantStridePointerArray(T** pOutPointers, void* pBuffer,
  int count, size_t stride);

template <typename T>
void SetConstantStridePointerArray(const T** pOutPointers,
  const void* pBuffer, int count, size_t stride);

template <typename T, int Fraction>
void SetMixBusStreamBufferPointers(MixBusStream* pStream, uint8_t* pBuffer,
  size_t channelStride, int sampleCount);

template <typename T, int Fraction>
void InterleavingCopyFromMixBusStream(T* pOutput,
  const MixBusStream* pStream, size_t outputSize);

template <typename T, int Fraction>
void DeinterleavingCopyToMixBusStream(MixBusStream* pStream, const T* pInput,
  uint8_t* pBuffer, size_t channelStride, int sampleCount);

}
