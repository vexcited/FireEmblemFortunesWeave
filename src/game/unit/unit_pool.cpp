#include "game/unit_pool.hpp"

#include "game/data/data_files.hpp"

namespace game {

#pragma GCC visibility push(hidden)

Unit* UnitPool::Get(const uint8_t& index) {
  const auto& units = GetInstance()->impl_->units_by_index;
  if (index == 0) {
    return nullptr;
  }

  const auto found = units.find(index);
  if (found == units.end() || found->second->GetPerson() == nullptr) {
    return nullptr;
  }

  return found->second;
}

Unit* UnitPool::Find(const PersonData* const& person) {
  if (person == nullptr) {
    return nullptr;
  }

  Impl* impl = GetInstance()->impl_;
  if (impl == nullptr) {
    return nullptr;
  }

  for (Unit& unit : impl->units) {
    if (unit.GetForce() != nullptr &&
        unit.GetForce()->GetType() != Unit::kNoForce &&
        unit.GetPerson() == person) {
      return &unit;
    }
  }

  return nullptr;
}

Unit* UnitPool::Find(const PersonData* const& person,
  const ForceMask& mask) {
  if (person == nullptr) {
    return nullptr;
  }

  for (Unit* unit = GetFirst(mask); unit != nullptr;
       unit = unit->GetNextIn(mask)) {
    if (unit->GetPerson() == person) {
      return unit;
    }
  }

  return nullptr;
}

Unit* UnitPool::GetFirst(const ForceMask& mask) {
  for (int force = 0; force < kForceCount; force++) {
    if (mask.Contains(force)) {
      if (Unit* first = GetForce(force).GetFirst()) {
        return first;
      }
    }
  }
  return nullptr;
}

Unit* UnitPool::GetLast(const ForceMask& mask) {
  for (int force = kForceCount - 1; force >= 0; force--) {
    if (mask.Contains(force)) {
      if (Unit* last = GetForce(force).GetLast()) {
        return last;
      }
    }
  }
  return nullptr;
}

Unit* Unit::GetNextIn(const ForceMask& mask) const {
  if (Unit* next = GetNext()) {
    return next;
  }

  const Force* force = GetForce();
  if (force == nullptr || force->GetType() >= UnitPool::kForceCount - 1) {
    return nullptr;
  }

  for (int type = force->GetType() + 1; type < UnitPool::kForceCount;
       type++) {
    if (mask.Contains(type)) {
      if (Unit* first = UnitPool::GetForce(type).GetFirst()) {
        return first;
      }
    }
  }

  return nullptr;
}

static int CountForce(const Force& force) {
  int count = 0;
  for (const Unit* unit = force.GetFirst(); unit != nullptr;
       unit = unit->GetNext()) {
    count++;
  }
  return count;
}

int UnitPool::Count(const ForceMask& mask) {
  int count = 0;
  for (int force = 0; force < kForceCount - 1; force++) {
    if (mask.Contains(force)) {
      count += CountForce(GetForce(force));
    }
  }
  return count;
}

int UnitPool::CountAll(const ForceMask& mask) {
  int count = 0;
  for (int force = 0; force < kForceCount; force++) {
    if (mask.Contains(force)) {
      count += CountForce(GetForce(force));
    }
  }
  return count;
}

// Continues with the first unit of the next force in the mask.
Unit* UnitPool::GetNext(const Unit* unit, const ForceMask& mask) {
  if (unit == nullptr) {
    return nullptr;
  }

  if (Unit* next = unit->GetNext()) {
    return next;
  }

  const Force* force = unit->GetForce();
  if (force == nullptr || force->GetType() >= kForceCount - 1) {
    return nullptr;
  }

  for (int type = force->GetType() + 1; type < kForceCount; type++) {
    if (mask.Contains(type)) {
      if (Unit* first = GetForce(type).GetFirst()) {
        return first;
      }
    }
  }

  return nullptr;
}

Unit* Force::Find(const char* pid) const {
  if (pid == nullptr) {
    return nullptr;
  }

  const PersonData* person = PersonFile::GetInstance()->Find(pid);
  for (Unit* unit = first_; unit != nullptr; unit = unit->GetNext()) {
    if (unit->GetPerson() == person) {
      return unit;
    }
  }

  return nullptr;
}

#pragma GCC visibility pop

}
