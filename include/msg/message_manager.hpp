#pragma once

#include "msg/tag_selector.hpp"

namespace msg {

class MessageManager {
public:
  static MessageManager* GetInstance() { return instance_; }

  const char16_t* Get(const char* mid, int index,
    const TagSelector& selector);

private:
  static MessageManager* instance_;
};

inline const char16_t* GetText(const char* mid,
  const TagSelector& selector = TagSelector()) {
  return MessageManager::GetInstance()->Get(mid, 0, selector);
}

}
