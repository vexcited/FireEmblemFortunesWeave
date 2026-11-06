#include "snd/game.hpp"

#include "snd/api.hpp"
#include "snd/voice.hpp"

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

namespace snd {

namespace {

Voice* getVoice(BGM::Track& track) {
  return track.voice.get<Voice>();
}

Param* getParam(BGM::Track& track) {
  return track.voice.get<Voice>();
}

template <typename F>
void eachVoice(BGM::Entry& entry, F function) {
  for (BGM::Track& track : entry.tracks) {
    if (Voice* voice = getVoice(track)) {
      function(voice);
    }
  }
}

template <typename F>
void eachParam(BGM::Entry& entry, F function) {
  for (BGM::Track& track : entry.tracks) {
    if (Voice* voice = getVoice(track)) {
      function(static_cast<Param*>(voice));
    }
  }
}

// The first track with a voice speaks for the entry.
Voice* getFirstVoice(BGM::Entry& entry) {
  for (BGM::Track& track : entry.tracks) {
    if (Voice* voice = getVoice(track)) {
      return voice;
    }
  }
  return nullptr;
}

bool isHeld(const BGM::Entry& entry) {
  return entry.paused || entry.systemPaused || entry.muted ||
    entry.systemMuted;
}

}

void BGM::playData(const char* name, int track, int kind) {
  s_instance->requestData(name, track, kind);
}

void BGM::play(const char* name, const Fade& fade, int track, float delay,
  float volume) {
  s_instance->requestPlay(name, fade, track, delay, volume);
}

void BGM::play(const Request& request, const Fade& fade, int track,
  float delay, float volume) {
  s_instance->start(request, fade, track, -1, delay, volume);
}

bool BGM::isFinished() {
  return s_instance->checkFinished();
}

void BGM::release() {
  EntryList& entries = s_instance->entries_;
  if (entries.empty() || entries.back().stopping) {
    return;
  }
  if (Voice* voice = getVoice(entries.back().tracks[0])) {
    voice->release();
  }
}

bool BGM::playNext(const char* name, const Fade& fade, int track,
  float delay, float volume) {
  return s_instance->requestNext(name, fade, track, delay, volume);
}

void BGM::queue(const char* name, const Fade& fade, int track, float delay,
  float volume) {
  BGM* bgm = s_instance;
  bool stopping = bgm->isLastStopping();
  if (name == nullptr || stopping) {
    return;
  }
  bgm->enqueue(Request(name), fade, track, true, delay, volume);
}

void BGM::queue(const Request& request, const Fade& fade, int track,
  float delay, float volume) {
  s_instance->enqueue(request, fade, track, false, delay, volume);
}

void BGM::playTrack(int track, const char* name, const Fade& fade, int kind,
  float delay, float volume) {
  s_instance->startTrack(track, name, fade, kind, delay, volume);
}

void BGM::addTracks(const char* name, const Fade& fade, float delay,
  float volume) {
  BGM* bgm = s_instance;
  if (bgm->isLastStopping()) {
    return;
  }
  bgm->appendTracks(Request(name), fade, delay, volume);
}

void BGM::replaceTrack(int track, const char* name, const Fade& fade,
  int kind, float delay, float volume) {
  s_instance->swapTrack(track, name, fade, kind, delay, volume);
}

void BGM::stop(const Fade& fade) {
  s_instance->stop(fade, false);
}

// Track 0 stops the whole entry, the others only stop their voice and
// forget their name.
void BGM::stopTrack(int track, const Fade& fade) {
  BGM* bgm = s_instance;
  EntryList& entries = bgm->entries_;
  if (!entries.empty()) {
    if (entries.back().stopping) {
      return;
    }
    if (track != 0) {
      Track& part = entries.back().tracks[track];
      if (Voice* voice = getVoice(part)) {
        voice->stop(fade, false, 0.0f);
      }
      part.setName("");
      return;
    }
  }
  else if (track != 0) {
    return;
  }
  bgm->stop(fade, false);
}

void BGM::pauseSystem(const Fade& fade) {
  s_instance->pauseSystemAll(fade);
}

void BGM::resumeSystemPause(const Fade& fade) {
  s_instance->resumeSystemPauseAll(fade);
}

void BGM::mute(const Fade& fade) {
  s_instance->muteAll(fade);
}

void BGM::muteTrack(int track, const Fade& fade) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty() || entries.back().stopping) {
    return;
  }
  Entry& entry = entries.back();
  if (Voice* voice = getVoice(entry.tracks[track])) {
    voice->mute(fade, false);
  }
  entry.muted = true;
}

