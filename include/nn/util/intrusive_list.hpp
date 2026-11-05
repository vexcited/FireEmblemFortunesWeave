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

  void LinkNext(IntrusiveListNode* node) {
    IntrusiveListNode* last = node->m_Prev;
    node->m_Prev = this;
    last->m_Next = m_Next;
    m_Next->m_Prev = last;
    m_Next = node;
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

template<typename Derived>
class IntrusiveListBaseNode : public IntrusiveListNode {};

template<typename Derived, typename Base = Derived>
class IntrusiveListBaseNodeTraits {
public:
  static IntrusiveListNode* GetNode(Derived* reference) {
    return static_cast<IntrusiveListBaseNode<Base>*>(reference);
  }

  static Derived* GetItem(IntrusiveListNode* node) {
    return static_cast<Derived*>(
      static_cast<IntrusiveListBaseNode<Base>*>(node));
  }
};

template<typename Holder, IntrusiveListNode Holder::*Member,
  typename Item = Holder, unsigned long Size = sizeof(Item)>
class IntrusiveListMemberNodeTraits {
public:
  static IntrusiveListNode* GetNode(Item* reference) {
    return &(static_cast<Holder*>(reference)->*Member);
  }

  static Item* GetItem(IntrusiveListNode* node) {
    const auto offset = reinterpret_cast<unsigned long>(
      &(static_cast<Holder*>(nullptr)->*Member));
    return static_cast<Item*>(reinterpret_cast<Holder*>(
      reinterpret_cast<char*>(node) - offset));
  }
};

template<typename T, typename NodeTraits>
class IntrusiveList {
public:
  class iterator {
  public:
    explicit iterator(IntrusiveListNode* node) : m_pNode(node) {}

    T& operator*() const {
      return *NodeTraits::GetItem(m_pNode);
    }

    T* operator->() const {
      return NodeTraits::GetItem(m_pNode);
    }

    iterator& operator++() {
      m_pNode = m_pNode->GetNext();
      return *this;
    }

    iterator& operator--() {
      m_pNode = m_pNode->GetPrev();
      return *this;
    }

    bool operator==(const iterator& other) const {
      return m_pNode == other.m_pNode;
    }

    bool operator!=(const iterator& other) const {
      return m_pNode != other.m_pNode;
    }

    IntrusiveListNode* GetNode() const {
      return m_pNode;
    }

  private:
    IntrusiveListNode* m_pNode;
  };

  IntrusiveList() : m_Root() {}

  iterator begin() {
    return iterator(m_Root.GetNext());
  }

  iterator end() {
    return iterator(&m_Root);
  }

  iterator iterator_to(T& item) {
    return iterator(NodeTraits::GetNode(&item));
  }

  bool empty() const {
    return !m_Root.IsLinked();
  }

  T& front() {
    return *NodeTraits::GetItem(m_Root.GetNext());
  }

  T& back() {
    return *NodeTraits::GetItem(m_Root.GetPrev());
  }

  void push_front(T& item) {
    m_Root.LinkNext(NodeTraits::GetNode(&item));
  }

  void pop_front() {
    m_Root.GetNext()->Unlink();
  }

  void push_back(T& item) {
    m_Root.LinkPrev(NodeTraits::GetNode(&item));
  }

  void clear() {
    while (!empty()) {
      pop_front();
    }
  }

  iterator insert(iterator position, T& item) {
    IntrusiveListNode* node = NodeTraits::GetNode(&item);
    position.GetNode()->LinkPrev(node);
    return iterator(node);
  }

  static void erase(T& item) {
    NodeTraits::GetNode(&item)->Unlink();
  }

  iterator erase(iterator position) {
    IntrusiveListNode* next = position.GetNode()->GetNext();
    position.GetNode()->Unlink();
    return iterator(next);
  }

private:
  IntrusiveListNode m_Root;
};

}
