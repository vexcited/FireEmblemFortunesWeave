#include <string.h>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/os/time.hpp"

namespace nn::la {

namespace detail {

struct CommonArgumentsHeader {
  uint32_t version;
  uint32_t size;
};

extern const CommonArgumentsHeader g_CommonArgumentsHeader;

}

namespace {

constexpr size_t CommonArgumentsSize =
  sizeof(detail::CommonArgumentsHeader) + sizeof(CommonArgumentsWriter);

}

CommonArgumentsWriter::CommonArgumentsWriter(uint32_t version)
  : m_LaVersion(version),
    m_ExpectedThemeColor(applet::GetExpectedThemeColorForSystem()),
    m_IsPlayStartupSound(false),
    m_LaunchTick(os::GetSystemTick().value) {}

CommonArgumentsWriter::~CommonArgumentsWriter() {}

void CommonArgumentsWriter::SetLaVersion(uint16_t majorVersion,
  uint16_t minorVersion) {
  m_LaVersion = (static_cast<uint32_t>(majorVersion) << 16) | minorVersion;
}

void CommonArgumentsWriter::SetLaVersion(uint32_t version) {
  m_LaVersion = version;
}

void CommonArgumentsWriter::SetPlayStartupSound(bool isPlayStartupSound) {
  m_IsPlayStartupSound = isPlayStartupSound;
}

void CommonArgumentsWriter::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::CreateStorage(&storage, CommonArgumentsSize));
  m_LaunchTick = os::GetSystemTick().value;
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(storage, 0,
    &detail::g_CommonArgumentsHeader, sizeof(detail::g_CommonArgumentsHeader)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(storage,
    sizeof(detail::g_CommonArgumentsHeader), this, sizeof(*this)));
  applet::PushToInChannel(handle, storage);
}

size_t CommonArgumentsWriter::WriteToStorage(
  applet::StorageHandle storage) const {
  m_LaunchTick = os::GetSystemTick().value;
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(storage, 0,
    &detail::g_CommonArgumentsHeader, sizeof(detail::g_CommonArgumentsHeader)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(storage,
    sizeof(detail::g_CommonArgumentsHeader), this, sizeof(*this)));
  return CommonArgumentsSize;
}

size_t CommonArgumentsWriter::GetExportSize() const {
  return CommonArgumentsSize;
}

void CommonArgumentsWriter::Export(void* pBuffer, size_t bufferSize) const {
  NN_ABORT_UNLESS(bufferSize >= CommonArgumentsSize);
  const detail::CommonArgumentsHeader header = {1, CommonArgumentsSize};
  auto* pBytes = static_cast<char*>(pBuffer);
  memcpy(pBytes, &header, sizeof(header));
  memcpy(pBytes + sizeof(header), this, sizeof(*this));
}

}
