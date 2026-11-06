#include "as/script_context.hpp"
#include <new>
#include <string>
#include <string_view>
#include <vector>

#include "game/hub/area_event.hpp"
#include "game/hub/read_write.hpp"
#include "game/script/script_string.hpp"

namespace game::hub {

extern const std::string_view kAreaEventTypeNames[4];

const std::string_view kAreaEventTypeNames[4] = {
  "Contact",
  "Access",
  "SurroundAccess",
  "ForwardAccess",
};

AreaEventHandle& AreaEventHandle::operator=(const AreaEventHandle& other) {
  key_ = other.key_;
  id_ = other.id_;
  pool_ = other.pool_;
  object_ = other.object_;
  return *this;
}

bool AreaEventHandle::operator==(const AreaEventHandle& other) const {
  return Get() == other.Get();
}

}

// The natives of the hub::event script namespace and of the AreaEventHandle
// script type. Each one opens the script block first, then works on the
// event while the handle still names one.
namespace game::script::hub::event {

using game::hub::AreaEvent;
using game::hub::AreaEventHandle;

namespace {

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

[[gnu::always_inline]] inline void SetFlag(const AreaEventHandle& handle,
  uint32_t flag, bool enabled) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    event->SetFlag(flag, enabled);
  }
}

}

float GetRotY(AreaEventHandle handle) {
  OpenBlock();
  AreaEvent* event = handle.Get();
  return event != nullptr ? event->GetRotY() : 0.0f;
}

bool HasAccessEvent(AreaEventHandle handle) {
  OpenBlock();
  AreaEvent* event = handle.Get();
  return event != nullptr && event->HasAccessEvent();
}

bool IsWalkExit(AreaEventHandle handle) {
  OpenBlock();
  AreaEvent* event = handle.Get();
  return event != nullptr && event->IsWalkExit();
}

void MakeInvisibleWall(AreaEventHandle handle) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    event->MakeInvisibleWall();
  }
}

void RegisterNavMeshObstacle(AreaEventHandle handle) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    event->RegisterNavMeshObstacle();
  }
}

void SetupAreaChangeEvent(AreaEventHandle handle) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    event->SetupAreaChange();
  }
}

void SetEventFrontAngle(AreaEventHandle handle, const float degree) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    event->SetFrontAngle(degree);
  }
}

void SetRestrictedArea(AreaEventHandle handle, bool isEnable) {
  SetFlag(handle, AreaEvent::kFlagRestrictedArea, isEnable);
}

void SetCheckRaycast(AreaEventHandle handle, bool isCheck) {
  SetFlag(handle, AreaEvent::kFlagCheckRaycast, isCheck);
}

void SetEnableEnterSeq(AreaEventHandle handle, bool isEnable) {
  SetFlag(handle, AreaEvent::kFlagEnableEnterSeq, isEnable);
}

void SetShowAccessIcon(AreaEventHandle handle, const bool isShow) {
  SetFlag(handle, AreaEvent::kFlagShowAccessIcon, isShow);
}

void SetEnableShowMinimap(AreaEventHandle handle, const bool isEnable) {
  SetFlag(handle, AreaEvent::kFlagShowMinimap, isEnable);
}

void SetGayaDevoice(AreaEventHandle handle, bool isDevoice) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    event->SetGayaDevoice(isDevoice);
  }
}

void ReserveErase(AreaEventHandle handle) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    game::hub::EventManager::GetInstance()->ReserveErase(event);
  }
}

void ClearSelectItemList(const AreaEventHandle& handle) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    event->ClearSelectItemList();
  }
}

void SetExitHashTraverse(AreaEventHandle handle) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    game::hub::GlobalMapData::GetInstance()->SetExitHashTraverse(
      event->GetGlobalHash());
  }
}

void AddEventExecute(AreaEventHandle handle, const std::string& eventFunc) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    event->AddEventExecute(eventFunc, {});
  }
}

float GetNearLengthXZ(AreaEventHandle handle, const math::Vec3& pos) {
  OpenBlock();
  AreaEvent* event = handle.Get();
  return event != nullptr ? event->GetShape().GetNearLengthXZ(pos) : 0.0f;
}

ScriptString GetEventType(AreaEventHandle handle) {
  OpenBlock();
  AreaEvent* event = handle.Get();
  if (event == nullptr) {
    return ScriptString("");
  }
  uint32_t type = event->GetType();
  const char* name =
    type < 4 ? game::hub::kAreaEventTypeNames[type].data() : nullptr;
  return ScriptString(name);
}

uint64_t GetAccessingEventHash() {
  OpenBlock();
  std::weak_ptr<AreaEvent> weak =
    game::hub::EventManager::GetInstance()->GetAccessState()->GetEvent();
  std::shared_ptr<AreaEvent> event = weak.lock();
  return event != nullptr ? event->GetGlobalHash() : 0;
}

AreaEventHandle GetHandleLabelMap(const std::string& label) {
  OpenBlock();
  std::shared_ptr<AreaEvent> event =
    game::hub::EventManager::GetInstance()->FindLabelMap(label);
  return AreaEventHandle(event.get());
}

void SetForceShowPopup(AreaEventHandle handle, bool isEnable) {
  OpenBlock();
  AreaEvent* event = handle.Get();
  if (event == nullptr) {
    return;
  }
  if (std::shared_ptr<game::hub::AccessPopup> popup =
    event->GetPopup().lock()) {
    popup->SetForceShow(isEnable);
  }
}

// Erasing is saved by the label of the event.
void ExecuteDelete(AreaEventHandle handle) {
  OpenBlock();
  if (AreaEvent* event = handle.Get()) {
    game::hub::EventManager::GetInstance()->ReserveErase(event);
    game::hub::ReadWrite::GetInstance()->SetEraseFlag(
      handle.Get()->GetLabel(), true);
  }
}

}

namespace game::script::hub {

void ConstructAreaEventHandle(game::hub::AreaEventHandle* self) {
  new (self) game::hub::AreaEventHandle();
}

void DestructAreaEventHandle(game::hub::AreaEventHandle* self) {
  self->~AreaEventHandle();
}

}
