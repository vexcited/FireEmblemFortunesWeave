#pragma once

#include <string>

namespace game {

#pragma GCC visibility push(hidden)

// The text the game hands around by pointer, null when it is empty.
class vstring {
public:
  vstring() = default;

  vstring(const std::string& text)
    : text_(text.empty() ? nullptr : text.data()) {}

  const char* c_str() const {
    return text_;
  }

  // Read through the global offset table.
  [[gnu::visibility("default")]] static const vstring kEmpty;

private:
  const char* text_ = nullptr;
};

#pragma GCC visibility pop

}
