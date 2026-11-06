#include "snd/api.hpp"
#include "snd/script_commands.hpp"
#include "snd/fade.hpp"
#include "snd/game.hpp"

namespace snd::debug {

void addVoiceSend(const Text& name) {
  snd::addVoiceSend(name.c_str());
  openBlock();
}

void addBgmSend(const Text& name) {
  snd::addBgmSend(name.c_str());
  openBlock();
}

void addSeSend(const Text& name) {
  snd::addSeSend(name.c_str());
  openBlock();
}

auto updateMixer() {
  openBlock();
  return snd::updateMixer();
}

void loadSoundData(const Text& name) {
  snd::loadSoundData(name.c_str());
  openBlock();
}

void bgmPlayData(const Text& name, int track, int kind) {
  BGM::playData(name.c_str(), track, kind);
  openBlock();
}

void bgmPlay(const Text& name, int track, float time, float delay,
  float volume) {
  BGM::play(name.c_str(), Fade(time), track, delay, volume);
  openBlock();
}

auto bgmIsFinished() {
  openBlock();
  return BGM::isFinished();
}

void bgmPlayNext(const Text& name, int track, float time, float delay,
  float volume) {
  BGM::playNext(name.c_str(), Fade(time), track, delay, volume);
  openBlock();
}

void bgmQueue(const Text& name, int track, float time, float delay,
  float volume) {
  BGM::queue(name.c_str(), Fade(time), track, delay, volume);
  openBlock();
}

void bgmPlayTrack(int track, const Text& name, int kind, float time,
  float delay, float volume) {
  BGM::playTrack(track, name.c_str(), Fade(time), kind, delay, volume);
  openBlock();
}

void bgmAddTracks(const Text& name, float time, float delay, float volume) {
  BGM::addTracks(name.c_str(), Fade(time), delay, volume);
  openBlock();
}

void bgmReplaceTrack(int track, const Text& name, int kind, float time,
  float delay, float volume) {
  BGM::replaceTrack(track, name.c_str(), Fade(time), kind, delay, volume);
  openBlock();
}

void bgmStop(float time) {
  BGM::stop(Fade(time));
  openBlock();
}

void bgmStopTrack(int track, float time) {
  BGM::stopTrack(track, Fade(time));
  openBlock();
}

void bgmMute(float time) {
  BGM::mute(Fade(time));
  openBlock();
}

void bgmMuteTrack(int track, float time) {
  BGM::muteTrack(track, Fade(time));
  openBlock();
}

void bgmResumeMute(float time) {
  BGM::resumeMute(Fade(time));
  openBlock();
}

void bgmResumeMuteTrack(int track, float time) {
  BGM::resumeMuteTrack(track, Fade(time));
  openBlock();
}

void bgmMuteSystem(float time) {
  BGM::muteSystem(Fade(time));
  openBlock();
}

void bgmResumeSystemMute(float time) {
  BGM::resumeSystemMute(Fade(time));
  openBlock();
}

void bgmPauseSystem(float time) {
  BGM::pauseSystem(Fade(time));
  openBlock();
}

void bgmResumeSystemPause(float time) {
  BGM::resumeSystemPause(Fade(time));
  openBlock();
}

auto bgmIsActive() {
  openBlock();
  return BGM::isActive();
}

void bgmStartVolume(float target, float time) {
  BGM::startVolume(Fade(time), target);
  openBlock();
}

auto bgmGetVolume() {
  openBlock();
  return BGM::getVolume();
}

void bgmStartTrackVolume(int track, float target, float time) {
  BGM::startTrackVolume(track, Fade(time), target);
  openBlock();
}

void bgmStartPlayerVolume(float target, float time) {
  BGM::startPlayerVolume(Fade(time), target);
  openBlock();
}

void bgmStartTrackPlayerVolume(int track, float target, float time) {
  BGM::startTrackPlayerVolume(track, Fade(time), target);
  openBlock();
}

void bgmStartPitch(float target, float time) {
  BGM::startPitch(Fade(time), target);
  openBlock();
}

void bgmStartTrackPitch(int track, float target, float time) {
  BGM::startTrackPitch(track, Fade(time), target);
  openBlock();
}

void bgmStartPan(float target, float time) {
  BGM::startPan(Fade(time), target);
  openBlock();
}

void bgmStartTrackPan(int track, float target, float time) {
  BGM::startTrackPan(track, Fade(time), target);
  openBlock();
}

void bgmStartSurroundPan(float target, float time) {
  BGM::startSurroundPan(Fade(time), target);
  openBlock();
}

auto bgmGetSurroundPan() {
  openBlock();
  return BGM::getSurroundPan();
}

void bgmStartTrackSurroundPan(int track, float target, float time) {
  BGM::startTrackSurroundPan(track, Fade(time), target);
  openBlock();
}

void bgmStartLpfFrequency(float target, float time) {
  BGM::startLpfFrequency(Fade(time), target);
  openBlock();
}

void bgmStartTrackLpfFrequency(int track, float target, float time) {
  BGM::startTrackLpfFrequency(track, Fade(time), target);
  openBlock();
}

void bgmStartPitchChecked(float target, float time) {
  BGM::startPitchChecked(Fade(time), target);
  openBlock();
}

void bgmStartTrackPitchChecked(int track, float target, float time) {
  BGM::startTrackPitchChecked(track, Fade(time), target);
  openBlock();
}

auto bgmGetPlayPosition() {
  openBlock();
  return BGM::getPlayPosition();
}

void bgmStopNamed(const Text& name, float time, float delay, float volume) {
  BGM::stopNamed(name.c_str(), Fade(time), delay, volume);
  openBlock();
}

void bgmStopPrevious(float time) {
  BGM::stopPrevious(Fade(time));
  openBlock();
}

auto bgmIsStopping() {
  openBlock();
  return BGM::isStopping();
}

void bgmStartPreviousVolume(float target, float time) {
  BGM::startPreviousVolume(Fade(time), target);
  openBlock();
}

auto bgmGetPreviousVolume() {
  openBlock();
  return BGM::getPreviousVolume();
}

auto bgmGetUnknown170() {
  openBlock();
  return BGM::getUnknown170();
}

auto bgmGetUnknown16c() {
  openBlock();
  return BGM::getUnknown16c();
}

auto bgmGetUnknown168() {
  openBlock();
  return BGM::getUnknown168();
}

void bgmPlayDataFrom(const Text& name, float time) {
  BGM::playDataFrom(name.c_str(), Fade(time));
  openBlock();
}

void gameSetFieldGroup(const Text& name) {
  Game::setFieldGroup(name.c_str());
  openBlock();
}

void gameSetFieldByName(const Text& name) {
  Game::setFieldByName(name.c_str());
  openBlock();
}

void gameSetSurroundByName(const Text& name) {
  Game::setSurroundByName(name.c_str());
  openBlock();
}

void stopBuses(float value) {
  snd::stopBuses(Fade(0.0f), 11, value);
  openBlock();
}

void setBusEffect(const Text& name) {
  snd::setBusEffect(name.c_str(), 0);
  openBlock();
}

void envPlayField(const Text& name) {
  Env::playField(name.c_str());
  openBlock();
}

void envPlayFieldSub(const Text& name) {
  Env::playFieldSub(name.c_str());
  openBlock();
}

void envStopAll(float time) {
  Env::stopAll(Fade(time));
  openBlock();
}

void envStartPitchChecked(float target, float time) {
  Env::startPitchChecked(Fade(time), target);
  openBlock();
}

void ffPlayOver(const Text& name, float time) {
  FF::playOver(name.c_str(), Fade(time));
  openBlock();
}

void ffPlayPausing(const Text& name, float time) {
  FF::playPausing(name.c_str(), Fade(time));
  openBlock();
}

void ffPlayDucking(const Text& name, float volume, float time) {
  FF::playDucking(name.c_str(), Fade(time), volume);
  openBlock();
}

void ffPlay(const Text& name, float time) {
  FF::play(name.c_str(), Fade(time));
  openBlock();
}

auto ffIsPlaying() {
  openBlock();
  return FF::isPlaying();
}

void ffStartVolume(float target, float time) {
  FF::startVolume(Fade(time), target);
  openBlock();
}

void ffStartPitch(float target, float time) {
  FF::startPitch(Fade(time), target);
  openBlock();
}

void ffStartPan(float target, float time) {
  FF::startPan(Fade(time), target);
  openBlock();
}

void ffStartLpfFrequency(float target, float time) {
  FF::startLpfFrequency(Fade(time), target);
  openBlock();
}

void voiceStop(const fnd::WeakHandle& voice, float time) {
  snd::stop(voice, Fade(time));
  openBlock();
}

void voiceStopNamed(const fnd::WeakHandle& voice, const Text& fade) {
  snd::stop(voice, Fade(fade.c_str()));
  openBlock();
}

void voiceForceStop(const fnd::WeakHandle& voice, float time) {
  snd::forceStop(voice, Fade(time));
  openBlock();
}

void voiceForceStopNamed(const fnd::WeakHandle& voice, const Text& fade) {
  snd::forceStop(voice, Fade(fade.c_str()));
  openBlock();
}

void stopAll(float time) {
  snd::stopAll(Fade(time));
  openBlock();
}

void stopAllNamed(const Text& fade) {
  snd::stopAll(Fade(fade.c_str()));
  openBlock();
}

void voiceStartDistanceVolume(const fnd::WeakHandle& voice,
  float target, float time) {
  snd::startDistanceVolume(voice, Fade(time), target);
  openBlock();
}

void voiceStartDistanceVolumeNamed(const fnd::WeakHandle& voice,
  const Text& fade, float target) {
  snd::startDistanceVolume(voice, Fade(fade.c_str()), target);
  openBlock();
}

void voiceStartVolume(const fnd::WeakHandle& voice, float target, float time) {
  snd::startVolume(voice, Fade(time), target);
  openBlock();
}

void voiceStartVolumeNamed(const fnd::WeakHandle& voice,
  const Text& fade, float target) {
  snd::startVolume(voice, Fade(fade.c_str()), target);
  openBlock();
}

void voiceStartSurroundPan(const fnd::WeakHandle& voice,
  float target, float time) {
  snd::startSurroundPan(voice, Fade(time), target);
  openBlock();
}

void voiceStartPitch(const fnd::WeakHandle& voice, float target, float time) {
  snd::startPitch(voice, Fade(time), target);
  openBlock();
}

void voiceStartPan(const fnd::WeakHandle& voice, float target, float time) {
  snd::startPan(voice, Fade(time), target);
  openBlock();
}

void voicePause(const fnd::WeakHandle& voice, float time) {
  snd::pause(voice, Fade(time));
  openBlock();
}

void voiceResumePause(const fnd::WeakHandle& voice, float time) {
  snd::resumePause(voice, Fade(time));
  openBlock();
}

void voiceMute(const fnd::WeakHandle& voice, float time) {
  snd::mute(voice, Fade(time));
  openBlock();
}

void voiceResumeMute(const fnd::WeakHandle& voice, float time) {
  snd::resumeMute(voice, Fade(time));
  openBlock();
}

void voiceStartMainSend(const fnd::WeakHandle& voice,
  float target, float time) {
  snd::startMainSend(voice, Fade(time), target);
  openBlock();
}

void voiceStartLpfFrequency(const fnd::WeakHandle& voice,
  float target, float time) {
  snd::startLpfFrequency(voice, Fade(time), target);
  openBlock();
}

void startSlotVolume(const Text& name, float target, float time) {
  snd::startSlotVolume(name.c_str(), Fade(time), target);
  openBlock();
}

void fadeSlot(const Text& name, float target, float time) {
  snd::fadeSlot(name.c_str(), Fade(time), target);
  openBlock();
}

void pauseSlot(const Text& name, float time) {
  snd::pauseSlot(name.c_str(), Fade(time));
  openBlock();
}

void resumePauseSlot(const Text& name, float time) {
  snd::resumePauseSlot(name.c_str(), Fade(time));
  openBlock();
}

void muteSlot(const Text& name, float time) {
  snd::muteSlot(name.c_str(), Fade(time));
  openBlock();
}

void resumeMuteSlot(const Text& name, float time) {
  snd::resumeMuteSlot(name.c_str(), Fade(time));
  openBlock();
}

void startSlotLpfFrequency(const Text& name, float target, float time) {
  snd::startSlotLpfFrequency(name.c_str(), Fade(time), target);
  openBlock();
}

void startSlotBiquadValue(const Text& name, float target, float time) {
  snd::startSlotBiquadValue(name.c_str(), Fade(time), target);
  openBlock();
}

void ffStopVoice(float time) {
  FF::stopVoice(Fade(time));
  openBlock();
}

auto bgmIsTrackActive(int track) {
  openBlock();
  return BGM::isActive(track);
}

auto bgmGetTrackVolume(int track) {
  openBlock();
  return BGM::getTrackVolume(track);
}

auto bgmGetTrackSurroundPan(int track) {
  openBlock();
  return BGM::getTrackSurroundPan(track);
}

auto bgmGetTrackPlayPosition(int track) {
  openBlock();
  return BGM::getTrackPlayPosition(track);
}

auto voiceIsPlaying(const fnd::WeakHandle& voice) {
  openBlock();
  return snd::isPlaying(voice);
}

auto voiceGetVolume(const fnd::WeakHandle& voice) {
  openBlock();
  return snd::getVolume(voice);
}

auto voiceIsActive(const fnd::WeakHandle& voice) {
  openBlock();
  return snd::isActive(voice);
}

auto voiceGetPlayPosition(const fnd::WeakHandle& voice) {
  openBlock();
  return snd::getPlayPosition(voice);
}

}
