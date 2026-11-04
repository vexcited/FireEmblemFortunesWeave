#pragma once

#include "game/non_copyable.hpp"

namespace game {

// Link time optimization internalized these so they are addressed directly.
#pragma GCC visibility push(hidden)

template<typename T, bool B = false>
class Singleton : private NonCopyable {
public:
  // The first constructed object becomes the instance.
  Singleton() {
    if (instance_ == nullptr) {
      instance_ = static_cast<T*>(this);
      registered_ = 1;
    }
  }

  virtual ~Singleton() {
    if (instance_ == this) {
      instance_ = nullptr;
      registered_ = 0;
    }
  }

  // Called once right after the instance is created.
  virtual void Initialize() {}
  virtual void Finalize() {}

  static T* Create() {
    T* instance = new T();
    instance_ = instance;
    instance->Initialize();
    return instance;
  }

  static T* GetInstance() {
    return instance_;
  }

protected:
  static T* instance_;
  static int registered_;
};

template<typename T, bool B>
T* Singleton<T, B>::instance_ = nullptr;

template<typename T, bool B>
int Singleton<T, B>::registered_ = 0;

#pragma GCC visibility pop

}