void BGM::resumeMute(const Fade& fade) {
  s_instance->resumeMuteAll(fade);
}

void BGM::resumeMuteTrack(int track, const Fade& fade) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty() || entries.back().stopping) {
    return;
  }
  Entry& entry = entries.back();
  entry.muted = false;
  if (entry.systemMuted) {
    return;
  }
  if (Voice* voice = getVoice(entry.tracks[track])) {
    voice->resumeMute(Fade(fade.getTime()));
  }
}

void BGM::muteSystem(const Fade& fade) {
  s_instance->muteSystemAll(fade);
}

void BGM::resumeSystemMute(const Fade& fade) {
  s_instance->resumeSystemMuteAll(fade);
}

// While the last entry stops, the one before it is the audible one.
bool BGM::isActive() {
  EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return false;
  }
  Voice* voice;
  if (entries.back().stopping == true) {
    if (entries.size() == 1) {
      return false;
    }
    voice = getVoice(entries.end()[-2].tracks[0]);
  }
  else {
    voice = getVoice(entries.back().tracks[0]);
  }
  if (voice == nullptr) {
    return false;
  }
  return voice->isActive();
}

bool BGM::isActive(int track) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return false;
  }
  Voice* voice;
  if (entries.back().stopping == true) {
    if (entries.size() == 1) {
      return false;
    }
    voice = getVoice(entries.end()[-2].tracks[track]);
  }
  else {
    voice = getVoice(entries.back().tracks[track]);
  }
  if (voice == nullptr) {
    return false;
  }
  return voice->isActive();
}

void BGM::startVolume(const Fade& fade, float target) {
  s_instance->startVolumeAll(fade, target);
}

void BGM::startPlayerVolume(const Fade& fade, float target) {
  s_instance->startPlayerVolumeAll(fade, target);
}

float BGM::getVolume() {
  return s_instance->getFirstVolume();
}

void BGM::startTrackVolume(int track, const Fade& fade, float target) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return;
  }
  if (entries.back().stopping == true) {
    if (entries.size() == 1 || !isHeld(entries.end()[-2])) {
      return;
    }
    if (Param* param = getParam(entries.end()[-2].tracks[track])) {
      param->startVolume(fade, target);
    }
    return;
  }
  if (Param* param = getParam(entries.back().tracks[track])) {
    param->startVolume(fade, target);
  }
}

void BGM::startTrackPlayerVolume(int track, const Fade& fade, float target) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return;
  }
  if (entries.back().stopping == true) {
    if (entries.size() == 1 || !isHeld(entries.end()[-2])) {
      return;
    }
    if (Param* param = getParam(entries.end()[-2].tracks[track])) {
      param->startPlayerVolume(fade, target);
    }
    return;
  }
  if (Param* param = getParam(entries.back().tracks[track])) {
    param->startPlayerVolume(fade, target);
  }
}

float BGM::getTrackVolume(int track) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return 0.0f;
  }
  Param* param = getParam(entries.back().tracks[track]);
  if (param == nullptr) {
    return 0.0f;
  }
  return param->getVolume();
}

void BGM::startPitch(const Fade& fade, float target) {
  s_instance->startPitchAll(fade, target);
}

void BGM::startTrackPitch(int track, const Fade& fade, float target) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty() || entries.back().stopping) {
    return;
  }
  if (Param* param = getParam(entries.back().tracks[track])) {
    param->startPitch(fade, target);
  }
}

void BGM::startPan(const Fade& fade, float target) {
  s_instance->startPanAll(fade, target);
}

void BGM::startTrackPan(int track, const Fade& fade, float target) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty() || entries.back().stopping) {
    return;
  }
  if (Param* param = getParam(entries.back().tracks[track])) {
    param->startPan(fade, target);
  }
}

void BGM::startSurroundPan(const Fade& fade, float target) {
  s_instance->startSurroundPanAll(fade, target);
}

float BGM::getSurroundPan() {
  return s_instance->getFirstSurroundPan();
}

