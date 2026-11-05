#include <string.h>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/util/string_util.hpp"
#include "nn/util/uuid.hpp"

namespace nn::la {

class NifmToNetConnectArgumentsWriter {
 public:
  NifmToNetConnectArgumentsWriter(Result result, const util::Uuid& requestId,
    bool isPersistent);
  ~NifmToNetConnectArgumentsWriter();

  void PushToInChannel(applet::LibraryAppletHandle handle) const;
  size_t GetExportSize() const;
  void Export(char* pBuffer, size_t bufferSize) const;

 private:
  Result m_Result;
  util::Uuid m_RequestId;
  bool m_IsPersistent;
};

static_assert(sizeof(NifmToNetConnectArgumentsWriter) == 0x18);

class NifmToWifiWebAuthArgumentsWriter {
 public:
  NifmToWifiWebAuthArgumentsWriter(const char* pAuthUrl,
    const char* pConnectionTestUrl, const util::Uuid& requestId,
    uint32_t profileIndex);
  ~NifmToWifiWebAuthArgumentsWriter();

  void PushToInChannel(applet::LibraryAppletHandle handle) const;
  size_t GetExportSize() const;
  void Export(char* pBuffer, size_t bufferSize) const;

 private:
  char m_ConnectionTestUrl[0x100];
  char m_AuthUrl[0x400];
  util::Uuid m_RequestId;
  uint32_t m_ProfileIndex;
};

static_assert(sizeof(NifmToWifiWebAuthArgumentsWriter) == 0x514);

namespace detail {

// Both argument blocks start with a 32 bit version.
extern const uint32_t g_NifmToNetConnectArgumentsVersion;
extern const uint32_t g_NifmToWifiWebAuthArgumentsVersion;

}

namespace {

template <typename Writer>
void PushArguments(applet::LibraryAppletHandle handle, const Writer& writer,
  const uint32_t& version) {
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage,
    sizeof(version) + sizeof(writer)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, 0, &version, sizeof(version)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(storage,
    sizeof(version), &writer, sizeof(writer)));
  applet::PushToInChannel(handle, storage);
}

template <typename Writer>
void ExportArguments(char* pBuffer, size_t bufferSize, const Writer& writer,
  uint32_t version) {
  NN_ABORT_UNLESS(bufferSize >= sizeof(version) + sizeof(writer));
  memcpy(pBuffer, &version, sizeof(version));
  memcpy(pBuffer + sizeof(version), &writer, sizeof(writer));
}

}

NifmToNetConnectArgumentsWriter::NifmToNetConnectArgumentsWriter(
  Result result, const util::Uuid& requestId, bool isPersistent)
  : m_Result(result), m_RequestId(requestId), m_IsPersistent(isPersistent) {}

NifmToNetConnectArgumentsWriter::~NifmToNetConnectArgumentsWriter() {}

void NifmToNetConnectArgumentsWriter::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushArguments(handle, *this, detail::g_NifmToNetConnectArgumentsVersion);
}

size_t NifmToNetConnectArgumentsWriter::GetExportSize() const {
  return sizeof(uint32_t) + sizeof(*this);
}

void NifmToNetConnectArgumentsWriter::Export(char* pBuffer,
  size_t bufferSize) const {
  ExportArguments(pBuffer, bufferSize, *this, 1);
}

NifmToWifiWebAuthArgumentsWriter::NifmToWifiWebAuthArgumentsWriter(
  const char* pAuthUrl, const char* pConnectionTestUrl,
  const util::Uuid& requestId, uint32_t profileIndex) {
  util::Strlcpy(m_AuthUrl, pAuthUrl, sizeof(m_AuthUrl));
  util::Strlcpy(m_ConnectionTestUrl, pConnectionTestUrl,
    sizeof(m_ConnectionTestUrl));
  m_RequestId = requestId;
  m_ProfileIndex = profileIndex;
}

NifmToWifiWebAuthArgumentsWriter::~NifmToWifiWebAuthArgumentsWriter() {}

void NifmToWifiWebAuthArgumentsWriter::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushArguments(handle, *this, detail::g_NifmToWifiWebAuthArgumentsVersion);
}

size_t NifmToWifiWebAuthArgumentsWriter::GetExportSize() const {
  return sizeof(uint32_t) + sizeof(*this);
}

void NifmToWifiWebAuthArgumentsWriter::Export(char* pBuffer,
  size_t bufferSize) const {
  ExportArguments(pBuffer, bufferSize, *this, 0);
}

}
