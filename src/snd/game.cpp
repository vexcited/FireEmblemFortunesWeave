#include "snd/game.hpp"

#include <cstring>
#include <utility>

#include "nn/audio/audio_stream.hpp"
#include "nn/os/sleep_thread.hpp"
#include "snd/fnd/math.hpp"
#include "snd/manager.hpp"
#include "snd/seq_voice.hpp"
#include "snd/slot.hpp"
#include "snd/target/base.hpp"
#include "snd/vib_voice.hpp"
#include "snd/voice.hpp"

namespace nn::audio {

Result AcquireAudioOutputDeviceNotification(os::SystemEvent* event);
void GetActiveAudioOutputDeviceName(AudioDeviceName* name);

}

namespace snd {

inline void Slot::eachVoice(const std::function<void(Voice*)>& function) {
  for (Voice* voice = voices_->head; voice != nullptr;) {
    Voice* next = static_cast<Voice*>(voice->getListNext());
    function(voice);
    voice = next;
  }
}

inline void Slot::eachSeqVoice(
  const std::function<void(SeqVoice*)>& function) {
  for (SeqVoice* voice = seqVoices_->head; voice != nullptr;) {
    SeqVoice* next = voice->getSlotNext();
    function(voice);
    voice = next;
  }
}

inline void Slot::eachVibVoice(
  const std::function<void(VibVoice*)>& function) {
  for (VibVoice* voice = vibVoices_->head; voice != nullptr;) {
    VibVoice* next = voice->getSlotNext();
    function(voice);
    voice = next;
  }
}

namespace {

// The engine keeps one listener, the handle is never empty.
Listener& getMainListener() {
  return static_cast<Listener&>(*g_manager->getListener(-1).get());
}

constexpr nn::TimeSpan kGroupPoll = {16000000};

bool isOutputDevice(const nn::audio::AudioDeviceName& name,
  const char* device) {
  return std::strcmp(name.name, device) == 0;
}

}

void Game::setInstance(Game* game) {
  s_instance = game;
}

Game::~Game() {
  if (initialized_ == true) {
    stopAll();
    Env::destroy();
    env_ = nullptr;
    FF::destroy();
    ff_ = nullptr;
    Wind::destroy();
    wind_ = nullptr;
    BGM::destroy();
    bgm_ = nullptr;
    GroupCtrl::destroy();
    group_ = nullptr;
    initialized_ = false;
  }
  s_instance = nullptr;
}

void Game::initialize() {
  if (initialized_) {
    return;
  }

  bgm_ = BGM::create();
  wind_ = Wind::create();
  ff_ = FF::create();
  env_ = Env::create();
  group_ = GroupCtrl::create();
  nn::audio::AcquireAudioOutputDeviceNotification(&outputEvent_);

  nn::audio::AudioDeviceName name;
  nn::audio::GetActiveAudioOutputDeviceName(&name);
  externalOutput_ = isOutputDevice(name, "AudioExternalOutput");
  speakerOutput_ = isOutputDevice(name, "AudioBuiltInSpeakerOutput");
  initialized_ = true;
}

void Game::finalize() {
  if (initialized_ == true) {
    stopAll();
    Env::destroy();
    env_ = nullptr;
    FF::destroy();
    ff_ = nullptr;
    Wind::destroy();
    wind_ = nullptr;
    BGM::destroy();
    bgm_ = nullptr;
    GroupCtrl::destroy();
    group_ = nullptr;
    initialized_ = false;
  }
}

void Game::stopAll() {
  if (initialized_ == true) {
    g_manager->unlockSlots();
    stop(Fade(0.0f));
    g_manager->main();
    update();
    nn::os::SleepThread({20000000});
    while (!group_->isReady()) {
      nn::os::SleepThread(kGroupPoll);
    }
    g_manager->getBusManager()->setFrame(0);
    effect_ = nullptr;
    effectName_ = "None";
    surround_ = nullptr;
    vibration_ = nullptr;
    groupData_ = nullptr;
    groupName_ = "";
  }
}

// The output device changes are polled once per update.
void Game::update() {
  if (initialized_ == true && isRunning()) {
    if (outputEvent_.TryWait()) {
      nn::audio::AudioDeviceName name;
      nn::audio::GetActiveAudioOutputDeviceName(&name);
      externalOutput_ = isOutputDevice(name, "AudioExternalOutput");
      speakerOutput_ = isOutputDevice(name, "AudioBuiltInSpeakerOutput");
    }
    if (s_manager->getMasterVolume() != masterVolume_) {
      s_manager->setMasterVolume(masterVolume_);
    }
    ff_->update();
    bgm_->update();
    group_->update();
  }
}

void Game::updateSuspend() {
  if (initialized_ == true) {
    isRunning();
  }
}

void Game::updateFrame() {
  if (initialized_ == true && isRunning()) {
    env_->update();
    wind_->update();
  }
}

float Game::getMasterScale() const {
  return 1.0f;
}

void Game::stopField() {
  env_->stop("field");
  env_->stop("fieldSub");
  wind_->stop("field");
  listenerFixed_ = false;
}

void Game::reset(const Fade& fade) {
  if (initialized_ == true) {
    stopWithoutBGM(fade);
    group_->unload("field");
    env_->reset();
    wind_->reset();
    s_manager->getBusManager()->clearRequest();
    s_manager->getBusManager()->reset();
    effect_ = nullptr;
    effectName_ = "";
    surround_ = nullptr;
    vibration_ = nullptr;
    groupData_ = nullptr;
    prevEffect_ = nullptr;
    prevSurround_ = nullptr;
    prevVibration_ = nullptr;
    groupName_ = "";
    fieldsReady_ = true;
    s_manager->getMixer()->clearBgmSends();
    startMasterVolume(Fade(500.0f), 1.0f);
    startBgmVolume(Fade(500.0f), 0.0f);
    startSeVolume(Fade(500.0f), 0.0f);
    refresh();
  }
}

void Game::clearSends() {
  s_manager->getMixer()->clearBgmSends();
}

void Game::stop(const Fade& fade) {
  if (initialized_ == true) {
    env_->stop(fade);
    wind_->stop(fade);
    ff_->stop(fade);
    bgm_->stop(fade, false);
    bgm_->stopTracks(fade);
    g_manager->eachSlot([fade](Slot* slot) {
      slot->eachVoice([fade](Voice* voice) {
        voice->stop(fade, false, 0.0f);
      });
      slot->eachSeqVoice([fade](SeqVoice* voice) {
        voice->stop(fade, false, 0.0f);
      });
      slot->eachVibVoice([fade](VibVoice* voice) {
        voice->stop(fade, false, 0.0f);
      });
    });
  }
}

void Game::stopFieldSounds(const Fade& fade) {
  if (initialized_ == true) {
    env_->stop(Fade(fade.getTime()));
    wind_->stop(Fade(fade.getTime()));
  }
}

// The voices flagged as music keep playing.
void Game::stopWithoutBGM(const Fade& fade) {
  if (initialized_ == true) {
    env_->stop(fade);
    wind_->stop(fade);
    ff_->stop(fade);
    s_manager->getBusManager()->stop(fade, 11, 0.0f);
    s_manager->eachSlot([fade](Slot* slot) {
      slot->eachVoice([fade](Voice* voice) {
        if (!voice->hasUserFlags(1)) {
          voice->stop(fade, true, 0.0f);
        }
      });
      slot->eachSeqVoice([fade](SeqVoice* voice) {
        if (!voice->hasUserFlags(1)) {
          voice->stop(fade, true, 0.0f);
        }
      });
      slot->eachVibVoice([fade](VibVoice* voice) {
        if (!voice->hasUserFlags(1)) {
          voice->stop(fade, true, 0.0f);
        }
      });
    });
  }
}

void Game::setupFields() {
  if (g_manager->isDisabled()) {
    return;
  }

  getMainListener().setSurround("DEFAULT_FIELD");
  uint32_t hash = fnd::calcCrc32("DEFAULT_FIELD", 0);
  surround_ = data::findSurroundData(&hash);
  hash = fnd::calcCrc32("VIBRATION_FIELD", 0);
  setVibrationSurround(data::findSurroundData(&hash));
  hash = fnd::calcCrc32("VIBRATION_FIELD", 0);
  vibration_ = data::findSurroundData(&hash);
  setEffect(fnd::calcCrc32("None", 0));
}

void Game::setEffect(const char* name) {
  setEffect(fnd::calcCrc32(name, 0));
}

void Game::setEffect(uint32_t hash) {
  while (!group_->isReady()) {
    nn::os::SleepThread(kGroupPoll);
  }
  if (effect_ == nullptr || effect_->hash != hash) {
    prevEffect_ = effect_;
    effect_ = data::findEffectData(hash);
    s_manager->getBusManager()->setEffect(0, effect_);
    fnd::String name;
    name.format("[ %08x ]", hash);
    effectName_ = std::move(name);
  }
}

void Game::setSurround(const char* name, const char* vibration) {
  prevSurround_ = surround_;
  prevVibration_ = vibration_;
  uint32_t hash = fnd::calcCrc32(name, 0);
  surround_ = data::findSurroundData(&hash);
  if (surround_ != nullptr) {
    getMainListener().setSurround(surround_);
  }
  hash = fnd::calcCrc32(vibration, 0);
  vibration_ = data::findSurroundData(&hash);
  if (vibration_ != nullptr) {
    setVibrationSurround(vibration_);
  }
}

// Getting close to the last position ducks the ambience group, moving away
// restores it.
void Game::updateListener(float x, float y, float z, float angle) {
  if (listenerFollow_ == true && !listenerFixed_) {
    Manager* manager = g_manager;
    uint32_t hash = fnd::calcCrc32(getAmbGroupName(), 0);
    Bus* bus = manager->findBus(&hash).get<Bus>();
    bool store = true;
    if (bus != nullptr) {
      if (ducked_ == true && bus->getFadeVolume() <= duckVolume_) {
        bus->startFadeVolume(Fade(0.0f), duckVolume_);
        bus->startFadeVolume(Fade(duckTime_), 1.0f);
        ducked_ = false;
        listenerX_ = x;
        listenerY_ = y;
        listenerZ_ = z;
        listenerAngle_ = angle;
      }
      if (ducked_) {
        store = false;
      }
      else {
        float distance = fnd::calcDistance(x, y, z, listenerX_, listenerY_,
          listenerZ_);
        if (distance < 1000.0f && distance >= duckDistance_) {
          bus->startFadeVolume(Fade(100.0f), duckVolume_);
          ducked_ = true;
          store = false;
        }
      }
    }
    if (store) {
      listenerX_ = x;
      listenerY_ = y;
      listenerZ_ = z;
      listenerAngle_ = angle;
    }
    setListenerPosition(listenerX_, listenerY_, listenerZ_);
    setListenerAngle(listenerAngle_);
  }
  else {
    setListenerPosition(x, y, z);
    setListenerAngle(angle);
  }
}

// The game turns clockwise, the listener counterclockwise.
void Game::setListener(float x, float y, float z, float angle) {
  setListenerPosition(x, y, z, 360.0f - angle);
}

void Game::playFieldWind(const char* name, bool rain, bool night, bool hds,
  void* param) {
  uint32_t hash = fnd::calcCrc32(name, 0);
  const data::FieldData* field = data::findFieldData(&hash);
  if (field == nullptr || field->wind == 0) {
    return;
  }

  uint32_t wind = field->wind;
  const void* data = data::findWindData(&wind);
  if (data != nullptr) {
    const char* weather = hds ? "_Hds" : rain ? "_Rain" : "";
    const char* time = hds ? "" : night ? "_Night" : "";
    wind_->stop("field");
    wind_->play(data, weather, time, param);
  }
}

void Game::playFieldEnv(const char* name, bool rain, bool night, bool hds,
  void* param) {
  uint32_t hash = fnd::calcCrc32(name, 0);
  const data::FieldData* field = data::findFieldData(&hash);
  if (field == nullptr || field->env == 0) {
    return;
  }

  uint32_t env = field->env;
  const void* data = data::findEnvData(&env);
  if (data != nullptr) {
    const char* weather = hds ? "_Hds" : rain ? "_Rain" : "";
    const char* time = hds ? "" : night ? "_Night" : "";
    env_->stop("field");
    env_->play("field", data, weather, time, field->envKind, param);
  }
}

void Game::setField(const char* name) {
  uint32_t hash = fnd::calcCrc32(name, 0);
  const data::FieldData* field = data::findFieldData(&hash);
  if (field != nullptr && field->effect != 0) {
    if (effect_ != nullptr && effect_->hash == field->effect) {
      return;
    }
    uint32_t effect = field->effect;
    if (data::findEffectData(&effect) != nullptr) {
      setEffect(field->effect);
      return;
    }
  }
  setEffect(fnd::calcCrc32("None", 0));
}

void Game::setFieldSurround(const char* name) {
  uint32_t hash = fnd::calcCrc32(name, 0);
  const data::FieldData* field = data::findFieldData(&hash);
  if (field != nullptr) {
    if (field->surround != 0) {
      hash = field->surround;
      surround_ = data::findSurroundData(&hash);
      if (surround_ != nullptr) {
        getMainListener().setSurround(surround_);
      }
    }
  }
  if (surround_ == nullptr || field == nullptr) {
    hash = fnd::calcCrc32("DEFAULT_FIELD", 0);
    surround_ = data::findSurroundData(&hash);
    if (surround_ != nullptr) {
      getMainListener().setSurround(surround_);
    }
  }
  if (field != nullptr && field->vibration != 0) {
    hash = field->vibration;
    vibration_ = data::findSurroundData(&hash);
    if (vibration_ != nullptr) {
      setVibrationSurround(vibration_);
    }
  }
  if (vibration_ == nullptr || field == nullptr) {
    hash = fnd::calcCrc32("VIBRATION_FIELD", 0);
    vibration_ = data::findSurroundData(&hash);
    if (vibration_ != nullptr) {
      setVibrationSurround(vibration_);
    }
  }
}

void Game::setGroup(const char* name) {
  const data::FieldData* field =
    data::findFieldData(fnd::calcCrc32(name, 0));
  if (field == nullptr) {
    groupData_ = nullptr;
    groupName_ = "";
    return;
  }

  if (field->group != 0) {
    groupData_ = data::findGroupData(field->group);
    fnd::String text;
    text.format("[ %08x ]", groupData_->hash);
    groupName_ = std::move(text);
  }
  else {
    groupData_ = nullptr;
    groupName_ = "";
  }
  group_->load("field", name);
}

void Game::loadGroup(const char* name) {
  GroupCtrl* group = group_;
  uint32_t hash = fnd::calcCrc32(name, 0);
  group->loadGroup(&hash);
}

void Game::unloadGroup(const char* name) {
  GroupCtrl* group = group_;
  uint32_t hash = fnd::calcCrc32(name, 0);
  group->unloadGroup(&hash);
}

const char* Game::getBgmGroupName() const {
  return "BGM_Master";
}

const char* Game::getFfGroupName() const {
  return "FF_Master";
}

const char* Game::getSeGroupName() const {
  return "SE_Master";
}

const char* Game::getAmbGroupName() const {
  return "AMB_Master";
}

const char* Game::getVoiceGroupName() const {
  return "Voice_Master";
}

void Game::onSuspend() {
}

void Game::onResume() {
}

Game::NameList Game::getBgmNames() const {
  return {};
}

Game::NameList Game::getEnvNames() const {
  return {};
}

Game::NameList Game::getSeNames() const {
  return {};
}

Game::NameList Game::getVoiceNames() const {
  return {};
}

void loadSoundData(const char* label) {
  uint32_t id = g_target->getItemId(label);
  if (id != 0xffffffff) {
    g_target->loadData(id, 0);
  }
}

void Game::setFieldGroup(const char* name) {
  g_game->setGroup(name);
}

void Game::setFieldByName(const char* name) {
  g_game->setField(name);
}

void Game::setSurroundByName(const char* name) {
  g_game->setFieldSurround(name);
}

void Game::beginSkip() {
  Game* game = g_game;
  game->skipStart_ = g_frameCount;
  game->skipMark_ = 0;
  game->skipEnd_ = 0;
}

void Game::markSkip() {
  if (s_instance->skipStart_ != 0) {
    s_instance->skipMark_ = s_frameCount;
  }
}

void Game::endSkip() {
  if (s_instance->skipStart_ != 0) {
    s_instance->skipEnd_ = s_frameCount + 1;
  }
}

// Stops the voices started while skipping, the ones between the start and
// the mark and the ones after the end.
void Game::doneSkip() {
  Game* game = g_game;
  if (game->skipStart_ == 0) {
    return;
  }

  uint64_t frame = g_frameCount;
  if (game->skipMark_ == 0) {
    game->skipMark_ = frame;
  }
  if (game->skipEnd_ == 0) {
    game->skipEnd_ = frame + 1;
  }
  g_manager->eachSlot([game, frame](Slot* slot) {
    slot->eachVoice([game, frame](Voice* voice) {
      if (game->isSkipped(voice->getStartFrame(), frame)) {
        voice->stop(Fade(2000), true, 0.0f);
      }
    });
    slot->eachSeqVoice([game, frame](SeqVoice* voice) {
      if (game->isSkipped(voice->getStartFrame(), frame)) {
        voice->stop(Fade(2000), true, 0.0f);
      }
    });
    slot->eachVibVoice([game, frame](VibVoice* voice) {
      if (game->isSkipped(voice->getStartFrame(), frame)) {
        voice->stop(Fade(2000), true, 0.0f);
      }
    });
  });
  game->skipMark_ = 0;
  game->skipEnd_ = 0;
  game->skipStart_ = 0;
}

void Game::enableFlag60() {
  g_game->flag60_ = true;
}

void Game::disableFlag60() {
  s_instance->flag60_ = false;
}

void Game::enableFlag62() {
  g_game->flag62_ = true;
}

void Game::disableFlag62() {
  s_instance->flag62_ = false;
}

void Game::enableFlag61() {
  g_game->flag61_ = true;
}

void Game::disableFlag61() {
  s_instance->flag61_ = false;
}

void Game::releaseListener() {
  s_instance->listenerFixed_ = false;
}

void Game::fixListener() {
  g_game->listenerFixed_ = true;
}

void addVoiceSend(const char* name) {
  uint32_t key[2] = {
    fnd::calcCrc32(name, 0), fnd::calcCrc32Reverse(name, 0),
  };
  const void* info;
  const data::VoiceData* voice = data::findVoiceData(key, &info);
  if (voice != nullptr && voice->kind == 0) {
    uint32_t ids[2] = {voice->sends[0], voice->sends[1]};
    g_manager->getMixer()->addVoiceSend(ids);
  }
}

void clearVoiceSends() {
  s_manager->getMixer()->clearVoiceSends();
}

void addBgmSend(const char* name) {
  uint32_t key[2] = {
    fnd::calcCrc32(name, 0), fnd::calcCrc32Reverse(name, 0),
  };
  const void* info;
  const data::VoiceData* voice = data::findVoiceData(key, &info);
  if (voice != nullptr && voice->kind == 0) {
    uint32_t ids[2] = {voice->sends[0], voice->sends[1]};
    g_manager->getMixer()->addBgmSend(ids);
  }
}

// Clears the voice sends like clearVoiceSends.
void clearBgmSends() {
  s_manager->getMixer()->clearVoiceSends();
}

void addSeSend(const char* name) {
  uint32_t key[2] = {
    fnd::calcCrc32(name, 0), fnd::calcCrc32Reverse(name, 0),
  };
  const void* info;
  const data::VoiceData* voice = data::findVoiceData(key, &info);
  if (voice != nullptr && voice->kind == 0) {
    uint32_t ids[2] = {voice->sends[0], voice->sends[1]};
    g_manager->getMixer()->addSeSend(ids);
  }
}

void clearSeSends() {
  s_manager->getMixer()->clearSeSends();
}

void updateMixer() {
  s_manager->getMixer()->update();
}

}
