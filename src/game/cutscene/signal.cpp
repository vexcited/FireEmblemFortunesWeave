#pragma GCC visibility push(hidden)
#include "game/cutscene/signal.hpp"
#include "timeline/key_io.hpp"
#pragma GCC visibility pop

namespace game::cutscene {

void SignalRoot::Dispatch() {}

TIMELINE_KEY_NAME_DEFINE(Signal_Actor)
TIMELINE_KEY_NAME_DEFINE(Signal_BackGround)
TIMELINE_KEY_NAME_DEFINE(Signal_Bloom)
TIMELINE_KEY_NAME_DEFINE(Signal_Camera)
TIMELINE_KEY_NAME_DEFINE(Signal_Caption)
TIMELINE_KEY_NAME_DEFINE(Signal_CharaCloth)
TIMELINE_KEY_NAME_DEFINE(Signal_CharaWind)
TIMELINE_KEY_NAME_DEFINE(Signal_Clock)
TIMELINE_KEY_NAME_DEFINE(Signal_ColorGrading)
TIMELINE_KEY_NAME_DEFINE(Signal_Constrain)
TIMELINE_KEY_NAME_DEFINE(Signal_CustomGrad)
TIMELINE_KEY_NAME_DEFINE(Signal_DOF2)
TIMELINE_KEY_NAME_DEFINE(Signal_Dissolve)
TIMELINE_KEY_NAME_DEFINE(Signal_Env)
TIMELINE_KEY_NAME_DEFINE(Signal_Exposure)
TIMELINE_KEY_NAME_DEFINE(Signal_FadeIn)
TIMELINE_KEY_NAME_DEFINE(Signal_FadeOut)
TIMELINE_KEY_NAME_DEFINE(Signal_Fog)
TIMELINE_KEY_NAME_DEFINE(Signal_GlobalWind)
TIMELINE_KEY_NAME_DEFINE(Signal_Light)
TIMELINE_KEY_NAME_DEFINE(Signal_LightMove)
TIMELINE_KEY_NAME_DEFINE(Signal_LightRange)
TIMELINE_KEY_NAME_DEFINE(Signal_LightShow)
TIMELINE_KEY_NAME_DEFINE(Signal_MapEffect)
TIMELINE_KEY_NAME_DEFINE(Signal_MotionBlur)
TIMELINE_KEY_NAME_DEFINE(Signal_Movie)
TIMELINE_KEY_NAME_DEFINE(Signal_MovieEnd)
TIMELINE_KEY_NAME_DEFINE(Signal_NegaPosi)
TIMELINE_KEY_NAME_DEFINE(Signal_OtherSetting)
TIMELINE_KEY_NAME_DEFINE(Signal_Particle2)
TIMELINE_KEY_NAME_DEFINE(Signal_ParticleMove)
TIMELINE_KEY_NAME_DEFINE(Signal_PlayCharaAnim)
TIMELINE_KEY_NAME_DEFINE(Signal_PlayPropAnim)
TIMELINE_KEY_NAME_DEFINE(Signal_Prop)
TIMELINE_KEY_NAME_DEFINE(Signal_RadialBlur)
TIMELINE_KEY_NAME_DEFINE(Signal_SceneShadow)
TIMELINE_KEY_NAME_DEFINE(Signal_ShowChara)
TIMELINE_KEY_NAME_DEFINE(Signal_ShowProp)
TIMELINE_KEY_NAME_DEFINE(Signal_SlowBegin)
TIMELINE_KEY_NAME_DEFINE(Signal_SlowEnd)
TIMELINE_KEY_NAME_DEFINE(Signal_Sound)
TIMELINE_KEY_NAME_DEFINE(Signal_SoundPreview)
TIMELINE_KEY_NAME_DEFINE(Signal_Version)
TIMELINE_KEY_NAME_DEFINE(Signal_Vignette)
TIMELINE_KEY_NAME_DEFINE(Signal_Voice)

void Signal_Actor::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Name", name_);
  timeline::Serialize(reader, writer, "Label", label_);
}

