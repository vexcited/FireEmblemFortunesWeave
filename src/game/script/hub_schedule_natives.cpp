#include <new>

namespace as {

class ScriptManager;

// The natives read the manager through the global offset table, so it is
// declared with default visibility before the header.
[[gnu::visibility("default")]] extern ScriptManager* g_script_manager;

}

#include "as/script_context.hpp"
#include "game/game_mode_data.hpp"
#include "game/gmap/spot.hpp"
#include "game/singleton.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class GameSchedule : public Singleton<GameSchedule> {};

namespace hub {

class HubSeqEnter : public Singleton<HubSeqEnter> {
public:
  void ProgressMinute(int minute);
};

// The views of the progress processes a cancel stops.
class ProgressEventView {
public:
  static ProgressEventView* instance_;
};

class ProgressDisplayView {
public:
  static ProgressDisplayView* instance_;

  void Cancel() {
    canceled_ = true;
  }

private:
  uint8_t unknown_00_[0x99];
  bool canceled_;
};

}

namespace gmap {

// Shows the date the clock moves to.
void DisplayProgress(const GmapTime& date, const GmapTime& from);

}

#pragma GCC visibility pop

}

[[gnu::visibility("default")]] extern game::hub::HubSeqEnter*
  g_hub_seq_enter;
[[gnu::visibility("default")]] extern game::GameSchedule* g_game_schedule;

// The natives of the hub::schedule script namespace and the behaviors of the
// Date script type.
namespace game::script::hub::schedule {

#pragma GCC visibility push(hidden)

// The script date, the fields of a clock time as ints.
struct Date {
  Date() = default;

  explicit Date(const gmap::GmapTime& time)
    : year(time.year), month(time.month), day(time.day), hour(time.hour),
      minute(time.minute), second(time.second) {}

  gmap::GmapTime ToTime() const {
    return {static_cast<int16_t>(year), static_cast<int16_t>(month),
      static_cast<int16_t>(day), static_cast<int16_t>(hour),
      static_cast<int16_t>(minute), static_cast<int16_t>(second)};
  }

  int year = 0;
  int month = 0;
  int day = 0;
  int hour = 0;
  int minute = 0;
  int second = 0;
};

namespace {

[[gnu::always_inline]] inline void EndBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}

// The time zone of each hour, from the night to the evening.
extern const int kHourCycles[24];

void ConstructDate(void* memory) {
  new (memory) Date();
}

void DestructDate(void*) {}

Date& AssignDate(Date& self, const Date& other) {
  self = other;
  return self;
}

int GetPart() {
  EndBlock();
  const GameModeData* mode = GameModeData::GetInstance();
  if (mode == nullptr || mode->GetScenario() == nullptr) {
    return 0;
  }
  return mode->GetScenario()->part;
}

int GetChapter() {
  EndBlock();
  const GameModeData* mode = GameModeData::GetInstance();
  if (mode == nullptr || mode->GetScenario() == nullptr) {
    return 0;
  }
  return mode->GetScenario()->chapter;
}

void ProgressHour(int hour) {
  EndBlock();
  g_hub_seq_enter->ProgressMinute(60 * hour);
}

void ProgressMinute(int minute) {
  EndBlock();
  g_hub_seq_enter->ProgressMinute(minute);
}

void FastSetDate(Date& date) {
  EndBlock();
  const gmap::GmapTime time = date.ToTime();
  if (gmap::GmapClock* clock = gmap::GmapClock::instance_) {
    clock->SetTime(time);
  }
}

void DisplayProgress(Date& date) {
  EndBlock();
  const gmap::GmapTime from = {};
  gmap::DisplayProgress(date.ToTime(), from);
}

void CancelProgress() {
  EndBlock();
  if (game::hub::ProgressEventView::instance_ != nullptr &&
    game::hub::ProgressDisplayView::instance_ != nullptr) {
    game::hub::ProgressDisplayView::instance_->Cancel();
  }
}

Date GetDate() {
  EndBlock();
  return Date(gmap::GmapClock::GetTime());
}

int CompareDate(Date& date1, Date& date2) {
  EndBlock();
  const uint64_t key1 = date1.ToTime().GetKey();
  const uint64_t key2 = date2.ToTime().GetKey();
  if (static_cast<int64_t>(key1) < static_cast<int64_t>(key2)) {
    return -1;
  }
  return static_cast<int64_t>(key1) > static_cast<int64_t>(key2);
}

// Free while the section date is set.
bool IsSectionFree() {
  EndBlock();
  const gmap::GmapClock* clock = gmap::GmapClock::instance_;
  if (clock == nullptr) {
    return false;
  }
  const gmap::GmapTime& section = clock->GetUnknown14();
  return section.month != 0 && section.year != 0 && section.day != 0;
}

int GetCycleIndex() {
  EndBlock();
  const gmap::GmapTime& time = gmap::GmapClock::GetTime();
  if (time.month * time.year * time.day == 0) {
    return -1;
  }
  return kHourCycles[static_cast<int16_t>(time.hour % 24)];
}

int GetMonth() {
  EndBlock();
  if (g_game_schedule == nullptr) {
    return 1;
  }
  return gmap::GmapClock::GetTime().month;
}

void ProgressCycle() {
  EndBlock();
  gmap::GmapClock::ProgressCycle();
}

#pragma GCC visibility pop

}
