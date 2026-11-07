#include <mutex>

#include "nn/os/sdk_mutex.hpp"
#include "nn/settings/detail/settings_api.hpp"

namespace nn::settings::detail {

namespace {

const Result ResultNullDebugPadGenericPadMap = {(31 << 9) | 202};
const Result ResultNullDebugPadKeyboardMap = {(32 << 9) | 202};
const Result ResultNullFullKeyGenericPadMap = {(2161 << 9) | 202};
const Result ResultNullFullKeyKeyboardMap = {(2162 << 9) | 202};

constexpr int FullKeyIndexCount = 2;

struct DebugPadMapStore {
  os::SdkMutex mutex;
  bool isGenericPadMapInitialized;
  DebugPadGenericPadMapV2 genericPadMap;
  DebugPadKeyboardMapV2 keyboardMap;
};

struct FullKeyMapEntry {
  bool isGenericPadMapInitialized;
  FullKeyGenericPadMap genericPadMap;
  FullKeyKeyboardMap keyboardMap;
};

struct FullKeyMapStore {
  os::SdkMutex mutex;
  FullKeyMapEntry entries[FullKeyIndexCount];
};

DebugPadMapStore g_DebugPadMapStore;
FullKeyMapStore g_FullKeyMapStore;

// The pad id is left as it is, only the bindings go back to the defaults.
void ResetBindings(DebugPadGenericPadMapV2* pMap) {
  int32_t* p = pMap->mappings;
  p[0] = 4;
  p[1] = 3;
  p[2] = 2;
  p[3] = 1;
  p[4] = 5;
  p[5] = 6;
  p[6] = 7;
  p[7] = 8;
  p[8] = 10;
  p[9] = 9;
  p[10] = 64;
  p[11] = 65;
  p[12] = 66;
  p[13] = 67;
  p[14] = 3;
  p[15] = 4;
  p[16] = 1;
  p[17] = 2;
  p[18] = 10;
  p[19] = 11;
  p[20] = 12;
  p[21] = 13;
  p[22] = 14;
  for (int32_t& reserved : pMap->reserved) {
    reserved = 0;
  }
}

void ResetBindings(FullKeyGenericPadMap* pMap) {
  int32_t* p = pMap->mappings;
  p[0] = 2;
  p[1] = 1;
  p[2] = 4;
  p[3] = 3;
  p[4] = 9;
  p[5] = 10;
  p[6] = 5;
  p[7] = 6;
  p[8] = 68;
  p[9] = 69;
  p[10] = 8;
  p[11] = 7;
  p[12] = 64;
  p[13] = 65;
  p[14] = 66;
  p[15] = 67;
  p[16] = 5;
  p[17] = 4;
  p[18] = 1;
  p[19] = 2;
  p[20] = 10;
}

}

Result GetDebugPadGenericPadMap(DebugPadGenericPadMapV2* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullDebugPadGenericPadMap;
  }
  std::lock_guard<os::SdkMutex> lock(g_DebugPadMapStore.mutex);
  if (!g_DebugPadMapStore.isGenericPadMapInitialized) {
    g_DebugPadMapStore.genericPadMap.genericPadId = 0;
    ResetBindings(&g_DebugPadMapStore.genericPadMap);
    g_DebugPadMapStore.isGenericPadMapInitialized = true;
  }
  *pOutValue = g_DebugPadMapStore.genericPadMap;
  return Result{0};
}

Result SetDebugPadGenericPadMap(const DebugPadGenericPadMapV2& value) {
  std::lock_guard<os::SdkMutex> lock(g_DebugPadMapStore.mutex);
  g_DebugPadMapStore.genericPadMap = value;
  for (int32_t& reserved : g_DebugPadMapStore.genericPadMap.reserved) {
    reserved = 0;
  }
  g_DebugPadMapStore.isGenericPadMapInitialized = true;
  return Result{0};
}