void BGM::startTrackSurroundPan(int track, const Fade& fade, float target) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty() || entries.back().stopping) {
    return;
  }
  if (Param* param = getParam(entries.back().tracks[track])) {
    param->startSurroundPan(fade, target);
  }
}

float BGM::getTrackSurroundPan(int track) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return 0.0f;
  }
  Param* param = getParam(entries.back().tracks[track]);
  if (param == nullptr) {
    return 0.0f;
  }
  return param->getSurroundPan();
}

void BGM::startLpfFrequency(const Fade& fade, float target) {
  s_instance->startLpfFrequencyAll(fade, target);
}

// The track offset is added to the frequency.
void BGM::startTrackLpfFrequency(int track, const Fade& fade, float target) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty() || entries.back().stopping) {
    return;
  }
  Track& part = entries.back().tracks[track];
  if (Param* param = getParam(part)) {
    param->startLpfFrequency(fade, target + part.offset);
  }
}

void BGM::startPitchChecked(const Fade& fade, float target) {
  s_instance->startPitchCheckedAll(fade, target);
}

void BGM::startTrackPitchChecked(int track, const Fade& fade,
  float target) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty() || entries.back().stopping) {
    return;
  }
  if (Voice* voice = getVoice(entries.back().tracks[track])) {
    voice->startPitchChecked(fade, target);
  }
}

float BGM::getPlayPosition() {
  return s_instance->getFirstPlayPosition();
}

float BGM::getTrackPlayPosition(int track) {
  EntryList& entries = s_instance->entries_;
  if (entries.empty()) {
    return -1.0f;
  }
  Voice* voice = getVoice(entries.back().tracks[track]);
  if (voice == nullptr || !voice->isActive()) {
    return -1.0f;
  }
  return voice->getPlayPosition(0);
}

void BGM::stopNamed(const char* name, const Fade& fade, float delay,
  float volume) {
  s_instance->stopNamedEntry(name, fade, delay, volume);
}

void BGM::stopPrevious(const Fade& fade) {
  s_instance->stopPreviousEntry(fade);
}

void BGM::startPreviousVolume(const Fade& fade, float target) {
  s_instance->startPreviousVolumeAll(fade, target);
}

float BGM::getPreviousVolume() {
  return s_instance->getFirstPreviousVolume();
}

void BGM::playDataFrom(const char* name, const Fade& fade) {
  s_instance->playDataFromEntry(name, fade, 0, 0.0f, 1.0f);
}

void BGM::dropPrevious() {
  s_instance->dropPreviousEntries();
}

const char* BGM::getPlayingName() {
  EntryList& entries = s_instance->entries_;
  if (!entries.empty()) {
    Entry& entry = entries.back();
    Voice* voice = getVoice(entry.tracks[0]);
    if (voice != nullptr && voice->isActive()) {
      return entry.tracks[0].getName();
    }
  }
  return nullptr;
}

bool BGM::checkFinished() const {
  const EntryList& entries = entries_;
  if (entries.empty()) {
    return true;
  }
  for (const Track& track : entries.back().tracks) {
    Voice* voice = track.voice.get<Voice>();
    if (voice != nullptr && !voice->isPlaying()) {
      return false;
    }
  }
  return true;
}

bool BGM::requestNext(const char* name, const Fade& fade, int track,
  float delay, float volume) {
  bool stopping = isLastStopping();
  if (name == nullptr || stopping || name[0] == '\0') {
    return false;
  }
  return enqueue(Request(name), fade, track, false, delay, volume);
}

void BGM::resumeSystemPauseAll(const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  entry.systemPaused = false;
  if (!entry.paused) {
    eachVoice(entry, [&](Voice* voice) { voice->resumePause(fade); });
  }
}

void BGM::resumeMuteAll(const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  entry.muted = false;
  if (!entry.systemMuted) {
    eachVoice(entry, [&](Voice* voice) {
      voice->resumeMute(Fade(fade.getTime()));
    });
  }
}

void BGM::resumeSystemMuteAll(const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  entry.systemMuted = false;
  if (!entry.muted) {
    eachVoice(entry, [&](Voice* voice) { voice->resumeMute(fade); });
  }
}

void BGM::pause(const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  eachVoice(entry, [&](Voice* voice) { voice->pause(fade, false); });
  entry.paused = true;
}

