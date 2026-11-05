#pragma once

#include <stddef.h>

#include "nn/util/string_view.hpp"

namespace nn::util {

namespace detail {

class IntrusiveDicImpl;

}

// A node of a patricia trie keyed by strings. Bits are numbered from the
// last byte of the key, a reference bit of Npos marks an unlinked node.
class IntrusiveDicNode {
public:
  static const int Npos;

  static int ExtractRefBit(const string_view& key, int refBit);

  IntrusiveDicNode* Erase(IntrusiveDicNode** pOutSibling, int* pOutRefBit);
  IntrusiveDicNode* InsertChild(IntrusiveDicNode** pNode, int* pRefBit,
    const string_view& key);
  bool FindRefBit(const IntrusiveDicNode* other);

private:
  friend class detail::IntrusiveDicImpl;

  void Reset() {
    m_Key = string_view();
    m_Child[0] = this;
    m_Child[1] = this;
    m_Parent = this;
    m_RefBit = -1;
  }

  string_view m_Key;
  int m_RefBit;
  IntrusiveDicNode* m_Parent;
  IntrusiveDicNode* m_Child[2];
};

static_assert(sizeof(IntrusiveDicNode) == 48);

namespace detail {

class IntrusiveDicImpl {
public:
  const IntrusiveDicNode* FindImpl(const string_view& key) const;
  void InsertImpl(IntrusiveDicNode* node);
  void EraseImpl(IntrusiveDicNode* node);
  const IntrusiveDicNode* FindIter() const;

  static const IntrusiveDicNode* MoveIter(const IntrusiveDicNode* node,
    int direction);
  static const IntrusiveDicNode* FindParent(const IntrusiveDicNode* node);

private:
  IntrusiveDicNode m_Root;
};

}

}
