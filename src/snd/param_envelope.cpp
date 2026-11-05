#include "snd/param.hpp"

namespace snd {

bool Param::isEnvelopeReleased() const {
  return envelope_.getDelay() <= 0.0f &&
    envelope_.getState() == Fade::CtrlTypeAHDSR::kStateRelease;
}

bool Param::isEnvelopeFading() const {
  return envelope_.getState() == Fade::CtrlTypeAHDSR::kStateRelease + 1;
}

bool Param::isEnvelopeEnded() const {
  return envelope_.getState() == Fade::CtrlTypeAHDSR::kStateEnd;
}

}
