#include "nn/audio/axfx2.hpp"

namespace nn::audio {
namespace {

float AllPass(Axfx2DelayLine* line, float input) {
  float coefficient = line->coefficient;
  float feed = input - coefficient * *line->output;
  *line->input++ = feed;
  float delayed = *line->output++;
  if (line->input > line->end) {
    line->input = line->start;
  }
  if (line->output > line->end) {
    line->output = line->start;
  }
  return delayed + coefficient * feed;
}

void Delay(Axfx2DelayLine* line, float input) {
  *line->input++ = input;
  ++line->output;
  if (line->input > line->end) {
    line->input = line->start;
  }
  if (line->output > line->end) {
    line->output = line->start;
  }
}

}

void Axfx2AllPassTick(Axfx2DelayLine* first, Axfx2DelayLine* second,
  Axfx2DelayLine* delay, float input) {
  Delay(delay, AllPass(second, AllPass(first, input)));
}

}
