#include "nn/web/detail/web_arg_util.hpp"
#include "nn/web/web_return_value.hpp"

namespace nn::web {

using namespace detail;

namespace {

enum ReturnValueKind : uint16_t {
  ReturnValueKind_ExitReason = 1,
  ReturnValueKind_LastUrl = 2,
  ReturnValueKind_LastUrlSize = 3,
  ReturnValueKind_SharePostResult = 4,
  ReturnValueKind_PostServiceName = 5,
  ReturnValueKind_PostServiceNameSize = 6,
  ReturnValueKind_PostId = 7,
  ReturnValueKind_PostIdSize = 8,
};

template <typename T>
T GetReturnValue(const uint8_t* data, uint16_t kind, T defaultValue) {
  const T* value = GetWebArgData<T>(data, kind);
  return value != nullptr ? *value : defaultValue;
}

const char* GetReturnString(const uint8_t* data, uint16_t kind) {
  return GetWebArgData<char>(data, kind);
}

}

ShareExitReason SharePageReturnValue::GetShareExitReason() const {
  return GetReturnValue(m_Data, ReturnValueKind_ExitReason,
    ShareExitReason_Unknown);
}

const char* SharePageReturnValue::GetLastUrl() const {
  return GetReturnString(m_Data, ReturnValueKind_LastUrl);
}

size_t SharePageReturnValue::GetLastUrlSize() const {
  return GetReturnValue<size_t>(m_Data, ReturnValueKind_LastUrlSize, 0);
}

SharePostResult SharePageReturnValue::GetSharePostResult() const {
  return GetReturnValue(m_Data, ReturnValueKind_SharePostResult,
    SharePostResult_Canceled);
}

const char* SharePageReturnValue::GetPostServiceName() const {
  return GetReturnString(m_Data, ReturnValueKind_PostServiceName);
}

size_t SharePageReturnValue::GetPostServiceNameSize() const {
  return GetReturnValue<size_t>(m_Data, ReturnValueKind_PostServiceNameSize,
    0);
}

const char* SharePageReturnValue::GetPostId() const {
  return GetReturnString(m_Data, ReturnValueKind_PostId);
}

size_t SharePageReturnValue::GetPostIdSize() const {
  return GetReturnValue<size_t>(m_Data, ReturnValueKind_PostIdSize, 0);
}

WebExitReason WebPageReturnValue::GetWebExitReason() const {
  return GetReturnValue(m_Data, ReturnValueKind_ExitReason,
    WebExitReason_Unknown);
}

const char* WebPageReturnValue::GetLastUrl() const {
  return GetReturnString(m_Data, ReturnValueKind_LastUrl);
}

size_t WebPageReturnValue::GetLastUrlSize() const {
  return GetReturnValue<size_t>(m_Data, ReturnValueKind_LastUrlSize, 0);
}

}
