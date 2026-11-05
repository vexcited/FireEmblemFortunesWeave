#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_api.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/web/detail/web_arg_util.hpp"

namespace nn::web {

enum OfflineLeftStickMode : int32_t {
  OfflineLeftStickMode_Pointer,
  OfflineLeftStickMode_Cursor,
};

namespace detail {

enum OfflineDocumentKind : int32_t {
  OfflineDocumentKind_OfflineHtmlPage = 1,
  OfflineDocumentKind_ApplicationLegalInformation = 2,
  OfflineDocumentKind_SystemData = 3,
  OfflineDocumentKind_Calibration = 4,
};

inline void PushWebArgToInChannel(applet::LibraryAppletHandle handle,
  const uint8_t* data) {
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::CreateStorage(&storage, WebArgDataSize));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, 0, data, WebArgDataSize));
  applet::PushToInChannel(handle, storage);
}

class ShowOfflinePageArgDetail {
 public:
  static void SetApplicationId(uint8_t* data,
    const ApplicationId& applicationId);
  static void SetDocumentPath(uint8_t* data, size_t size, const char* path);
  static void SetDocumentKind(uint8_t* data, const OfflineDocumentKind& kind);
  static void SetSystemDataId(uint8_t* data,
    const ncm::SystemDataId& systemDataId);
  static void SetPointerEnabled(uint8_t* data, bool isEnabled);
  static void SetLeftStickMode(uint8_t* data,
    const OfflineLeftStickMode& mode);
};

class ShowSharePageArgDetail {
 public:
  static void SetCallbackUrl(uint8_t* data, const char* url);
};

class ShowOfflineHtmlPageArgWriter {
 public:
  void PushToInChannel(applet::LibraryAppletHandle handle) const;

 private:
  alignas(8) uint8_t m_Data[WebArgDataSize];
};

class ShowWebPageArgWriter {
 public:
  void PushToInChannel(applet::LibraryAppletHandle handle) const;

 private:
  alignas(8) uint8_t m_Data[WebArgDataSize];
};

class ShowLobbyPageArgWriter {
 public:
  void PushToInChannel(applet::LibraryAppletHandle handle) const;

 private:
  alignas(8) uint8_t m_Data[WebArgDataSize];
};

}

}
