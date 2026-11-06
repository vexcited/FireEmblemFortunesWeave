#pragma once

#include <string>

namespace game::script {

#pragma GCC visibility push(hidden)

// The script strings, std::string built by the out of line constructor at
// 0x25eca0, which the natives call instead of inlining it.
class ScriptString : public std::string {
public:
  explicit ScriptString(const char* text);

  // The out of line c_str at 0x25eed0.
  const char* GetText() const;
};

// The any type of the scripts, passed by reference to the event entries.
class ScriptAny;

#pragma GCC visibility pop

}
