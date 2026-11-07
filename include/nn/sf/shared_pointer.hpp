#pragma once

namespace nn::sf {

class IServiceObject {
 public:
  virtual void AddReference() = 0;
  virtual void Release() = 0;
};

template <typename Interface>
class SharedPointer {
 public:
  constexpr SharedPointer() : m_Pointer(nullptr) {}

  SharedPointer(Interface* pointer, bool addReference) : m_Pointer(pointer) {
    if (m_Pointer != nullptr && addReference) {
      m_Pointer->AddReference();
    }
  }

  SharedPointer(const SharedPointer& other) : m_Pointer(other.m_Pointer) {
    if (m_Pointer != nullptr) {
      m_Pointer->AddReference();
    }
  }

  template <typename Derived>
  SharedPointer(const SharedPointer<Derived>& other)
    : m_Pointer(other.Get()) {
    if (m_Pointer != nullptr) {
      m_Pointer->AddReference();
    }
  }

  SharedPointer& operator=(const SharedPointer& other) {
    SharedPointer(other).Swap(*this);
    return *this;
  }

  template <typename Derived>
  SharedPointer& operator=(const SharedPointer<Derived>& other) {
    SharedPointer(other).Swap(*this);
    return *this;
  }

  void Swap(SharedPointer& other) {
    Interface* pointer = m_Pointer;
    m_Pointer = other.m_Pointer;
    other.m_Pointer = pointer;
  }

  ~SharedPointer() {
    if (m_Pointer != nullptr) {
      m_Pointer->Release();
    }
  }

  Interface* operator->() const {
    return m_Pointer;
  }

  explicit operator bool() const {
    return m_Pointer != nullptr;
  }

  Interface* Get() const {
    return m_Pointer;
  }

  Interface* Detach() {
    Interface* pointer = m_Pointer;
    m_Pointer = nullptr;
    return pointer;
  }

  void Reset() {
    Interface* pointer = m_Pointer;
    m_Pointer = nullptr;
    if (pointer != nullptr) {
      pointer->Release();
    }
  }

  friend bool operator==(const SharedPointer& lhs, decltype(nullptr)) {
    return lhs.m_Pointer == nullptr;
  }

  friend bool operator!=(const SharedPointer& lhs, decltype(nullptr)) {
    return lhs.m_Pointer != nullptr;
  }

 private:
  Interface* m_Pointer;
};

template <typename T, typename = void>
class Out {
 public:
  explicit Out(T* pointer) : m_Pointer(pointer) {}

  T* GetPointer() const {
    return m_Pointer;
  }

  T& operator*() const {
    return *m_Pointer;
  }

  T* operator->() const {
    return m_Pointer;
  }

 private:
  T* m_Pointer;
};

// Object outputs are not trivially copyable, so calls pass them in memory.
template <typename Interface>
class Out<SharedPointer<Interface>> {
 public:
  explicit Out(SharedPointer<Interface>* pointer) : m_Pointer(pointer) {}

  Out(const Out& other) : m_Pointer(other.m_Pointer) {}

  SharedPointer<Interface>* GetPointer() const {
    return m_Pointer;
  }

  SharedPointer<Interface>& operator*() const {
    return *m_Pointer;
  }

  SharedPointer<Interface>* operator->() const {
    return m_Pointer;
  }

 private:
  SharedPointer<Interface>* m_Pointer;
};

}
