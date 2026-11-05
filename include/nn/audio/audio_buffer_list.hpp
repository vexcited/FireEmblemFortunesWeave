#pragma once

namespace nn::audio {

template <typename T>
class AudioBufferList {
public:
  void clear() {
    m_pHead = nullptr;
    m_pTail = nullptr;
  }

  void push_back(T* buffer) {
    if (m_pHead != nullptr) {
      m_pTail->_pNext = buffer;
    }
    else {
      m_pHead = buffer;
    }
    m_pTail = buffer;
    buffer->_pNext = nullptr;
    buffer->_pList = nullptr;
  }

  void pop_front() {
    if (m_pHead != nullptr) {
      m_pHead = m_pHead->_pNext;
      if (m_pHead == nullptr) {
        m_pTail = nullptr;
      }
    }
  }

  T* front() const {
    return m_pHead;
  }

  T* back() const {
    return m_pTail;
  }

private:
  T* m_pHead;
  T* m_pTail;
};

}
