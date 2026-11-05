#pragma once

#include <stdint.h>

#include <string>

#include "timeline/key.hpp"

namespace game::cutscene {

class SignalRoot : public timeline::IKey {
public:
  void Dispatch() override;
};

#define GAME_CUTSCENE_SIGNAL(Name, ...) \
  class Name : public SignalRoot { \
  public: \
    TIMELINE_KEY_NAME(Name) \
  \
  private: \
    __VA_ARGS__ \
  };

GAME_CUTSCENE_SIGNAL(Signal_Actor)
GAME_CUTSCENE_SIGNAL(Signal_BackGround,
  uint8_t unknown10_[0x8];
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_Bloom)
GAME_CUTSCENE_SIGNAL(Signal_Camera,
  uint8_t unknown10_[0x8];
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_Caption,
  uint8_t unknown10_[0x8];
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_CharaCloth)
GAME_CUTSCENE_SIGNAL(Signal_CharaWind)
GAME_CUTSCENE_SIGNAL(Signal_Clock)
GAME_CUTSCENE_SIGNAL(Signal_ColorGrading)
GAME_CUTSCENE_SIGNAL(Signal_Constrain)
GAME_CUTSCENE_SIGNAL(Signal_CustomGrad)
GAME_CUTSCENE_SIGNAL(Signal_DOF2)
GAME_CUTSCENE_SIGNAL(Signal_Dissolve)
GAME_CUTSCENE_SIGNAL(Signal_Env)
GAME_CUTSCENE_SIGNAL(Signal_Exposure)
GAME_CUTSCENE_SIGNAL(Signal_FadeIn)
GAME_CUTSCENE_SIGNAL(Signal_FadeOut)
GAME_CUTSCENE_SIGNAL(Signal_Fog)
GAME_CUTSCENE_SIGNAL(Signal_GlobalWind)
GAME_CUTSCENE_SIGNAL(Signal_Light)
GAME_CUTSCENE_SIGNAL(Signal_LightMove)
GAME_CUTSCENE_SIGNAL(Signal_LightRange)
GAME_CUTSCENE_SIGNAL(Signal_LightShow)
GAME_CUTSCENE_SIGNAL(Signal_MapEffect)
GAME_CUTSCENE_SIGNAL(Signal_MotionBlur)
GAME_CUTSCENE_SIGNAL(Signal_Movie,
  uint8_t unknown10_[0x8];
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_MovieEnd)
GAME_CUTSCENE_SIGNAL(Signal_NegaPosi)
GAME_CUTSCENE_SIGNAL(Signal_OtherSetting)
GAME_CUTSCENE_SIGNAL(Signal_Particle2)
GAME_CUTSCENE_SIGNAL(Signal_ParticleMove)
GAME_CUTSCENE_SIGNAL(Signal_PlayCharaAnim,
  uint8_t unknown10_[0x10];
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_PlayPropAnim,
  uint8_t unknown10_[0x10];
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_Prop)
GAME_CUTSCENE_SIGNAL(Signal_RadialBlur)
GAME_CUTSCENE_SIGNAL(Signal_SceneShadow)
GAME_CUTSCENE_SIGNAL(Signal_ShowChara)
GAME_CUTSCENE_SIGNAL(Signal_ShowProp)
GAME_CUTSCENE_SIGNAL(Signal_SlowBegin)
GAME_CUTSCENE_SIGNAL(Signal_SlowEnd)
GAME_CUTSCENE_SIGNAL(Signal_Sound,
  uint8_t unknown10_[0x8];
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_SoundPreview,
  uint8_t unknown10_[0x8];
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_Version)
GAME_CUTSCENE_SIGNAL(Signal_Vignette)
GAME_CUTSCENE_SIGNAL(Signal_Voice,
  uint8_t unknown10_[0x8];
  std::string label_;)

#undef GAME_CUTSCENE_SIGNAL

}
