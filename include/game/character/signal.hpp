#pragma once

#include <stdint.h>

#include <functional>
#include <string>
#include <string_view>
#include <vector>

#include "timeline/key.hpp"

namespace game::character {

class SignalRoot;

struct SignalHandler {
  std::function<void(SignalRoot*)> callback;
  uint8_t unknown30[0x10];
};

class CharacterObservable {
public:
  std::vector<SignalHandler>& GetHandlers(std::string_view name);
};

class CharacterBuilder {
public:
  CharacterObservable* GetObservable() const {
    return observable_;
  }

private:
  uint8_t unknown00_[0x140];
  CharacterObservable* observable_;
};

class SignalRoot : public timeline::IKey {
protected:
  uint8_t unknown0c_[0xc];
  CharacterBuilder* builder_;
};

#define GAME_CHARACTER_SIGNAL(Name, ...) \
  class Name : public SignalRoot { \
  public: \
    TIMELINE_KEY_NAME(Name) \
    void Dispatch() override; \
  \
  private: \
    __VA_ARGS__ \
  };

GAME_CHARACTER_SIGNAL(Signal_ArmorStep)
GAME_CHARACTER_SIGNAL(Signal_AttackRange)
GAME_CHARACTER_SIGNAL(Signal_AttackVoice,
  std::string label_;)
GAME_CHARACTER_SIGNAL(Signal_B_Cancel)
GAME_CHARACTER_SIGNAL(Signal_BeginTrail,
  uint8_t unknown20_[0x8];
  std::string label_;)
GAME_CHARACTER_SIGNAL(Signal_BlendFrames)
GAME_CHARACTER_SIGNAL(Signal_Camera)
GAME_CHARACTER_SIGNAL(Signal_CameraEnd)
GAME_CHARACTER_SIGNAL(Signal_Chant)
GAME_CHARACTER_SIGNAL(Signal_ClothBlend,
  uint8_t unknown20_[0x8];
  std::string label_;)
GAME_CHARACTER_SIGNAL(Signal_ClothCancel)
GAME_CHARACTER_SIGNAL(Signal_ClothWind)
GAME_CHARACTER_SIGNAL(Signal_CutIn)
GAME_CHARACTER_SIGNAL(Signal_DOF_C,
  uint8_t unknown20_[0x8];
  std::string label_;)
GAME_CHARACTER_SIGNAL(Signal_DenyAutoGen)
GAME_CHARACTER_SIGNAL(Signal_EndTrail)
GAME_CHARACTER_SIGNAL(Signal_Evade)
GAME_CHARACTER_SIGNAL(Signal_FR_Cancel)
GAME_CHARACTER_SIGNAL(Signal_F_Cancel)
GAME_CHARACTER_SIGNAL(Signal_F_Cancel_Dungeon)
GAME_CHARACTER_SIGNAL(Signal_Facial)
GAME_CHARACTER_SIGNAL(Signal_Fade)
GAME_CHARACTER_SIGNAL(Signal_Flapping)
GAME_CHARACTER_SIGNAL(Signal_Footstep)
GAME_CHARACTER_SIGNAL(Signal_GroundParticle,
  uint8_t unknown20_[0x8];
  std::string label_;)
GAME_CHARACTER_SIGNAL(Signal_HeadShaking)
GAME_CHARACTER_SIGNAL(Signal_Hit)
GAME_CHARACTER_SIGNAL(Signal_IK)
GAME_CHARACTER_SIGNAL(Signal_Illusion)
GAME_CHARACTER_SIGNAL(Signal_IllusionEnd)
GAME_CHARACTER_SIGNAL(Signal_Invisible)
GAME_CHARACTER_SIGNAL(Signal_Jump)
GAME_CHARACTER_SIGNAL(Signal_Landing)
GAME_CHARACTER_SIGNAL(Signal_LookAt)
GAME_CHARACTER_SIGNAL(Signal_Particle)
GAME_CHARACTER_SIGNAL(Signal_Quake)
GAME_CHARACTER_SIGNAL(Signal_RadialBlur)
GAME_CHARACTER_SIGNAL(Signal_RootMoved)
GAME_CHARACTER_SIGNAL(Signal_RunSpeed)
GAME_CHARACTER_SIGNAL(Signal_Shoot)
GAME_CHARACTER_SIGNAL(Signal_SkillTiming)
GAME_CHARACTER_SIGNAL(Signal_Sound,
  std::string label_;)
GAME_CHARACTER_SIGNAL(Signal_Stabilize)
GAME_CHARACTER_SIGNAL(Signal_TimeScale)
GAME_CHARACTER_SIGNAL(Signal_TrailHandL)
GAME_CHARACTER_SIGNAL(Signal_TrailHandR)
GAME_CHARACTER_SIGNAL(Signal_Voice,
  std::string label_;)
GAME_CHARACTER_SIGNAL(Signal_WeaponAnim)
GAME_CHARACTER_SIGNAL(Signal_WeaponDrop)

#undef GAME_CHARACTER_SIGNAL

}
