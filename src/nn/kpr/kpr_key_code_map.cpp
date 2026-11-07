#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/hid/hid_device_states.hpp"
#include "nn/result.hpp"

namespace nn::kpr {

struct KeyCode;
struct KeyCodeMap;
// The settings return it through the key code map getter.
struct Utf8CodeMap;

enum KeyCodeMapMode : int {};
enum Utf8CodeMapMode : int {};

namespace detail {

struct KeyCodeMapStorage;

bool IsKeyCodeMapModeSupported(const KeyCodeMapStorage& storage,
  KeyCodeMapMode mode);
void GetKeyCode(KeyCode* pOutCode, int usageId,
  util::BitFlagSet<32, hid::KeyboardModifier> modifiers,
  const KeyCodeMapStorage& storage, KeyCodeMapMode mode);

}

}

namespace nn::settings::detail {

Result GetKeyCodeMap(kpr::KeyCodeMap* pOutValue);

}

namespace nn::kpr {

namespace {

const detail::KeyCodeMapStorage& GetStorage(const void* map) {
  return *static_cast<const detail::KeyCodeMapStorage*>(map);
}

}

void GetKeyCodeMap(KeyCodeMap* pOutMap) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(settings::detail::GetKeyCodeMap(pOutMap));
}

bool IsKeyCodeMapModeSupported(const KeyCodeMap& map, KeyCodeMapMode mode) {
  return detail::IsKeyCodeMapModeSupported(GetStorage(&map), mode);
}

void GetKeyCode(KeyCode* pOutCode, int usageId,
  util::BitFlagSet<32, hid::KeyboardModifier> modifiers,
  const KeyCodeMap& map, KeyCodeMapMode mode) {
  NN_ABORT_UNLESS_NOT_NULL(pOutCode);
  NN_ABORT_UNLESS(static_cast<uint32_t>(usageId) < 0x10000);
  detail::GetKeyCode(pOutCode, usageId, modifiers, GetStorage(&map), mode);
}

void GetUtf8CodeMap(Utf8CodeMap* pOutMap) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(settings::detail::GetKeyCodeMap(
    reinterpret_cast<KeyCodeMap*>(pOutMap)));
}

bool IsUtf8CodeMapModeSupported(const Utf8CodeMap& map,
  Utf8CodeMapMode mode) {
  return detail::IsKeyCodeMapModeSupported(GetStorage(&map),
    static_cast<KeyCodeMapMode>(mode));
}

}
