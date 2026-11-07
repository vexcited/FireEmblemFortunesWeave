#pragma once

#include <cstddef>
#include <atomic>
#include <cstdint>

#include "nn/audio/renderer_api.hpp"
#include "nn/audio/renderer_config.hpp"
#include "nn/os/mutex.hpp"

namespace nn::audio {

int GetReleasedMemoryPoolCount(const AudioRendererConfig* config);

}

namespace nn::util {

struct Matrix4x3fType;

}

namespace nn::atk {

class EffectAux;

namespace detail {

class FrameHeap {
public:
  bool IsValid() const {
    return m_pHeap != nullptr;
  }

  size_t GetFreeSize() const;
  size_t GetSize() const;

private:
  void* m_pHeap;
  uint8_t m_Body[32];
};

namespace driver {

class SoundThread {
public:
  static SoundThread& GetInstance();

  void Lock() {
    nn::os::LockMutex(&m_CriticalSection);
  }

  void Unlock() {
    nn::os::UnlockMutex(&m_CriticalSection);
  }

private:
  uint8_t m_Body[840];
  nn::os::MutexType m_CriticalSection;
};

class SoundThreadLock {
public:
  SoundThreadLock() {
    SoundThread::GetInstance().Lock();
  }

  ~SoundThreadLock() {
    SoundThread::GetInstance().Unlock();
  }
};

class FinalMix {
public:
  void SetVolume(float volume);
};

class HardwareManager {
public:
  static HardwareManager& GetInstance();

  void SetOutputMode(int mode, int device);
  size_t GetRequiredEffectAuxBufferSize(const EffectAux* effect) const;

  int GetOutputMode() const {
    return m_OutputMode;
  }

  void SetAuxBus(int index, void* bus) {
    m_AuxBus[index] = bus;
  }

  FinalMix& GetFinalMix() {
    return m_FinalMix;
  }

  nn::audio::AudioRendererConfig* GetRendererConfig() {
    return &m_Config;
  }

  void LockRenderer() {
    nn::os::LockMutex(&m_RendererMutex);
  }

  void UnlockRenderer() {
    nn::os::UnlockMutex(&m_RendererMutex);
  }

  uint64_t GetAudioFrameCount() const {
    return m_AudioFrameCount.load();
  }

private:
  uint8_t m_Header[24];
  nn::audio::AudioRendererConfig m_Config;
  uint8_t m_Body0[200 - 24 - sizeof(nn::audio::AudioRendererConfig)];
  std::atomic<uint64_t> m_AudioFrameCount;
  uint8_t m_Body0b[16];
  int m_OutputMode;
  uint8_t m_Body1[44];
  void* m_AuxBus[4];
  uint8_t m_Body2[1384 - 304];
  FinalMix m_FinalMix;
  uint8_t m_Body3[0x610 - 1385];
  nn::audio::AudioRendererParameter m_Parameter;
  uint8_t m_Body4[1720 - 0x610 - sizeof(nn::audio::AudioRendererParameter)];
  nn::os::MutexType m_RendererMutex;
};

class StreamSoundManager {
public:
  static StreamSoundManager& GetInstance();

  int GetActiveCount() const;
};

}

}

class SoundArchive {
public:
  struct SoundInfo {
    uint32_t fileId;
    uint32_t playerId;
  };

  uint32_t GetItemId(const char* label) const;
  const char* GetItemLabel(uint32_t id) const;
  uint32_t GetSoundUserParam(uint32_t id) const;
  int GetSoundType(uint32_t id) const;
  bool ReadSoundInfo(SoundInfo* info, uint32_t id) const;

private:
  void* m_pVtable;
  uint8_t m_Body[24];
};

class FsSoundArchive : public SoundArchive {
private:
  uint8_t m_Fs[1520];
};

class MemorySoundArchive : public SoundArchive {
private:
  uint8_t m_Memory[720];
};

class AddonSoundArchive : public SoundArchive {
private:
  uint8_t m_Addon[720];
};

class SoundHeap {
public:
  SoundHeap();

  bool Create(void* buffer, size_t size);
  int SaveState();
  void LoadState(int level);

  size_t GetFreeSize() const {
    if (!m_FrameHeap.IsValid()) {
      return 0;
    }
    nn::os::LockMutex(&m_CriticalSection);
    size_t size = m_FrameHeap.GetFreeSize();
    nn::os::UnlockMutex(&m_CriticalSection);
    return size;
  }

  size_t GetSize() const {
    if (!m_FrameHeap.IsValid()) {
      return 0;
    }
    nn::os::LockMutex(&m_CriticalSection);
    size_t size = m_FrameHeap.GetSize();
    nn::os::UnlockMutex(&m_CriticalSection);
    return size;
  }

private:
  void* m_pVtable;
  mutable nn::os::MutexType m_CriticalSection;
  detail::FrameHeap m_FrameHeap;
};

class SoundDataManager {
public:
  void SetFileAddressInGroupFile(const void* group, void* heap);
  void InvalidateSoundData(const void* group, void* heap);

private:
  uint8_t m_Body[576];
};

class Sound3DListener {
public:
  Sound3DListener();

  void SetMatrix(const nn::util::Matrix4x3fType& matrix);

  void SetInteriorSize(float interiorSize) {
    m_InteriorSize = interiorSize;
  }

private:
  uint8_t m_Body[72];
  float m_InteriorSize;
  uint8_t m_Tail[20];
};

}