void BGM::pauseTrack(int track, const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  if (Voice* voice = getVoice(entry.tracks[track])) {
    voice->pause(fade, false);
  }
  entry.paused = true;
}

void BGM::pauseSystemAll(const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  eachVoice(entry, [&](Voice* voice) { voice->pause(fade, false); });
  entry.systemPaused = true;
}

void BGM::muteAll(const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  eachVoice(entry, [&](Voice* voice) { voice->mute(fade, false); });
  entry.muted = true;
}

void BGM::muteSystemAll(const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  eachVoice(entry, [&](Voice* voice) { voice->mute(fade, false); });
  entry.systemMuted = true;
}

void BGM::startPitchCheckedAll(const Fade& fade, float target) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  eachVoice(entries_.back(), [&](Voice* voice) {
    voice->startPitchChecked(fade, target);
  });
}

void BGM::startVolumeAll(const Fade& fade, float target) {
  if (entries_.empty()) {
    return;
  }
  if (entries_.back().stopping == true) {
    if (entries_.size() == 1 || !isHeld(entries_.end()[-2])) {
      return;
    }
    eachParam(entries_.end()[-2], [&](Param* param) {
      param->startVolume(fade, target);
    });
    return;
  }
  eachParam(entries_.back(), [&](Param* param) {
    param->startVolume(fade, target);
  });
}

void BGM::startPlayerVolumeAll(const Fade& fade, float target) {
  if (entries_.empty()) {
    return;
  }
  if (entries_.back().stopping == true) {
    if (entries_.size() == 1 || !isHeld(entries_.end()[-2])) {
      return;
    }
    eachParam(entries_.end()[-2], [&](Param* param) {
      param->startPlayerVolume(fade, target);
    });
    return;
  }
  eachParam(entries_.back(), [&](Param* param) {
    param->startPlayerVolume(fade, target);
  });
}

float BGM::getFirstVolume() const {
  if (entries_.empty()) {
    return 0.0f;
  }
  Voice* voice = getFirstVoice(const_cast<Entry&>(entries_.back()));
  if (voice == nullptr) {
    return 0.0f;
  }
  return static_cast<Param*>(voice)->getVolume();
}

void BGM::startPitchAll(const Fade& fade, float target) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  eachParam(entries_.back(), [&](Param* param) {
    param->startPitch(fade, target);
  });
}

void BGM::startPanAll(const Fade& fade, float target) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  eachParam(entries_.back(), [&](Param* param) {
    param->startPan(fade, target);
  });
}

void BGM::startSurroundPanAll(const Fade& fade, float target) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  eachParam(entries_.back(), [&](Param* param) {
    param->startSurroundPan(fade, target);
  });
}

float BGM::getFirstSurroundPan() const {
  if (entries_.empty()) {
    return 0.0f;
  }
  Voice* voice = getFirstVoice(const_cast<Entry&>(entries_.back()));
  if (voice == nullptr) {
    return 0.0f;
  }
  return static_cast<Param*>(voice)->getSurroundPan();
}

void BGM::startLpfFrequencyAll(const Fade& fade, float target) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  for (Track& track : entries_.back().tracks) {
    if (Param* param = getParam(track)) {
      param->startLpfFrequency(fade, target + track.offset);
    }
  }
}

void BGM::stopPreviousEntry(const Fade& fade) {
  if (!entries_.empty() && entries_.back().stopping == true) {
    eachVoice(entries_.back(), [&](Voice* voice) {
      voice->stop(fade, false, 0.0f);
    });
    entries_.pop_back();
  }
}

void BGM::startPreviousVolumeAll(const Fade& fade, float target) {
  if (!entries_.empty() && entries_.back().stopping == true) {
    eachParam(entries_.back(), [&](Param* param) {
      param->startVolume(fade, target);
    });
  }
}

float BGM::getFirstPreviousVolume() const {
  if (entries_.empty()) {
    return 0.0f;
  }
  if (entries_.back().stopping == true) {
    Voice* voice = getFirstVoice(const_cast<Entry&>(entries_.back()));
    if (voice != nullptr) {
      return static_cast<Param*>(voice)->getVolume();
    }
  }
  return 0.0f;
}

}

