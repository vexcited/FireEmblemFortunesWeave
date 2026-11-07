#include "snd/manager.hpp"

#include "snd/target/base.hpp"

namespace snd {

void Manager::setListenerIndex(int index) {
  listenerIndex_ = index;
}

void Manager::unloadUnused() {
  cache_->unloadUnused();
}

void Manager::clearStreams() {
  streams_->clear();
}

void Manager::attachSound3DListener(target::Sound3DListener* listener,
  int archive, int index) {
  s_target->attachSound3DListener(listener, archive, index);
}

}
