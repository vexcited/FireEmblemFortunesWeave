#pragma once

namespace nn::util {

class IntrusiveListNode {
public:
  IntrusiveListNode() : m_Prev(this), m_Next(this) {}

  bool IsLinked() const {
    return m_Next != this;
  }

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
    Unlink(m_Next);
  }

  void Unlink(IntrusiveListNode* last) {
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

}
