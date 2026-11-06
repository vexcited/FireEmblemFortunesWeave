#include "snd/game.hpp"

namespace snd {

BGM::BGM() {
}

void BGM::setInstance(BGM* bgm) {
  s_instance = bgm;
}

BGM* BGM::getInstance() {
  return s_instance;
}

// Each stop removes the last entry.
void BGM::stopTracks(const Fade& fade) {
  while (!entries_.empty()) {
    stop(fade, true);
  }
}

bool BGM::isPlaying() {
  return s_instance->state_ == kStatePlaying;
}

void BGM::change(int track, bool loop) {
  BGM* bgm = s_instance;
  EntryList& entries = bgm->entries_;
  if (entries.empty()) {
    return;
  }

  Entry& entry = entries.back();
  if (!entry.stopping && track != entry.track) {
    entry.nextTrack = track;
    entry.fadeFrame = 0;
    entry.loop = loop;
    bgm->state_ = kStateChanging;
  }
}

bool BGM::isStopping() {
  const EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return false;
  }
  return entries.back().stopping;
}

int BGM::getUnknown170() {
  const EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return 0;
  }
  return entries.back().unknown_170_;
}

int BGM::getUnknown16c() {
  const EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return 0;
  }
  return entries.back().unknown_16c_;
}

int BGM::getUnknown168() {
  const EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return 0;
  }
  return entries.back().unknown_168_;
}

}
