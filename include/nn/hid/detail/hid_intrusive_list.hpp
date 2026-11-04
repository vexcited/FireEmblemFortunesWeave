#pragma once

namespace nn::util {

class IntrusiveListNode {
 public:
  IntrusiveListNode() : m_Prev(this), m_Next(this) {}

  IntrusiveListNode* GetPrev() const {
    return m_Prev;
  }

  IntrusiveListNode* GetNext() const {
    return m_Next;
  }

  void LinkPrev(IntrusiveListNode* node) {
    IntrusiveListNode* last = node->m_Prev;
    node->m_Prev = m_Prev;
    last->m_Next = this;
    m_Prev->m_Next = node;
    m_Prev = last;
  }

  void Unlink() {
    IntrusiveListNode* last = m_Next;
    IntrusiveListNode* lastPrev = last->m_Prev;
    m_Prev->m_Next = last;
    last->m_Prev = m_Prev;
    lastPrev->m_Next = this;
    m_Prev = lastPrev;
  }

 private:
  IntrusiveListNode* m_Prev;
  IntrusiveListNode* m_Next;
};

template <typename T>
class IntrusiveListBaseNode : public IntrusiveListNode {};

template <typename T, typename Tag = T>
struct IntrusiveListBaseNodeTraits {
  static IntrusiveListNode* GetNode(T* value) {
    return static_cast<IntrusiveListBaseNode<Tag>*>(value);
  }

  static T* GetItem(IntrusiveListNode* node) {
    return static_cast<T*>(static_cast<IntrusiveListBaseNode<Tag>*>(node));
  }
};

template <typename T, typename Traits = IntrusiveListBaseNodeTraits<T>>
class IntrusiveList {
 public:
  IntrusiveList() = default;

  bool IsEnd(const IntrusiveListNode* node) const {
    return node == &m_Root;
  }

  IntrusiveListNode* GetFirstNode() {
    return m_Root.GetNext();
  }

  const IntrusiveListNode* GetFirstNode() const {
    return m_Root.GetNext();
  }

  void push_back(T& value) {
    m_Root.LinkPrev(Traits::GetNode(&value));
  }

  void erase(T& value) {
    IntrusiveListNode* node = Traits::GetNode(&value);
    if (node != &m_Root) {
      node->Unlink();
    }
  }

 private:
  IntrusiveListNode m_Root;
};

}
