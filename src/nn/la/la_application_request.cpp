#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/span.hpp"

namespace nn::applet {

void PushToSystemGeneralChannel(StorageHandle storage);

}

namespace nn::la {

enum LaunchApplicationRequestSender : uint32_t {};

struct RequestToLaunchApplicationWithRequiredVersionParam {
  ncm::ApplicationId applicationId;
  account::Uid uid;
  const void* pParameter;
  size_t parameterSize;
  LaunchApplicationRequestSender sender;
  uint32_t requiredVersion;
};

namespace {

// Messages to the system general channel start with this header.
struct SystemMessageHeader {
  uint32_t magic;
  uint32_t version;
  uint32_t command;
  uint32_t reserved;
};

constexpr uint32_t SystemMessageMagic = 0x534d4153;

constexpr SystemMessageHeader LaunchApplicationHeader = {
  SystemMessageMagic, 1, 0x20, 1,
};
constexpr SystemMessageHeader LaunchApplicationWithVersionHeader = {
  SystemMessageMagic, 1, 0x2c, 1,
};
constexpr SystemMessageHeader JumpToStoryHeader = {
  SystemMessageMagic, 1, 0x21, 1,
};
constexpr SystemMessageHeader JumpToVphymHeader = {
  SystemMessageMagic, 1, 0x2b, 1,
};

constexpr size_t LaunchApplicationStorageSize = 0x800;
constexpr int VphymApplicationCountMax = 100;

void Write(applet::StorageHandle storage, int64_t offset, const void* pData,
  size_t size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, offset, pData, size));
}

}

void RequestToLaunchApplication(ncm::ApplicationId applicationId,
  const account::Uid& uid, const void* pParameter, size_t parameterSize,
  LaunchApplicationRequestSender sender) {
  applet::StorageHandle storage = {};
  const uint32_t size = static_cast<uint32_t>(parameterSize);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::CreateStorage(&storage, LaunchApplicationStorageSize));
  Write(storage, 0, &LaunchApplicationHeader, sizeof(LaunchApplicationHeader));
  Write(storage, 0x10, &sender, sizeof(sender));
  Write(storage, 0x14, &applicationId, sizeof(applicationId));
  Write(storage, 0x1c, &uid, sizeof(uid));
  Write(storage, 0x2c, &size, sizeof(size));
  Write(storage, 0x30, pParameter, size);
  applet::PushToSystemGeneralChannel(storage);
}

void RequestToLaunchApplicationWithRequiredVersion(
  const RequestToLaunchApplicationWithRequiredVersionParam& param) {
  applet::StorageHandle storage = {};
  const uint32_t size = static_cast<uint32_t>(param.parameterSize);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::CreateStorage(&storage, LaunchApplicationStorageSize));
  Write(storage, 0, &LaunchApplicationWithVersionHeader,
    sizeof(LaunchApplicationWithVersionHeader));
  Write(storage, 0x10, &param.sender, sizeof(param.sender));
  Write(storage, 0x14, &param.applicationId, sizeof(param.applicationId));
  Write(storage, 0x1c, &param.uid, sizeof(param.uid));
  Write(storage, 0x2c, &size, sizeof(size));
  Write(storage, 0x30, param.pParameter, size);
  Write(storage, 0x30 + size, &param.requiredVersion,
    sizeof(param.requiredVersion));
  applet::PushToSystemGeneralChannel(storage);
}

[[gnu::noinline]] void RequestJumpToStory(const account::Uid& uid,
  ncm::ApplicationId applicationId);

void RequestJumpToStory(const account::Uid& uid) {
  RequestJumpToStory(uid, ncm::ApplicationId{0});
}

void RequestJumpToStory(const account::Uid& uid,
  ncm::ApplicationId applicationId) {
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage, 0x28));
  Write(storage, 0, &JumpToStoryHeader, sizeof(JumpToStoryHeader));
  Write(storage, 0x10, &uid, sizeof(uid));
  Write(storage, 0x20, &applicationId, sizeof(applicationId));
  applet::PushToSystemGeneralChannel(storage);
}

[[gnu::noinline]] void RequestJumpToVphym(const account::Uid& uid,
  Span<ncm::ApplicationId> applicationIds);

void RequestJumpToVphym(const account::Uid& uid) {
  RequestJumpToVphym(uid, Span<ncm::ApplicationId>{nullptr, 0});
}

// The list is copied without a bound check.
void RequestJumpToVphym(const account::Uid& uid,
  Span<ncm::ApplicationId> applicationIds) {
  ncm::ApplicationId ids[VphymApplicationCountMax] = {};
  for (uintptr_t i = 0; i < applicationIds.size; i++) {
    ids[i] = applicationIds.data[i];
  }
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage,
    sizeof(JumpToVphymHeader) + sizeof(uid) + sizeof(ids)));
  Write(storage, 0, &JumpToVphymHeader, sizeof(JumpToVphymHeader));
  Write(storage, 0x10, &uid, sizeof(uid));
  Write(storage, 0x20, ids, sizeof(ids));
  applet::PushToSystemGeneralChannel(storage);
}

}
