#include "snd/game.hpp"

namespace snd {

BGM* BGM::create() {
  BGM* bgm = new BGM();
  s_instance = bgm;
  return bgm;
}

void BGM::destroy() {
  if (s_instance != nullptr) {
    delete s_instance;
  }
  s_instance = nullptr;
}

Env* Env::create() {
  Env* env = new Env();
  s_instance = env;
  return env;
}

void Env::destroy() {
  if (s_instance != nullptr) {
    delete s_instance;
  }
  s_instance = nullptr;
}

Wind* Wind::create() {
  Wind* wind = new Wind();
  s_instance = wind;
  return wind;
}

void Wind::destroy() {
  if (s_instance != nullptr) {
    delete s_instance;
  }
  s_instance = nullptr;
}

FF* FF::create() {
  FF* ff = new FF();
  s_instance = ff;
  return ff;
}

void FF::destroy() {
  if (s_instance != nullptr) {
    delete s_instance;
  }
  s_instance = nullptr;
}

GroupCtrl* GroupCtrl::create() {
  GroupCtrl* group = new GroupCtrl();
  s_instance = group;
  return group;
}

void GroupCtrl::destroy() {
  if (s_instance != nullptr) {
    delete s_instance;
  }
  s_instance = nullptr;
}

}
