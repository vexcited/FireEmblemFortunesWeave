#pragma once

namespace ui {

class Event;

#pragma GCC visibility push(hidden)

class IEventListener {
public:
  virtual ~IEventListener() = default;
  virtual void OnEvent(const Event& event) = 0;
};

#pragma GCC visibility pop

}