void Signal_BackGround::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "MapPosition", map_position_);
  timeline::Serialize(reader, writer, "MapRotate", map_rotate_);
  timeline::Serialize(reader, writer, "Time", time_);
  timeline::Serialize(reader, writer, "ExposureManual", exposure_manual_);
  timeline::Serialize(reader, writer, "EV", ev_);
  timeline::Serialize(reader, writer, "HadesMap", hades_map_);
  timeline::Serialize(reader, writer, "DisableCloudShadow",
    disable_cloud_shadow_);
  timeline::Serialize(reader, writer, "Weather", weather_);
  timeline::Serialize(reader, writer, "EnableMainLightInfluenceRateInShadow",
    enable_main_light_influence_rate_in_shadow_);
  timeline::Serialize(reader, writer, "MainLightInfluenceRateInShadow",
    main_light_influence_rate_in_shadow_);
  timeline::Serialize(reader, writer, "WindSpeed", wind_speed_);
}

void Signal_Bloom::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "AlphaSize", alpha_size_);
  timeline::Serialize(reader, writer, "Alpha", alpha_, alpha_size_);
  timeline::Serialize(reader, writer, "ThresholdSize", threshold_size_);
  timeline::Serialize(reader, writer, "Threshold", threshold_, threshold_size_);
  timeline::Serialize(reader, writer, "SoftThresholdSize",
    soft_threshold_size_);
  timeline::Serialize(reader, writer, "SoftThreshold",
    soft_threshold_, soft_threshold_size_);
  timeline::Serialize(reader, writer, "IntensityLevelSize",
    intensity_level_size_);
  timeline::Serialize(reader, writer, "IntensityLevel",
    intensity_level_, intensity_level_size_);
}

void Signal_Camera::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "CameraAnim", camera_anim_);
  timeline::Serialize(reader, writer, "DisableClothStabilize",
    disable_cloth_stabilize_);
  timeline::Serialize(reader, writer, "DisableResetExposure",
    disable_reset_exposure_);
  timeline::Serialize(reader, writer, "BulletTime", bullet_time_);
  timeline::Serialize(reader, writer, "Near", near_);
  timeline::Serialize(reader, writer, "DisableLensFlare", disable_lens_flare_);
  timeline::Serialize(reader, writer, "DisableResetMotionBlur",
    disable_reset_motion_blur_);
  timeline::Serialize(reader, writer, "EnableLOD", enable_lod_);
  timeline::Serialize(reader, writer, "EnableGrassDither",
    enable_grass_dither_);
}

void Signal_Caption::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "StartMsecJP", start_msec_jp_);
  timeline::Serialize(reader, writer, "EndMsecJP", end_msec_jp_);
  timeline::Serialize(reader, writer, "StartMsecEN", start_msec_en_);
  timeline::Serialize(reader, writer, "EndMsecEN", end_msec_en_);
}

void Signal_CharaCloth::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "CharaID", chara_id_);
  timeline::Serialize(reader, writer, "Reset", reset_);
  timeline::Serialize(reader, writer, "AnimBlend", anim_blend_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "AnimBlendRateSize",
    anim_blend_rate_size_);
  timeline::Serialize(reader, writer, "AnimBlendRate",
    anim_blend_rate_, anim_blend_rate_size_);
}

void Signal_CharaWind::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "CharaID", chara_id_);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "PowerSize", power_size_);
  timeline::Serialize(reader, writer, "Power", power_, power_size_);
  timeline::Serialize(reader, writer, "SpeedSize", speed_size_);
  timeline::Serialize(reader, writer, "Speed", speed_, speed_size_);
  timeline::Serialize(reader, writer, "FluctuationSize", fluctuation_size_);
  timeline::Serialize(reader, writer, "Fluctuation",
    fluctuation_, fluctuation_size_);
  timeline::Serialize(reader, writer, "AngleXSize", angle_x_size_);
  timeline::Serialize(reader, writer, "AngleX", angle_x_, angle_x_size_);
  timeline::Serialize(reader, writer, "AngleYSize", angle_y_size_);
  timeline::Serialize(reader, writer, "AngleY", angle_y_, angle_y_size_);
}

