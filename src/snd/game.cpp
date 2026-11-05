#include "snd/game.hpp"

namespace snd {

void Game::updateFrame() {
  if (initialized_ == true && isRunning()) {
    bgm_->update();
    env_->update();
  }
}

float Game::getMasterScale() const {
  return 1.0f;
}

// The game turns clockwise, the listener counterclockwise.
void Game::setListener(float x, float y, float z, float angle) {
  setListenerPosition(x, y, z, 360.0f - angle);
}

const char* Game::getBgmGroupName() const {
  return "BGM_Master";
}

const char* Game::getFfGroupName() const {
  return "FF_Master";
}

const char* Game::getSeGroupName() const {
  return "SE_Master";
}

const char* Game::getAmbGroupName() const {
  return "AMB_Master";
}

const char* Game::getVoiceGroupName() const {
  return "Voice_Master";
}

void Game::onSuspend() {
}

void Game::onResume() {
}

Game::NameList Game::getBgmNames() const {
  return {};
}

Game::NameList Game::getEnvNames() const {
  return {};
}

Game::NameList Game::getSeNames() const {
  return {};
}

Game::NameList Game::getVoiceNames() const {
  return {};
}

}
