#pragma once

#include <cstdint>

#include "nn/codec/adpcm.hpp"
#include "nn/os/mutex.hpp"
#include "snd/coef/biquad.hpp"
#include "snd/fade.hpp"
#include "snd/handle_ptr.hpp"
#include "snd/param.hpp"

namespace snd {

class Manager;

namespace data {

struct VoiceBuffer;

}

// Only the parts the players use.
class WaveReader {
public:
  struct Info {
    uint8_t reserved0[0x18];
    int loopSamples;
    uint8_t reserved1c[0x8];
    int sampleRate;
    uint8_t reserved28[0x30];
    int loopCount;
  };

  virtual ~WaveReader();

  virtual void reserved10();
  virtual void reserved18();
  virtual void reserved20();
  virtual void reserved28();
  virtual void load();
  virtual bool isLoaded();
  virtual void seek(uint32_t offset, int origin);
  virtual void read(void* buffer, uint32_t size);
  virtual void reserved50();
  virtual void reserved58();
  virtual void reserved60();
  virtual void reset();
  virtual void seekBlock(int block);
  virtual void reserved78();
  virtual void reserved80();
  virtual void reserved88();
  virtual void reserved90();
  virtual void reserved98();
  virtual void reserveda0();
  virtual void reserveda8();
  virtual bool isRepeating();

  bool isStream() const;
  void readBlock(void* buffer, int block);
  int findLastBlock(int block);

private:
  uint8_t reserved8_[0x98];

public:
  const Info* info_;
};

class WavePlayer : public Param, public HandlePtr {
public:
  // The smoothed values passed to the mixer, in the order they are
  // computed.
  struct Output {
    float volume;
    float pitch;
    float pan;
    float surroundPan;
    float biquadValue;
    float fxSend;
    float outputVolume;
    float lpf;
    float mainSend;
    float gains[4];
  };

  // Two cascaded filters, the second one is only bypassed or not.
  class BiQuad4 {
  public:
    virtual ~BiQuad4();

    coef::BiQuadCoef* lpf_;
    coef::BiQuadCoef* biquad_;
  };

  static constexpr int kMaxChannels = 6;

  struct ChannelState {
    nn::codec::AdpcmContext context;
    nn::codec::AdpcmParameter parameter;
  };

  // The channel state at the start, followed by the context at the loop
  // start.
  struct LoopState {
    ChannelState state;
    nn::codec::AdpcmContext loopContext;
  };

  enum State {
    kStateNone,
    kStateLoading,
    kStateLoaded,
    kStateReading,
    kStatePrepared,
    kStatePlaying,
    kStateMuted,
    kStatePaused,
    kStateScrubbing,
    kStateStopping,
  };

  explicit WavePlayer(Manager* manager);

  float calcVolume() const override;
  float calcPitch() const override;
  float calcPan() const override;
  float calcSurroundPan() const override;
  float calcLpf() const override;
  float calcMainSend() const override;
  float calcBiquadValue() const override;
  float calcFxSend() const override;
  float calcOutputVolume() const override;