void Signal_Clock::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Time", time_);
}

void Signal_ColorGrading::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "ColorFilter", color_filter_);
  timeline::Serialize(reader, writer, "ColorFilterLevelSize",
    color_filter_level_size_);
  timeline::Serialize(reader, writer, "ColorFilterLevel",
    color_filter_level_, color_filter_level_size_);
  timeline::Serialize(reader, writer, "TemperatureSize", temperature_size_);
  timeline::Serialize(reader, writer, "Temperature",
    temperature_, temperature_size_);
  timeline::Serialize(reader, writer, "TintSize", tint_size_);
  timeline::Serialize(reader, writer, "Tint", tint_, tint_size_);
  timeline::Serialize(reader, writer, "HueShiftSize", hue_shift_size_);
  timeline::Serialize(reader, writer, "HueShift", hue_shift_, hue_shift_size_);
  timeline::Serialize(reader, writer, "SaturationSize", saturation_size_);
  timeline::Serialize(reader, writer, "Saturation",
    saturation_, saturation_size_);
}

void Signal_Constrain::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "ConstrainID", constrain_id_);
  timeline::Serialize(reader, writer, "ConstrainType", constrain_type_);
  timeline::Serialize(reader, writer, "ConstrainTarget", constrain_target_);
  timeline::Serialize(reader, writer, "CharaID", chara_id_);
  timeline::Serialize(reader, writer, "PropID", prop_id_);
  timeline::Serialize(reader, writer, "TargetNode", target_node_);
  timeline::Serialize(reader, writer, "BindDirection", bind_direction_);
  timeline::Serialize(reader, writer, "Offset", offset_);
  timeline::Serialize(reader, writer, "OffsetRot", offset_rot_);
  timeline::Serialize(reader, writer, "LocalPos", local_pos_);
}

void Signal_CustomGrad::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "Color", color_);
  timeline::Serialize(reader, writer, "AlphaSize", alpha_size_);
  timeline::Serialize(reader, writer, "Alpha", alpha_, alpha_size_);
  timeline::Serialize(reader, writer, "VignetteRotateSize",
    vignette_rotate_size_);
  timeline::Serialize(reader, writer, "VignetteRotate",
    vignette_rotate_, vignette_rotate_size_);
  timeline::Serialize(reader, writer, "VignetteCenter_XSize",
    vignette_center_x_size_);
  timeline::Serialize(reader, writer, "VignetteCenter_X",
    vignette_center_x_, vignette_center_x_size_);
  timeline::Serialize(reader, writer, "VignetteCenter_YSize",
    vignette_center_y_size_);
  timeline::Serialize(reader, writer, "VignetteCenter_Y",
    vignette_center_y_, vignette_center_y_size_);
  timeline::Serialize(reader, writer, "VignetteIntensitySize",
    vignette_intensity_size_);
  timeline::Serialize(reader, writer, "VignetteIntensity",
    vignette_intensity_, vignette_intensity_size_);
  timeline::Serialize(reader, writer, "VignetteSmoothnessSize",
    vignette_smoothness_size_);
  timeline::Serialize(reader, writer, "VignetteSmoothness",
    vignette_smoothness_, vignette_smoothness_size_);
}

void Signal_DOF2::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "FNumSize", f_num_size_);
  timeline::Serialize(reader, writer, "FNum", f_num_, f_num_size_);
  timeline::Serialize(reader, writer, "FocusDistaneSize", focus_distane_size_);
  timeline::Serialize(reader, writer, "FocusDistane",
    focus_distane_, focus_distane_size_);
  timeline::Serialize(reader, writer, "OffsetFocusDistanceSize",
    offset_focus_distance_size_);
  timeline::Serialize(reader, writer, "OffsetFocusDistance",
    offset_focus_distance_, offset_focus_distance_size_);
  timeline::Serialize(reader, writer, "ConstrainID", constrain_id_);
}

