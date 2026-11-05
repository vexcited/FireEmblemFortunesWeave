#include <algorithm>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_applet_to_nifm_arguments_reader.hpp"

namespace nn::la {

namespace {

constexpr Result ResultConnectionSucceeded = {0x17c6e};
constexpr Result ResultConnectionCanceled = {0x16a86e};

Result ToConnectionResult(int32_t value) {
  return value == 0 ? ResultConnectionSucceeded : ResultConnectionCanceled;
}

}

AppletToNifmArgumentsReader::AppletToNifmArgumentsReader()
  : m_IsResultAvailable(false), m_Result() {}

AppletToNifmArgumentsReader::~AppletToNifmArgumentsReader() {}

Result AppletToNifmArgumentsReader::GetResult() {
  return m_Result;
}

bool AppletToNifmArgumentsReader::TryPopFromOutChannel(
  applet::LibraryAppletHandle handle) {
  applet::StorageHandle storage = {};
  if (!applet::TryPopFromOutChannel(&storage, handle)) {
    return false;
  }

  const bool isRead = ReadFromStorage(storage);
  applet::ReleaseStorage(storage);
  return isRead;
}

// Old applets only return a 32 bit connection status, newer ones follow it
// with the result itself.
bool AppletToNifmArgumentsReader::ReadFromStorage(
  applet::StorageHandle storage) {
  const size_t size = applet::GetStorageSize(storage);
  if (size == sizeof(int32_t)) {
    int32_t value = -1;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::ReadFromStorage(storage, 0, &value, sizeof(value)));
    m_IsResultAvailable = true;
    m_Result = ToConnectionResult(value);
    return true;
  }

  int32_t value = 0;
  if (size < sizeof(int32_t)) {
    return false;
  }

  const size_t resultSize = size - sizeof(int32_t);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, 0, &value, sizeof(value)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage,
    sizeof(int32_t), &m_Result, std::min(resultSize, sizeof(Result))));
  if (value == 0 ? resultSize != sizeof(Result) :
    resultSize < sizeof(Result)) {
    return false;
  }

  m_IsResultAvailable = true;
  return true;
}

bool AppletToNifmArgumentsReader::ReadNetConnectReturnParam(
  applet::StorageHandle storage) {
  int32_t value = -1;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, 0, &value, sizeof(value)));
  m_IsResultAvailable = true;
  m_Result = ToConnectionResult(value);
  return true;
}

}
