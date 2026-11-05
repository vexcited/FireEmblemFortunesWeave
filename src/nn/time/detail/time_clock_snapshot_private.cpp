#include "nn/time/time_clock_snapshot.hpp"

namespace nn::time::detail {

sf::ClockSnapshot* GetSfClockSnapshotPtr(ClockSnapshot* pSnapshot) {
  return reinterpret_cast<sf::ClockSnapshot*>(pSnapshot);
}

const sf::ClockSnapshot* GetSfClockSnapshotPtr(const ClockSnapshot* pSnapshot) {
  return reinterpret_cast<const sf::ClockSnapshot*>(pSnapshot);
}

uint8_t GetClockSnapshotInitialType(const ClockSnapshot& snapshot) {
  return GetSfClockSnapshotPtr(&snapshot)->type;
}

bool IsClockSnapshotAutomaticCorrectionEnabled(const ClockSnapshot& snapshot) {
  return GetSfClockSnapshotPtr(&snapshot)->isAutomaticCorrectionEnabled;
}

}
