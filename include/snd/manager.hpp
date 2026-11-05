#pragma once

namespace snd {

// Only the parts the voices use.
class Loader {
public:
  bool isDone(void* request);
};

class Manager {
public:
  static void lock();
  static void unlock();

  Loader* getLoader() const;
};

}
