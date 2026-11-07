#include "game/script/script_string.hpp"
#include "math/vec3.hpp"

// The debug drawing natives, empty in release builds.
namespace game::script::dbg {

#pragma GCC visibility push(hidden)

void DrawSphere(math::Vec3, float) {}

void DrawBox(math::Vec3, math::Vec3) {}

void DrawCylinder(math::Vec3, float, float) {}

void DrawQuad(math::Vec3, math::Vec3, math::Vec3, math::Vec3) {}

void WriteStringToScreen(float, float, const as::string&) {}

#pragma GCC visibility pop

}