void Signal_Dissolve::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "CharaID", chara_id_);
  timeline::Serialize(reader, writer, "PropID", prop_id_);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "ThresholdSize", threshold_size_);
  timeline::Serialize(reader, writer, "Threshold", threshold_, threshold_size_);
  timeline::Serialize(reader, writer, "Radiate", radiate_);
  timeline::Serialize(reader, writer, "RadiateRelative", radiate_relative_);
  timeline::Serialize(reader, writer, "TargetNode", target_node_);
  timeline::Serialize(reader, writer, "RadiateCenter", radiate_center_);
  timeline::Serialize(reader, writer, "RadiateRadiusSize",
    radiate_radius_size_);
  timeline::Serialize(reader, writer, "RadiateRadius",
    radiate_radius_, radiate_radius_size_);
  timeline::Serialize(reader, writer, "RadiateRangeSize", radiate_range_size_);
  timeline::Serialize(reader, writer, "RadiateRange",
    radiate_range_, radiate_range_size_);
}

void Signal_Env::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "HasSunSize", has_sun_size_);
  timeline::Serialize(reader, writer, "HasSun", has_sun_, has_sun_size_);
}

void Signal_Exposure::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "ExposureBGSize", exposure_bg_size_);
  timeline::Serialize(reader, writer, "ExposureBG",
    exposure_bg_, exposure_bg_size_);
  timeline::Serialize(reader, writer, "ExposureCharaSize",
    exposure_chara_size_);
  timeline::Serialize(reader, writer, "ExposureChara",
    exposure_chara_, exposure_chara_size_);
}

void Signal_FadeIn::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "FadeColor", fade_color_);
  timeline::Serialize(reader, writer, "FadeTime", fade_time_);
}

void Signal_FadeOut::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "FadeColor", fade_color_);
  timeline::Serialize(reader, writer, "FadeTime", fade_time_);
}

void Signal_Fog::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "FogNearSize", fog_near_size_);
  timeline::Serialize(reader, writer, "FogNear", fog_near_, fog_near_size_);
  timeline::Serialize(reader, writer, "FogFarSize", fog_far_size_);
  timeline::Serialize(reader, writer, "FogFar", fog_far_, fog_far_size_);
  timeline::Serialize(reader, writer, "FogColorEnable", fog_color_enable_);
  timeline::Serialize(reader, writer, "Color", color_);
  timeline::Serialize(reader, writer, "FogEVSize", fog_ev_size_);
  timeline::Serialize(reader, writer, "FogEV", fog_ev_, fog_ev_size_);
}

void Signal_GlobalWind::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "FluctuationSize", fluctuation_size_);
  timeline::Serialize(reader, writer, "Fluctuation",
    fluctuation_, fluctuation_size_);
}

void Signal_Light::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "ID", id_);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "LightType", light_type_);
  timeline::Serialize(reader, writer, "Position", position_);
  timeline::Serialize(reader, writer, "Direction", direction_);
  timeline::Serialize(reader, writer, "Color", color_);
  timeline::Serialize(reader, writer, "Intensity", intensity_);
  timeline::Serialize(reader, writer, "CutOff", cut_off_);
  timeline::Serialize(reader, writer, "RectScale", rect_scale_);
  timeline::Serialize(reader, writer, "OuterAngle", outer_angle_);
  timeline::Serialize(reader, writer, "InnerAngleRatio", inner_angle_ratio_);
  timeline::Serialize(reader, writer, "Alpha", alpha_);
  timeline::Serialize(reader, writer, "Shadow", shadow_);
  timeline::Serialize(reader, writer, "Visible", visible_);
  timeline::Serialize(reader, writer, "IntensityFluctuationSize",
    intensity_fluctuation_size_);
  timeline::Serialize(reader, writer, "IntensityFluctuation",
    intensity_fluctuation_, intensity_fluctuation_size_);
  timeline::Serialize(reader, writer, "innerRadius", inner_radius_);
  timeline::Serialize(reader, writer, "attenuationCorrection",
    attenuation_correction_);
}

void Signal_LightMove::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "LightID", light_id_);
  timeline::Serialize(reader, writer, "Flags", flags_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "PositionsSize", positions_size_);
  timeline::Serialize(reader, writer, "Positions", positions_, positions_size_);
  timeline::Serialize(reader, writer, "DirectionsSize", directions_size_);
  timeline::Serialize(reader, writer, "Directions",
    directions_, directions_size_);
  timeline::Serialize(reader, writer, "ConstrainID", constrain_id_);
}

