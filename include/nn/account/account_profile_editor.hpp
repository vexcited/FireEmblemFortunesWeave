#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::account::profile {

struct ImageId {
  uint64_t value[2];
};

struct ProfileBase {
  Uid author;
  int64_t timeStamp;
  char nickname[32];
};

struct UserData {
  char data[128];
};

class IProfileEditor : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Get(sf::Out<ProfileBase> pOutBase,
    sf::Out<UserData> pOutUserData) = 0;
  virtual void Reserved5() = 0;
  virtual Result GetImageSize(sf::Out<uint32_t> pOutSize) = 0;
  virtual Result LoadImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) = 0;
  virtual Result GetLargeImageSize(sf::Out<uint32_t> pOutSize) = 0;
  virtual Result LoadLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) = 0;
  virtual Result GetImageId(sf::Out<ImageId> pOutId) = 0;
  virtual void Reserved11() = 0;
  virtual Result Store(const ProfileBase& base, const UserData& userData) = 0;
  virtual Result StoreWithImage(const ProfileBase& base,
    const UserData& userData, const sf::InBuffer& image) = 0;
  virtual Result StoreWithLargeImage(const ProfileBase& base,
    const UserData& userData, const sf::InBuffer& image) = 0;
};

}

namespace nn::account {

class ProfileEditor {
 public:
  ProfileEditor();
  ProfileEditor(const Uid& uid, profile::IProfileEditor* pEditor);
  ProfileEditor(ProfileEditor&& other);
  virtual ~ProfileEditor();

  Result Refresh();
  bool IsLocalOrigin() const;
  int64_t GetTimeStamp() const;
  void GetNickname(Nickname* pOutNickname) const;
  void GetUserData(char* buffer, size_t size) const;
  void GetProfileImageId(profile::ImageId* pOutId) const;
  Result GetProfileImageSize(size_t* pOutSize) const;
  Result GetProfileLargeImageSize(size_t* pOutSize) const;
  Result LoadProfileImage(size_t* pOutSize, void* buffer, size_t size) const;
  Result LoadProfileLargeImage(size_t* pOutSize, void* buffer,
    size_t size) const;
  void SetNickname(const Nickname& nickname);
  void SetUserData(const char* data, size_t size);
  Result Flush();
  Result FlushWithImage(const void* image, size_t size);
  Result FlushWithLargeImage(const void* image, size_t size);

 private:
  Uid m_Uid;
  profile::IProfileEditor* m_pEditor;
  profile::ProfileBase m_Base;
  profile::UserData m_UserData;
};

}
