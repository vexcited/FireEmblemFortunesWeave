#pragma once

#include <string>

namespace game::gameui {

class Message {
public:
  // A text argument of the layout helpers, the text bytes are copied up to
  // the first zero byte.
  class StringArg {
  public:
    StringArg() = default;

    StringArg(const char16_t* text)
      : value_(reinterpret_cast<const char*>(text)) {}

    const char16_t* Get() const {
      return reinterpret_cast<const char16_t*>(value_.c_str());
    }

  private:
    std::string value_;
  };
};

}
