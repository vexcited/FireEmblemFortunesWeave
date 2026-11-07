#include <string.h>

#include "nn/mii/mii_color.hpp"
#include "nn/mii/mii_database.hpp"
#include "nn/settings/settings_types.hpp"

namespace nn::settings::system {

void GetRegionCode(RegionCode* pOutCode);

}

namespace nn::mii {

namespace detail {

namespace {

constexpr Result ResultInvalidCharInfo = {0xd67e};

}

settings::system::RegionCode GetRegionCode() {
  settings::system::RegionCode code = {};
  settings::system::GetRegionCode(&code);
  return code;
}

// Regions sharing a font are merged, unknown ones fall to the last group.
int GetMergedRegionCode() {
  static constexpr int MergedRegions[] = {0, 1, 2, 2, 3, 4};
  const uint32_t code = static_cast<uint32_t>(GetRegionCode());
  if (code > 5) {
    return 5;
  }
  return MergedRegions[code];
}

Result GetCreateId(CreateId* pOutId, const CharInfo& info) {
  if (!info.data.IsValid()) {
    return ResultInvalidCharInfo;
  }
  memcpy(pOutId, info.data.data, sizeof(*pOutId));
  return Result{0};
}

const DefaultMii* GetDefaultMiiForMiiEditor(Gender gender) {
  return DefaultMiiTable + (gender != 0 ? 1 : 0);
}

}

Result AppendMii(const Database& database, const CharInfo& info) {
  return (*database.GetHandle())->Append(info);
}

}
