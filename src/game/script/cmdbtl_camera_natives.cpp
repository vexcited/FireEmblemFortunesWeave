namespace as {

class ScriptManager;

// The natives read the manager through the global offset table, so it is
// declared with default visibility before the header.
[[gnu::visibility("default")]] extern ScriptManager* g_script_manager;

}

#include "as/script_context.hpp"
#include "game/cmdbtl/manager.hpp"

namespace game::script::cmdbtl::camera {

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline void EndBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
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

#pragma GCC visibility pop

}
