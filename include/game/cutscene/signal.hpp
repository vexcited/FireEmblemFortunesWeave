#pragma once

#include <stdint.h>

#include <string>
#include <vector>

#include "nn/util/vector.hpp"
#include "timeline/key.hpp"

namespace game::cutscene {

class SignalRoot : public timeline::IKey {
public:
  void Dispatch() override;

protected:
  uint8_t unknown0c_[0xc];
};

#define GAME_CUTSCENE_SIGNAL(Name, ...) \
  class Name : public SignalRoot { \
  public: \
    TIMELINE_KEY_NAME(Name) \
  \
  private: \
    __VA_ARGS__ \
  };

GAME_CUTSCENE_SIGNAL(Signal_Actor,
  std::string name_;
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_BackGround,
  std::string label_;
  nn::util::Vector3f map_position_;
  float map_rotate_;
  float time_;
  bool exposure_manual_;
  float ev_;
  bool hades_map_;
  bool disable_cloud_shadow_;
  int32_t weather_;
  bool enable_main_light_influence_rate_in_shadow_;
  float main_light_influence_rate_in_shadow_;
  float wind_speed_;)
GAME_CUTSCENE_SIGNAL(Signal_Bloom,
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t alpha_size_;
  std::vector<float> alpha_;
  int32_t threshold_size_;
  std::vector<float> threshold_;
  int32_t soft_threshold_size_;
  std::vector<float> soft_threshold_;
  int32_t intensity_level_size_;
  std::vector<float> intensity_level_;)
GAME_CUTSCENE_SIGNAL(Signal_Camera,
  std::string camera_anim_;
  bool disable_cloth_stabilize_;
  bool disable_reset_exposure_;
  bool bullet_time_;
  nn::util::Vector2f near_;
  bool disable_lens_flare_;
  bool disable_reset_motion_blur_;
  bool enable_lod_;
  bool enable_grass_dither_;)
GAME_CUTSCENE_SIGNAL(Signal_Caption,
  std::string label_;
  int32_t start_msec_jp_;
  int32_t end_msec_jp_;
  int32_t start_msec_en_;
  int32_t end_msec_en_;)
GAME_CUTSCENE_SIGNAL(Signal_CharaCloth,
  int32_t chara_id_;
  bool reset_;
  bool anim_blend_;
  nn::util::Vector3f interp_;
  int32_t anim_blend_rate_size_;
  std::vector<float> anim_blend_rate_;)
GAME_CUTSCENE_SIGNAL(Signal_CharaWind,
  int32_t chara_id_;
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t power_size_;
  std::vector<float> power_;
  int32_t speed_size_;
  std::vector<float> speed_;
  int32_t fluctuation_size_;
  std::vector<float> fluctuation_;
  int32_t angle_x_size_;
  std::vector<float> angle_x_;
  int32_t angle_y_size_;
  std::vector<float> angle_y_;)
GAME_CUTSCENE_SIGNAL(Signal_Clock,
  float time_;)
GAME_CUTSCENE_SIGNAL(Signal_ColorGrading,
  bool bool_;
  nn::util::Vector3f interp_;
  nn::util::Vector3f color_filter_;
  int32_t color_filter_level_size_;
  std::vector<float> color_filter_level_;
  int32_t temperature_size_;
  std::vector<float> temperature_;
  int32_t tint_size_;
  std::vector<float> tint_;
  int32_t hue_shift_size_;
  std::vector<float> hue_shift_;
  int32_t saturation_size_;
  std::vector<float> saturation_;)
GAME_CUTSCENE_SIGNAL(Signal_Constrain,
  std::string constrain_id_;
  int32_t constrain_type_;
  int32_t constrain_target_;
  int32_t chara_id_;
  int32_t prop_id_;
  std::string target_node_;
  int32_t bind_direction_;
  nn::util::Vector3f offset_;
  nn::util::Vector3f offset_rot_;
  bool local_pos_;)
GAME_CUTSCENE_SIGNAL(Signal_CustomGrad,
  bool bool_;
  nn::util::Vector3f interp_;
  nn::util::Vector3f color_;
  int32_t alpha_size_;
  std::vector<float> alpha_;
  int32_t vignette_rotate_size_;
  std::vector<float> vignette_rotate_;
  int32_t vignette_center_x_size_;
  std::vector<float> vignette_center_x_;
  int32_t vignette_center_y_size_;
  std::vector<float> vignette_center_y_;
  int32_t vignette_intensity_size_;
  std::vector<float> vignette_intensity_;
  int32_t vignette_smoothness_size_;
  std::vector<float> vignette_smoothness_;)
GAME_CUTSCENE_SIGNAL(Signal_DOF2,
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t f_num_size_;
  std::vector<float> f_num_;
  int32_t focus_distane_size_;
  std::vector<float> focus_distane_;
  int32_t offset_focus_distance_size_;
  std::vector<float> offset_focus_distance_;
  std::string constrain_id_;)
GAME_CUTSCENE_SIGNAL(Signal_Dissolve,
  int32_t chara_id_;
  int32_t prop_id_;
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t threshold_size_;
  std::vector<float> threshold_;
  bool radiate_;
  bool radiate_relative_;
  std::string target_node_;
  nn::util::Vector3f radiate_center_;
  int32_t radiate_radius_size_;
  std::vector<float> radiate_radius_;
  int32_t radiate_range_size_;
  std::vector<float> radiate_range_;)
GAME_CUTSCENE_SIGNAL(Signal_Env,
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t has_sun_size_;
  std::vector<float> has_sun_;)
GAME_CUTSCENE_SIGNAL(Signal_Exposure,
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t exposure_bg_size_;
  std::vector<float> exposure_bg_;
  int32_t exposure_chara_size_;
  std::vector<float> exposure_chara_;)
GAME_CUTSCENE_SIGNAL(Signal_FadeIn,
  int32_t fade_color_;
  float fade_time_;)
GAME_CUTSCENE_SIGNAL(Signal_FadeOut,
  int32_t fade_color_;
  float fade_time_;)
GAME_CUTSCENE_SIGNAL(Signal_Fog,
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t fog_near_size_;
  std::vector<float> fog_near_;
  int32_t fog_far_size_;
  std::vector<float> fog_far_;
  bool fog_color_enable_;
  nn::util::Vector3f color_;
  int32_t fog_ev_size_;
  std::vector<float> fog_ev_;)
GAME_CUTSCENE_SIGNAL(Signal_GlobalWind,
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t fluctuation_size_;
  std::vector<float> fluctuation_;)
GAME_CUTSCENE_SIGNAL(Signal_Light,
  std::string id_;
  std::string label_;
  int32_t light_type_;
  nn::util::Vector3f position_;
  nn::util::Vector3f direction_;
  nn::util::Vector3f color_;
  float intensity_;
  float cut_off_;
  nn::util::Vector2f rect_scale_;
  float outer_angle_;
  float inner_angle_ratio_;
  float alpha_;
  bool shadow_;
  bool visible_;
  int32_t intensity_fluctuation_size_;
  std::vector<float> intensity_fluctuation_;
  float inner_radius_;
  float attenuation_correction_;)
GAME_CUTSCENE_SIGNAL(Signal_LightMove,
  std::string light_id_;
  int32_t flags_;
  nn::util::Vector3f interp_;
  int32_t positions_size_;
  std::vector<float> positions_;
  int32_t directions_size_;
  std::vector<float> directions_;
  std::string constrain_id_;)
GAME_CUTSCENE_SIGNAL(Signal_LightRange,
  std::string light_id_;
  int32_t flags_;
  nn::util::Vector3f interp_;
  int32_t cut_off_size_;
  std::vector<float> cut_off_;
  int32_t outer_angle_size_;
  std::vector<float> outer_angle_;
  int32_t inner_angle_ratio_size_;
  std::vector<float> inner_angle_ratio_;
  int32_t rect_size_x_size_;
  std::vector<float> rect_size_x_;
  int32_t rect_size_y_size_;
  std::vector<float> rect_size_y_;
  int32_t inner_radius_size_;
  std::vector<float> inner_radius_;
  int32_t attenuation_correction_size_;
  std::vector<float> attenuation_correction_;)
GAME_CUTSCENE_SIGNAL(Signal_LightShow,
  std::string light_id_;
  bool visible_;
  int32_t flags_;
  nn::util::Vector3f interp_;
  nn::util::Vector3f color_;
  int32_t intensity_size_;
  std::vector<float> intensity_;
  int32_t alpha_size_;
  std::vector<float> alpha_;)
GAME_CUTSCENE_SIGNAL(Signal_MapEffect,
  std::string label_;
  std::string effect_id_;
  bool show_;)
GAME_CUTSCENE_SIGNAL(Signal_MotionBlur,
  bool bool_;
  nn::util::Vector3f interp_;
  float alpha_;)
GAME_CUTSCENE_SIGNAL(Signal_Movie,
  std::string movie_;
  int32_t play_frame_;)
GAME_CUTSCENE_SIGNAL(Signal_MovieEnd)
GAME_CUTSCENE_SIGNAL(Signal_NegaPosi,
  bool bool_;
  nn::util::Vector3f interp_;
  float gamma_;)
GAME_CUTSCENE_SIGNAL(Signal_OtherSetting,
  bool disable_height_fog_;)
GAME_CUTSCENE_SIGNAL(Signal_Particle2,
  std::string label_;
  std::string particle_;
  float life_time_;
  nn::util::Vector3f position_;
  nn::util::Vector3f rotate_d_;
  float scale_;
  std::string constrain_id_;
  bool is_making_;
  int32_t valid_scene_;)
GAME_CUTSCENE_SIGNAL(Signal_ParticleMove,
  std::string label_;
  std::string particle_;
  float life_time_;
  nn::util::Vector3f interp_;
  int32_t positions_size_;
  std::vector<float> positions_;
  int32_t rotates_size_;
  std::vector<float> rotates_;
  int32_t scales_size_;
  std::vector<float> scales_;
  bool is_making_;
  int32_t valid_scene_;)
GAME_CUTSCENE_SIGNAL(Signal_PlayCharaAnim,
  int32_t chara_id_;
  std::string chara_anim_;)
GAME_CUTSCENE_SIGNAL(Signal_PlayPropAnim,
  int32_t prop_id_;
  std::string prop_anim_;)
GAME_CUTSCENE_SIGNAL(Signal_Prop,
  std::string prop_name_;
  std::string label_;
  bool disable_cloth_;
  bool enhance_reset_;
  int32_t local_light_shadow_;
  int32_t outline_;)
GAME_CUTSCENE_SIGNAL(Signal_RadialBlur,
  bool bool_;
  nn::util::Vector3f interp_;
  int32_t blur_strength_size_;
  std::vector<float> blur_strength_;
  int32_t blur_center_x_size_;
  std::vector<float> blur_center_x_;
  int32_t blur_center_y_size_;
  std::vector<float> blur_center_y_;
  int32_t blur_sample_count_;)
GAME_CUTSCENE_SIGNAL(Signal_SceneShadow,
  bool bool_;
  bool cut_only_;
  float shadow_far_;)
GAME_CUTSCENE_SIGNAL(Signal_ShowChara,
  int32_t chara_id_;
  bool show_;
  nn::util::Vector3f position_;
  nn::util::Vector3f rotate_r_;
  bool shadow_cast_;)
GAME_CUTSCENE_SIGNAL(Signal_ShowProp,
  int32_t prop_id_;
  bool show_;
  nn::util::Vector3f position_;
  nn::util::Vector3f rotate_r_;
  bool shadow_cast_;
  float scale_;)
GAME_CUTSCENE_SIGNAL(Signal_SlowBegin,
  float speed_;)
GAME_CUTSCENE_SIGNAL(Signal_SlowEnd)
GAME_CUTSCENE_SIGNAL(Signal_Sound,
  std::string label_;
  float volume_;)
GAME_CUTSCENE_SIGNAL(Signal_SoundPreview,
  std::string label_;)
GAME_CUTSCENE_SIGNAL(Signal_Version,
  int32_t version_;)
GAME_CUTSCENE_SIGNAL(Signal_Vignette,
  bool bool_;
  nn::util::Vector3f interp_;
  nn::util::Vector3f color_;
  int32_t begin_size_;
  std::vector<float> begin_;
  int32_t range_size_;
  std::vector<float> range_;
  int32_t smoothness_size_;
  std::vector<float> smoothness_;
  int32_t center_x_size_;
  std::vector<float> center_x_;
  int32_t center_y_size_;
  std::vector<float> center_y_;
  int32_t rounded_size_;
  std::vector<float> rounded_;)
GAME_CUTSCENE_SIGNAL(Signal_Voice,
  std::string label_;
  float volume_;)

#undef GAME_CUTSCENE_SIGNAL

}
