#pragma GCC visibility push(hidden)
#include "game/character/signal.hpp"
#include "timeline/key_io.hpp"
#pragma GCC visibility pop

namespace game::character {

// Every signal notifies the handlers registered under its name.
#define GAME_CHARACTER_SIGNAL_DEFINE(Name) \
  void Name::Dispatch() { \
    for (const SignalHandler& handler : \
      builder_->GetObservable()->GetHandlers(Name::GetName())) { \
      if (handler.callback) { \
        handler.callback(this); \
      } \
    } \
  } \
  \
  TIMELINE_KEY_NAME_DEFINE(Name)

GAME_CHARACTER_SIGNAL_DEFINE(Signal_ArmorStep)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_AttackRange)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_AttackVoice)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_B_Cancel)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_BeginTrail)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_BlendFrames)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Camera)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_CameraEnd)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Chant)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_ClothBlend)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_ClothCancel)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_ClothWind)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_CutIn)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_DOF_C)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_DenyAutoGen)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_EndTrail)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Evade)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_FR_Cancel)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_F_Cancel)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_F_Cancel_Dungeon)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Facial)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Fade)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Flapping)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Footstep)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_GroundParticle)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_HeadShaking)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Hit)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_IK)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Illusion)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_IllusionEnd)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Invisible)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Jump)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Landing)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_LookAt)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Particle)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Quake)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_RadialBlur)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_RootMoved)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_RunSpeed)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Shoot)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_SkillTiming)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Sound)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Stabilize)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_TimeScale)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_TrailHandL)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_TrailHandR)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_Voice)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_WeaponAnim)
GAME_CHARACTER_SIGNAL_DEFINE(Signal_WeaponDrop)

void Signal_ArmorStep::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_AttackRange::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Near", near_);
  timeline::Serialize(reader, writer, "Far", far_);
}

void Signal_AttackVoice::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "Volume", volume_);
}

void Signal_B_Cancel::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_BeginTrail::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Mute", mute_);
  timeline::Serialize(reader, writer, "HandType", hand_type_);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "Sec", sec_);
}

void Signal_BlendFrames::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Frames", frames_);
}

void Signal_Camera::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Distance", distance_);
}

void Signal_CameraEnd::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_Chant::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "ShootDir", shoot_dir_);
}

void Signal_ClothBlend::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Percentage10x", percentage10x_);
  timeline::Serialize(reader, writer, "Frames", frames_);
  timeline::Serialize(reader, writer, "GroupName", group_name_);
}

void Signal_ClothCancel::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "ClothCancelRate", cloth_cancel_rate_);
}

void Signal_ClothWind::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "WindPower", wind_power_);
  timeline::Serialize(reader, writer, "WindSpeed", wind_speed_);
  timeline::Serialize(reader, writer, "WindFluctuation", wind_fluctuation_);
  timeline::Serialize(reader, writer, "WindAngleX", wind_angle_x_);
  timeline::Serialize(reader, writer, "WindAngleY", wind_angle_y_);
  timeline::Serialize(reader, writer, "WindFrames", wind_frames_);
}

void Signal_CutIn::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_DOF_C::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "TargetNode", target_node_);
}

void Signal_DenyAutoGen::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_EndTrail::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "FadeOut", fade_out_);
}

void Signal_Evade::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_FR_Cancel::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_F_Cancel::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_F_Cancel_Dungeon::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_Facial::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "ExpressionType", expression_type_);
}

void Signal_Fade::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "FadeType", fade_type_);
  timeline::Serialize(reader, writer, "FadeTime", fade_time_);
}

void Signal_Flapping::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "FlapVec", flap_vec_);
  timeline::Serialize(reader, writer, "FlapStrength", flap_strength_);
  timeline::Serialize(reader, writer, "Volume", volume_);
}

void Signal_Footstep::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "LegType", leg_type_);
  timeline::Serialize(reader, writer, "StepType", step_type_);
  timeline::Serialize(reader, writer, "Volume", volume_);
}

void Signal_GroundParticle::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "GParticleType", g_particle_type_);
  timeline::Serialize(reader, writer, "TargetNode", target_node_);
}

void Signal_HeadShaking::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
}

void Signal_Hit::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "SlashType", slash_type_);
  timeline::Serialize(reader, writer, "IsDummy", is_dummy_);
  timeline::Serialize(reader, writer, "SlashVec", slash_vec_);
  timeline::Serialize(reader, writer, "NoHitFX", no_hit_fx_);
}

void Signal_IK::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
}

void Signal_Illusion::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_IllusionEnd::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_Invisible::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "HideEnemy", hide_enemy_);
}

void Signal_Jump::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "LandingPoint", landing_point_);
}

void Signal_Landing::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_LookAt::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Percentage10x", percentage10x_);
  timeline::Serialize(reader, writer, "UseLimit", use_limit_);
  timeline::Serialize(reader, writer, "EyeWeight10x", eye_weight10x_);
  timeline::Serialize(reader, writer, "HeadWeight10x", head_weight10x_);
  timeline::Serialize(reader, writer, "SpineWeight10x", spine_weight10x_);
  timeline::Serialize(reader, writer, "RotationLimitDeg", rotation_limit_deg_);
}

void Signal_Particle::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Particle", particle_);
  timeline::Serialize(reader, writer, "TargetNode", target_node_);
  timeline::Serialize(reader, writer, "PoseType", pose_type_);
  timeline::Serialize(reader, writer, "Pos3", pos3_);
  timeline::Serialize(reader, writer, "Rot3", rot3_);
  timeline::Serialize(reader, writer, "Scale1", scale1_);
  timeline::Serialize(reader, writer, "OnHit", on_hit_);
}

void Signal_Quake::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "ShakeType", shake_type_);
  timeline::Serialize(reader, writer, "ShakePower", shake_power_);
}

void Signal_RadialBlur::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "FScale", f_scale_);
}

void Signal_RootMoved::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "XZ", xz_);
}

void Signal_RunSpeed::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Speed", speed_);
  timeline::Serialize(reader, writer, "TimeToMax", time_to_max_);
}

void Signal_Shoot::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "ShootPos", shoot_pos_);
}

void Signal_SkillTiming::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_Sound::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "Volume", volume_);
  timeline::Serialize(reader, writer, "PauseWithTime", pause_with_time_);
  timeline::Serialize(reader, writer, "StaticPlay", static_play_);
}

void Signal_Stabilize::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_TimeScale::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Target", target_);
  timeline::Serialize(reader, writer, "FScale", f_scale_);
}

void Signal_TrailHandL::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "VertexArraySize", vertex_array_size_);
  timeline::Serialize(reader, writer, "VertexArray",
    vertex_array_, vertex_array_size_);
}

void Signal_TrailHandR::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "VertexArraySize", vertex_array_size_);
  timeline::Serialize(reader, writer, "VertexArray",
    vertex_array_, vertex_array_size_);
}

void Signal_Voice::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "Volume", volume_);
}

void Signal_WeaponAnim::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "WeaponAnimType", weapon_anim_type_);
}

void Signal_WeaponDrop::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

}
