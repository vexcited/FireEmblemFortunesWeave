#include "snd/fade.hpp"

namespace snd {

Fade::CtrlTypeTime::CtrlTypeTime() = default;

Fade::CtrlTypeTime::CtrlTypeTime(const TimeData* data) {
  if (data != nullptr) {
    hasData_ = true;
    data_ = *data;
    time_ = data_.time;
    to_ = 1.0f;
    frames_ = data_.time / fnd::kFrameMs;
    curve_ = data_.curve;
  }
}

bool Fade::CtrlTypeTime::update(float frame) {
  float frames = frames_;
  if (frames != 0.0f) {
    frame_ += frame;
    value_ = fnd::calcCurve(curve_, from_, to_, frame_, frames_);
    if (frame_ >= frames_) {
      frame_ = 0.0f;
      frames_ = 0.0f;
    }
  }
  return frames != 0.0f;
}

void Fade::CtrlTypeTime::start(float target) {
  from_ = value_;
  to_ = target;
  if (hasData_) {
    if (data_.time == 0.0f) {
      value_ = target;
      time_ = 0.0f;
      frame_ = 0.0f;
      frames_ = 0.0f;
    }
    else {
      curve_ = data_.curve;
      time_ = data_.time;
      frame_ = 0.0f;
      frames_ = data_.time / fnd::kFrameMs;
    }
  }
  else if (frames_ == 0.0f) {
    value_ = target;
    frame_ = 0.0f;
    frames_ = 0.0f;
  }
  else {
    frame_ = 0.0f;
  }
}

void Fade::CtrlTypeTime::setValue(float value) {
  value_ = value;
  from_ = value;
}

float Fade::CtrlTypeTime::getTarget() const {
  return to_;
}

Fade::CtrlTypeAHDSR::CtrlTypeAHDSR() {
  value_ = 1.0f;
}

Fade::CtrlTypeAHDSR::CtrlTypeAHDSR(const AHDSRData* data) {
  value_ = 1.0f;
  if (data != nullptr) {
    data_ = *data;
    hasData_ = true;
  }
  restart();
}

void Fade::CtrlTypeAHDSR::restart() {
  float time = 0.0f;
  if (hasData_) {
    attackFrame_ = 0.0f;
    holdFrame_ = 0.0f;
    decayFrame_ = 0.0f;
    releaseFrame_ = 0.0f;
    delay_ = 0.0f;
    value_ = 1.0f;
    sustain_ = data_.sustain;
    attackCurve_ = data_.attackCurve;
    decayCurve_ = data_.decayCurve;
    releaseCurve_ = data_.releaseCurve;
    attackFrames_ = data_.attack / kFrameMs;
    holdFrames_ = data_.hold / kFrameMs;
    decayFrames_ = data_.decay / kFrameMs;
    releaseFrames_ = data_.release / kFrameMs;
    time = data_.attack + data_.hold + data_.decay;
  }
  time_ = time;
  state_ = kStateStart;
}

bool Fade::CtrlTypeAHDSR::update(float frame) {
  if (state_ == kStateStart) {
    value_ = 0.0f;
    level_ = 0.0f;
    state_ = kStateAttack;
  }

  if (state_ == kStateAttack) {
    attackFrame_ += frame;
    value_ = fnd::calcCurve(attackCurve_, 0.0f, 1.0f, attackFrame_,
      attackFrames_);
    if (attackFrame_ >= attackFrames_) {
      state_ = kStateHold;
    }
    level_ = value_;
  }

  if (state_ == kStateHold) {
    holdFrame_ += frame;
    if (holdFrame_ >= holdFrames_) {
      state_ = kStateDecay;
    }
    level_ = value_;
  }

  if (state_ == kStateDecay) {
    decayFrame_ += frame;
    value_ = fnd::calcCurve(decayCurve_, 1.0f, sustain_, decayFrame_,
      decayFrames_);
    if (decayFrame_ >= decayFrames_) {
      state_ = kStateSustain;
    }
    level_ = value_;
  }

  if (state_ == kStateRelease) {
    if (delay_ > 0.0f) {
      // The attack keeps running while the release is delayed.
      delay_ -= frame;
      if (prevState_ == kStateAttack) {
        attackFrame_ += frame;
        value_ = fnd::calcCurve(attackCurve_, 0.0f, 1.0f, attackFrame_,
          attackFrames_);
        if (attackFrame_ >= attackFrames_) {
          prevState_ = kStateRelease;
        }
        level_ = value_;
      }
    }
    else {
      releaseFrame_ += frame;
      value_ = fnd::calcCurve(releaseCurve_, level_, 0.0f, releaseFrame_,
        releaseFrames_);
      if (releaseFrame_ >= releaseFrames_) {
        state_ = kStateEnd;
      }
    }
  }
  return true;
}

void Fade::CtrlTypeAHDSR::start(float) {
  restart();
}

void Fade::CtrlTypeAHDSR::setValue(float) {}

float Fade::CtrlTypeAHDSR::getTarget() const {
  return 0.0f;
}

void Fade::CtrlTypeAHDSR::set(float attack, float hold, float decay,
  float sustain, float release) {
  set(fnd::kCurveLinear, attack, hold, decay, sustain, release);
}

void Fade::CtrlTypeAHDSR::set(fnd::CurveType curve, float attack, float hold,
  float decay, float sustain, float release) {
  sustain_ = sustain;
  attackFrame_ = 0.0f;
  holdFrame_ = 0.0f;
  decayFrame_ = 0.0f;
  releaseFrame_ = 0.0f;
  attackCurve_ = curve;
  decayCurve_ = fnd::kCurveLinear;
  releaseCurve_ = fnd::kCurveLinear;
  delay_ = 0.0f;
  state_ = kStateStart;
  value_ = 1.0f;
  time_ = 0.0f;
  attackFrames_ = attack / fnd::kFrameMs;
  holdFrames_ = hold / fnd::kFrameMs;
  decayFrames_ = decay / fnd::kFrameMs;
  releaseFrames_ = release / fnd::kFrameMs;
}

void Fade::CtrlTypeAHDSR::setState(int state) {
  prevState_ = state_;
  state_ = state;
}

void Fade::CtrlTypeAHDSR::release(const Fade& fade, bool force, float delay) {
  delay_ = delay / fnd::kFrameMs;
  const CtrlBase* ctrl = fade.ctrl_;
  if (fade.type_ == kTypeTime && ctrl != nullptr) {
    auto* time = static_cast<const CtrlTypeTime*>(ctrl);
    if (force || time->getFrames() > releaseFrames_) {
      releaseFrames_ = time->getFrames();
      releaseCurve_ = time->getCurve();
    }
  }
}

Fade::CtrlTypePoint::CtrlTypePoint() = default;

Fade::CtrlTypePoint::CtrlTypePoint(const PointData* data) {
  if (data != nullptr) {
    data_ = *data;
    hasData_ = true;
  }
  restart();
}

void Fade::CtrlTypePoint::restart() {
  if (hasData_) {
    frame_ = 0.0f;
    from_ = value_;
    to_ = data_.points[0].value;
    for (const Point& point : data_.points) {
      time_ += point.time;
    }
    curve_ = data_.points[0].curve;
    index_ = 0;
    frames_ = data_.points[0].time / fnd::kFrameMs;
  }
  else {
    index_ = -1;
  }
}

bool Fade::CtrlTypePoint::update(float frame) {
  if (index_ < 0) {
    return false;
  }
  if (frame_ == 0.0f && frames_ == 0.0f) {
    return false;
  }

  frame_ += frame;
  value_ = fnd::calcCurve(curve_, from_, to_, frame_, frames_);
  if (frame_ < frames_) {
    return true;
  }

  index_++;
  if (index_ >= kPointCount) {
    index_ = -1;
    return true;
  }

  const Point& point = data_.points[index_];
  from_ = value_;
  frame_ = 0.0f;
  to_ = point.value;
  frames_ = point.time / fnd::kFrameMs;
  curve_ = point.curve;
  return true;
}

void Fade::CtrlTypePoint::start(float) {
  restart();
}

void Fade::CtrlTypePoint::setValue(float value) {
  value_ = value;
  from_ = value;
}

float Fade::CtrlTypePoint::getTarget() const {
  return to_;
}

}
