#pragma once

#include <cstdint>

#include "nn/atk/sound_handle.hpp"
#include "nn/audio/voice_api.hpp"
#include "nn/os/time.hpp"

namespace snd::target {

class StartInfo {
public:
  virtual ~StartInfo();
};

class StartInfoNX : public StartInfo {
public:
  StartInfoNX();
  ~StartInfoNX() override;

private:
  uint8_t body_[392];
};

class SoundHandle {
public:
  virtual ~SoundHandle();

  virtual void detach();
  virtual bool isAttached();
  virtual bool isPrepared();
  virtual void startPrepared();
  virtual void pause(bool paused, int frames);
  virtual void mute(bool muted, int frames);
  virtual void stop(int frames);
  virtual void setVariable(uint32_t mask, int frames, float value);
  virtual void setVariables(const float* values, int count, int frames);
  virtual int getSampleRate();
  virtual float getPlayTime(uint32_t kind);
  virtual float getPlayPosition(uint32_t kind);
  virtual int getPlaySample(uint32_t kind);
  virtual bool isStopRequested();
  virtual void clearStopRequest();
  virtual bool isLooped();
  virtual bool isSameSound(SoundHandle* other);
  virtual void setOutputLine(uint32_t line);
  virtual void markStartTime();
  virtual void update();
  virtual float getElapsedTime();
};

class SoundHandleNX : public SoundHandle {
public:
  SoundHandleNX();
  ~SoundHandleNX() override;

  void detach() override;
  bool isAttached() override;
  bool isPrepared() override;
  void startPrepared() override;
  void pause(bool paused, int frames) override;
  void mute(bool muted, int frames) override;
  void stop(int frames) override;
  void setVariable(uint32_t mask, int frames, float value) override;
  void setVariables(const float* values, int count, int frames) override;
  float getPlayTime(uint32_t kind) override;
  float getPlayPosition(uint32_t kind) override;
  int getPlaySample(uint32_t kind) override;
  bool isStopRequested() override;
  void clearStopRequest() override;
  bool isSameSound(SoundHandle* other) override;
  void markStartTime() override;
  void update() override;
  float getElapsedTime() override;

private:
  int archive_;
  const char* addon_;
  uint32_t soundId_;
  nn::atk::SoundHandle handle_;
  uint8_t reserved28_[0xc];
  bool timing_;
  nn::os::Tick startTick_;
  float elapsedTime_;
  float lastSample_;
  // Set once the play position moves backward, that is when a loop wraps.
  bool wrapped_;
};

class Sound3DListener {
public:
  virtual ~Sound3DListener();
};

class Sound3DListenerNX : public Sound3DListener {
public:
  Sound3DListenerNX(uint32_t index, uint32_t archive);
  ~Sound3DListenerNX() override;

private:
  uint8_t body_[88];
};

class SoundActor {
public:
  virtual ~SoundActor();
};

class SoundActorNX : public SoundActor {
public:
  explicit SoundActorNX(uint32_t archive);
  ~SoundActorNX() override;

private:
  uint8_t body_[48];
};

class Sound3DActor {
public:
  virtual ~Sound3DActor();
};

class Sound3DActorNX : public Sound3DActor {
public:
  Sound3DActorNX(uint32_t index, uint32_t archive);
  ~Sound3DActorNX() override;

private:
  uint8_t body_[48];
};

class SoundVoice {
public:
  // One queued block of samples, identified by its data pointer.
  struct Buffer {
    const void* data;
    uint8_t body[1032];
  };

  virtual ~SoundVoice();

  virtual bool acquire(const void* format, int channels);
  virtual void release();
  virtual void unknown4();
  virtual bool isValid();
  virtual void* allocBuffer(uint32_t size);
  virtual void freeBuffer(void* buffer);
  virtual bool appendBuffer(const Buffer* buffer);
  virtual const Buffer* getReleasedBuffer();
  virtual int getBufferCount();
  virtual int64_t getPlayedSampleCount();
  virtual void setVolume(float volume);
  virtual void setPan(float pan);
  virtual void setMixVolume(int index, float volume);
  virtual void start();
  virtual void stop();
  virtual bool isPlaying();
};

class SoundVoiceNX : public SoundVoice {
public:
  SoundVoiceNX();
  ~SoundVoiceNX() override;

  void release() override;
  bool isValid() override;
  const Buffer* getReleasedBuffer() override;
  int getBufferCount() override;
  int64_t getPlayedSampleCount() override;
  void setVolume(float volume) override;
  void start() override;
  void stop() override;
  bool isPlaying() override;

private:
  bool isVoiceValid();

  int sampleRate_;
  int channels_;
  int format_;
  int priority_;
  int frameSize_;
  float pan_;
  float mixVolumes_[4];
  bool acquired_;
  nn::audio::VoiceType voice_;
  Buffer buffers_[4];
};

}
