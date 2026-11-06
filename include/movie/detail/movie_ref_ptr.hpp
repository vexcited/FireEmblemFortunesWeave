#pragma once

namespace movie::detail {

// Owns one reference to a movie interface.
template <typename T>
class RefPtr {
public:
  RefPtr() : m_p(nullptr) {}

  explicit RefPtr(T* p) : m_p(p) {
    if (m_p != nullptr) {
      m_p->AddRef();
    }
  }

  ~RefPtr() {
    Reset();
  }

  RefPtr(const RefPtr& other) : m_p(other.m_p) {
    if (m_p != nullptr) {
      m_p->AddRef();
    }
  }

  RefPtr& operator=(const RefPtr&) = delete;

  RefPtr& operator=(T* p) {
    if (p != nullptr) {
      p->AddRef();
    }

    if (m_p != nullptr) {
      m_p->Release();
    }

    m_p = p;
    return *this;
  }

  void Reset() {
    if (m_p != nullptr) {
      m_p->Release();
      m_p = nullptr;
    }
  }

  T* Detach() {
    T* p = m_p;
    m_p = nullptr;
    return p;
  }

  T* Get() const {
    return m_p;
  }

  T** GetAddress() {
    return &m_p;
  }

  T* operator->() const {
    return m_p;
  }

  explicit operator bool() const {
    return m_p != nullptr;
  }

private:
  T* m_p;
};

}
