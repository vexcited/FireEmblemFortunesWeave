#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::nfp {

struct DeviceHandle {
  uint64_t _storage;
};

struct NfpData;
struct TagInfo;
struct RegisterInfo;
struct CommonInfo;
struct ModelInfo;
struct AdminInfo;
struct RegisterInfoPrivate;

struct ApplicationAreaCreateInfo {
  uint32_t accessId;
  uint32_t initialDataSize;
  const void* pInitialData;
};

enum BreakType : int32_t {};
enum NtfWriteType : int32_t {};

namespace detail {

class IUser : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result ListDevices(const sf::OutArray<DeviceHandle>&, int32_t*) = 0;
  virtual void Reserved7() = 0;
  virtual Result StopDetection(DeviceHandle) = 0;
  virtual void Reserved9() = 0;
  virtual Result Unmount(DeviceHandle) = 0;
  virtual Result OpenApplicationArea(DeviceHandle, uint32_t) = 0;
  virtual void Reserved12() = 0;
  virtual Result SetApplicationArea(DeviceHandle, const sf::InBuffer&) = 0;
  virtual void Reserved14() = 0;
  virtual void Reserved15() = 0;
  virtual void Reserved16() = 0;
  virtual Result GetTagInfo(TagInfo*, DeviceHandle) = 0;
  virtual Result GetRegisterInfo(RegisterInfo*, DeviceHandle) = 0;
  virtual Result GetCommonInfo(CommonInfo*, DeviceHandle) = 0;
  virtual Result GetModelInfo(ModelInfo*, DeviceHandle) = 0;
  virtual void Reserved21() = 0;
  virtual void Reserved22() = 0;
  virtual void Reserved23() = 0;
  virtual void Reserved24() = 0;
  virtual Result GetNpadId(uint32_t*, DeviceHandle) = 0;
  virtual void Reserved26() = 0;
  virtual void Reserved27() = 0;
  virtual Result RecreateApplicationArea(DeviceHandle, uint32_t,
    const sf::InBuffer&) = 0;
};

class ISystem : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result ListDevices(const sf::OutArray<DeviceHandle>&, int32_t*) = 0;
  virtual void Reserved7() = 0;
  virtual Result StopDetection(DeviceHandle) = 0;
  virtual void Reserved9() = 0;
  virtual Result Unmount(DeviceHandle) = 0;
  virtual void Reserved11() = 0;
  virtual void Reserved12() = 0;
  virtual Result GetTagInfo(TagInfo*, DeviceHandle) = 0;
  virtual Result GetRegisterInfo(RegisterInfo*, DeviceHandle) = 0;
  virtual Result GetCommonInfo(CommonInfo*, DeviceHandle) = 0;
  virtual Result GetModelInfo(ModelInfo*, DeviceHandle) = 0;
  virtual void Reserved17() = 0;
  virtual void Reserved18() = 0;
  virtual void Reserved19() = 0;
  virtual void Reserved20() = 0;
  virtual Result GetNpadId(uint32_t*, DeviceHandle) = 0;
  virtual void Reserved22() = 0;
  virtual Result Format(DeviceHandle) = 0;
  virtual Result GetAdminInfo(AdminInfo*, DeviceHandle) = 0;
  virtual Result GetRegisterInfoPrivate(RegisterInfoPrivate*,
    DeviceHandle) = 0;
  virtual Result SetRegisterInfoPrivate(DeviceHandle,
    const RegisterInfoPrivate&) = 0;
  virtual Result DeleteRegisterInfo(DeviceHandle) = 0;
  virtual Result DeleteApplicationArea(DeviceHandle) = 0;
  virtual Result ExistsApplicationArea(bool*, DeviceHandle) = 0;
};

class IDebug : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result ListDevices(const sf::OutArray<DeviceHandle>&, int32_t*) = 0;
  virtual void Reserved7() = 0;
  virtual Result StopDetection(DeviceHandle) = 0;
  virtual void Reserved9() = 0;
  virtual Result Unmount(DeviceHandle) = 0;
  virtual Result OpenApplicationArea(DeviceHandle, uint32_t) = 0;
  virtual void Reserved12() = 0;
  virtual Result SetApplicationArea(DeviceHandle, const sf::InBuffer&) = 0;
  virtual void Reserved14() = 0;
  virtual void Reserved15() = 0;
  virtual void Reserved16() = 0;
  virtual Result GetTagInfo(TagInfo*, DeviceHandle) = 0;
  virtual Result GetRegisterInfo(RegisterInfo*, DeviceHandle) = 0;
  virtual Result GetCommonInfo(CommonInfo*, DeviceHandle) = 0;
  virtual Result GetModelInfo(ModelInfo*, DeviceHandle) = 0;
  virtual void Reserved21() = 0;
  virtual void Reserved22() = 0;
  virtual void Reserved23() = 0;
  virtual void Reserved24() = 0;
  virtual Result GetNpadId(uint32_t*, DeviceHandle) = 0;
  virtual void Reserved26() = 0;
  virtual void Reserved27() = 0;
  virtual Result RecreateApplicationArea(DeviceHandle, uint32_t,
    const sf::InBuffer&) = 0;
  virtual Result Format(DeviceHandle) = 0;
  virtual Result GetAdminInfo(AdminInfo*, DeviceHandle) = 0;
  virtual Result GetRegisterInfoPrivate(RegisterInfoPrivate*,
    DeviceHandle) = 0;
  virtual Result SetRegisterInfoPrivate(DeviceHandle,
    const RegisterInfoPrivate&) = 0;
  virtual Result DeleteRegisterInfo(DeviceHandle) = 0;
  virtual Result DeleteApplicationArea(DeviceHandle) = 0;
  virtual Result ExistsApplicationArea(bool*, DeviceHandle) = 0;
  virtual Result GetAll(NfpData*, DeviceHandle) = 0;
  virtual Result SetAll(DeviceHandle, const NfpData&) = 0;
  virtual Result FlushDebug(DeviceHandle) = 0;
  virtual Result BreakTag(DeviceHandle, BreakType) = 0;
  virtual Result ReadBackupData(const sf::OutBuffer&, int32_t*) = 0;
  virtual Result WriteBackupData(const sf::InBuffer&) = 0;
  virtual Result WriteNtf(DeviceHandle, const sf::InBuffer&, NtfWriteType) = 0;
  virtual void Reserved43() = 0;
  virtual void Reserved44() = 0;
  virtual void Reserved45() = 0;
  virtual void Reserved46() = 0;
  virtual Result BreakExtendedApplicationArea(DeviceHandle, BreakType) = 0;
};

}

namespace client {

sf::SharedPointer<detail::IDebug> GetDebugInterface();
sf::SharedPointer<detail::ISystem> GetSystemInterface();
sf::SharedPointer<detail::IUser> GetUserInterfaceForCommon();
sf::SharedPointer<detail::IUser> GetUserInterface();
bool IsCreatedDebugInterface();
bool IsCreatedSystemInterface();
bool IsCreatedUserInterface();

}

namespace detail {

Result CheckError(const Result& result);

}

bool IsErrorVisible();
void SetErrorVisible(bool isVisible);

}
