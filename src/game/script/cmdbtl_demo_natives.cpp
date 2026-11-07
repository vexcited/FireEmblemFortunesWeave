#include <memory>
#include <optional>
#include <string>

#include "as/script_context.hpp"
#include "game/cmdbtl/manager.hpp"
#include "game/cmdbtl/situation.hpp"
#include "game/gmap/spot.hpp"
#include "game/script/script_proc.hpp"
#include "game/script/script_string.hpp"
#include "game/sound/game_sound.hpp"
#include "game/sound/se.hpp"
#include "math/vec3.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace effect {

// Loads the effect resource of a label for a category.
void Load(int category, const char* label);

}

namespace cmdbtl {

class EffectHandle;

class Effect : public Singleton<Effect> {
public:
  std::shared_ptr<EffectHandle> Play(const std::string& label,
    const math::Vec3& pos, const math::Vec3& rot, float scale);
};

class Sound : public Singleton<Sound> {
public:
  void SetExitContinuedHubBgm(bool isEnable) {
    exit_continued_hub_bgm_ = isEnable;
  }

private:
  uint8_t unknown_08_[0x2];
  bool exit_continued_hub_bgm_;
};

// The event date the battle may open.
class EventDate : public Singleton<EventDate> {
public:
  void RequestClose() {
    close_ = true;
  }

private:
  uint8_t unknown_08_[0x350];
  bool close_;
};

struct MatchResult {
  uint8_t value;
  uint8_t unknown_01_[0x9f];
};

// The result of the last match, once one was played.
extern std::optional<MatchResult> g_match_result;

class ProcHpRecoverSeq {
public:
  static ProcHpRecoverSeq* instance_;

  static ProcHpRecoverSeq* Create(ProcInst* parent, uint8_t type);
};

class ProcTransferHpSeq {
public:
  static ProcTransferHpSeq* instance_;

  static ProcTransferHpSeq* Create(ProcInst* parent, int value);
};

}

#pragma GCC visibility pop

}

// The natives of the cmdbtl::demo script namespace.
namespace game::script::cmdbtl::demo {

// The script manager of as/script_context.hpp, read through the global offset
// table by some of these natives.
extern as::ScriptManager* g_script_manager;

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline as::ScriptContext* GetCurrentContext() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

// The first lookup of the waiting natives skips the null check.
[[gnu::always_inline]] inline as::ScriptContext* GetRunningContext() {
  return g_script_manager->GetThread(as::g_thread_info->GetIndex())
    ->GetContext();
}

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// The natives reading the manager directly.
[[gnu::always_inline]] inline void OpenBlockDirect() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

[[gnu::always_inline]] inline void Wait(bool busy) {
  as::ScriptContext* context = GetCurrentContext();
  if (busy) {
    context->GetRunner()->SetBlockState(0);
    return;
  }
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

[[gnu::always_inline]] inline ProcInst* GetCurrentProc() {
  return g_instance<game::cmdbtl::CmdBtlScript>->GetCurrentProc();
}

[[gnu::always_inline]] inline game::sound::Handle PlaySe(const char* label) {
  return label != nullptr ?
    game::sound::PlayLabel(label) : game::sound::Handle();
}

[[gnu::always_inline]] inline game::sound::Handle PlaySeAt(
  const char* label, const math::Vec3& pos) {
  snd::fnd::Vec3 position;
  position.x = pos.x();
  position.y = pos.y();
  position.z = pos.z();
  return label != nullptr ?
    game::sound::PlayAt(label, label, position, game::sound::PlayParam(), 0,
      0x10001, 0, 0.0f, 1.0f) :
    game::sound::Handle();
}

}

// The sound the waiting natives wait for.
extern game::sound::Handle g_wait_se;

void LoadEffect(const std::string& label) {
  OpenBlock();
  const std::string name = label.c_str();
  game::effect::Load(6, name.c_str());
}

void PlayEffect(const std::string& label, const math::Vec3& pos,
  const math::Vec3& rot, float scale) {
  OpenBlock();
  game::cmdbtl::Effect::GetInstance()->Play(label.c_str(), pos, rot, scale);
}

void PlayBgm(as::string label) {
  OpenBlock();
  const std::string name = label.c_str();
  game::sound::g_game_sound->PlayBgm(name.c_str(),
    game::sound::PlayParam(0.0f), 0, false, 0.0f);
}

void PlaySE(as::string label) {
  OpenBlock();
  const std::string name = label.c_str();
  PlaySe(name.c_str());
}

void PlaySE(as::string label, const math::Vec3& pos) {
  OpenBlock();
  const std::string name = label.c_str();
  PlaySeAt(name.c_str(), pos);
}

void PlaySEWithWait(const std::string& label) {
  if (GetRunningContext()->GetRunner()->IsSkipping()) {
    const std::string name = label.c_str();
    g_wait_se = PlaySe(name.c_str());
  }
  Wait(g_wait_se.IsValid());
}

void PlaySEWithWait(const std::string& label, const math::Vec3& pos) {
  if (GetRunningContext()->GetRunner()->IsSkipping()) {
    const std::string name = label.c_str();
    g_wait_se = PlaySeAt(name.c_str(), pos);
  }
  Wait(g_wait_se.IsValid());
}

void HpRecoverSeq(int partyType) {
  if (GetRunningContext()->GetRunner()->IsSkipping()) {
    uint8_t type;
    switch (partyType) {
      case 0:
        type = 0;
        break;
      case 1:
        type = 1;
        break;
      case 2:
        type = 3;
        break;
      default:
        type = 8;
        break;
    }
    game::cmdbtl::ProcHpRecoverSeq::Create(GetCurrentProc(), type);
  }
  Wait(game::cmdbtl::ProcHpRecoverSeq::instance_ != nullptr);
}

void PlayTransferHpSeq(int value) {
  if (GetRunningContext()->GetRunner()->IsSkipping()) {
    game::cmdbtl::ProcTransferHpSeq::Create(GetCurrentProc(), value);
  }
  Wait(game::cmdbtl::ProcTransferHpSeq::instance_ != nullptr);
}

void ForceUnitRelocate() {
  OpenBlockDirect();
  g_cmdbtl_manager->RelocateUnits({});
}

void EventDateTryOpen() {
  OpenBlock();
  game::cmdbtl::ProcCmdBtlSeqView::instance_->OpenEventDate(
    game::gmap::GmapClock::GetTime());
  g_cmdbtl_manager->SetFlag(game::cmdbtl::Manager::kFlagEventDateOpen);
}

void EventDateTryClose() {
  OpenBlockDirect();
  if (game::cmdbtl::EventDate* date = game::cmdbtl::EventDate::GetInstance()) {
    date->RequestClose();
  }
}

int GetMatchValue() {
  OpenBlockDirect();
  return game::cmdbtl::g_match_result.value().value;
}

bool IsBattledWithAttack() {
  OpenBlockDirect();
  return game::cmdbtl::CmdBtlSituation::GetInstance()->IsBattledWithAttack();
}

void DisableSoundGameFadeVolume() {
  OpenBlockDirect();
  if (game::sound::GameSound* sound = game::sound::g_game_sound) {
    sound->SetGameFadeVolume(false);
  }
}

void EnableSoundGameFadeVolume() {
  OpenBlockDirect();
  if (game::sound::GameSound* sound = game::sound::g_game_sound) {
    sound->SetGameFadeVolume(true);
  }
}

void SetExitContinuedHubBgm(bool isEnable) {
  OpenBlock();
  g_instance<game::cmdbtl::Sound>->SetExitContinuedHubBgm(isEnable);
}

#pragma GCC visibility pop

}