void Signal_LightRange::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "LightID", light_id_);
  timeline::Serialize(reader, writer, "Flags", flags_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "CutOffSize", cut_off_size_);
  timeline::Serialize(reader, writer, "CutOff", cut_off_, cut_off_size_);
  timeline::Serialize(reader, writer, "OuterAngleSize", outer_angle_size_);
  timeline::Serialize(reader, writer, "OuterAngle",
    outer_angle_, outer_angle_size_);
  timeline::Serialize(reader, writer, "InnerAngleRatioSize",
    inner_angle_ratio_size_);
  timeline::Serialize(reader, writer, "InnerAngleRatio",
    inner_angle_ratio_, inner_angle_ratio_size_);
  timeline::Serialize(reader, writer, "RectSizeXSize", rect_size_x_size_);
  timeline::Serialize(reader, writer, "RectSizeX",
    rect_size_x_, rect_size_x_size_);
  timeline::Serialize(reader, writer, "RectSizeYSize", rect_size_y_size_);
  timeline::Serialize(reader, writer, "RectSizeY",
    rect_size_y_, rect_size_y_size_);
  timeline::Serialize(reader, writer, "innerRadiusSize", inner_radius_size_);
  timeline::Serialize(reader, writer, "innerRadius",
    inner_radius_, inner_radius_size_);
  timeline::Serialize(reader, writer, "attenuationCorrectionSize",
    attenuation_correction_size_);
  timeline::Serialize(reader, writer, "attenuationCorrection",
    attenuation_correction_, attenuation_correction_size_);
}

void Signal_LightShow::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "LightID", light_id_);
  timeline::Serialize(reader, writer, "Visible", visible_);
  timeline::Serialize(reader, writer, "Flags", flags_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "Color", color_);
  timeline::Serialize(reader, writer, "IntensitySize", intensity_size_);
  timeline::Serialize(reader, writer, "Intensity", intensity_, intensity_size_);
  timeline::Serialize(reader, writer, "AlphaSize", alpha_size_);
  timeline::Serialize(reader, writer, "Alpha", alpha_, alpha_size_);
}

void Signal_MapEffect::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "EffectID", effect_id_);
  timeline::Serialize(reader, writer, "Show", show_);
}

void Signal_MotionBlur::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "Alpha", alpha_);
}

void Signal_Movie::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Movie", movie_);
  timeline::Serialize(reader, writer, "PlayFrame", play_frame_);
}

void Signal_MovieEnd::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_NegaPosi::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "Gamma", gamma_);
}

void Signal_OtherSetting::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "DisableHeightFog", disable_height_fog_);
}

void Signal_Particle2::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "Particle", particle_);
  timeline::Serialize(reader, writer, "LifeTime", life_time_);
  timeline::Serialize(reader, writer, "Position", position_);
  timeline::Serialize(reader, writer, "Rotate_D", rotate_d_);
  timeline::Serialize(reader, writer, "Scale", scale_);
  timeline::Serialize(reader, writer, "ConstrainID", constrain_id_);
  timeline::Serialize(reader, writer, "IsMaking", is_making_);
  timeline::Serialize(reader, writer, "ValidScene", valid_scene_);
}

void Signal_ParticleMove::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "Particle", particle_);
  timeline::Serialize(reader, writer, "LifeTime", life_time_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "PositionsSize", positions_size_);
  timeline::Serialize(reader, writer, "Positions", positions_, positions_size_);
  timeline::Serialize(reader, writer, "RotatesSize", rotates_size_);
  timeline::Serialize(reader, writer, "Rotates", rotates_, rotates_size_);
  timeline::Serialize(reader, writer, "ScalesSize", scales_size_);
  timeline::Serialize(reader, writer, "Scales", scales_, scales_size_);
  timeline::Serialize(reader, writer, "IsMaking", is_making_);
  timeline::Serialize(reader, writer, "ValidScene", valid_scene_);
}

