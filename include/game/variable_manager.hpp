#pragma once

namespace game {

#pragma GCC visibility push(hidden)

struct HashedString;

class VariableManager {
public:
  static void SetFlag(const HashedString& key, int value);
};

#pragma GCC visibility pop

}
