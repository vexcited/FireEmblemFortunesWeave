#pragma once

#include <stddef.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"

namespace nn::ec {

namespace detail {

// Service interfaces, only the slots used by the client wrappers are named.
class IAsyncResult {
public:
  virtual void AddReference() = 0;
  virtual void Release() = 0;
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Get() = 0;
  virtual Result Cancel() = 0;
};

class IAsyncValue {
public:
  virtual void AddReference() = 0;
  virtual void Release() = 0;
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSize(uint64_t* pOutSize) = 0;
  virtual Result Get(const sf::OutBuffer& buffer) = 0;
  virtual Result Cancel() = 0;
};

class IAsyncData {
public:
  virtual void AddReference() = 0;
  virtual void Release() = 0;
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSize(int64_t* pOutSize) = 0;
  virtual Result Read(uint64_t* pOutSize, int64_t offset,
    const sf::OutBuffer& buffer) = 0;
  virtual Result Cancel() = 0;
};

template<typename Interface>
class AsyncBase {
public:
  AsyncBase() : m_pAsync(nullptr) {
    m_Event.state = 0;
  }

  ~AsyncBase() {
    if (m_pAsync != nullptr) {
      Finalize();
    }
    if (m_Event.state != 0) {
      os::DestroySystemEvent(&m_Event);
    }
  }

  void Initialize(Interface* pAsync, const sf::NativeHandle& handle) {
    NN_ABORT_UNLESS(m_Event.state == 0);
    os::AttachReadableHandleToSystemEvent(&m_Event, handle.GetOsHandle(),
      handle.IsManaged(), os::EventClearMode_ManualClear);
    m_pAsync = pAsync;
  }

  void Finalize() {
    m_pAsync->Cancel();
    Wait();
    if (m_Event.state != 0) {
      os::DestroySystemEvent(&m_Event);
    }
    m_Event.state = 0;
    m_pAsync->Release();
    m_pAsync = nullptr;
  }

  Interface* GetInterface() {
    return m_pAsync;
  }

  void Wait() {
    os::WaitSystemEvent(&m_Event);
  }

  bool TryWait() {
    return os::TryWaitSystemEvent(&m_Event);
  }

  Result Cancel() {
    return m_pAsync->Cancel();
  }

  os::SystemEventType* GetEvent() {
    return &m_Event;
  }

protected:
  Interface* m_pAsync;
  os::SystemEventType m_Event;
};

class AsyncValueImpl {
public:
  AsyncValueImpl();
  ~AsyncValueImpl();
  void Initialize(IAsyncValue* pAsync, const sf::NativeHandle& handle);
  void Finalize();
  Result Get(void* buffer, size_t size);
  uint64_t GetSize();
  void Wait();
  bool TryWait();
  Result Cancel();
  os::SystemEventType* GetEvent();

private:
  AsyncBase<IAsyncValue> m_Base;
};

class AsyncDataImpl {
public:
  AsyncDataImpl();
  ~AsyncDataImpl();
  void Initialize(IAsyncData* pAsync, const sf::NativeHandle& handle);
  void Finalize();
  Result GetSize(size_t* pOutSize);
  Result Get(size_t* pOutSize, int64_t offset, void* buffer, size_t size);
  void Wait();
  bool TryWait();
  Result Cancel();
  os::SystemEventType* GetEvent();

private:
  AsyncBase<IAsyncData> m_Base;
};

}

class AsyncResult {
public:
  ~AsyncResult();
  void Initialize(detail::IAsyncResult* pAsync,
    const sf::NativeHandle& handle);
  void Finalize();
  Result Get();
  void Wait();
  bool TryWait();
  Result Cancel();
  os::SystemEventType* GetEvent();

private:
  detail::AsyncBase<detail::IAsyncResult> m_Base;
};

class AsyncData {
public:
  ~AsyncData();
  void Initialize(detail::IAsyncData* pAsync,
    const sf::NativeHandle& handle);
  void Finalize();
  Result GetSize(size_t* pOutSize);
  Result Get(void* buffer, size_t size);
  Result Get(size_t* pOutSize, int64_t offset, void* buffer, size_t size);
  void Wait();
  bool TryWait();
  Result Cancel();
  os::SystemEventType* GetEvent();

private:
  detail::AsyncBase<detail::IAsyncData> m_Base;
};

}
