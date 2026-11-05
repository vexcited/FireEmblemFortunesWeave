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

#define EC_ASYNC_LIFETIME(Class, Interface)                                   \
  Class::~Class() {}                                                          \
                                                                              \
  void Class::Initialize(Interface* pAsync, const sf::NativeHandle& handle) { \
    m_Base.Initialize(pAsync, handle);                                        \
  }                                                                           \
                                                                              \
  void Class::Finalize() {                                                    \
    m_Base.Finalize();                                                        \
  }

namespace {

const Result ResultBufferNotEnough = {0xb6a4};

}

namespace detail {

AsyncValueImpl::AsyncValueImpl() {}

AsyncDataImpl::AsyncDataImpl() {}

EC_ASYNC_LIFETIME(AsyncValueImpl, IAsyncValue)
EC_ASYNC_LIFETIME(AsyncDataImpl, IAsyncData)

Result AsyncValueImpl::Get(void* buffer, size_t size) {
  m_Base.Wait();
  return m_Base.GetInterface()->Get(sf::OutBuffer(buffer, size));
}

uint64_t AsyncValueImpl::GetSize() {
  uint64_t size = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Base.GetInterface()->GetSize(&size));
  return size;
}

Result AsyncDataImpl::GetSize(size_t* pOutSize) {
  m_Base.Wait();
  int64_t size = 0;
  NN_RESULT_DO(m_Base.GetInterface()->GetSize(&size));
  *pOutSize = size;
  return Result();
}

Result AsyncDataImpl::Get(size_t* pOutSize, int64_t offset, void* buffer,
  size_t size) {
  m_Base.Wait();
  uint64_t read = 0;
  NN_RESULT_DO(m_Base.GetInterface()->Read(&read, offset,
    sf::OutBuffer(buffer, size)));
  *pOutSize = read;
  return Result();
}

EC_ASYNC_WRAPPERS(AsyncValueImpl)
EC_ASYNC_WRAPPERS(AsyncDataImpl)

}

EC_ASYNC_WRAPPERS(AsyncResult)
EC_ASYNC_WRAPPERS(AsyncData)
EC_ASYNC_LIFETIME(AsyncResult, detail::IAsyncResult)
EC_ASYNC_LIFETIME(AsyncData, detail::IAsyncData)

#undef EC_ASYNC_WRAPPERS
#undef EC_ASYNC_LIFETIME

Result AsyncResult::Get() {
  m_Base.Wait();
  return m_Base.GetInterface()->Get();
}

Result AsyncData::GetSize(size_t* pOutSize) {
  m_Base.Wait();
  int64_t size = 0;
  NN_RESULT_DO(m_Base.GetInterface()->GetSize(&size));
  *pOutSize = size;
  return Result();
}

Result AsyncData::Get(size_t* pOutSize, int64_t offset, void* buffer,
  size_t size) {
  m_Base.Wait();
  uint64_t read = 0;
  NN_RESULT_DO(m_Base.GetInterface()->Read(&read, offset,
    sf::OutBuffer(buffer, size)));
  *pOutSize = read;
  return Result();
}

Result AsyncData::Get(void* buffer, size_t size) {
  size_t dataSize;
  NN_RESULT_DO(GetSize(&dataSize));
  if (dataSize > size) {
    return ResultBufferNotEnough;
  }
  size_t read;
  return Get(&read, 0, buffer, size);
}

}
