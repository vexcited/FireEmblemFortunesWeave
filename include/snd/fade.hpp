#pragma once

#include <cstdint>
#include <new>

#include "nn/os/mutex.hpp"
#include "snd/fnd/math.hpp"

namespace snd {

namespace data {

struct FadeData {
  uint32_t hash;
  int type;
  const void* params;
};

const FadeData* findFadeData(const uint32_t* hash);

}

class FadeRandom;

class Fade {
public:
  enum Type {
    kTypeTime,
    kTypeAHDSR,
    kTypePoint,
  };

  class CtrlBase {
  public:
    virtual ~CtrlBase() = default;
    virtual bool update(float frame) = 0;

    virtual float getValue() const {
      return value_;
    }

    virtual float getTime() const {
      return time_;
    }

    virtual void setValue(float value) = 0;
    virtual void start(float target) = 0;
    virtual float getTarget() const = 0;

  protected:
    float value_ = 0.0f;
    float time_ = 0.0f;
  };

  struct TimeData {
    float time;
    fnd::CurveType curve;
  };

  class CtrlTypeTime : public CtrlBase {
  public:
    CtrlTypeTime();
    explicit CtrlTypeTime(const TimeData* data);

    bool update(float frame) override;
    void setValue(float value) override;
    void start(float target) override;
    float getTarget() const override;

    void set(float target, float time) {
      from_ = value_;
      to_ = target;
      float frames;
      if (time <= 0.0f) {
        value_ = target;
        frames = 0.0f;
      }
      else {
        frames = time / fnd::kFrameMs;
      }
      time_ = time;
      frame_ = 0.0f;
      frames_ = frames;
    }

    void reset() {
      value_ = 0.0f;
      time_ = 0.0f;
      from_ = 0.0f;
      to_ = 0.0f;
      frame_ = 0.0f;
      frames_ = 0.0f;
    }

    float getFrames() const {
      return frames_;
    }

    fnd::CurveType getCurve() const {
      return curve_;
    }

  private:
    TimeData data_{};
    bool hasData_ = false;
    float from_ = 0.0f;
    float to_ = 0.0f;
    float frame_ = 0.0f;
    float frames_ = 0.0f;
    fnd::CurveType curve_ = fnd::kCurveLinear;
  };

  struct AHDSRData {
    float attack;
    fnd::CurveType attackCurve;
    float hold;
    float decay;
    fnd::CurveType decayCurve;
    float sustain;
    float release;
    fnd::CurveType releaseCurve;
  };

  class CtrlTypeAHDSR : public CtrlBase {
  public:
    enum State {
      kStateStart,
      kStateAttack,
      kStateHold,
      kStateDecay,
      kStateSustain,
      kStateRelease,
      kStateEnd = 7,
    };

    CtrlTypeAHDSR();
    explicit CtrlTypeAHDSR(const AHDSRData* data);

    bool update(float frame) override;
    void setValue(float value) override;
    void start(float target) override;
    float getTarget() const override;

    void setState(int state);
    void release(const Fade& fade, bool force, float delay);

    void set(float attack, float hold, float decay, float sustain,
      float release);
    void set(fnd::CurveType curve, float attack, float hold, float decay,
      float sustain, float release);

  private:
    static constexpr float kFrameMs = 1000.0f / 60.0f;

    void restart();

    AHDSRData data_{};
    bool hasData_ = false;
    int state_ = kStateStart;
    int prevState_ = kStateStart;
    float attackFrame_ = 0.0f;
    float holdFrame_ = 0.0f;
    float decayFrame_ = 0.0f;
    float sustain_ = 1.0f;
    float releaseFrame_ = 0.0f;
    float attackFrames_ = 0.0f;
    float holdFrames_ = 0.0f;
    float decayFrames_ = 0.0f;
    float releaseFrames_ = 0.0f;
    float delay_ = 0.0f;
    float level_ = 0.0f;
    fnd::CurveType attackCurve_ = fnd::kCurveLinear;
    fnd::CurveType decayCurve_ = fnd::kCurveLinear;
    fnd::CurveType releaseCurve_ = fnd::kCurveLinear;
  };

  struct Point {
    float value;
    float time;
    fnd::CurveType curve;
  };

  static constexpr int kPointCount = 8;

  struct PointData {
    Point points[kPointCount];
  };

  class CtrlTypePoint : public CtrlBase {
  public:
    CtrlTypePoint();
    explicit CtrlTypePoint(const PointData* data);

    bool update(float frame) override;
    void setValue(float value) override;
    void start(float target) override;
    float getTarget() const override;

  private:
    void restart();

    PointData data_{};
    bool hasData_ = false;
    float from_ = 0.0f;
    float to_ = 0.0f;
    float frame_ = 0.0f;
    float frames_ = 0.0f;
    fnd::CurveType curve_ = fnd::kCurveLinear;
    int index_ = -1;
  };

  explicit Fade(float time);
  explicit Fade(int time);
  Fade(float value, float time);
  explicit Fade(const char* name);
  explicit Fade(const data::FadeData* data);
  Fade(const Fade& other);
  virtual ~Fade();

  virtual void update(float frame);

  Fade& operator=(const Fade& other);

  void set(const Fade& other);
  void set(const data::FadeData* data);
  void start(const Fade& fade, float target);
  float getValue() const;
  float getTime() const;

  float getTarget() const;

private:
  friend class FadeRandom;

  template <typename T, typename Data>
  void construct(Type type, const void* params) {
    nn::os::LockMutex(&mutex_);
    type_ = type;
    ctrl_ = new (storage_) T(static_cast<const Data*>(params));
    nn::os::UnlockMutex(&mutex_);
  }

  CtrlTypeTime* initTime() {
    type_ = kTypeTime;
    CtrlTypeTime* ctrl = new (storage_) CtrlTypeTime();
    ctrl_ = ctrl;
    return ctrl;
  }

  alignas(8) uint8_t storage_[0x90] = {};
  CtrlBase* ctrl_ = nullptr;
  Type type_ = kTypeTime;
  bool running_ = false;
  nn::os::MutexType mutex_ = {};
};

class FadeRandom {
public:
  void start(float minValue, float maxValue, float minTime, float maxTime);
  void update(float frame);
  float getValue() const;

private:
  Fade fade_;
  float minValue_;
  float maxValue_;
  float minTime_;
  float maxTime_;
};

}