namespace snd {

BGM::~BGM() {
  stopTracks(Fade(0.0f));
}

int BGM::getBeat(const fnd::WeakHandle& handle, int tempo) const {
  HandlePtr* object = handle.get();
  if (object == nullptr) {
    return -1;
  }
  Voice* voice = static_cast<Voice*>(object);
  if (!voice->isActive()) {
    return -1;
  }
  // The position is shifted by 66 ms before it is split into beats.
  float position = voice->getPlayPosition(0) + 66.0f;
  if (position <= 66.0f) {
    return -1;
  }
  return static_cast<int>(position / (60000.0f / tempo)) % 4;
}

bool BGM::isStoppingNow() const {
  return isLastStopping();
}

bool BGM::equals(const fnd::String& string, const char* name) {
  return string == name;
}

void BGM::requestPlay(const char* name, const Fade& fade, int track,
  float delay, float volume) {
  if (entries_.empty() || !entries_.back().stopping) {
    start(Request(name), fade, track, -1, delay, volume);
  }
}

void BGM::releaseFirst() {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  if (Voice* voice = getVoice(entries_.back().tracks[0])) {
    voice->release();
  }
}

// A new piece first stops the current one over 500 ms.
bool BGM::requestPlay(const uint32_t* hash, const Fade& fade, int track,
  float delay, float volume) {
  if (!entries_.empty()) {
    if (entries_.back().stopping || *hash == 0) {
      return false;
    }
    stop(Fade(500), false);
  }
  else if (*hash == 0) {
    return false;
  }
  playHash(hash, fade, track, -1, delay, volume);
  entries_.back().unknown_150_ = true;
  return false;
}

void BGM::resumePauseAll(const Fade& fade) {
  if (entries_.empty() || entries_.back().stopping) {
    return;
  }
  Entry& entry = entries_.back();
  entry.paused = false;
  if (!entry.systemPaused) {
    eachVoice(entry, [&](Voice* voice) { voice->resumePause(fade); });
  }
}

void BGM::stopTrackVoice(int track, const Fade& fade) {
  if (!entries_.empty()) {
    if (entries_.back().stopping) {
      return;
    }
    if (track != 0) {
      Track& part = entries_.back().tracks[track];
      if (Voice* voice = getVoice(part)) {
        voice->stop(fade, false, 0.0f);
      }
      part.setName("");
      return;
    }
  }
  else if (track != 0) {
    return;
  }
  stop(fade, false);
}

void BGM::playTrackVoice(int track, const char* label, int position,
  const Fade& fade, float delay, float volume) {
  Track& part = entries_.back().tracks[track];
  part.setName(label);
  part.voice =
    snd::play("BGM", label, fade, position, 0x10001, 0, delay, 1.0f);
  if (Voice* voice = getVoice(part)) {
    voice->setUserFlags(1);
    Param* param = voice;
    part.offset = param->getLpfFrequency();
    param->startVolume(Fade(0.0f), volume);
  }
  refreshVolume();
}

void BGM::stop(const Fade& fade, bool force) {
  if (!force && (entries_.empty() || entries_.back().stopping)) {
    return;
  }
  if (!entries_.empty()) {
    eachVoice(entries_.back(), [&](Voice* voice) {
      voice->stop(fade, false, 0.0f);
    });
    entries_.pop_back();
    unknown_28_ = 0;
  }
}

float BGM::getFirstPlayerVolume() const {
  if (entries_.empty()) {
    return 0.0f;
  }
  Voice* voice = getFirstVoice(const_cast<Entry&>(entries_.back()));
  if (voice == nullptr) {
    return 0.0f;
  }
  return static_cast<Param*>(voice)->getPlayerVolume();
}

const char* BGM::getFirstName() const {
  if (!entries_.empty()) {
    Entry& entry = const_cast<Entry&>(entries_.back());
    Voice* voice = getVoice(entry.tracks[0]);
    if (voice != nullptr && voice->isActive()) {
      return entry.tracks[0].getName();
    }
  }
  return nullptr;
}

fnd::String BGM::getFirstNameString() const {
  if (!entries_.empty()) {
    Entry& entry = const_cast<Entry&>(entries_.back());
    Voice* voice = getVoice(entry.tracks[0]);
    if (voice != nullptr && voice->isActive()) {
      return entry.tracks[0].getNameString();
    }
  }
  return fnd::String("");
}

void BGM::resetVolume() {
  volume_ = 1.0f;
}

}

