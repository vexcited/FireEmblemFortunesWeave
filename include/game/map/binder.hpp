#pragma once

namespace game {

#pragma GCC visibility push(hidden)

// Counts its users and is notified when the first one binds and the last one
// unbinds.
class Binder {
public:
  void Bind() {
    if (count_++ == 0) {
      OnBind();
    }
  }

  void Unbind() {
    if (--count_ == 0) {
      OnUnbind();
    }
  }

  virtual void OnBind() {}
  virtual void OnUnbind() {}

private:
  int count_ = 0;
};

class Visibility {
public:
  virtual ~Visibility() = default;

private:
  void* unknown_08_ = nullptr;
};

#pragma GCC visibility pop

}
