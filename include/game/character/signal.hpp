#pragma once

#include <stdint.h>

#include <functional>
#include <string>
#include <string_view>
#include <vector>

#include "nn/util/vector.hpp"
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
GAME_CHARACTER_SIGNAL(Signal_AttackRange,
  float near_;
  float far_;)
GAME_CHARACTER_SIGNAL(Signal_AttackVoice,
  std::string label_;
  float volume_;)
GAME_CHARACTER_SIGNAL(Signal_B_Cancel)
GAME_CHARACTER_SIGNAL(Signal_BeginTrail,
  bool mute_;
  int32_t hand_type_;
  std::string label_;
  float sec_;)
GAME_CHARACTER_SIGNAL(Signal_BlendFrames,
  int32_t frames_;)
GAME_CHARACTER_SIGNAL(Signal_Camera,
  float distance_;)
GAME_CHARACTER_SIGNAL(Signal_CameraEnd)
GAME_CHARACTER_SIGNAL(Signal_Chant,
  nn::util::Vector4f shoot_dir_;)
GAME_CHARACTER_SIGNAL(Signal_ClothBlend,
  int32_t percentage10x_;
  int32_t frames_;
  std::string group_name_;)
GAME_CHARACTER_SIGNAL(Signal_ClothCancel,
  float cloth_cancel_rate_;)
GAME_CHARACTER_SIGNAL(Signal_ClothWind,
  float wind_power_;
  float wind_speed_;
  float wind_fluctuation_;
  float wind_angle_x_;
  float wind_angle_y_;
  int32_t wind_frames_;)
GAME_CHARACTER_SIGNAL(Signal_CutIn)
GAME_CHARACTER_SIGNAL(Signal_DOF_C,
  bool bool_;
  std::string target_node_;)
GAME_CHARACTER_SIGNAL(Signal_DenyAutoGen)
GAME_CHARACTER_SIGNAL(Signal_EndTrail,
  float fade_out_;)
GAME_CHARACTER_SIGNAL(Signal_Evade)
GAME_CHARACTER_SIGNAL(Signal_FR_Cancel)
GAME_CHARACTER_SIGNAL(Signal_F_Cancel)
GAME_CHARACTER_SIGNAL(Signal_F_Cancel_Dungeon)
GAME_CHARACTER_SIGNAL(Signal_Facial,
  int32_t expression_type_;)
GAME_CHARACTER_SIGNAL(Signal_Fade,
  int32_t fade_type_;
  float fade_time_;)
GAME_CHARACTER_SIGNAL(Signal_Flapping,
  int32_t flap_vec_;
  int32_t flap_strength_;
  float volume_;)
GAME_CHARACTER_SIGNAL(Signal_Footstep,
  int32_t leg_type_;
  int32_t step_type_;
  float volume_;)
GAME_CHARACTER_SIGNAL(Signal_GroundParticle,
  int32_t g_particle_type_;
  std::string target_node_;)
GAME_CHARACTER_SIGNAL(Signal_HeadShaking,
  bool bool_;)
GAME_CHARACTER_SIGNAL(Signal_Hit,
  int32_t slash_type_;
  bool is_dummy_;
  nn::util::Vector4f slash_vec_;
  bool no_hit_fx_;)
GAME_CHARACTER_SIGNAL(Signal_IK,
  bool bool_;)
GAME_CHARACTER_SIGNAL(Signal_Illusion)
GAME_CHARACTER_SIGNAL(Signal_IllusionEnd)
GAME_CHARACTER_SIGNAL(Signal_Invisible,
  bool bool_;
  bool hide_enemy_;)
GAME_CHARACTER_SIGNAL(Signal_Jump,
  float landing_point_;)
GAME_CHARACTER_SIGNAL(Signal_Landing)
GAME_CHARACTER_SIGNAL(Signal_LookAt,
  int32_t percentage10x_;
  bool use_limit_;
  int32_t eye_weight10x_;
  int32_t head_weight10x_;
  int32_t spine_weight10x_;
  int32_t rotation_limit_deg_;)
GAME_CHARACTER_SIGNAL(Signal_Particle,
  std::string particle_;
  std::string target_node_;
  int32_t pose_type_;
  nn::util::Vector3f pos3_;
  nn::util::Vector3f rot3_;
  float scale1_;
  bool on_hit_;)
GAME_CHARACTER_SIGNAL(Signal_Quake,
  int32_t shake_type_;
  int32_t shake_power_;)
GAME_CHARACTER_SIGNAL(Signal_RadialBlur,
  float f_scale_;)
GAME_CHARACTER_SIGNAL(Signal_RootMoved,
  nn::util::Vector4f xz_;)
GAME_CHARACTER_SIGNAL(Signal_RunSpeed,
  float speed_;
  float time_to_max_;)
GAME_CHARACTER_SIGNAL(Signal_Shoot,
  nn::util::Vector4f shoot_pos_;)
GAME_CHARACTER_SIGNAL(Signal_SkillTiming)
GAME_CHARACTER_SIGNAL(Signal_Sound,
  std::string label_;
  float volume_;
  bool pause_with_time_;
  bool static_play_;)
GAME_CHARACTER_SIGNAL(Signal_Stabilize)
GAME_CHARACTER_SIGNAL(Signal_TimeScale,
  int32_t target_;
  float f_scale_;)
GAME_CHARACTER_SIGNAL(Signal_TrailHandL,
  int32_t vertex_array_size_;
  std::vector<float> vertex_array_;)
GAME_CHARACTER_SIGNAL(Signal_TrailHandR,
  int32_t vertex_array_size_;
  std::vector<float> vertex_array_;)
GAME_CHARACTER_SIGNAL(Signal_Voice,
  std::string label_;
  float volume_;)
GAME_CHARACTER_SIGNAL(Signal_WeaponAnim,
  int32_t weapon_anim_type_;)
GAME_CHARACTER_SIGNAL(Signal_WeaponDrop)

#undef GAME_CHARACTER_SIGNAL

}
