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
  SharedPointer() : m_Pointer(nullptr) {}

  ~SharedPointer() {
    if (m_Pointer != nullptr) {
      m_Pointer->Release();
    }
  }

  Interface* operator->() const {
    return m_Pointer;
  }

  void Reset() {
    Interface* pointer = m_Pointer;
    m_Pointer = nullptr;
    if (pointer != nullptr) {
      pointer->Release();
    }
  }

 private:
  Interface* m_Pointer;
};

template <typename T>
class Out {
 public:
  explicit Out(T* pointer) : m_Pointer(pointer) {}

  T* GetPointer() const {
    return m_Pointer;
  }

 private:
  T* m_Pointer;
};

}
