#pragma once

#include "angelscript/fork/add_on/as_string.h"

namespace game::script {

#pragma GCC visibility push(hidden)

// The any type of the scripts, passed by reference to the event entries.
class ScriptAny {
public:
  int Release() const;
};

#pragma GCC visibility pop

}
