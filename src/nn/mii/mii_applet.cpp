#include "nn/mii/mii_applet.hpp"

#include <string.h>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/mii/mii_color.hpp"

namespace nn::mii {

namespace {

constexpr int AppletResult_Success = 0;
constexpr int AppletResult_Cancel = 1;
constexpr Result ResultCanceled = {0xe7e};
constexpr Result ResultNotSupported = {0xe7e};
constexpr int SpecialMiiKeyCode = static_cast<int>(0xa523b78f);

Result ConvertAppletResult(int result) {
  switch (result) {
    case AppletResult_Success:
      return {0};
    case AppletResult_Cancel:
      return ResultCanceled;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

bool IsCharInfoEditingMode(AppletMode mode) {
  return (mode & ~1) == 4;
}

}

bool CoreData::operator==(const CoreData& other) const {
  return data == other.data;
}

bool CoreData::operator!=(const CoreData& other) const {
  return !(data == other.data);
}

bool StoreData::operator==(const StoreData& other) const {
  return data == other.data;
}

bool StoreData::operator!=(const StoreData& other) const {
  return !(data == other.data);
}

bool IsValidCoreData(const CoreData& data) {
  return data.data.IsValid();
}

int VerifyCoreData(const CoreData& data) {
  return data.data.Verify();
}

void DumpStoreData(const StoreData&) {
}

void DumpCharInfo(const CharInfo&) {
}

bool CompareStoreDataForMiiEdit(const StoreData& lhs, const StoreData& rhs) {
  return memcmp(&lhs, &rhs, sizeof(StoreData)) == 0;
}

void SetCreateIdForMiiEdit(CharInfo* info, const CreateId& id) {
  __builtin_memcpy(info->data.data, &id, sizeof(id));
}

void AppletInput::InitializeImpl(AppletMode mode, int specialKeyCode) {
  m_Version = 0;
  m_Mode = mode;
  m_SpecialKeyCode = specialKeyCode;
}

void AppletInput::Initialize(AppletMode mode, int specialKeyCode) {
  InitializeImpl(mode, specialKeyCode);
}

// The unused uuid slots are cleared.
void AppletInput::InitializeForAppendMiiImage(const util::Uuid* pUuids,
  int count, int specialKeyCode) {
  InitializeImpl(AppletMode(2), specialKeyCode);
  for (int i = 0; i < AppletValidUuidCountMax; i++) {
    m_ValidUuids[i] = i < count ? pUuids[i] : util::Uuid{};
  }
}

void AppletInput::InitializeForUpdateMiiImage(const util::Uuid& usedUuid,
  const util::Uuid* pUuids, int count, int specialKeyCode) {
  InitializeImpl(AppletMode(3), specialKeyCode);
  m_UsedUuid = usedUuid;
  for (int i = 0; i < AppletValidUuidCountMax; i++) {
    m_ValidUuids[i] = i < count ? pUuids[i] : util::Uuid{};
  }
}

void AppletInput::InitializeForEditCharInfo(const CharInfo& info,
  int specialKeyCode) {
  InitializeImpl(AppletMode(5), specialKeyCode);
  m_CharInfo = info;
}

bool AppletInput::IsValid(bool isCharInfoEditing) const {
  const int versionMax = isCharInfoEditing ? 0 : 4;
  return m_Version <= versionMax && static_cast<unsigned>(m_Mode) < 7;
}

AppletMode AppletInput::GetMode() const {
  return m_Mode;
}

const util::Uuid* AppletInput::GetUsedUuid() const {
  return &m_UsedUuid;
}

const util::Uuid* AppletInput::GetValidUuidArray() const {
  return m_ValidUuids;
}

// The manager reaches this through a call the original keeps.
[[gnu::noinline]] int AppletInput::GetValidUuidArrayCount() const {
  for (int i = 0; i < AppletValidUuidCountMax; i++) {
    if (m_ValidUuids[i] == util::InvalidUuid) {
      return i;
    }
  }
  return AppletValidUuidCountMax;
}

const CharInfo* AppletInput::GetCharInfo() const {
  return &m_CharInfo;
}

Result AppletOutput::GetResult() const {
  return ConvertAppletResult(m_Result);
}

int AppletOutput::GetAppletResult() const {
  return m_Result;
}

int AppletOutput::GetAppendMiiIndex() const {
  return m_Index;
}

int AppletOutput::GetAppendMiiImageIndex() const {
  return m_Index;
}

int AppletOutput::GetUpdateMiiImageIndex() const {
  return m_Index;
}

Result AppletOutputForCharInfoEditing::GetResult() const {
  return ConvertAppletResult(m_Result);
}

int AppletOutputForCharInfoEditing::GetAppletResult() const {
  return m_Result;
}

const CharInfo* AppletOutputForCharInfoEditing::GetCharInfo() const {
  return &m_CharInfo;
}

AppletManager::AppletManager() : m_IsInitialized(false) {}

AppletManager::~AppletManager() {}

// A broken input falls back to the default mode.
void AppletManager::Initialize(applet::StorageHandle storage,
  bool isCharInfoEditing) {
  if (applet::ReadFromStorage(storage, 0, &m_Input, sizeof(m_Input))
        .IsFailure() ||
      !m_Input.IsValid(isCharInfoEditing)) {
    m_Input.InitializeImpl(AppletMode(0), GetSpecialMiiKeyCode());
  }
  m_IsInitialized = true;
}

void AppletManager::Finalize(applet::StorageHandle* pStorage) {
  if (IsCharInfoEditingMode(m_Input.GetMode())) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(pStorage,
      sizeof(m_OutputForCharInfoEditing)));
    NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(*pStorage, 0,
      &m_OutputForCharInfoEditing, sizeof(m_OutputForCharInfoEditing)));
  }
  else {
    NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(pStorage,
      sizeof(m_Output)));
    NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(*pStorage, 0,
      &m_Output, sizeof(m_Output)));
  }
  m_IsInitialized = false;
}

