#include "game/gmap/cursor.hpp"

namespace game::gmap {

void Cursor::Finalize() {
  if (impl_ != nullptr) {
    delete impl_;
  }
}

const char* Cursor::GetName() const {
  return "GmapCursor";
}

int Cursor::GetVersion() const {
  return 2;
}

}
