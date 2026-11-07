#pragma once

#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/hid/hid_types.hpp"
#include "nn/result.hpp"

namespace nn::hid {

constexpr int ExplainTextCount = 8;
constexpr int ExplainTextSize = 0x81;

struct ControllerSupportArg {
  int8_t playerCountMin;
  int8_t playerCountMax;
  bool enableTakeOverConnection;
  bool enableLeftJustify;
  bool enablePermitJoyDual;
  bool enableSingleMode;
  bool enableIdentificationColor;
  bool enableExplainText;
  uint32_t identificationColor[ExplainTextCount];
  char explainText[ExplainTextCount][ExplainTextSize];

  void SetDefault();
};

static_assert(sizeof(ControllerSupportArg) == 1072);

struct ControllerSupportResultInfo {
  int32_t playerCount;
  uint32_t selectedId;
};

struct ControllerFirmwareUpdateArg {
  bool enableForceUpdate;
  uint8_t reserved[3];

  void SetDefault();
};

NpadStyleSet GetSupportedNpadStyleSet();
NpadJoyHoldType GetNpadJoyHoldType();

Result ShowControllerSupport(const ControllerSupportArg& arg);
Result ShowControllerSupport(ControllerSupportResultInfo* pOutInfo,
  const ControllerSupportArg& arg);
void SetExplainText(ControllerSupportArg* pArg, const char* pText,
  const uint32_t& npadId);
Result ShowControllerStrapGuide();
Result ShowControllerFirmwareUpdate(const ControllerFirmwareUpdateArg& arg);

}

namespace nn::hid::system {

enum ControllerSupportMode : uint8_t {
  ControllerSupportMode_ShowControllerSupport,
  ControllerSupportMode_ShowControllerStrapGuide,
  ControllerSupportMode_ShowControllerFirmwareUpdate,
  ControllerSupportMode_Reserved3,
  ControllerSupportMode_ShowControllerKeyRemapping,
};

enum ControllerSupportCaller : uint8_t {};

// What the controller applet needs beside the public argument.
struct ControllerSupportArgPrivate {
  uint32_t argPrivateSize;
  uint32_t argSize;
  bool isPlayStartupSound;
  bool isSystem;
  ControllerSupportMode mode;
  ControllerSupportCaller caller;
  NpadStyleSet styleSet;
  NpadJoyHoldType holdType;
};

static_assert(sizeof(ControllerSupportArgPrivate) == 20);

struct ControllerKeyRemappingArg {
  uint8_t _storage[16];

  void SetDefault();
};

Result ShowControllerSupportForSystem(const ControllerSupportArg& arg,
  bool isPlayStartupSound);
Result ShowControllerSupportForSystem(ControllerSupportResultInfo* pOutInfo,
  const ControllerSupportArg& arg, bool isPlayStartupSound);
Result ShowControllerSupportForSystemWithStyleSet(
  ControllerSupportResultInfo* pOutInfo, const ControllerSupportArg& arg,
  NpadStyleSet styleSet, NpadJoyHoldType holdType,
  ControllerSupportCaller caller);
Result ShowControllerFirmwareUpdateForSystem(
  const ControllerFirmwareUpdateArg& arg, ControllerSupportCaller caller);
Result ShowControllerKeyRemappingForSystem(
  const ControllerKeyRemappingArg& arg, ControllerSupportCaller caller);
Result GetResultFromContextStack(ControllerSupportResultInfo* pOutInfo,
  applet::StorageHandle storage);

}

namespace nn::hid::detail {

struct ControllerSupportResultInfoInternal {
  ControllerSupportResultInfo info;
  int32_t result;
};

constexpr Result ResultControllerSupportCanceled = {0x183aca};
constexpr Result ResultControllerSupportNotSupportedNpadStyle = {0x183cca};

Result ShowControllerSupportCore(ControllerSupportResultInfo* pOutInfo,
  const ControllerSupportArg& arg,
  const system::ControllerSupportArgPrivate& argPrivate);
Result ShowControllerFirmwareUpdateCore(const ControllerFirmwareUpdateArg& arg,
  const system::ControllerSupportArgPrivate& argPrivate);
Result ShowControllerKeyRemappingCore(
  const system::ControllerKeyRemappingArg& arg,
  const system::ControllerSupportArgPrivate& argPrivate);

}
