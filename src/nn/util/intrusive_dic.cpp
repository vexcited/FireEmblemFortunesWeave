#include "nn/util/intrusive_dic.hpp"

namespace nn::util {

int IntrusiveDicNode::ExtractRefBit(const string_view& key, int refBit) {
  const ptrdiff_t index = refBit >> 3;
  if (key.size() <= static_cast<size_t>(index)) {
    return 0;
  }
  return (static_cast<unsigned char>(key[key.size() - 1 - index]) >>
    (refBit & 7)) & 1;
}

IntrusiveDicNode* IntrusiveDicNode::Erase(IntrusiveDicNode** pOutSibling,
  int* pOutRefBit) {
  const int side = ExtractRefBit(m_Key, m_RefBit);
  IntrusiveDicNode* child = m_Child[side];
  *pOutSibling = m_Child[side ^ 1];
  *pOutRefBit = m_RefBit;

  IntrusiveDicNode* replacement = child != this ? child : *pOutSibling;
  if (m_Parent->m_Child[0] == this) {
    m_Parent->m_Child[0] = replacement;
  }
  else {
    m_Parent->m_Child[1] = replacement;
  }
  if (m_RefBit < replacement->m_RefBit) {
    replacement->m_Parent = m_Parent;
  }

  Reset();
  return child;
}

// Takes over the reference bit and node passed in and hands back the ones
// it replaced.
IntrusiveDicNode* IntrusiveDicNode::InsertChild(IntrusiveDicNode** pNode,
  int* pRefBit, const string_view& key) {
  const int refBit = *pRefBit;
  const int side = ExtractRefBit(key, m_RefBit);
  IntrusiveDicNode* node = *pNode;
  IntrusiveDicNode* child = m_Child[side];
  *pNode = m_Child[side ^ 1];
  *pRefBit = m_RefBit;

  const int newSide = ExtractRefBit(key, refBit);
  m_Child[newSide] = m_RefBit < child->m_RefBit ? child : *pNode;
  m_RefBit = refBit;
  m_Child[newSide ^ 1] = node;
  if (refBit < node->m_RefBit) {
    node->m_Parent = this;
  }
  return child;
}

bool IntrusiveDicNode::FindRefBit(const IntrusiveDicNode* other) {
  const size_t length = m_Key.size() > other->m_Key.size() ?
    m_Key.size() : other->m_Key.size();
  const int bits = static_cast<int>(8 * length);
  for (int i = 0; i < bits; ++i) {
    if (ExtractRefBit(m_Key, i) != ExtractRefBit(other->m_Key, i)) {
      m_RefBit = i;
      return true;
    }
  }
  return false;
}

namespace detail {

const IntrusiveDicNode* IntrusiveDicImpl::FindImpl(
  const string_view& key) const {
  const IntrusiveDicNode* node = m_Root.m_Child[0];
  int refBit = m_Root.m_RefBit;
  while (refBit < node->m_RefBit) {
    refBit = node->m_RefBit;
    node = node->m_Child[IntrusiveDicNode::ExtractRefBit(key, refBit)];
  }
  return node;
}

void IntrusiveDicImpl::InsertImpl(IntrusiveDicNode* node) {
  IntrusiveDicNode* parent = &m_Root;
  IntrusiveDicNode* child = m_Root.m_Child[0];
  while (parent->m_RefBit < child->m_RefBit &&
    child->m_RefBit < node->m_RefBit) {
    parent = child;
    child = child->m_Child[IntrusiveDicNode::ExtractRefBit(node->m_Key,
      child->m_RefBit)];
  }

  parent->m_Child[IntrusiveDicNode::ExtractRefBit(node->m_Key,
    parent->m_RefBit)] = node;
  if (parent->m_RefBit < node->m_RefBit) {
    node->m_Parent = parent;
  }
  node->m_Child[IntrusiveDicNode::ExtractRefBit(child->m_Key,
    node->m_RefBit)] = child;
  if (node->m_RefBit < child->m_RefBit) {
    child->m_Parent = node;
  }
}

// The nodes below the erased one each take over the reference bit of the
// node above them.
void IntrusiveDicImpl::EraseImpl(IntrusiveDicNode* node) {
  const string_view key = node->m_Key;
  IntrusiveDicNode* previous = node->m_Parent;
  IntrusiveDicNode* sibling;
  int refBit;
  IntrusiveDicNode* current = node->Erase(&sibling, &refBit);
  while (previous->m_RefBit < current->m_RefBit) {
    IntrusiveDicNode* next = current->InsertChild(&sibling, &refBit, key);
    previous = current;
    current = next;
  }
}

const IntrusiveDicNode* IntrusiveDicImpl::FindIter() const {
  const IntrusiveDicNode* last;
  const IntrusiveDicNode* node = &m_Root;
  do {
    last = node;
    node = node->m_Child[0];
  } while (node != &m_Root);

  const IntrusiveDicNode* result = last->m_Child[1];
  int refBit = last->m_RefBit;
  while (refBit < result->m_RefBit) {
    refBit = result->m_RefBit;
    result = result->m_Child[0];
  }
  return result;
}

const IntrusiveDicNode* IntrusiveDicImpl::MoveIter(
  const IntrusiveDicNode* node, int direction) {
  const IntrusiveDicNode* parent = FindParent(node);
  const IntrusiveDicNode* result = parent->m_Child[direction];
  if (result == node) {
    const IntrusiveDicNode* previous;
    do {
      previous = parent;
      parent = parent->m_Parent;
      result = parent->m_Child[direction];
    } while (previous == result);
  }

  if (parent->m_RefBit < result->m_RefBit) {
    int refBit;
    do {
      refBit = result->m_RefBit;
      result = result->m_Child[1 - direction];
    } while (refBit < result->m_RefBit);
  }
  return result;
}

const IntrusiveDicNode* IntrusiveDicImpl::FindParent(
  const IntrusiveDicNode* node) {
  const IntrusiveDicNode* parent;
  const IntrusiveDicNode* current = node;
  int refBit;
  do {
    parent = current;
    refBit = parent->m_RefBit;
    current = parent->m_Child[IntrusiveDicNode::ExtractRefBit(node->m_Key,
      refBit)];
  } while (refBit < current->m_RefBit);
  return parent;
}

}

const int IntrusiveDicNode::Npos = -1;

}
