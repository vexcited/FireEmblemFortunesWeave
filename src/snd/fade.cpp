#include "snd/fade.hpp"

#include <cmath>
#include <cstdlib>

namespace snd {

namespace {

float randomRange(float a, float b) {
  float low = a <= b ? a : b;
  float high = a <= b ? b : a;
  float offset = std::fabs(high - low) * (std::rand() / 2147483648.0f);
  return low + offset;
}

}

Fade::Fade(float time) {
  nn::os::InitializeMutex(&mutex_, true, 0);
  CtrlTypeTime* ctrl = initTime();
  ctrl->set(ctrl->getValue(), time);
}

Fade::Fade(int time) {
  nn::os::InitializeMutex(&mutex_, true, 0);
  CtrlTypeTime* ctrl = initTime();
  ctrl->set(ctrl->getValue(), static_cast<float>(time));
}

Fade::Fade(float value, float time) {
  nn::os::InitializeMutex(&mutex_, true, 0);
  CtrlTypeTime* ctrl = initTime();
  ctrl->setValue(value);
  ctrl->set(ctrl->getValue(), time);
}

Fade::Fade(const char* name) {
  nn::os::InitializeMutex(&mutex_, true, 0);
  nn::os::LockMutex(&mutex_);
  uint32_t hash = fnd::calcCrc32(name, 0);
  const data::FadeData* data = data::findFadeData(&hash);
  if (data != nullptr) {
    set(data);
  }
  else {
    CtrlTypeTime* ctrl = initTime();
    ctrl->set(ctrl->getValue(), 0.0f);
  }
  nn::os::UnlockMutex(&mutex_);
}

Fade::Fade(const data::FadeData* data) {
  nn::os::InitializeMutex(&mutex_, true, 0);
  set(data);
}

Fade::Fade(const Fade& other) {
  nn::os::InitializeMutex(&mutex_, true, 0);
  set(other);
}

Fade::~Fade() {
  if (ctrl_ != nullptr) {
    ctrl_ = nullptr;
  }
  nn::os::FinalizeMutex(&mutex_);
}

void Fade::set(const data::FadeData* data) {
  nn::os::LockMutex(&mutex_);
  switch (data->type) {
    case kTypeTime:
      construct<CtrlTypeTime, TimeData>(kTypeTime, data->params);
      break;

    case kTypeAHDSR:
      construct<CtrlTypeAHDSR, AHDSRData>(kTypeAHDSR, data->params);
      break;

    case kTypePoint:
      construct<CtrlTypePoint, PointData>(kTypePoint, data->params);
      break;
  }
  nn::os::UnlockMutex(&mutex_);
}

void Fade::set(const Fade& other) {
  nn::os::LockMutex(&mutex_);
  if (ctrl_ == nullptr || type_ != other.type_) {
    switch (other.type_) {
      case kTypeTime:
        ctrl_ = new (storage_) CtrlTypeTime();
        type_ = kTypeTime;
        break;

      case kTypeAHDSR:
        ctrl_ = new (storage_) CtrlTypeAHDSR();
        type_ = kTypeAHDSR;
        break;

      case kTypePoint:
        ctrl_ = new (storage_) CtrlTypePoint();
        type_ = kTypePoint;
        break;
    }
  }

  switch (other.type_) {
    case kTypeTime:
      *static_cast<CtrlTypeTime*>(ctrl_) =
        *static_cast<const CtrlTypeTime*>(other.ctrl_);
      break;

    case kTypeAHDSR:
      *static_cast<CtrlTypeAHDSR*>(ctrl_) =
        *static_cast<const CtrlTypeAHDSR*>(other.ctrl_);
      break;

    case kTypePoint:
      *static_cast<CtrlTypePoint*>(ctrl_) =
        *static_cast<const CtrlTypePoint*>(other.ctrl_);
      break;
  }
  nn::os::UnlockMutex(&mutex_);
}

Fade& Fade::operator=(const Fade& other) {
  set(other);
  return *this;
}

void Fade::update(float frame) {
  if (ctrl_ != nullptr) {
    nn::os::LockMutex(&mutex_);
    running_ = ctrl_->update(frame);
    nn::os::UnlockMutex(&mutex_);
  }
}

float Fade::getValue() const {
  return ctrl_ != nullptr ? ctrl_->getValue() : 0.0f;
}

void Fade::start(const Fade& fade, float target) {
  nn::os::LockMutex(&mutex_);
  float value = getValue();
  set(fade);
  ctrl_->setValue(value);
  ctrl_->start(target);
  nn::os::UnlockMutex(&mutex_);
}

float Fade::getTime() const {
  return ctrl_ != nullptr ? ctrl_->getTime() : 0.0f;
}

float Fade::getTarget() const {
  return ctrl_ != nullptr ? ctrl_->getTarget() : 0.0f;
}

void FadeRandom::start(float minValue, float maxValue, float minTime,
  float maxTime) {
  if (minTime == 0.0f) {
    static_cast<Fade::CtrlTypeTime*>(fade_.ctrl_)->reset();
    return;
  }

  minValue_ = minValue;
  maxValue_ = maxValue;
  minTime_ = minTime;
  maxTime_ = maxTime;
  float value = minValue == maxValue ? minValue
    : randomRange(minValue, maxValue);
  float time = minTime == maxTime ? minTime : randomRange(minTime, maxTime);
  fade_.start(Fade(time), value);
}

void FadeRandom::update(float frame) {
  if (!fade_.ctrl_->update(frame)) {
    start(minValue_, maxValue_, minTime_, maxTime_);
  }
}

float FadeRandom::getValue() const {
  return fade_.getValue();
}

}
