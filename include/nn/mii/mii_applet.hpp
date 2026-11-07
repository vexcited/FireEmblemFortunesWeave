#pragma once

#include "nn/applet/applet_types.hpp"
#include "nn/mii/store_data.hpp"
#include "nn/result.hpp"
#include "nn/util/uuid.hpp"

namespace nn::mii {

enum AppletMode : int;

struct CoreData {
  detail::CoreDataRaw data;

  bool operator==(const CoreData& other) const;
  bool operator!=(const CoreData& other) const;
};

struct StoreData {
  detail::StoreDataRaw data;

  bool operator==(const StoreData& other) const;
  bool operator!=(const StoreData& other) const;
};

bool IsValidCoreData(const CoreData& data);
int VerifyCoreData(const CoreData& data);
void DumpStoreData(const StoreData& data);
void DumpCharInfo(const CharInfo& info);
bool CompareStoreDataForMiiEdit(const StoreData& lhs, const StoreData& rhs);
void SetCreateIdForMiiEdit(CharInfo* info, const CreateId& id);

constexpr int AppletValidUuidCountMax = 8;

class AppletInput {
public:
  void InitializeImpl(AppletMode mode, int specialKeyCode);
  void Initialize(AppletMode mode, int specialKeyCode);
  void InitializeForAppendMiiImage(const util::Uuid* pUuids, int count,
    int specialKeyCode);
  void InitializeForUpdateMiiImage(const util::Uuid& usedUuid,
    const util::Uuid* pUuids, int count, int specialKeyCode);
  void InitializeForEditCharInfo(const CharInfo& info, int specialKeyCode);
  bool IsValid(bool isCharInfoEditing) const;
  AppletMode GetMode() const;
  const util::Uuid* GetUsedUuid() const;
  int GetValidUuidArrayCount() const;
  const util::Uuid* GetValidUuidArray() const;
  const CharInfo* GetCharInfo() const;

private:
  friend class AppletManager;

  int32_t m_Version;
  AppletMode m_Mode;
  int32_t m_SpecialKeyCode;
  union {
    util::Uuid m_ValidUuids[AppletValidUuidCountMax];
    CharInfo m_CharInfo;
  };
  util::Uuid m_UsedUuid;
  uint8_t m_Reserved[0x64];
};

static_assert(sizeof(AppletInput) == 0x100);

class AppletOutput {
public:
  Result GetResult() const;
  int GetAppletResult() const;
  int GetAppendMiiIndex() const;
  int GetAppendMiiImageIndex() const;
  int GetUpdateMiiImageIndex() const;

private:
  friend class AppletManager;

  int32_t m_Result;
  int32_t m_Index;
  uint8_t m_Reserved[0x18];
};

static_assert(sizeof(AppletOutput) == 0x20);

class AppletOutputForCharInfoEditing {
public:
  Result GetResult() const;
  int GetAppletResult() const;
  const CharInfo* GetCharInfo() const;

private:
  friend class AppletManager;

  int32_t m_Result;
  CharInfo m_CharInfo;
  uint8_t m_Reserved[0x24];
};

static_assert(sizeof(AppletOutputForCharInfoEditing) == 0x80);

class AppletManager {
public:
  AppletManager();
  ~AppletManager();
  void Initialize(applet::StorageHandle storage, bool isCharInfoEditing);
  void Finalize(applet::StorageHandle* pStorage);
  bool IsInitialized() const;
  AppletMode GetMode() const;
  bool IsEnabledSpecialMii() const;
  const util::Uuid* GetUsedUuid() const;
  int GetValidUuidArrayCount() const;
  const util::Uuid* GetValidUuidArray() const;
  const CharInfo* GetCharInfo() const;
  void SetResultCancel();
  void SetResultSuccess();
  void SetResultSuccessAppendMii(int index);
  void SetResultSuccessAppendMiiImage(int index);
  void SetResultSuccessUpdateMiiImage(int index);
  void SetResultSuccessCreateCharInfo(const CharInfo& info);
  void SetResultSuccessEditCharInfo(const CharInfo& info);

private:
  bool m_IsInitialized;
  AppletInput m_Input;
  AppletOutput m_Output;
  AppletOutputForCharInfoEditing m_OutputForCharInfoEditing;
};

namespace detail {

Result StartImpl(AppletOutput* output, const AppletInput& input,
  uint8_t option);
Result StartImpl(AppletOutputForCharInfoEditing* output,
  const AppletInput& input, uint8_t option);

}

Result StartApplet(AppletOutput* output, const AppletInput& input,
  uint8_t option);
Result StartAppletForCharInfoEditing(AppletOutputForCharInfoEditing* output,
  const AppletInput& input, uint8_t option);
Result AppendMiiImage(int* index, const util::Uuid* uuids, int count);
Result UpdateMiiImage(int* index, const util::Uuid& uuid,
  const util::Uuid* uuids, int count);
Result AppendMii(int* pOutIndex);
Result ShowMiiEdit();
Result CreateMii(CharInfo* pOutInfo);
Result EditMii(CharInfo* pOutInfo, const CharInfo& info);
Result GetShowMiiEditResult(applet::StorageHandle storage);
Result GetAppendMiiResult(int* pOutIndex, applet::StorageHandle storage);
Result GetAppendMiiImageResult(int* pOutIndex,
  applet::StorageHandle storage);
Result GetUpdateMiiImageResult(int* pOutIndex,
  applet::StorageHandle storage);

}
