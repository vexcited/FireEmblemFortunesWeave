#pragma once

#include <cstdint>

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

private:
  uint8_t body_[72];
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
  virtual ~SoundVoice();
};

class SoundVoiceNX : public SoundVoice {
public:
  SoundVoiceNX();
  ~SoundVoiceNX() override;

private:
  uint8_t body_[4216];
};

}
