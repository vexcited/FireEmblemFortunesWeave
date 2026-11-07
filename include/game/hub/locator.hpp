#pragma once

#include <algorithm>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

#include "game/hub/handle.hpp"
#include "game/singleton.hpp"
#include "math/vec3.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

// Where a locator may place its characters.
class LocatorPlacement {
public:
  bool IsPlaceable() const;
};

class Locator : public HandlePtr {
public:
  void ReserveErase();

  bool IsErased() const {
    return erased_;
  }

  bool IsPlaceable() const {
    return placement_.IsPlaceable();
  }

  uint64_t GetGlobalHash() const {
    return global_hash_;
  }

  const std::string& GetLabel() const {
    return label_;
  }

  math::Vec3 GetDisposPosition() const {
    return math::Vec3(dispos_position_);
  }

  float GetDisposAngle() const {
    return dispos_angle_;
  }

  void RegisterLabel(const std::string& label) {
    register_label_ = label;
  }

private:
  bool erased_;
  uint8_t unknown_11_[0x7];
  LocatorPlacement placement_;
  uint8_t unknown_19_[0x37];
  uint64_t global_hash_;
  uint8_t unknown_58_[0x18];
  std::string label_;
  uint8_t unknown_88_[0x18];
  float dispos_position_[3];
  float dispos_angle_;
  uint8_t unknown_b0_[0x210];
  std::string register_label_;
};

class LocatorHandle : public Handle<Locator> {
public:
  LocatorHandle() = default;

  explicit LocatorHandle(Locator* locator) : Handle(locator) {}

  LocatorHandle(const LocatorHandle& other) : Handle(other.Get()) {}

  ~LocatorHandle() override;

  LocatorHandle& operator=(const LocatorHandle& other) = default;
};

using LocatorList = std::vector<std::shared_ptr<Locator>>;

// The original keeps this push_back out of line.
void PushLocator(LocatorList& list, const std::shared_ptr<Locator>& locator);

class LocatorDispos : public Singleton<LocatorDispos> {
public:
  std::shared_ptr<Locator> FindLabel(std::string_view label) const {
    if (label.empty()) {
      return nullptr;
    }
    for (const std::shared_ptr<Locator>& entry : locators_) {
      if (!entry->IsErased() && entry->GetLabel() == label) {
        return entry;
      }
    }
    return nullptr;
  }

  LocatorList FindLabels(std::string_view label) const {
    LocatorList found;
    for (const std::shared_ptr<Locator>& entry : locators_) {
      if (!entry->IsErased() && entry->GetLabel() == label) {
        PushLocator(found, entry);
      }
    }
    return found;
  }

  std::shared_ptr<Locator> FindGlobalHash(uint64_t hash) const {
    for (const std::shared_ptr<Locator>& entry : locators_) {
      if (!entry->IsErased() && entry->GetGlobalHash() == hash) {
        return entry;
      }
    }
    return nullptr;
  }

  // The entry holding that locator.
  const std::shared_ptr<Locator>* Find(const Locator* locator) const {
    auto found = std::find_if(locators_.begin(), locators_.end(),
      [locator](const std::shared_ptr<Locator>& entry) {
        return entry.get() == locator;
      });
    return found != locators_.end() ? &*found : nullptr;
  }

private:
  LocatorList locators_;
};

class Destination : public Singleton<Destination> {
public:
  void SetOverride(std::optional<std::vector<uint64_t>> hashes) {
    override_ = std::move(hashes);
  }

  void SetShowQuestion(bool isQuestion) {
    show_question_ = isQuestion;
  }

private:
  uint8_t unknown_08_[0x90];
  std::optional<std::vector<uint64_t>> override_;
  bool show_question_;
};

#pragma GCC visibility pop

}
