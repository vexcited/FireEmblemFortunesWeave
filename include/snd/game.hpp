#pragma once

#include <vector>

#include "snd/fade.hpp"
#include "snd/fnd/string.hpp"

namespace snd {

// Free functions of the sound facade the game layer uses.
bool isRunning();
void setListenerPosition(float x, float y, float z, float angle);

// Only the parts the game layer uses.
class EnvCtrl {
public:
  void update();
};

class BgmCtrl {
public:
  void update();
};

// The interface between the game and the sound engine. Its five
// controllers are created on initialization.
class Game {
public:
  using NameList = std::vector<const char*, fnd::Allocator<const char*>>;

  virtual ~Game();

  virtual void initialize();
  virtual void finalize();
  virtual void update();
  virtual void updateSuspend();
  virtual void updateFrame();
  virtual float getMasterScale() const;
  virtual void stopField();
  virtual void reset();
  virtual void stopAll(const Fade& fade);
  virtual void setupFields();
  virtual void updateListener(float x, float y, float z, float angle);
  virtual void setListener(float x, float y, float z, float angle);
  virtual void playFieldEnv(const char* name, bool rain, bool night,
    bool hds, void* param);
  virtual void playFieldBgm(const char* name, bool rain, bool night,
    bool hds, void* param);
  virtual void setField(const char* name);
  virtual void playFieldSound(const char* name);
  virtual const char* getBgmGroupName() const;
  virtual const char* getFfGroupName() const;
  virtual const char* getSeGroupName() const;
  virtual const char* getAmbGroupName() const;
  virtual const char* getVoiceGroupName() const;
  virtual void onSuspend();
  virtual void onResume();
  virtual NameList getBgmNames() const;
  virtual NameList getEnvNames() const;
  virtual NameList getSeNames() const;
  virtual NameList getVoiceNames() const;
  virtual void updateDebug();

protected:
  void* group_;
  EnvCtrl* env_;
  void* anime_;
  BgmCtrl* bgm_;
  void* vibration_;
  bool initialized_;
};

}