Result ResetDebugPadGenericPadMap() {
  std::lock_guard<os::SdkMutex> lock(g_DebugPadMapStore.mutex);
  ResetBindings(&g_DebugPadMapStore.genericPadMap);
  g_DebugPadMapStore.isGenericPadMapInitialized = true;
  return Result{0};
}

Result GetDebugPadKeyboardMap(DebugPadKeyboardMapV2* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullDebugPadKeyboardMap;
  }
  std::lock_guard<os::SdkMutex> lock(g_DebugPadMapStore.mutex);
  *pOutValue = g_DebugPadMapStore.keyboardMap;
  return Result{0};
}

Result SetDebugPadKeyboardMap(const DebugPadKeyboardMapV2& value) {
  std::lock_guard<os::SdkMutex> lock(g_DebugPadMapStore.mutex);
  g_DebugPadMapStore.keyboardMap = value;
  for (int32_t& reserved : g_DebugPadMapStore.keyboardMap.reserved) {
    reserved = 0;
  }
  return Result{0};
}

Result ResetDebugPadKeyboardMap() {
  std::lock_guard<os::SdkMutex> lock(g_DebugPadMapStore.mutex);
  g_DebugPadMapStore.keyboardMap = {};
  return Result{0};
}

Result GetFullKeyGenericPadMap(FullKeyGenericPadMap* pOutValue,
  FullKeyIndex fullKeyIndex) {
  if (pOutValue == nullptr) {
    return ResultNullFullKeyGenericPadMap;
  }
  std::lock_guard<os::SdkMutex> lock(g_FullKeyMapStore.mutex);
  FullKeyMapEntry& entry = g_FullKeyMapStore.entries[fullKeyIndex];
  if (!entry.isGenericPadMapInitialized) {
    entry.genericPadMap.genericPadId = 0;
    ResetBindings(&entry.genericPadMap);
    entry.isGenericPadMapInitialized = true;
  }
  *pOutValue = entry.genericPadMap;
  return Result{0};
}

Result SetFullKeyGenericPadMap(const FullKeyGenericPadMap& value,
  FullKeyIndex fullKeyIndex) {
  std::lock_guard<os::SdkMutex> lock(g_FullKeyMapStore.mutex);
  FullKeyMapEntry& entry = g_FullKeyMapStore.entries[fullKeyIndex];
  entry.genericPadMap = value;
  entry.isGenericPadMapInitialized = true;
  return Result{0};
}

Result ResetFullKeyGenericPadMap(FullKeyIndex fullKeyIndex) {
  std::lock_guard<os::SdkMutex> lock(g_FullKeyMapStore.mutex);
  FullKeyMapEntry& entry = g_FullKeyMapStore.entries[fullKeyIndex];
  ResetBindings(&entry.genericPadMap);
  entry.isGenericPadMapInitialized = true;
  return Result{0};
}

Result GetFullKeyKeyboardMap(FullKeyKeyboardMap* pOutValue,
  FullKeyIndex fullKeyIndex) {
  if (pOutValue == nullptr) {
    return ResultNullFullKeyKeyboardMap;
  }
  std::lock_guard<os::SdkMutex> lock(g_FullKeyMapStore.mutex);
  *pOutValue = g_FullKeyMapStore.entries[fullKeyIndex].keyboardMap;
  return Result{0};
}

Result SetFullKeyKeyboardMap(const FullKeyKeyboardMap& value,
  FullKeyIndex fullKeyIndex) {
  std::lock_guard<os::SdkMutex> lock(g_FullKeyMapStore.mutex);
  g_FullKeyMapStore.entries[fullKeyIndex].keyboardMap = value;
  return Result{0};
}

Result ResetFullKeyKeyboardMap(FullKeyIndex fullKeyIndex) {
  std::lock_guard<os::SdkMutex> lock(g_FullKeyMapStore.mutex);
  g_FullKeyMapStore.entries[fullKeyIndex].keyboardMap = {};
  return Result{0};
}

}
