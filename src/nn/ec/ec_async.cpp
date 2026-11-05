#include "nn/ec/ec_async.hpp"

namespace nn::ec {

#define EC_ASYNC_WRAPPERS(Class)                                              \
  void Class::Wait() {                                                        \
    m_Base.Wait();                                                            \
  }                                                                           \
                                                                              \
  bool Class::TryWait() {                                                     \
    return m_Base.TryWait();                                                  \
  }                                                                           \
                                                                              \
  Result Class::Cancel() {                                                    \
    return m_Base.Cancel();                                                   \
  }                                                                           \
                                                                              \
  os::SystemEventType* Class::GetEvent() {                                    \
    return m_Base.GetEvent();                                                 \
  }

namespace detail {

AsyncValueImpl::AsyncValueImpl() {}

AsyncDataImpl::AsyncDataImpl() {}

EC_ASYNC_WRAPPERS(AsyncValueImpl)
EC_ASYNC_WRAPPERS(AsyncDataImpl)

}

EC_ASYNC_WRAPPERS(AsyncResult)
EC_ASYNC_WRAPPERS(AsyncData)

#undef EC_ASYNC_WRAPPERS

}
