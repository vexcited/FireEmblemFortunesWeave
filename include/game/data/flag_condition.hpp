#pragma once

#include "game/data/data_file.hpp"

#pragma GCC visibility push(hidden)

namespace game {

struct NameList {
  uint16_t count;
  const char** names;
};

struct NameListArray {
  uint16_t count;
  const NameList* lists;
};

// Flags that must all hold, a leading '!' expecting the flag to be clear.
// Link time optimization kept the shared methods out of line but still saw
// that they return this, which the inline definitions reproduce.
class FlagCondition {
public:
  struct Term {
    explicit Term(const char* name) : expected(true) {
      const char* text = "";

      if (name != nullptr && name[0] != '\0') {
        if (name[0] == '!') {
          ++name;
          expected = false;
        }

        key.hash = HashString(name);
        text = name;
      }

      key.text = text;
    }

    HashedString key;
    bool expected;
  };

  [[gnu::noinline]] FlagCondition& Append(const NameList& names) {
    const size_t count = names.count;

    for (size_t i = 0; i < count; ++i) {
      const char* name = names.names[i];

      if (name == nullptr || name[0] == '\0') {
        continue;
      }

      const Term term(names.names[i]);
      terms_.push_back(term);
      keys_.emplace_back(Local<HashedString>{term.key});
    }

    return *this;
  }

  FlagCondition& Set(const NameList& names) {
    terms_.clear();
    keys_.clear();
    return Append(names);
  }

  const std::vector<HashedString>& GetKeys() const {
    return keys_;
  }

private:
  std::vector<Term> terms_;
  std::vector<HashedString> keys_;
};

// Conditions of which any may hold, with the union of their flags.
class FlagConditionList {
public:
  FlagConditionList() = default;
  FlagConditionList(const FlagConditionList&) = default;

  // Link time optimization inlined the destruction into every row.
  [[gnu::always_inline]] ~FlagConditionList() = default;

  [[gnu::noinline]] FlagConditionList& Assign(const NameListArray& lists) {
    conditions_.clear();
    keys_.clear();
    const size_t count = lists.count;

    for (size_t i = 0; i < count; ++i) {
      FlagCondition condition;
      condition.Append(lists.lists[i]);
      Add(condition);
    }

    return *this;
  }

  [[gnu::noinline]] FlagConditionList& Add(const FlagCondition& condition) {
    conditions_.push_back(condition);

    for (const HashedString& key : condition.GetKeys()) {
      const bool known = std::any_of(
        keys_.begin(), keys_.end(),
        [&key](const HashedString& other) { return other.hash == key.hash; }
      );

      if (!known) {
        keys_.push_back(key);
      }
    }

    return *this;
  }

private:
  std::vector<FlagCondition> conditions_;
  std::vector<HashedString> keys_;
};

}

#pragma GCC visibility pop
