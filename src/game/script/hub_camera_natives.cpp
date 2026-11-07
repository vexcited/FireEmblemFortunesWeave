#include <cmath>
#include <memory>
#include <new>
#include <optional>
#include <string>
#include <string_view>

#include "as/script_context.hpp"
#include "game/hub/camera_manager.hpp"
#include "game/hub/character.hpp"
#include "game/script/script_string.hpp"
#include "game/sound/game_sound.hpp"
#include "game/zview/camera.hpp"
#include "math/vec3.hpp"

// The natives of the hub::camera script namespace and the behaviors of its
// SpotCameraData and LimitCameraData script types.
namespace game::script::hub::camera {

using game::hub::CameraManager;
using game::zview::Camera;

// The script manager of as/script_context.hpp, read through the global offset
// table by most of these natives.
extern as::ScriptManager* g_script_manager;

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

#pragma GCC visibility push(hidden)

struct SpotCameraData {
  float px;
  float py;
  float pz;
  float rx;
  float ry;
  float rz;
  float unknown_18;
  bool has_unknown_18;
  float unknown_20;
  bool has_unknown_20;
  float unknown_28;
  bool unknown_2c;
  float unknown_30;
};

struct LimitCameraData {
  float unknown_00;
  bool has_unknown_08;
  float unknown_08;
};

namespace {

[[gnu::always_inline]] inline as::ScriptContext* GetCurrentContext() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
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

[[gnu::always_inline]] inline void Wait(as::ScriptContext* context,
  bool busy) {
  if (busy) {
    context->GetRunner()->SetBlockState(0);
    return;
  }
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

[[gnu::always_inline]] inline void SetTransition(
  const CameraManager::Transform& transform, float sec, float easeInOutRate,
  float powRate) {
  CameraManager* manager = g_instance<CameraManager>;
  if (sec == 0.0f) {
    manager->SetTransform(transform, true);
  }
  else {
    manager->StartTransition(transform, sec, easeInOutRate, powRate);
  }
}

}

void ConstructSpotCameraData(void* memory) {
  new (memory) SpotCameraData();
}

void DestructSpotCameraData(SpotCameraData* self) {
  self->~SpotCameraData();
}

void ConstructLimitCameraData(void* memory) {
  new (memory) LimitCameraData();
}

void DestructLimitCameraData(LimitCameraData* self) {
  self->~LimitCameraData();
}

SpotCameraData GetSpotCameraData() {
  OpenBlockDirect();
  SpotCameraData data;
  if (const Camera::SpotParam* param =
    Camera::GetInstance()->GetSpotParam().get()) {
    data.px = param->position.x();
    data.py = param->position.y();
    data.pz = param->position.z();
    data.rx = param->rotation[0];
    data.ry = param->rotation[1];
    data.rz = param->rotation[2];
    data.unknown_28 = param->unknown_30;
    data.unknown_2c = param->unknown_40;
    data.unknown_30 = param->unknown_28;
    data.has_unknown_18 = param->unknown_20.has_value();
    if (data.has_unknown_18) {
      data.unknown_18 = *param->unknown_20;
    }
    data.has_unknown_20 = param->unknown_38.has_value();
    if (data.has_unknown_20) {
      data.unknown_20 = *param->unknown_38;
    }
  }
  return data;
}

void SpotCameraStart(SpotCameraData& data) {
  OpenBlock();
  std::shared_ptr<Camera::SpotParam> param(new Camera::SpotParam());
  param->position.SetX(data.px);
  param->position.SetY(data.py);
  param->position.SetZ(data.pz);
  param->rotation[0] = data.rx;
  param->rotation[1] = data.ry;
  param->rotation[2] = data.rz;
  param->unknown_40 = data.unknown_2c;
  param->unknown_30 = data.unknown_28;
  if (data.has_unknown_18) {
    param->unknown_20 = data.unknown_18;
  }
  if (data.has_unknown_20) {
    param->unknown_38 = data.unknown_20;
  }
  g_instance<Camera>->StartSpot(param, true);
}

void SpotCameraEnd(float sec) {
  OpenBlock();
  Camera* camera = Camera::GetInstance();
  camera->ClearSpotParam();
  camera->EndSpot({sec});
}

void WaitSpotCamera() {
  const bool running = Camera::GetInstance()->IsSpotRunning();
  Wait(as::GetCurrentContext(), running);
}

void SetCameraTransition(float px, float py, float pz, float rx, float ry,
  float rz, float sec, float easeInOutRate, float powRate) {
  OpenBlock();
  SetTransition({px, py, pz, rx, ry, rz, 0.0f, 40.0f}, sec, easeInOutRate,
    powRate);
}

void SetCameraTransitionFovDistance(float px, float py, float pz, float rx,
  float ry, float rz, float fov, float distance, float sec,
  float easeInOutRate, float powRate) {
  OpenBlock();
  SetTransition({px, py, pz, rx, ry, rz, distance, fov}, sec, easeInOutRate,
    powRate);
}

void WaitTransition() {
  const bool busy = CameraManager::GetInstance()->IsTransitioning();
  Wait(GetCurrentContext(), busy);
}

bool IsActiveEventCamera() {
  OpenBlockDirect();
  return CameraManager::GetInstance()->IsActiveEventCamera();
}

void EventCameraEnd(float sec) {
  OpenBlock();
  g_instance<CameraManager>->EndEventCamera({sec, false, false});
}

void EventCameraEndRestore(float sec) {
  OpenBlock();
  g_instance<CameraManager>->EndEventCamera({sec, true, true});
}

void StartCameraPathEvent(const as::string& pathFileName) {
  OpenBlock();
  CameraManager::GetInstance()->GetPathEvent()->Start(pathFileName);
}

void EndCameraPathEvent(float sec) {
  OpenBlock();
  g_instance<CameraManager>->GetPathEvent()->End(sec);
}

void SetCameraPathSpeed(float speed) {
  OpenBlock();
  if (std::shared_ptr<game::hub::CameraPathEvent::Play> play =
    CameraManager::GetInstance()->GetPathEvent()->GetPlay().lock()) {
    play->speed = speed;
    play->target_speed = speed;
    play->speed_rate = 0.0f;
  }
}

void SetCameraPathSpeed(float speed, float lerpSec) {
  OpenBlock();
  if (std::shared_ptr<game::hub::CameraPathEvent::Play> play =
    CameraManager::GetInstance()->GetPathEvent()->GetPlay().lock()) {
    float rate;
    if (lerpSec <= 0.0f) {
      play->speed = speed;
      rate = 0.0f;
    }
    else {
      rate = std::fabs(play->speed - speed) / lerpSec;
    }
    play->target_speed = speed;
    play->speed_rate = rate;
  }
}

void SetCameraPathLookTargetChara(uint64_t charaGlobalHash) {
  OpenBlock();
  if (std::shared_ptr<game::hub::Character> character =
    game::hub::CharacterManager::GetInstance()->FindGlobalHash(
      charaGlobalHash).lock()) {
    g_instance<CameraManager>->GetPathEvent()->SetLookTarget(character);
  }
}

void CameraRefreshYaw(float yawDeg, float sec) {
  OpenBlock();
  if (game::zview::CameraStateCircleHub* circle =
    Camera::GetInstance()->GetCircleHub()) {
    circle->Refresh(yawDeg, std::nullopt, std::nullopt, sec);
  }
}

void CameraRefreshYawPitch(float yawDeg, float pitchDeg, float sec) {
  OpenBlock();
  if (game::zview::CameraStateCircleHub* circle =
    Camera::GetInstance()->GetCircleHub()) {
    circle->Refresh(yawDeg, pitchDeg, std::nullopt, sec);
  }
}

void CameraRefresh() {
  OpenBlockDirect();
  CameraManager* manager = g_instance<CameraManager>;
  manager->GetPathEvent()->End(0.0f);
  manager->EndEventCamera({0.0f, false, false});
  g_instance<Camera>->ResetState(true);
}

void SetListenerCameraPosition(bool isActive) {
  OpenBlock();
  Camera* camera = g_instance<Camera>;
  camera->SetListenerCamera(isActive);
  if (isActive) {
    const gfx::render::Vector4 position = camera->GetView().CalcPosition();
    if (game::sound::GameSound* sound = game::sound::g_game_sound) {
      sound->SetCameraListener(position);
    }
  }
}

void ReserveCameraResetAtPlayable(float blendSec) {
  OpenBlock();
  CameraManager::GetInstance()->ReserveResetAtPlayable(blendSec, 1.0f);
}

void ReserveCameraResetAtPlayable(float blendSec, float blendPowRate) {
  OpenBlock();
  CameraManager::GetInstance()->ReserveResetAtPlayable(blendSec,
    blendPowRate);
}

void SetLimitParam(LimitCameraData& data) {
  OpenBlock();
  std::shared_ptr<Camera::LimitParam> param =
    std::make_shared<Camera::LimitParam>();
  param->unknown_00 = data.unknown_00;
  if (data.has_unknown_08) {
    param->unknown_04 = data.unknown_08;
  }
  g_instance<Camera>->SetLimitParam(param);
}

void ClearLimitParam() {
  OpenBlockDirect();
  Camera::GetInstance()->ClearLimitParam();
}

void QuakeOnce(float powerRate, float sec) {
  OpenBlock();
  g_instance<Camera>->GetQuake()->Once(powerRate * 0.05f, sec);
}

void QuakeFade(float sec, float powerRate, float noizeSpeedRate) {
  OpenBlock();
  g_instance<Camera>->GetQuake()->Fade(sec, powerRate * 0.01f,
    noizeSpeedRate);
}

void QuakeLoopStart(float powerRate, float noizeSpeedRate) {
  OpenBlock();
  g_instance<Camera>->GetQuake()->LoopStart(powerRate * 0.01f,
    noizeSpeedRate);
}

void QuakeLoopEnd(float fadeSec) {
  OpenBlock();
  Camera::GetInstance()->GetQuake()->LoopEnd(fadeSec);
}

void QuakeStopAll() {
  OpenBlock();
  g_instance<Camera>->GetQuake()->StopAll();
}

math::Vec3 GetCameraPos() {
  OpenBlockDirect();
  return math::Vec3(Camera::GetInstance()->GetView().GetPosition().v);
}

float GetYawDeg() {
  OpenBlockDirect();
  return Camera::GetInstance()->GetYawDeg();
}

float GetPitchDeg() {
  OpenBlockDirect();
  return Camera::GetInstance()->GetPitchDeg();
}

void BeginFirstPerson(float blendSec) {
  OpenBlock();
  Camera::GetInstance()->StartFirstPerson(blendSec);
}

void EndFirstPerson(float blendSec) {
  OpenBlock();
  Camera::GetInstance()->StopFirstPerson(blendSec);
}

#pragma GCC visibility pop

}
