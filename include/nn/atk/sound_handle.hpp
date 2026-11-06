#pragma once

#include <cstdint>

namespace nn::atk {

struct StreamSoundDataInfo {
  bool loopFlag;
  int sampleRate;
  int64_t loopStart;
  int64_t loopEnd;
  int64_t compatibleLoopStart;
  int64_t compatibleLoopEnd;
  int channelCount;
};

struct WaveSoundDataInfo {
  bool loopFlag;
  int sampleRate;
  int64_t loopStart;
  int64_t loopEnd;
  int64_t compatibleLoopStart;
  int64_t compatibleLoopEnd;
  int channelCount;
};

namespace detail {

// Each sound class keeps one, linked to the type info of its base.
class RuntimeTypeInfo {
public:
  explicit RuntimeTypeInfo(const RuntimeTypeInfo* parent)
    : m_ParentTypeInfo(parent) {}

private:
  const RuntimeTypeInfo* m_ParentTypeInfo;
};

// Only the members the game calls.
class BasicSound {
public:
  static const RuntimeTypeInfo* GetRuntimeTypeInfoStatic();

  virtual const RuntimeTypeInfo* GetRuntimeTypeInfo() const;
  virtual ~BasicSound();

  virtual void Unknown3();
  virtual void Unknown4();
  virtual bool IsPrepared() const;

  void StartPrepared();
  void Stop(int fadeFrames);
  void Pause(bool flag, int fadeFrames);
  void Mute(bool flag, int fadeFrames);
};

class StreamSound : public BasicSound {
public:
  static const RuntimeTypeInfo* GetRuntimeTypeInfoStatic() {
    static const RuntimeTypeInfo s_TypeInfo(
      BasicSound::GetRuntimeTypeInfoStatic());
    return &s_TypeInfo;
  }

  const RuntimeTypeInfo* GetRuntimeTypeInfo() const override;

  void SetTrackVolume(uint32_t trackBitFlag, float volume, int fadeFrames);
  bool ReadStreamSoundDataInfo(StreamSoundDataInfo* info) const;
  int64_t GetPlaySamplePosition(bool isOriginalSamplePosition) const;
};

class SequenceSound : public BasicSound {
public:
  static const RuntimeTypeInfo* GetRuntimeTypeInfoStatic() {
    static const RuntimeTypeInfo s_TypeInfo(
      BasicSound::GetRuntimeTypeInfoStatic());
    return &s_TypeInfo;
  }

  const RuntimeTypeInfo* GetRuntimeTypeInfo() const override;
};

class WaveSound : public BasicSound {
public:
  static const RuntimeTypeInfo* GetRuntimeTypeInfoStatic() {
    static const RuntimeTypeInfo s_TypeInfo(
      BasicSound::GetRuntimeTypeInfoStatic());
    return &s_TypeInfo;
  }

  const RuntimeTypeInfo* GetRuntimeTypeInfo() const override;

  bool ReadWaveSoundDataInfo(WaveSoundDataInfo* info) const;
  int64_t GetPlaySamplePosition(bool isOriginalSamplePosition) const;
};

}

class SoundHandle {
public:
  ~SoundHandle() {
    DetachSound();
  }

  bool IsAttachedSound() const {
    return m_pSound != nullptr;
  }

  bool IsPrepared() const {
    return m_pSound != nullptr && m_pSound->IsPrepared();
  }

  void StartPrepared() {
    if (m_pSound != nullptr) {
      m_pSound->StartPrepared();
    }
  }

  void Stop(int fadeFrames) {
    if (m_pSound != nullptr) {
      m_pSound->Stop(fadeFrames);
    }
  }

  void Pause(bool flag, int fadeFrames) {
    if (m_pSound != nullptr) {
      m_pSound->Pause(flag, fadeFrames);
    }
  }

  void Mute(bool flag, int fadeFrames) {
    if (m_pSound != nullptr) {
      m_pSound->Mute(flag, fadeFrames);
    }
  }

  void DetachSound();

private:
  detail::BasicSound* m_pSound = nullptr;
};

class StreamSoundHandle {
public:
  explicit StreamSoundHandle(SoundHandle* handle);
  ~StreamSoundHandle();

  bool IsAttachedSound() const {
    return m_pSound != nullptr;
  }

  void SetTrackVolume(uint32_t trackBitFlag, float volume, int fadeFrames) {
    if (IsAttachedSound()) {
      m_pSound->SetTrackVolume(trackBitFlag, volume, fadeFrames);
    }
  }

  bool ReadStreamSoundDataInfo(StreamSoundDataInfo* info) const {
    if (!IsAttachedSound()) {
      return false;
    }
    return m_pSound->ReadStreamSoundDataInfo(info);
  }

  int64_t GetPlaySamplePosition(bool isOriginalSamplePosition = true) const {
    if (!IsAttachedSound()) {
      return -1;
    }
    return m_pSound->GetPlaySamplePosition(isOriginalSamplePosition);
  }

private:
  detail::StreamSound* m_pSound;
};

class WaveSoundHandle {
public:
  explicit WaveSoundHandle(SoundHandle* handle);
  ~WaveSoundHandle();

  bool IsAttachedSound() const {
    return m_pSound != nullptr;
  }

  bool ReadWaveSoundDataInfo(WaveSoundDataInfo* info) const {
    if (!IsAttachedSound()) {
      return false;
    }
    return m_pSound->ReadWaveSoundDataInfo(info);
  }

  int64_t GetPlaySamplePosition(bool isOriginalSamplePosition = true) const {
    if (!IsAttachedSound()) {
      return -1;
    }
    return m_pSound->GetPlaySamplePosition(isOriginalSamplePosition);
  }

private:
  detail::WaveSound* m_pSound;
};

}
