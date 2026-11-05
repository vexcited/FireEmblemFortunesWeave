#pragma once

namespace game::gameui {

#pragma GCC visibility push(hidden)

// The header process, its class is internal to its unit.
class Header {
public:
  static Header* instance_;

  void Refresh(bool immediate);
};

// The footer key help process, its class is internal to its unit.
class Footer {
public:
  static Footer* instance_;

  void Refresh(bool immediate);
};

#pragma GCC visibility pop

}
