#include "snd/manager.hpp"

namespace snd {

void Mixer::clearVoiceSends() {
  MixerSends::clear(sends_->voices);
}

void Mixer::clearBgmSends() {
  MixerSends::clear(sends_->bgms);
}

void Mixer::clearSeSends() {
  MixerSends::clear(sends_->ses);
}

}
