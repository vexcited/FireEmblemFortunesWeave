#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::applet {

enum LibraryAppletExitReason : int32_t {
  LibraryAppletExitReason_Normal,
  LibraryAppletExitReason_Canceled,
  LibraryAppletExitReason_Abnormal,
  LibraryAppletExitReason_Unexpected = 10,
};

uint32_t GetExpectedThemeColorForSystem();
Result CreateLibraryApplet(LibraryAppletHandle* pOutHandle, AppletId appletId,
  LibraryAppletMode mode);
void CloseLibraryApplet(LibraryAppletHandle handle);
Result StartLibraryApplet(LibraryAppletHandle handle, void* pUserArgument);
void JoinLibraryApplet(LibraryAppletHandle handle);
LibraryAppletExitReason GetLibraryAppletExitReason(
  LibraryAppletHandle handle);
void PushToInChannel(LibraryAppletHandle handle, StorageHandle storage);
Result CreateStorage(StorageHandle* pOutStorage, size_t size);
Result WriteToStorage(StorageHandle storage, int64_t offset,
  const void* buffer, size_t size);
void ReleaseStorage(StorageHandle storage);
int64_t GetStorageSize(StorageHandle storage);
os::SystemEventType* GetLibraryAppletExitEvent(LibraryAppletHandle handle);
void RequestExitLibraryApplet(LibraryAppletHandle handle);
void PushToInteractiveInChannel(LibraryAppletHandle handle,
  StorageHandle storage);
bool TryPopFromInteractiveOutChannel(StorageHandle* pOutStorage,
  LibraryAppletHandle handle);
os::SystemEventType* GetPopFromInteractiveOutChannelEvent(
  LibraryAppletHandle handle);
bool WaitPopFromInteractiveOutChannelEvent(LibraryAppletHandle handle);
Result ReadFromStorage(StorageHandle storage, int64_t offset, void* buffer,
  size_t size);

}
