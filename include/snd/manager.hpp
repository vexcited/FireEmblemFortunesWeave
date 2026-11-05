#pragma once

namespace snd {

class WaveReader;

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
  WaveReader* createReader();
  void destroyReader(WaveReader* reader);
};

}
