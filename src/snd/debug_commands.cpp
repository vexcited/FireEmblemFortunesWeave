#include "snd/api.hpp"
#include "snd/script_commands.hpp"
#include "snd/game.hpp"

namespace snd::debug {

void clearVoiceSends() {
  snd::clearVoiceSends();
  openBlock();
}

void clearBgmSends() {
  snd::clearBgmSends();
  openBlock();
}

void clearSeSends() {
  snd::clearSeSends();
  openBlock();
}

void releaseListener() {
  Game::releaseListener();
  openBlock();
}

void fixListener() {
  Game::fixListener();
  openBlock();
}

void enableFlag60() {
  Game::enableFlag60();
  openBlock();
}

void disableFlag60() {
  Game::disableFlag60();
  openBlock();
}

void enableFlag62() {
  Game::enableFlag62();
  openBlock();
}

void disableFlag62() {
  Game::disableFlag62();
  openBlock();
}

void enableFlag61() {
  Game::enableFlag61();
  openBlock();
}

void disableFlag61() {
  Game::disableFlag61();
  openBlock();
}

void beginSkip() {
  Game::beginSkip();
  openBlock();
}

void markSkip() {
  Game::markSkip();
  openBlock();
}

void endSkip() {
  Game::endSkip();
  openBlock();
}

void doneSkip() {
  Game::doneSkip();
  openBlock();
}

void dropPreviousBgm() {
  BGM::dropPrevious();
  openBlock();
}

void changeBgm(int track, bool loop) {
  BGM::change(track, loop);
  openBlock();
}

void releaseBgm() {
  BGM::release();
  openBlock();
}

void block0() {
  openBlock();
}

void block1() {
  openBlock();
}

void block2() {
  openBlock();
}

void block3() {
  openBlock();
}

void restartEnv() {
  Env::restart();
  openBlock();
}

void releaseVoice(const fnd::WeakHandle& voice) {
  snd::release(voice);
  openBlock();
}

void killVoice(const fnd::WeakHandle& voice) {
  snd::kill(voice);
  openBlock();
}

void unlockSlots() {
  snd::unlockSlots();
  openBlock();
}

}
