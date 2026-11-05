#pragma once

namespace ui {

#pragma GCC visibility push(hidden)

// Sent to the listeners of a control, the data depends on the id.
class Event {
public:
  Event(int id, const void* data) : id_(id), data_(data) {}
  virtual ~Event() = default;

  int GetId() const { return id_; }
  const void* GetData() const { return data_; }

private:
  int id_;
  const void* data_;
};

class IEventListener {
public:
  virtual ~IEventListener() = default;
  virtual void OnEvent(const Event& event) = 0;
};

#pragma GCC visibility pop

}
