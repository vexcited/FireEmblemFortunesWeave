#include <stddef.h>
#include <stdint.h>

#include <algorithm>

#include "nn/diag/diag_abort.hpp"
#include "nn/settings/settings_types.hpp"

namespace nn::pl {

enum SharedFontType : int32_t {};
enum SharedFontTypeForSystem : int32_t {};
enum BuiltInFontTypeOunce : uint8_t {};

struct SharedFontData {
  SharedFontType type;
  const void* pAddress;
  size_t size;
};

struct BuiltInFontDataOunce {
  uint8_t type;
  bool isUnknown1;
  const void* pAddress;
  size_t size;
};

bool GetBuiltInFontDataSet(int* pOutCount, BuiltInFontDataOunce* pOutData,
  const BuiltInFontTypeOunce* pTypes, int count,
  settings::LanguageCode language, bool isForSystem);

namespace {

constexpr int SharedFontTypeCount = 6;

constexpr BuiltInFontTypeOunce SharedFontTypes[SharedFontTypeCount] = {
  BuiltInFontTypeOunce{0}, BuiltInFontTypeOunce{1}, BuiltInFontTypeOunce{2},
  BuiltInFontTypeOunce{3}, BuiltInFontTypeOunce{4}, BuiltInFontTypeOunce{5},
};

}

// The count reports every shared font type, not the number copied.
bool GetSharedFont(int* pOutCount, SharedFontData* pOutData, int count,
  settings::LanguageCode language) {
  int loaded = 0;
  BuiltInFontDataOunce fonts[SharedFontTypeCount] = {};
  if (!GetBuiltInFontDataSet(&loaded, fonts, SharedFontTypes,
      SharedFontTypeCount, language, false)) {
    return false;
  }
  const int copied = std::min(count, loaded);
  for (int i = 0; i < copied; i++) {
    pOutData[i].type = static_cast<SharedFontType>(fonts[i].type);
    pOutData[i].pAddress = fonts[i].pAddress;
    pOutData[i].size = fonts[i].size;
  }
  *pOutCount = SharedFontTypeCount;
  return true;
}

bool GetSharedFontInOrderOfPriority(int*, SharedFontType*, const void**,
  size_t*, int, settings::LanguageCode) {
  diag::detail::AbortImpl();
}

bool GetSharedFontInOrderOfPriorityForSystem(int*, SharedFontTypeForSystem*,
  const void**, size_t*, int, settings::LanguageCode) {
  diag::detail::AbortImpl();
}

namespace detail {

int Awgawpkwpt() {
  return 0;
}

int Szsyzauxwt() {
  return 0;
}

int Pqvhyssrej() {
  return 0;
}

int Bjpdnkebmp() {
  return 0;
}

int Ptjsafhuyg() {
  return 0;
}

int Aczzscvelt() {
  return 0;
}

}

}
