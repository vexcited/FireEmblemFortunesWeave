#pragma once

#include <string>
#include <vector>

namespace game::evt {

#pragma GCC visibility push(hidden)

class EventObjectBase {
public:
  virtual ~EventObjectBase() = default;

protected:
  std::string name_;
  std::string label_;
  int type_ = 0;
};

// Keeps the registered events, then lists them by their type.
class EventManagerBase {
public:
  virtual ~EventManagerBase();
  virtual void Unknown02();

  // Ignores a null event.
  virtual void Add(EventObjectBase* event);

private:
  std::vector<EventObjectBase*> events_;
};

#pragma GCC visibility pop

}