void Signal_PlayCharaAnim::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "CharaID", chara_id_);
  timeline::Serialize(reader, writer, "CharaAnim", chara_anim_);
}

void Signal_PlayPropAnim::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "PropID", prop_id_);
  timeline::Serialize(reader, writer, "PropAnim", prop_anim_);
}

void Signal_Prop::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "PropName", prop_name_);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "DisableCloth", disable_cloth_);
  timeline::Serialize(reader, writer, "EnhanceReset", enhance_reset_);
  timeline::Serialize(reader, writer, "LocalLightShadow", local_light_shadow_);
  timeline::Serialize(reader, writer, "Outline", outline_);
}

void Signal_RadialBlur::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "BlurStrengthSize", blur_strength_size_);
  timeline::Serialize(reader, writer, "BlurStrength",
    blur_strength_, blur_strength_size_);
  timeline::Serialize(reader, writer, "BlurCenter_XSize", blur_center_x_size_);
  timeline::Serialize(reader, writer, "BlurCenter_X",
    blur_center_x_, blur_center_x_size_);
  timeline::Serialize(reader, writer, "BlurCenter_YSize", blur_center_y_size_);
  timeline::Serialize(reader, writer, "BlurCenter_Y",
    blur_center_y_, blur_center_y_size_);
  timeline::Serialize(reader, writer, "BlurSampleCount", blur_sample_count_);
}

void Signal_SceneShadow::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "CutOnly", cut_only_);
  timeline::Serialize(reader, writer, "ShadowFar", shadow_far_);
}

void Signal_ShowChara::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "CharaID", chara_id_);
  timeline::Serialize(reader, writer, "Show", show_);
  timeline::Serialize(reader, writer, "Position", position_);
  timeline::Serialize(reader, writer, "Rotate_R", rotate_r_);
  timeline::Serialize(reader, writer, "ShadowCast", shadow_cast_);
}

void Signal_ShowProp::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "PropID", prop_id_);
  timeline::Serialize(reader, writer, "Show", show_);
  timeline::Serialize(reader, writer, "Position", position_);
  timeline::Serialize(reader, writer, "Rotate_R", rotate_r_);
  timeline::Serialize(reader, writer, "ShadowCast", shadow_cast_);
  timeline::Serialize(reader, writer, "Scale", scale_);
}

void Signal_SlowBegin::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Speed", speed_);
}

void Signal_SlowEnd::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
}

void Signal_Sound::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "Volume", volume_);
}

void Signal_SoundPreview::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
}

void Signal_Version::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Version", version_);
}

void Signal_Vignette::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Bool", bool_);
  timeline::Serialize(reader, writer, "Interp", interp_);
  timeline::Serialize(reader, writer, "Color", color_);
  timeline::Serialize(reader, writer, "BeginSize", begin_size_);
  timeline::Serialize(reader, writer, "Begin", begin_, begin_size_);
  timeline::Serialize(reader, writer, "RangeSize", range_size_);
  timeline::Serialize(reader, writer, "Range", range_, range_size_);
  timeline::Serialize(reader, writer, "SmoothnessSize", smoothness_size_);
  timeline::Serialize(reader, writer, "Smoothness",
    smoothness_, smoothness_size_);
  timeline::Serialize(reader, writer, "CenterXSize", center_x_size_);
  timeline::Serialize(reader, writer, "CenterX", center_x_, center_x_size_);
  timeline::Serialize(reader, writer, "CenterYSize", center_y_size_);
  timeline::Serialize(reader, writer, "CenterY", center_y_, center_y_size_);
  timeline::Serialize(reader, writer, "RoundedSize", rounded_size_);
  timeline::Serialize(reader, writer, "Rounded", rounded_, rounded_size_);
}

void Signal_Voice::Serialize(timeline::KeyReader* reader,
  timeline::KeyWriter* writer) {
  SignalRoot::Serialize(reader, writer);
  timeline::Serialize(reader, writer, "Label", label_);
  timeline::Serialize(reader, writer, "Volume", volume_);
}

}
