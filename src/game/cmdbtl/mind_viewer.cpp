#include "game/cmdbtl/mind_viewer.hpp"

namespace game::cmdbtl {

MindViewer::~MindViewer() = default;

const void* MindViewer::Unknown02() const {
  return g_mindResources->first;
}

const void* MindViewer::Unknown03() const {
  return g_mindResources->second;
}

const void* MindViewer::Unknown04() const {
  return g_mindResources->first;
}

const void* MindViewer::Unknown05() const {
  return g_mindResources->second;
}

const void* MindViewer::Unknown06() const {
  return nullptr;
}

void MindViewer::Unknown07() {}

}
