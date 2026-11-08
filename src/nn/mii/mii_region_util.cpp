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

struct CharacterRange {
  uint16_t start;
  int16_t length;
};

struct CharacterRangeTable {
  int32_t reserved;
  int32_t count;
  const CharacterRange* pRanges;
};

// The ranges of each font region, filled when the font is loaded.
[[gnu::visibility("hidden")]] extern CharacterRangeTable
  g_CharacterRangeTables[];

// Names with an at sign are taken for user content and hidden.
bool UpdateNicknameIfInvalidUgc(Nickname* pName) {
  for (int i = 0; i < 11; i++) {
    if (pName->text[i] == '@') {
      static const uint16_t Hidden[] = {'?', '?', '?', 0};
      pName->Set(Hidden);
      return true;
    }
  }
  return false;
}

// The ranges are sorted, so the code is searched by halves.
bool IsIncludedCharacterCode(FontRegion region, uint16_t code) {
  const CharacterRangeTable& table = g_CharacterRangeTables[region];
  const int count = table.count;
  if (count < 0) {
    return false;
  }
  int low = 0;
  int high = count;
  for (;;) {
    const int middle =
      low + static_cast<int>(static_cast<unsigned>(high - low) >> 1);
    if (count <= middle) {
      return false;
    }
    const CharacterRange& range =
      table.pRanges[static_cast<unsigned>(middle)];
    if (code >= range.start && code < range.start + range.length) {
      return true;
    }
    if (code >= range.start) {
      low = middle + 1;
      if (low > high) {
        return false;
      }
    }
    else {
      high = middle - 1;
      if (low > high) {
        return false;
      }
    }
  }
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
