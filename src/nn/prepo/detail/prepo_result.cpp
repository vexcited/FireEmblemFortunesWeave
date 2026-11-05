#include "nn/prepo/prepo_play_report.hpp"

namespace nn::prepo::detail {

namespace {

const uint32_t ModuleAccount = 124;
const uint32_t ModulePrepo = 129;
const uint32_t ModuleSrepo = 180;

constexpr uint32_t MakeResultValue(uint32_t module, uint32_t description) {
  return module | description << 9;
}

uint32_t GetModule(Result result) {
  return result.value & 0x1ff;
}

uint32_t GetDescription(Result result) {
  return (result.value >> 9) & 0x1fff;
}

bool Includes(Result result, uint32_t module, uint32_t description) {
  return (result.value & 0x3fffff) == MakeResultValue(module, description);
}

}

Result HandleSaveResult(Result result) {
  if (result.IsSuccess()) {
    return result;
  }

  // Network service account errors and unsent reports are not failures.
  if (GetModule(result) == ModuleAccount && GetDescription(result) >= 200 &&
    GetDescription(result) < 270) {
    return Result{0};
  }
  if (Includes(result, ModulePrepo, 11) || Includes(result, ModulePrepo, 6)) {
    return Result{0};
  }
  return result;
}

Result HandleSrepoResult(Result result) {
  if (result.IsSuccess()) {
    return result;
  }

  // The srepo results that prepo exposes keep their description.
  switch (result.value & 0x3fffff) {
    case MakeResultValue(ModuleSrepo, 1):
    case MakeResultValue(ModuleSrepo, 2):
    case MakeResultValue(ModuleSrepo, 3):
    case MakeResultValue(ModuleSrepo, 4):
    case MakeResultValue(ModuleSrepo, 5):
    case MakeResultValue(ModuleSrepo, 6):
    case MakeResultValue(ModuleSrepo, 7):
    case MakeResultValue(ModuleSrepo, 8):
    case MakeResultValue(ModuleSrepo, 9):
    case MakeResultValue(ModuleSrepo, 10):
    case MakeResultValue(ModuleSrepo, 60):
    case MakeResultValue(ModuleSrepo, 61):
    case MakeResultValue(ModuleSrepo, 90):
    case MakeResultValue(ModuleSrepo, 99):
      return Result{MakeResultValue(ModulePrepo, GetDescription(result))};
    default:
      return result;
  }
}

}
