#include <new>

#include "angelscript/angelscript/include/angelscript.h"
#include "angelscript/add_on/scriptarray/scriptarray.h"
#include "math/vec3.hpp"
#include "snd/api.hpp"
#include "snd/game.hpp"
#include "snd/script_commands.hpp"

namespace snd::debug {

// These commands read the script manager through the global offset table.
extern as::ScriptManager* g_script_manager;

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline void openBlockFirst() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  as::ScriptContext* context =
    thread != nullptr ? thread->GetContext() : nullptr;
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// Up to seven track names, read from a script array of strings.
[[gnu::always_inline]] inline BGM::Request makeRequest(CScriptArray& names) {
  BGM::Request request;
  for (asUINT i = 0; i < names.GetSize(); i++) {
    request.add(static_cast<Text*>(names.At(i))->c_str());
  }
  return request;
}

}

#pragma GCC visibility pop

// The script constructors of a voice handle, from a sound label or a slot
// name.
void constructSound(const Text& label, void* memory) {
  new (memory) fnd::WeakHandle(snd::findSound(label.c_str()));
}

void constructSlot(const Text& name, void* memory) {
  new (memory) fnd::WeakHandle(snd::findSlot(name.c_str()));
}

bool hasSound(const Text& label) {
  return snd::hasSound(label.c_str());
}

fnd::WeakHandle findSoundBlock(const Text& label) {
  openBlockFirst();
  return snd::findSound(label.c_str());
}

fnd::WeakHandle findSlotBlock(const Text& name) {
  openBlockFirst();
  return snd::findSlot(name.c_str());
}

void bgmPlay(CScriptArray& names, int track, float time, float delay,
  float volume) {
  BGM::play(makeRequest(names), Fade(time), track, delay, volume);
  openBlock();
}

void bgmQueue(CScriptArray& names, int track, float time, float delay,
  float volume) {
  BGM::queue(makeRequest(names), Fade(time), track, delay, volume);
  openBlock();
}

Text bgmGetPlayingName() {
  openBlock();
  const char* name = BGM::getPlayingName();
  return Text(name != nullptr ? name : "");
}

fnd::WeakHandle playDirect(const Text& name, const Text& label, float time,
  float delay, float volume) {
  openBlockFirst();
  return snd::playDirect(name.c_str(), label.c_str(), Fade(time), 0, 0x10001,
    0, delay, volume);
}

fnd::WeakHandle playDirectNamed(const Text& name, const Text& label,
  const Text& fade, float delay, float volume) {
  openBlockFirst();
  return snd::playDirect(name.c_str(), label.c_str(), Fade(fade.c_str()), 0,
    0x10001, 0, delay, volume);
}

fnd::WeakHandle playDirectAt(const Text& name, const Text& label, float x,
  float y, float z, float time, float delay, float volume) {
  openBlockFirst();
  return snd::playDirectAt(name.c_str(), label.c_str(), Fade(time), 0,
    0x10001, 0, x, y, z, delay, volume);
}

fnd::WeakHandle playDirectAtNamed(const Text& name, const Text& label,
  const Text& fade, float x, float y, float z, float delay, float volume) {
  openBlockFirst();
  return snd::playDirectAt(name.c_str(), label.c_str(), Fade(fade.c_str()),
    0, 0x10001, 0, x, y, z, delay, volume);
}

fnd::WeakHandle playDirectAt(const Text& name, const Text& label,
  const math::Vec3& position, float time, float delay, float volume) {
  openBlockFirst();
  const char* nameText = name.c_str();
  const char* labelText = label.c_str();
  math::Vec3 at = position;
  return snd::playDirectAt(nameText, labelText, Fade(time), 0, 0x10001, 0,
    at.x(), at.y(), at.z(), delay, volume);
}

fnd::WeakHandle playDirectAtNamed(const Text& name, const Text& label,
  const math::Vec3& position, const Text& fade, float delay, float volume) {
  openBlockFirst();
  const char* nameText = name.c_str();
  const char* labelText = label.c_str();
  math::Vec3 at = position;
  return snd::playDirectAt(nameText, labelText, Fade(fade.c_str()), 0,
    0x10001, 0, at.x(), at.y(), at.z(), delay, volume);
}

fnd::WeakHandle play(const Text& name, const Text& label, float time,
  float delay, float volume) {
  openBlockFirst();
  return snd::play(name.c_str(), label.c_str(), Fade(time), 0, 0x10001, 0,
    delay, volume);
}

fnd::WeakHandle playNamed(const Text& name, const Text& label,
  const Text& fade, float delay, float volume) {
  openBlockFirst();
  return snd::play(name.c_str(), label.c_str(), Fade(fade.c_str()), 0,
    0x10001, 0, delay, volume);
}

fnd::WeakHandle playAt(const Text& name, const Text& label, float x, float y,
  float z, float time, float delay, float volume) {
  openBlockFirst();
  return snd::playAt(name.c_str(), label.c_str(), Fade(time), 0, 0x10001, 0,
    x, y, z, delay, volume);
}

fnd::WeakHandle playAtNamed(const Text& name, const Text& label,
  const Text& fade, float x, float y, float z, float delay, float volume) {
  openBlockFirst();
  return snd::playAt(name.c_str(), label.c_str(), Fade(fade.c_str()), 0,
    0x10001, 0, x, y, z, delay, volume);
}

fnd::WeakHandle playAt(const Text& name, const Text& label,
  const math::Vec3& position, float time, float delay, float volume) {
  openBlockFirst();
  const char* nameText = name.c_str();
  const char* labelText = label.c_str();
  math::Vec3 at = position;
  return snd::playAt(nameText, labelText, Fade(time), 0, 0x10001, 0, at.x(),
    at.y(), at.z(), delay, volume);
}

fnd::WeakHandle playAtNamed(const Text& name, const Text& label,
  const math::Vec3& position, const Text& fade, float delay, float volume) {
  openBlockFirst();
  const char* nameText = name.c_str();
  const char* labelText = label.c_str();
  math::Vec3 at = position;
  return snd::playAt(nameText, labelText, Fade(fade.c_str()), 0, 0x10001, 0,
    at.x(), at.y(), at.z(), delay, volume);
}

float getSlotVolume(const Text& name) {
  openBlockFirst();
  return snd::getSlotVolume(name.c_str());
}

}
