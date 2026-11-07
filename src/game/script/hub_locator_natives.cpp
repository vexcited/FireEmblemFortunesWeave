#include <memory>
#include <new>
#include <optional>
#include <string>
#include <vector>

#include "as/script_context.hpp"
#include "game/hub/locator.hpp"
#include "game/script/script_string.hpp"
#include "math/vec3.hpp"

// The natives of the hub::locator script namespace and the behaviors of the
// LocatorHandle script type. Each native opens the script block, then works
// on the locator while the handle still names one.
namespace game::script::hub::locator {

using game::hub::Locator;
using game::hub::LocatorDispos;
using game::hub::LocatorHandle;

// The script manager of as/script_context.hpp, read through the global offset
// table by these natives.
extern as::ScriptManager* g_script_manager;

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

#pragma GCC visibility push(hidden)

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

[[gnu::always_inline]] inline Locator* Open(const LocatorHandle& handle) {
  OpenBlock();
  return handle.Get();
}

}

// The behaviors of the script type.
void Construct(void* memory) {
  new (memory) LocatorHandle();
}

void CopyConstruct(const LocatorHandle& other, void* memory) {
  new (memory) LocatorHandle(other);
}

void Destruct(LocatorHandle* self) {
  self->~LocatorHandle();
}

LocatorHandle& Assign(LocatorHandle* self, const LocatorHandle& other) {
  return *self = other;
}

bool Equals(const LocatorHandle* self, const LocatorHandle& other) {
  return *self == other;
}

LocatorHandle GetHandleLabel(const std::string& label) {
  OpenBlock();
  std::shared_ptr<Locator> locator =
    LocatorDispos::GetInstance()->FindLabel(label);
  return LocatorHandle(locator.get());
}

LocatorHandle GetHandleGlobalHash(uint64_t globalHash) {
  OpenBlock();
  std::shared_ptr<Locator> locator =
    LocatorDispos::GetInstance()->FindGlobalHash(globalHash);
  return LocatorHandle(locator.get());
}

int GetLabelCount(const std::string& label) {
  OpenBlock();
  return LocatorDispos::GetInstance()->FindLabels(label).size();
}

bool IsPlaceable(LocatorHandle handle) {
  Locator* locator = Open(handle);
  return locator != nullptr && locator->IsPlaceable();
}

void ReserveErace(LocatorHandle handle) {
  if (Locator* locator = Open(handle)) {
    if (const std::shared_ptr<Locator>* entry =
      LocatorDispos::GetInstance()->Find(locator)) {
      (*entry)->ReserveErase();
    }
  }
}

uint64_t GetGlobalHash(LocatorHandle handle) {
  Locator* locator = Open(handle);
  return locator != nullptr ? locator->GetGlobalHash() : 0;
}

void LctRegisterLabel(LocatorHandle handle, const std::string& label) {
  if (Locator* locator = Open(handle)) {
    locator->RegisterLabel(label.c_str());
  }
}

math::Vec3 GetDisposPosition(LocatorHandle handle) {
  Locator* locator = Open(handle);
  if (locator != nullptr) {
    return locator->GetDisposPosition();
  }
  return math::Vec3::Zero();
}

float GetDisposAngle(LocatorHandle handle) {
  Locator* locator = Open(handle);
  return locator != nullptr ? locator->GetDisposAngle() : 0.0f;
}

void SetDestinationOverride(LocatorHandle handle) {
  if (Locator* locator = Open(handle)) {
    g_instance<game::hub::Destination>->SetOverride(
      std::vector<uint64_t>{locator->GetGlobalHash()});
  }
}

#pragma GCC visibility pop

}