namespace snd {

void BGM::playNewTrack(int track, const char* label, const Fade& fade,
  int kind, float delay, float volume) {
  if (!entries_.empty()) {
    Track& part = entries_.back().tracks[track];
    part.setName(label);
    part.voice =
      snd::play("BGM", label, fade, kind, 0x10001, 0, delay, 1.0f);
    if (Voice* voice = getVoice(part)) {
      Param* param = voice;
      param->startVolume(Fade(0.0f), volume);
      voice->setUserFlags(1);
      part.offset = param->getLpfFrequency();
    }
  }
  refreshVolume();
}

// A track that already plays the name is kept, another name is faded out
// over 500 ms first.
void BGM::startTrack(int track, const char* name, const Fade& fade,
  int kind, float delay, float volume) {
  if (!entries_.empty()) {
    if (entries_.back().stopping) {
      return;
    }
    if (track != 0) {
      Entry& entry = entries_.back();
      if (entry.paused || entry.systemPaused || entry.muted ||
        entry.systemMuted) {
        return;
      }
      Track& part = entry.tracks[track];
      if (part.voice.get() != nullptr) {
        if (equals(part.getNameString(), name)) {
          return;
        }
        stopTrackVoice(track, Fade(500.0f));
      }
      playNewTrack(track, name, fade, kind, delay, volume);
      return;
    }
  }
  else if (track != 0) {
    return;
  }
  requestNext(name, fade, kind, delay, volume);
}

void BGM::swapTrack(int track, const char* name, const Fade& fade, int kind,
  float delay, float volume) {
  if (!entries_.empty()) {
    if (entries_.back().stopping) {
      return;
    }
    if (track != 0) {
      Entry& entry = entries_.back();
      if (entry.paused || entry.systemPaused || entry.muted ||
        entry.systemMuted) {
        return;
      }
      Track& part = entry.tracks[track];
      if (part.voice.get() != nullptr) {
        if (equals(part.getNameString(), name)) {
          return;
        }
        stopTrackVoice(track, Fade(500.0f));
      }
      // The new track starts where the first one is.
      playTrackVoice(track, name, static_cast<int>(getFirstPlayPosition()),
        fade, delay, volume);
      return;
    }
  }
  else if (track != 0) {
    return;
  }
  requestNext(name, fade, kind, delay, volume);
}

void BGM::appendTracks(const Request& request, const Fade& fade,
  float delay, float volume) {
  if (entries_.empty()) {
    return;
  }
  Entry& entry = entries_.back();
  if (entry.stopping || entry.paused || entry.systemPaused || entry.muted ||
    entry.systemMuted || request.count == 0) {
    return;
  }
  for (size_t i = 0; i < request.count; i++) {
    if (!equals(entry.tracks[i].getNameString(), request.names[i])) {
      HandlePtr* object = entry.tracks[0].voice.get();
      if (object != nullptr) {
        Voice* voice = static_cast<Voice*>(object);
        int position = static_cast<int>(voice->getPlayPosition(0));
        stop(fade, false);
        playList(request, position, fade, delay, volume);
        entries_.back().unknown_150_ = true;
      }
      return;
    }
  }
}

}

namespace snd {

// Only voices with feature 14 follow the BGM volume, and without force only
// while their actor volume is nearly full.
void BGM::setVolume(const Fade& fade, bool force, float volume) {
  volume_ = volume;
  if (entries_.empty()) {
    return;
  }
  for (Track& track : entries_.back().tracks) {
    Voice* voice = getVoice(track);
    if (voice == nullptr || !voice->hasFeature(14)) {
      continue;
    }
    Param* param = voice;
    float actor = param->getActorVolume();
    if (force || actor > 0.9f) {
      param->startFadeVolume(fade, volume);
    }
  }
}

void BGM::refreshVolume() {
  if (entries_.empty()) {
    return;
  }
  for (Track& track : entries_.back().tracks) {
    Voice* voice = getVoice(track);
    if (voice == nullptr || !voice->hasFeature(14)) {
      continue;
    }
    Param* param = voice;
    if (param->getActorVolume() > 0.9f) {
      param->startFadeVolume(Fade(0.0f), volume_);
    }
  }
}

}
