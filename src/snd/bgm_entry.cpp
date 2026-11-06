#include "snd/game.hpp"

#include "snd/api.hpp"
#include "snd/data.hpp"
#include "snd/seq_voice.hpp"
#include "snd/voice.hpp"

namespace snd {

namespace {

Voice* getVoice(const BGM::Track& track) {
  return track.voice.get<Voice>();
}

template <typename F>
void eachParam(BGM::Entry& entry, F function) {
  for (BGM::Track& track : entry.tracks) {
    if (Voice* voice = getVoice(track)) {
      function(static_cast<Param*>(voice));
    }
  }
}

bool isHeld(const BGM::Entry& entry) {
  return entry.paused || entry.systemPaused || entry.muted ||
    entry.systemMuted;
}


bool isAudibleVoice(Voice* voice) {
  return voice != nullptr && voice->isActive() && !voice->isPaused() &&
    !voice->isMuted();
}

// A started track follows the BGM volume through user flag 1 and keeps its
// LPF frequency as the offset of the track.
void setupTrack(BGM::Track& track, float volume) {
  if (Voice* voice = getVoice(track)) {
    voice->setUserFlags(1);
    Param* param = voice;
    track.offset = param->getLpfFrequency();
    param->startVolume(Fade(0.0f), volume);
  }
}

void fadeOutTrack(BGM::Track& track) {
  if (track.voice.isValid()) {
    track.voice.get<Voice>()->stop(Fade(500), false, 0.0f);
  }
}

// The beat counters assume a 66 ms latency of the play position.
float getLatePosition(const fnd::WeakHandle& handle) {
  Voice* voice = handle.get<Voice>();
  if (voice == nullptr || !voice->isActive()) {
    return 0.0f;
  }
  return voice->getPlayPosition(0) + 66.0f;
}

int getBar(const fnd::WeakHandle& handle, int tempo) {
  float position = getLatePosition(handle);
  if (position > 66.0f) {
    return static_cast<int>(position / (60000.0f / tempo)) / 4;
  }
  return -1;
}

int getBeat(const fnd::WeakHandle& handle, int tempo) {
  float position = getLatePosition(handle);
  if (position > 66.0f) {
    return static_cast<int>(position / (60000.0f / tempo)) % 4;
  }
  return -1;
}

int getHalfBeat(const fnd::WeakHandle& handle, int tempo) {
  float position = getLatePosition(handle);
  if (position > 66.0f) {
    return static_cast<int>(position / (60000.0f / (tempo * 2.0f))) % 8;
  }
  return -1;
}

[[gnu::always_inline]] inline void updateBeats(BGM::Entry& entry,
  const BGM::Track& track) {
  entry.unknown_168_ = getBar(track.voice, entry.data->tempo);
  entry.unknown_16c_ = getBeat(track.voice, entry.data->tempo);
  entry.unknown_170_ = getHalfBeat(track.voice, entry.data->tempo);
}

}

bool BGM::isAnyDelayed() const {
  if (entries_.empty()) {
    return false;
  }
  for (const Track& track : entries_.back().tracks) {
    Voice* voice = getVoice(track);
    if (voice != nullptr && voice->isDelayed()) {
      return true;
    }
  }
  return false;
}

bool BGM::isFirstActive() const {
  if (entries_.empty()) {
    return false;
  }
  Voice* voice;
  if (entries_.back().stopping == true) {
    if (entries_.size() == 1) {
      return false;
    }
    voice = getVoice(entries_.end()[-2].tracks[0]);
  }
  else {
    voice = getVoice(entries_.back().tracks[0]);
  }
  if (voice == nullptr) {
    return false;
  }
  return voice->isActive();
}

fnd::WeakHandle BGM::getFirstHandle() const {
  if (entries_.empty()) {
    return handle_;
  }
  return entries_.back().tracks[0].voice;
}

void BGM::startActorVolumeAll(const Fade& fade, float target) {
  if (entries_.empty()) {
    return;
  }
  if (entries_.back().stopping == true) {
    if (entries_.size() == 1 || !isHeld(entries_.end()[-2])) {
      return;
    }
    eachParam(entries_.end()[-2], [&](Param* param) {
      param->startActorVolume(fade, target);
    });
    return;
  }
  eachParam(entries_.back(), [&](Param* param) {
    param->startActorVolume(fade, target);
  });
}

bool BGM::isAudible() const {
  if (entries_.empty()) {
    return false;
  }
  for (const Track& track : entries_.back().tracks) {
    if (isAudibleVoice(getVoice(track))) {
      return true;
    }
  }
  return false;
}

float BGM::getAudibleStartOffset() const {
  if (isAudible() && !entries_.empty()) {
    for (const Track& track : entries_.back().tracks) {
      Voice* voice = getVoice(track);
      if (isAudibleVoice(voice)) {
        return voice->getStartOffset();
      }
    }
  }
  return 0.0f;
}

// A sequence reports the position of its first child.
float BGM::getFirstPlayPosition() const {
  if (!entries_.empty()) {
    const Track& track = entries_.back().tracks[0];
    Voice* voice = getVoice(track);
    if (voice != nullptr && voice->isActive()) {
      if (voice->isSequence() != true) {
        return voice->getPlayPosition(0);
      }
      if (SeqVoice* sequence = track.voice.cast<SeqVoice>()) {
        fnd::WeakHandle child = sequence->getHandle(0);
        if (Voice* first = child.get<Voice>()) {
          return first->getPlayPosition(0);
        }
        return voice->getPlayPosition(0);
      }
    }
  }
  return -1.0f;
}

void BGM::requestData(const char* name, int track, int kind) {
  if (!entries_.empty() && entries_.back().stopping) {
    return;
  }
  const data::CtrlBgmData* data = data::findCtrlBgmData(name);
  if (data == nullptr) {
    return;
  }
  if (entries_.empty() || isHeld(entries_.back())) {
    Request request(data->tracks[0]);
    for (int i = 1; i < 6; i++) {
      if (data->tracks[i] != nullptr) {
        request.add(data->tracks[i]);
      }
    }
    start(request, Fade(0.0f), kind, track, 0.0f, 1.0f);
    Entry& entry = entries_.back();
    entry.data = data;
    entry.track = track;
    entry.nextTrack = track;
    state_ = 1;
  }
}

// A held piece is only replaced by a different one, a playing piece keeps
// the tracks that already play their name.
void BGM::start(const Request& request, const Fade& fade, int kind,
  int index, float delay, float volume) {
  if (entries_.empty()) {
    startEntry(request, fade, kind, index, delay, volume);
    return;
  }
  Entry& entry = entries_.back();
  if (entry.stopping) {
    return;
  }
  if (isHeld(entries_.back())) {
    for (uint32_t i = 0; i < request.count; i++) {
      if (!(entry.tracks[i].getNameString() == request.names[i])) {
        startEntry(request, fade, kind, index, delay, volume);
        return;
      }
    }
    return;
  }
  if (request.count != 0) {
    if (!(entry.tracks[0].getNameString() == request.names[0])) {
      stop(Fade(500), false);
      startEntry(request, fade, kind, index, delay, volume);
      return;
    }
    for (uint32_t i = 1; i < request.count; i++) {
      if (!(entry.tracks[i].getNameString() == request.names[i])) {
        replaceEntry(request, fade, kind, -1, delay, volume);
        return;
      }
    }
  }
  for (uint32_t i = request.count; i < 6; i++) {
    Track& track = entry.tracks[i];
    fadeOutTrack(track);
    track.setName("");
  }
}

// Only the tracks named by the index start at the position of the kind,
// a negative index means all of them.
void BGM::startEntry(const Request& request, const Fade& fade, int kind,
  int index, float delay, float volume) {
  Entry entry;
  if (request.count != 0) {
    Track& first = entry.tracks[0];
    first.setName(request.names[0]);
    first.voice = playDirect("BGM", request.names[0], fade,
      index < 1 ? kind : 0, 0x10001, 0, delay, 1.0f);
    setupTrack(first, volume);
    for (uint32_t i = 1; i < request.count; i++) {
      Track& track = entry.tracks[i];
      track.setName(request.names[i]);
      track.voice = playDirect("BGM", request.names[i], fade,
        index < 0 || static_cast<uint32_t>(index) == i ? kind : 0, 0x10001,
        0, delay, 1.0f);
      setupTrack(track, 0.0f);
    }
  }
  entries_.push_back(entry);
  refreshVolume();
}

void BGM::replaceEntry(const Request& request, const Fade& fade, int kind,
  int index, float delay, float volume) {
  if (request.count == 0) {
    refreshVolume();
    return;
  }
  Entry& entry = entries_.back();
  Track& first = entry.tracks[0];
  if (!(first.getNameString() == request.names[0])) {
    fadeOutTrack(first);
    first.setName(request.names[0]);
    first.voice = playDirect("BGM", request.names[0], fade,
      index < 1 ? kind : 0, 0x10001, 0, delay, 1.0f);
    setupTrack(first, volume);
  }
  for (uint32_t i = 1; i < request.count; i++) {
    Track& track = entry.tracks[i];
    if (!(track.getNameString() == request.names[i])) {
      fadeOutTrack(track);
      track.setName(request.names[i]);
      track.voice = playDirect("BGM", request.names[i], fade,
        index < 0 || static_cast<uint32_t>(index) == i ? kind : 0, 0x10001,
        0, delay, 1.0f);
      setupTrack(track, 0.0f);
    }
  }
  refreshVolume();
}

// With replace, a held piece is resumed over two seconds instead.
bool BGM::enqueue(const Request& request, const Fade& fade, int kind,
  bool replace, float delay, float volume) {
  if (!entries_.empty()) {
    Entry& entry = entries_.back();
    if (entry.stopping) {
      return false;
    }
    if (entry.paused || entry.systemPaused || entry.muted ||
      entry.systemMuted) {
      if (replace) {
        if (entry.paused) {
          resumePauseAll(Fade(2000.0f));
        }
        if (entry.systemPaused) {
          resumeSystemPauseAll(Fade(2000.0f));
        }
        if (entry.muted) {
          resumeMuteAll(Fade(2000.0f));
        }
        if (entry.systemMuted) {
          resumeSystemMuteAll(Fade(2000.0f));
        }
        entries_.back().unknown_150_ = true;
        return false;
      }
      for (uint32_t i = 0; i < request.count; i++) {
        if (!(entry.tracks[i].getNameString() == request.names[i])) {
          startEntry(request, fade, kind, -1, delay, volume);
          entries_.back().unknown_150_ = true;
          return false;
        }
      }
      return true;
    }
    if (request.count != 0) {
      if (!(entry.tracks[0].getNameString() == request.names[0])) {
        stop(Fade(500), false);
        startEntry(request, fade, kind, -1, delay, volume);
        entries_.back().unknown_150_ = true;
        return false;
      }
      for (uint32_t i = 1; i < request.count; i++) {
        if (!(entry.tracks[i].getNameString() == request.names[i])) {
          replaceEntry(request, fade, kind, -1, delay, volume);
          entries_.back().unknown_150_ = true;
          return false;
        }
      }
    }
    for (uint32_t i = request.count; i < 6; i++) {
      Track& track = entry.tracks[i];
      fadeOutTrack(track);
      track.setName("");
    }
    return true;
  }
  startEntry(request, fade, kind, -1, delay, volume);
  entries_.back().unknown_150_ = true;
  return false;
}

void BGM::playDataFromEntry(const char* name, const Fade& fade, int kind,
  float delay, float volume) {
  bool stopping = isLastStopping();
  if (name == nullptr || stopping) {
    return;
  }
  const data::CtrlBgmData* data = data::findCtrlBgmData(name);
  if (data == nullptr) {
    return;
  }
  if (!entries_.empty()) {
    Entry& entry = entries_.back();
    if (isHeld(entry)) {
      if (entry.tracks[0].getNameString() == data->tracks[0]) {
        return;
      }
    }
    else {
      if (equals(entry.tracks[0].getNameString(), data->tracks[0])) {
        return;
      }
      stop(Fade(500), false);
    }
  }
  startEntry(Request(data->tracks[0]), fade, kind, -1, delay, volume);
  Entry& entry = entries_.back();
  entry.unknown_150_ = true;
  entry.fromData = true;
  entry.data = data;
}

void BGM::playList(const Request& request, int position, const Fade& fade,
  float delay, float volume) {
  Entry entry;
  if (request.count != 0) {
    Track& first = entry.tracks[0];
    first.setName(request.names[0]);
    first.voice = snd::play("BGM", request.names[0], fade, position, 0x10001,
      0, delay, 1.0f);
    setupTrack(first, volume);
    for (uint32_t i = 1; i < request.count; i++) {
      Track& track = entry.tracks[i];
      track.setName(request.names[i]);
      track.voice = snd::play("BGM", request.names[i], fade, position,
        0x10001, 0, delay, 1.0f);
      setupTrack(track, 0.0f);
    }
  }
  entries_.push_back(entry);
  refreshVolume();
}

void BGM::playSingle(const char* label, const Fade& fade, int kind,
  float delay, float volume) {
  Entry entry;
  Track& track = entry.tracks[0];
  track.setName(label);
  track.voice = snd::play("BGM", label, fade, kind, 0x10001, 0, delay, 1.0f);
  if (Voice* voice = getVoice(track)) {
    Param* param = voice;
    param->startVolume(Fade(0.0f), volume);
    voice->setUserFlags(1);
    track.offset = param->getLpfFrequency();
  }
  entries_.push_back(entry);
  refreshVolume();
}

// A piece started by hash is named after the hash.
void BGM::playHash(const uint32_t* hash, const Fade& fade, int kind,
  int index, float delay, float volume) {
  Entry entry;
  Track& first = entry.tracks[0];
  {
    fnd::String name;
    name.format("[ %08x:%08x ]", hash[0], hash[1]);
    first.setName(name.c_str());
  }
  first.voice = playDirect("BGM", hash, fade, index <= 0 ? kind : 0, 0x10001,
    0, delay, 1.0f);
  setupTrack(first, volume);
  entries_.push_back(entry);
  refreshVolume();
}

// The new piece is pushed as stopping, so the one before it stays audible.
void BGM::stopNamedEntry(const char* name, const Fade& fade, float delay,
  float volume) {
  if (!entries_.empty()) {
    Entry& entry = entries_.back();
    if (entry.stopping) {
      return;
    }
    if (!(entry.paused || entry.systemPaused || entry.muted)) {
      if (entry.tracks[0].getNameString() == name) {
        return;
      }
      stop(Fade(0.0f), false);
    }
  }
  playSingle(name, fade, 0, 0.0f, 1.0f);
  entries_.back().stopping = true;
}

// Every piece but the last one is killed.
void BGM::dropPreviousEntries() {
  if (entries_.size() < 2) {
    return;
  }
  Entry last = entries_.back();
  entries_.pop_back();
  while (!entries_.empty()) {
    Entry entry = entries_.back();
    for (Track& track : entry.tracks) {
      if (Voice* voice = getVoice(track)) {
        voice->kill();
      }
    }
    entries_.pop_back();
  }
  entries_.push_back(last);
}

// The elevator flag raises the actor volume of silent tracks again and fades
// in their second child.
void BGM::update() {
  updateState();
  if (entries_.empty()) {
    return;
  }
  Entry& entry = entries_.back();
  handle_ = entry.tracks[0].voice;
  if (entry.fromData == true) {
    if (entry.data != nullptr && entry.tracks[0].voice.isValid()) {
      updateBeats(entry, entry.tracks[0]);
    }
  }
  else if (entry.data != nullptr) {
    Track& track = entry.tracks[static_cast<uint32_t>(entry.track)];
    if (track.voice.isValid()) {
      updateBeats(entry, track);
    }
  }
  if (entry.elevator == true) {
    bool raised = false;
    for (Track& track : entry.tracks) {
      Voice* voice = getVoice(track);
      if (voice == nullptr) {
        continue;
      }
      Param* param = voice;
      if (param->getActorVolume() == 0.0f) {
        param->startActorVolume(Fade(0.0f), 1.0f);
        raised = true;
        fnd::WeakHandle handle = voice->getHandle(1);
        if (Voice* child = handle.get<Voice>()) {
          Param* childParam = child;
          childParam->startPlayerVolume(Fade(0.0f), 0.0f);
          Fade fade("FadeTime_BGM_Elevator_Up");
          childParam->startPlayerVolume(Fade(fade.getTime()), 1.0f);
        }
      }
    }
    if (raised) {
      entry.elevator = false;
      refreshVolume();
    }
  }
}

namespace {

bool isAnyActive(BGM::Entry& entry) {
  for (BGM::Track& track : entry.tracks) {
    Voice* voice = getVoice(track);
    if (voice != nullptr && voice->isActive()) {
      return true;
    }
  }
  return false;
}

bool isAllPlaying(BGM::Entry& entry) {
  for (BGM::Track& track : entry.tracks) {
    Voice* voice = getVoice(track);
    if (voice != nullptr && !voice->isPlaying()) {
      return false;
    }
  }
  return true;
}

Param* getTrackParam(BGM::Track& track) {
  return track.voice.get<Voice>();
}

}

// Entries started by hash wait until every track is ready. A requested
// track change waits for the beat its mode asks for, then plays the bridge
// and fades the old track out once the bridge beats ran out.
void BGM::updateState() {
  if (getListenerPosition().y <= -100000.0f) {
    return;
  }
  if (entries_.empty()) {
    return;
  }
  Entry& entry = entries_.back();
  if (entry.unknown_150_ == true && isAllPlaying(entry)) {
    entry.unknown_150_ = false;
    for (Track& track : entry.tracks) {
      if (Voice* voice = getVoice(track)) {
        voice->release();
      }
    }
  }
  const data::CtrlBgmData* data = entry.data;
  if (data == nullptr || entry.fromData == true) {
    while (!entries_.empty()) {
      Entry& last = entries_.back();
      if (isAnyActive(last)) {
        break;
      }
      bool stopping = last.stopping;
      entries_.pop_back();
      if (stopping == true) {
        resumeMuteAll(Fade(1000));
      }
    }
    return;
  }
  if (state_ == 4) {
    uint32_t track = entry.track;
    Track& next = entry.tracks[static_cast<uint32_t>(entry.nextTrack)];
    if (!next.voice.isValid()) {
      stop(Fade(0.0f), false);
      return;
    }
    Track& current = entry.tracks[track];
    if (!entry.loop) {
      int beat = getBeat(current.voice, entry.data->tempo);
      if (beat >= 0) {
        if (entry.unknown_16c_ == beat) {
          return;
        }
        if (--entry.bridgeBeats == 0) {
          getTrackParam(current)->startVolume(
            Fade(static_cast<float>(
              entry.data->fadeTimes[static_cast<int>(track)])), 0.0f);
        }
        if (--entry.bridgeWaits > 0) {
          return;
        }
      }
    }
    getTrackParam(current)->startVolume(
      Fade(static_cast<float>(
        entry.data->fadeTimes[static_cast<int>(track)])), 0.0f);
    next.voice.get<Voice>()->release();
    getTrackParam(next)->startVolume(Fade(0.0f), 1.0f);
    entry.track = entry.nextTrack;
    state_ = 2;
    return;
  }
  if (state_ == 3) {
    Track& current = entry.tracks[static_cast<uint32_t>(entry.track)];
    int beat = getBeat(current.voice, data->tempo);
    if (beat >= 0) {
      int track = entry.track;
      entry.fadeFrame += 1.0f;
      if (entry.fadeFrame < 600.0f) {
        switch (entry.data->changeModes[track]) {
        case 0:
          if (beat == 3 || entry.unknown_16c_ != 3) {
            return;
          }
          break;
        case 2:
          if ((entry.unknown_16c_ | 2) != 3 || entry.unknown_16c_ == beat) {
            return;
          }
          break;
        case 1:
          if (entry.unknown_16c_ == beat) {
            return;
          }
          break;
        default:
          break;
        }
      }
    }
    if (!entry.loop) {
      fnd::WeakHandle bridge;
      int track = entry.track;
      if (const char* label = entry.data->bridges[track]) {
        bridge = snd::play("BGM_Bridge", label, Fade(0.0f), 0, 0x10001, 0,
          0.0f, 1.0f);
      }
      if (bridge.isValid()) {
        bridge.get<Voice>()->setUserFlags(1);
      }
      entry.bridgeBeats = entry.data->bridgeBeats[track];
      entry.bridgeWaits = entry.data->bridgeWaits[track];
      if (entry.bridgeBeats == 0) {
        getTrackParam(current)->startVolume(
          Fade(static_cast<float>(entry.data->fadeTimes[track])), 0.0f);
      }
    }
    state_ = 4;
    return;
  }
  if (state_ == 1) {
    for (Track& track : entry.tracks) {
      if (track.voice.isValid() && !track.voice.get<Voice>()->isPlaying()) {
        return;
      }
    }
    Track& current = entry.tracks[static_cast<uint32_t>(entry.track)];
    if (current.voice.isValid()) {
      current.voice.get<Voice>()->release();
      getTrackParam(current)->startVolume(Fade(0.0f), 1.0f);
    }
    entry.unknown_150_ = false;
    state_ = 2;
  }
}

}
