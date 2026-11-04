#pragma once

namespace game::menu {

// Gives an item of a multi menu access to the owning sequence.
template<typename T>
class MultiMenuItem {
protected:
  T* multi_menu_;
};

}
