#include "snd/coef/biquad.hpp"

namespace snd::coef {

void BiQuadFilter::setCoef(float a0, float a1, float a2, float b0, float b1,
  float b2) {
  coef_->b0 = b0 / a0;
  coef_->b1 = b1 / a0;
  coef_->b2 = b2 / a0;
  coef_->a1 = a1 / a0;
  coef_->a2 = a2 / a0;
}

}