  virtual void** getRegistry();
  virtual void initialize();
  virtual void finalize();
  virtual void updateState();
  virtual bool isScrubbing() const;
  virtual bool isRendering() const;
  virtual void updateParam(float ms);
  virtual void render(int16_t* buffer, int blocks, uint32_t frames,
    uint32_t channels);
  virtual void renderBlock(int16_t* buffer, uint32_t offset, int blocks,
    uint32_t frames, uint32_t channels, Output output);
  virtual void updateOutput();
  virtual Output smoothOutput();
  virtual void reset();
  virtual void setHold(bool hold);
  virtual void setAutoReset(bool autoReset);
  virtual int getState() const;
  virtual void setSource(int id, int kind, const void* data);
  virtual int load(void* request, bool stream, bool front, bool loop);
  virtual bool isLoaded() const;
  virtual bool isReady() const;
  virtual bool isPrepared() const;
  virtual bool isPlaying() const;
  virtual bool isStopping() const;
  virtual bool isFinished() const;
  virtual bool isSilent() const;
  virtual void start();
  virtual void stop(const Fade& fade);
  virtual void pause(const Fade& fade);
  virtual void resumePause(const Fade& fade);
  virtual void mute(const Fade& fade);
  virtual void resumeMute(const Fade& fade);
  virtual bool isPaused() const;
  virtual bool isMuted() const;
  virtual bool seekSample(int sample);
  virtual bool seekMs(int ms);
  virtual bool seekBlock(int block);
  virtual void scrub(bool fade, float time);
  virtual int getSampleRate() const;
  virtual int getChannelCount() const;
  virtual float getRemainingMs(int sample) const;
  virtual int getRemainingSamples(int sample) const;
  virtual float getPlayTime() const;
  virtual int getPlaySample() const;
  virtual float getLength() const;
  virtual int getLengthSamples() const;
  virtual int getLoopEnd() const;
  virtual int getLoopCount() const;
  virtual bool isStream() const;
  virtual void applyBuffer();
  virtual data::VoiceBuffer* getBuffer() const;
  virtual void setLpf(float value);
  virtual void setBiquad(float value);
  virtual void setVolume(float volume);
  virtual void setPitch(float pitch);
  virtual void setPan(float pan);
  virtual void setSurroundPan(float pan);
  virtual void setBiquadValue(float value);
  virtual void setFxSend(float send);
  virtual void setOutputVolume(float volume);
  virtual void setLpfValue(float value);
  virtual void setMainSend(float send);
  virtual void applyLpf(float value);
  virtual void applyBiquad(float value);
  virtual void seekCache();
  virtual void seekStream();

  void setChannelId(int index, int id);

  ~WavePlayer() override;

protected:
  float smooth(float current, float target) const {
    return current + (target - current) / 480.0f;
  }

  float calcRatio(float pitch) const;
  void setup();
  void setupStream();
  void setupCache();
  void locate(int sample);
  void restoreSeek();
  void endBlocks();
  void updateLoading();
  void updateScrubbing();
  float calcFrontLeftGain(float pan);
  float calcFrontRightGain(float pan);
  float calcRearLeftGain(float pan);
  float calcRearRightGain(float pan);
  void restartSeek();

  Manager* manager_;
  bool initialized_;
  uint64_t playedSamples_;
  int position_;
  int reserved15dc_;
  int reserved15e0_;
  int loopCount_;
  bool silent_;
  bool hold_;
  bool autoReset_;
  float volumeScale_;
  float pitchOffset_;
  float panOffset_;
  float surroundPanOffset_;
  float volume_;
  float pitch_;
  float pan_;
  float surroundPan_;
  float biquadValue_;
  float fxSend_;
  float outputVolume_;
  float lpfValue_;
  float mainSend_;
  WaveReader* reader_;
  int sourceId_;
  int sourceKind_;
  const void* sourceData_;
  uint8_t* readBuffer_;
  uint8_t* decodeBuffer_;
  uint8_t reserved1648_[0x1228];
  LoopState loopStates_[kMaxChannels];
  uint8_t reserved2978_[0x50];
  int channelCount_;
  int format_;
  int sampleBytes_;
  uint32_t dataOffset_;
  int sampleCount_;
  int blockSamples_;
  int blockBytes_;
  int sampleRate_;
  bool loop_;
  int reserved29ec_;
  int lastBlock_;
  int lastBlockBytes_;
  int lastBlockSamples_;
  int loopBlocks_;
  int loopStartOffset_;
  int loopStart_;
  uint8_t reserved2a08_[0x8];
  int seekBlock_;
  uint8_t reserved2a14_[0x4];
  float seekFraction_;
  int seekOffset_;
  int blockLength_;
  Output output_;
  data::VoiceBuffer* buffer_;
  ChannelState channels_[kMaxChannels];
  BiQuad4* biquad_;
  int64_t reserved2b50_[3];
  int state_;
  bool startRequested_;
  bool stopRequested_;
  bool muteRequested_;
  bool pauseRequested_;
  bool resumeMuteRequested_;
  bool resumePauseRequested_;
  bool finished_;
  float scrubTime_;
  nn::os::MutexType mutex_;
};

}
