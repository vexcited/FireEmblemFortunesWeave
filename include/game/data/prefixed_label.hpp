#pragma once

#include <cstring>
#include <string>

#include "game/data/data_file.hpp"

#pragma GCC visibility push(hidden)

namespace game {

// A key hashed from its own copy of the text, joined from a prefix and a name.
class PrefixedLabel {
public:
  // Spells out prefix + "_" + name, whose insert and append calls the SDK
  // library keeps out of line.
  [[gnu::noinline]] PrefixedLabel& Set(const char* prefix, const char* name) {
    std::string separator("_");
    std::string* result;
    [[clang::noinline]] result =
      &separator.insert(0, prefix, std::strlen(prefix));
    std::string head(std::move(*result));
    [[clang::noinline]] result = &head.append(name, std::strlen(name));
    std::string joined(std::move(*result));
    Assign(joined.c_str());
    return *this;
  }

  void Clear() {
    key_ = HashedString();
    text_.clear();
  }

  const HashedString& GetKey() const {
    return key_;
  }

private:
  [[gnu::always_inline]] void Assign(const char* text) {
    text_ = text;
    key_ = HashedString(text_.c_str());
  }

  HashedString key_;
  std::string text_;
};

}

#pragma GCC visibility pop
