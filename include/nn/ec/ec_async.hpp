#pragma once

#include "nn/os/system_event.hpp"
#include "nn/result.hpp"

namespace nn::ec {

namespace detail {

// Service interfaces, only the slots used by the client wrappers are named.
class IAsyncResult {
public:
  virtual void Reserved0() = 0;
  virtual void Reserved1() = 0;
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result Cancel() = 0;
};

class IAsyncValue {
public:
  virtual void Reserved0() = 0;
  virtual void Reserved1() = 0;
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result Cancel() = 0;
};

template<typename Interface>
class AsyncBase {
public:
  AsyncBase() : m_pAsync(nullptr) {
    m_Event.state = 0;
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
  void Wait();
  bool TryWait();
  Result Cancel();
  os::SystemEventType* GetEvent();

private:
  AsyncBase<IAsyncValue> m_Base;
};

}

class AsyncResult {
public:
  void Wait();
  bool TryWait();
  Result Cancel();
  os::SystemEventType* GetEvent();

private:
  detail::AsyncBase<detail::IAsyncResult> m_Base;
};

class AsyncData {
public:
  void Wait();
  bool TryWait();
  Result Cancel();
  os::SystemEventType* GetEvent();

private:
  detail::AsyncBase<detail::IAsyncValue> m_Base;
};

}
