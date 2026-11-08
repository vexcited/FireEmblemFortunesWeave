#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::prepo {

struct Any64BitId {
  uint64_t id;
};

class Struct;

class Array {
 public:
  Array();

  void SetBuffer(void* buffer, size_t size);
  void Clear();
  Result Add(long value);
  Result Add(const Any64BitId& value);
  Result Add(float value);
  Result Add(double value);
  Result Add(const char* value);
  Result Add(bool value);
  Result Add(const Struct& value);
  int GetCount() const;
  size_t GetSize() const;
  const void* GetBuffer() const;

 private:
  uint8_t* m_Buffer;
  size_t m_BufferSize;
  size_t m_Size;
  size_t m_Count;
};

class Struct {
 public:
  Struct();

  void SetBuffer(void* buffer, size_t size);
  void Clear();
  Result Add(const char* key, long value);
  Result Add(const char* key, const Any64BitId& value);
  Result Add(const char* key, float value);
  Result Add(const char* key, double value);
  Result Add(const char* key, const char* value);
  Result Add(const char* key, bool value);
  Result Add(const char* key, const Array& value);
  Result Add(const char* key, const Struct& value);
  int GetCount() const;
  size_t GetSize() const;
  const void* GetBuffer() const;

 private:
  uint8_t* m_Buffer;
  size_t m_BufferSize;
  size_t m_Size;
  size_t m_Count;
};

namespace detail::ipc {

class IAsyncContext : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSystemEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result Cancel() = 0;
  virtual Result GetResult() = 0;
};

}

class AsyncContext {
 public:
  AsyncContext();
  explicit AsyncContext(detail::ipc::IAsyncContext* pContext);
  explicit AsyncContext(Result result);
  AsyncContext(AsyncContext&& other);
  ~AsyncContext();

  AsyncContext& operator=(AsyncContext&& other);
  void GetCompletionEvent(os::SystemEvent* pOutEvent);
  void Cancel();
  Result GetResult();

 private:
  detail::ipc::IAsyncContext* m_pContext;
  Result m_Result;
};

namespace detail {

Result HandleSaveResult(Result result);
Result HandleSrepoResult(Result result);

class PlayReportImpl {
 public:
  PlayReportImpl();
  explicit PlayReportImpl(const char* eventId);

  Result SetEventId(const char* eventId);
  void SetBuffer(void* buffer, size_t size);

  void SetOptInCheckEnabled(bool isEnabled) {
    m_IsOptInCheckEnabled = isEnabled;
  }

  void Clear();
  Result Add(const char* key, long value);
  Result Add(const char* key, const Any64BitId& value);
  Result Add(const char* key, float value);
  Result Add(const char* key, double value);
  Result Add(const char* key, const char* value);
  Result Add(const char* key, bool value);
  Result Add(const char* key, const void* value, size_t size);
  Result Add(const char* key, const Array& value);
  Result Add(const char* key, const Struct& value);
  Result AddPlaceholder(const char* key, int8_t type);
  Result Save();
  Result Save(const account::Uid& uid);
  AsyncContext Send(const account::Uid& uid);
  int GetCount() const;
  size_t GetSize() const;

 private:
  char m_EventId[32];
  bool m_IsOptInCheckEnabled;
  uint8_t* m_Buffer;
  size_t m_BufferSize;
  size_t m_Position;
};

}

class PlayReport {
 public:
  PlayReport();
  explicit PlayReport(const char* eventId);
  ~PlayReport();

  Result SetEventId(const char* eventId);
  void SetBuffer(void* buffer, size_t size);
  void SetOptInCheckEnabled(bool isEnabled);
  void Clear();
  Result Add(const char* key, long value);
  Result Add(const char* key, const Any64BitId& value);
  Result Add(const char* key, float value);
  Result Add(const char* key, double value);
  Result Add(const char* key, const char* value);
  Result Add(const char* key, bool value);
  Result Add(const char* key, const void* value, size_t size);
  Result Add(const char* key, const Array& value);
  Result Add(const char* key, const Struct& value);
  Result Save();
  Result Save(const account::Uid& uid);
  AsyncContext Send(const account::Uid& uid);
  int GetCount() const;
  size_t GetSize() const;

 private:
  friend Result AddInternetConnectionStatus(PlayReport* pReport,
    const char* ssidKey, const char* bssidKey, const char* rssiKey);

  detail::PlayReportImpl m_Impl;
};

}