bool AppletManager::IsInitialized() const {
  return m_IsInitialized;
}

AppletMode AppletManager::GetMode() const {
  return m_Input.GetMode();
}

bool AppletManager::IsEnabledSpecialMii() const {
  return m_Input.m_SpecialKeyCode == SpecialMiiKeyCode;
}

const util::Uuid* AppletManager::GetUsedUuid() const {
  return m_Input.GetUsedUuid();
}

int AppletManager::GetValidUuidArrayCount() const {
  return m_Input.GetValidUuidArrayCount();
}

const util::Uuid* AppletManager::GetValidUuidArray() const {
  return m_Input.GetValidUuidArray();
}

const CharInfo* AppletManager::GetCharInfo() const {
  return m_Input.GetCharInfo();
}

void AppletManager::SetResultCancel() {
  if (IsCharInfoEditingMode(m_Input.GetMode())) {
    m_OutputForCharInfoEditing.m_Result = AppletResult_Cancel;
  }
  else {
    m_Output.m_Result = AppletResult_Cancel;
  }
}

void AppletManager::SetResultSuccess() {
  m_Output.m_Result = AppletResult_Success;
}

void AppletManager::SetResultSuccessAppendMii(int index) {
  m_Output.m_Result = AppletResult_Success;
  m_Output.m_Index = index;
}

void AppletManager::SetResultSuccessAppendMiiImage(int index) {
  m_Output.m_Result = AppletResult_Success;
  m_Output.m_Index = index;
}

void AppletManager::SetResultSuccessUpdateMiiImage(int index) {
  m_Output.m_Result = AppletResult_Success;
  m_Output.m_Index = index;
}

void AppletManager::SetResultSuccessCreateCharInfo(const CharInfo& info) {
  m_OutputForCharInfoEditing.m_Result = AppletResult_Success;
  m_OutputForCharInfoEditing.m_CharInfo = info;
}

void AppletManager::SetResultSuccessEditCharInfo(const CharInfo& info) {
  m_OutputForCharInfoEditing.m_Result = AppletResult_Success;
  m_OutputForCharInfoEditing.m_CharInfo = info;
}

Result StartApplet(AppletOutput* output, const AppletInput& input,
  uint8_t option) {
  return detail::StartImpl(output, input, option);
}

Result StartAppletForCharInfoEditing(AppletOutputForCharInfoEditing* output,
  const AppletInput& input, uint8_t option) {
  return detail::StartImpl(output, input, option);
}

Result AppendMiiImage(int*, const util::Uuid*, int) {
  return ResultNotSupported;
}

Result UpdateMiiImage(int*, const util::Uuid&, const util::Uuid*, int) {
  return ResultNotSupported;
}

}
