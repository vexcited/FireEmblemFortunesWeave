#pragma once

#include <stdint.h>

#include <string>

#include "msg/tag_selector.hpp"

namespace msg {

// The strings the tags of the next messages are filled with.
class MessageArguments {
public:
  static constexpr unsigned kCount = 8;

  void Set(int index, int value, int style);
  inline void Set(int index, const char* text);

private:
  std::string arguments_[kCount];
};

class MessageManager {
public:
  static MessageManager* GetInstance() { return instance_; }

  const char16_t* Get(const char* mid, int index,
    const TagSelector& selector);

  MessageArguments& GetArguments() {
    return arguments_;
  }

  // Returned for messages that are not found.
  static const char16_t* empty_text_;

private:
  static MessageManager* instance_;

  uint8_t unknown_00_[0x3970];
  MessageArguments arguments_;
};

// An index out of range sets the first argument, a null text the empty one.
inline void MessageArguments::Set(int index, const char* text) {
  const unsigned slot = static_cast<unsigned>(index) < kCount ? index : 0;
  arguments_[slot] = text != nullptr ?
    text : reinterpret_cast<const char*>(MessageManager::empty_text_);
}

inline const char16_t* GetText(const char* mid,
  const TagSelector& selector = TagSelector()) {
  return MessageManager::GetInstance()->Get(mid, 0, selector);
}

}
