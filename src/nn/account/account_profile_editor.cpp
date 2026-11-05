#include <string.h>

#include "nn/account/account_profile_editor.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

ProfileEditor::ProfileEditor(const Uid& uid, profile::IProfileEditor* pEditor)
  : m_Uid(uid), m_pEditor(pEditor), m_Base(), m_UserData() {}

Result ProfileEditor::GetProfileImageSize(size_t* pOutSize) const {
  uint32_t size = 0;
  NN_RESULT_DO(m_pEditor->GetImageSize(sf::Out<uint32_t>(&size)));
  *pOutSize = size;
  return Result{0};
}

Result ProfileEditor::GetProfileLargeImageSize(size_t* pOutSize) const {
  uint32_t size = 0;
  NN_RESULT_DO(m_pEditor->GetLargeImageSize(sf::Out<uint32_t>(&size)));
  *pOutSize = size;
  return Result{0};
}

ProfileEditor::ProfileEditor()
  : m_Uid(), m_pEditor(nullptr), m_Base(), m_UserData() {}

ProfileEditor::ProfileEditor(ProfileEditor&& other)
  : m_Uid(other.m_Uid), m_pEditor(other.m_pEditor), m_Base(other.m_Base),
    m_UserData(other.m_UserData) {
  other.m_Uid = Uid();
  other.m_pEditor = nullptr;
  other.m_Base = profile::ProfileBase();
  other.m_UserData = profile::UserData();
}

// The deleting destructor calls this one out of line.
[[gnu::noinline]]
ProfileEditor::~ProfileEditor() {
  if (m_pEditor != nullptr) {
    m_pEditor->Release();
  }
}

Result ProfileEditor::Refresh() {
  return m_pEditor->Get(sf::Out<profile::ProfileBase>(&m_Base),
    sf::Out<profile::UserData>(&m_UserData));
}

bool ProfileEditor::IsLocalOrigin() const {
  return m_Base.author.value[0] == m_Uid.value[0] &&
    m_Base.author.value[1] == m_Uid.value[1];
}

int64_t ProfileEditor::GetTimeStamp() const {
  return m_Base.timeStamp;
}

void ProfileEditor::GetNickname(Nickname* pOutNickname) const {
  strncpy(pOutNickname->name, m_Base.nickname, sizeof(m_Base.nickname));
  pOutNickname->name[sizeof(m_Base.nickname)] = '\0';
}

void ProfileEditor::GetUserData(char* buffer, size_t size) const {
  memcpy(buffer, m_UserData.data, sizeof(m_UserData.data));
}

void ProfileEditor::GetProfileImageId(profile::ImageId* pOutId) const {
  profile::ImageId id = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    m_pEditor->GetImageId(sf::Out<profile::ImageId>(&id)));
  *pOutId = id;
}

Result ProfileEditor::LoadProfileImage(size_t* pOutSize, void* buffer,
  size_t size) const {
  uint32_t loadedSize = 0;
  if (buffer == nullptr) {
    NN_RESULT_DO(m_pEditor->GetImageSize(sf::Out<uint32_t>(&loadedSize)));
  }
  else {
    NN_RESULT_DO(m_pEditor->LoadImage(sf::Out<uint32_t>(&loadedSize),
      sf::OutBuffer(buffer, size)));
  }
  *pOutSize = loadedSize;
  return Result{0};
}

Result ProfileEditor::LoadProfileLargeImage(size_t* pOutSize, void* buffer,
  size_t size) const {
  uint32_t loadedSize = 0;
  if (buffer == nullptr) {
    NN_RESULT_DO(
      m_pEditor->GetLargeImageSize(sf::Out<uint32_t>(&loadedSize)));
  }
  else {
    NN_RESULT_DO(m_pEditor->LoadLargeImage(sf::Out<uint32_t>(&loadedSize),
      sf::OutBuffer(buffer, size)));
  }
  *pOutSize = loadedSize;
  return Result{0};
}

void ProfileEditor::SetNickname(const Nickname& nickname) {
  strncpy(m_Base.nickname, nickname.name, sizeof(m_Base.nickname));
}

void ProfileEditor::SetUserData(const char* data, size_t size) {
  memcpy(m_UserData.data, data, sizeof(m_UserData.data));
}

Result ProfileEditor::Flush() {
  return m_pEditor->Store(m_Base, m_UserData);
}

Result ProfileEditor::FlushWithImage(const void* image, size_t size) {
  return m_pEditor->StoreWithImage(m_Base, m_UserData,
    sf::InBuffer(image, size));
}

Result ProfileEditor::FlushWithLargeImage(const void* image, size_t size) {
  return m_pEditor->StoreWithLargeImage(m_Base, m_UserData,
    sf::InBuffer(image, size));
}

}
