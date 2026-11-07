#include "as/script_context.hpp"
#include "game/cmdbtl/manager.hpp"
#include "math/vec3.hpp"

namespace game::script::cmdbtl::camera {

// The script manager of as/script_context.hpp, read through the global offset
// table by most of these natives.
extern as::ScriptManager* g_script_manager;

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline as::ScriptContext* GetCurrentContext() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

[[gnu::always_inline]] inline void EndBlock() {
  as::ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}

void StartEvent(float px, float py, float pz, float rx, float ry, float rz,
  float sec) {
  EndBlock();
  const float transform[6] = {px, py, pz, rx, ry, rz};
  g_cmdbtl_manager->GetDirector().StartEvent(transform, sec);
}

float GetYawDeg() {
  EndBlock();
  const game::cmdbtl::Camera* camera = g_cmdbtl_manager->GetCamera();
  return camera != nullptr ? camera->GetYawDeg() : 0.0f;
}

float GetPitchDeg() {
  EndBlock();
  const game::cmdbtl::Camera* camera = g_cmdbtl_manager->GetCamera();
  return camera != nullptr ? camera->GetPitchDeg() : 0.0f;
}

void QuakeOnce(float powerRate, float sec) {
  EndBlock();
  g_cmdbtl_manager->GetQuake()->Once(powerRate * 0.05f, sec);
}

void QuakeFade(float sec, float powerRate, float noizeSpeedRate) {
  EndBlock();
  g_cmdbtl_manager->GetQuake()->Fade(sec, powerRate * 0.01f, noizeSpeedRate);
}

void QuakeLoopStart(float powerRate, float noizeSpeedRate) {
  EndBlock();
  g_cmdbtl_manager->GetQuake()->LoopStart(powerRate * 0.01f,
    noizeSpeedRate);
}

void QuakeLoopEnd(float fadeSec) {
  EndBlock();
  g_cmdbtl_manager->GetQuake()->LoopEnd(fadeSec);
}

void QuakeStopAll() {
  EndBlock();
  g_cmdbtl_manager->GetQuake()->StopAll();
}

math::Vec3 GetWorldPosition() {
  EndBlock();
  if (const game::cmdbtl::Camera* camera = g_cmdbtl_manager->GetCamera()) {
    return math::Vec3(camera->GetPosition().v);
  }
  return math::Vec3::Zero();
}

// Runs again next frame while the transition lasts. This one reads the
// manager directly.
void WaitTransition() {
  const bool running = game::cmdbtl::Manager::GetInstance()->GetDirector()
    .IsTransitioning();
  as::ScriptContext* context = as::GetCurrentContext();
  if (running) {
    context->GetRunner()->SetBlockState(0);
    return;
  }
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

#pragma GCC visibility pop

}
