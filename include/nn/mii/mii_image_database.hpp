#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/mii/core_data.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/util/uuid.hpp"

namespace nn::mii {

enum Expression : int;
enum ImagePoseType : int;
enum DatabaseResult : int;

struct ImageAttribute {
  util::Uuid uuid;
  CreateId createId;
  Expression expression;
  ImagePoseType pose;
  FontRegion fontRegion;
  Nickname nickname;
};

namespace detail {

// The service keeps the enumerations in single bytes.
struct ImageAttributeRaw {
  util::Uuid uuid;
  CreateId createId;
  uint8_t expression;
  uint8_t pose;
  uint8_t fontRegion;
  Nickname nickname;
};

class IImageDatabaseService : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Initialize(sf::Out<int8_t> pOutResult, bool isForced) = 0;
  virtual Result Reload() = 0;
  virtual Result GetCount(sf::Out<int32_t> pOut) = 0;
  virtual Result IsEmpty(sf::Out<bool> pOut) = 0;
  virtual Result IsFull(sf::Out<bool> pOut) = 0;
  virtual Result GetAttribute(sf::Out<ImageAttributeRaw> pOut,
    int32_t index) = 0;
  virtual Result LoadImage(const sf::OutBuffer& buffer,
    const util::Uuid& uuid) = 0;
  virtual Result AddOrUpdateImage(sf::Out<int32_t> pOutIndex,
    uint8_t expression, uint8_t pose, uint8_t fontRegion,
    const Nickname& nickname, const CreateId& createId,
    const util::Uuid& uuid, const sf::InArray<util::Uuid>& uuids,
    const sf::InBuffer& image) = 0;
  virtual Result DeleteImages(const sf::InArray<util::Uuid>& uuids) = 0;
  virtual Result AddImageForMigration(uint8_t expression, uint8_t pose,
    uint8_t fontRegion, const Nickname& nickname, const CreateId& createId,
    const sf::InBuffer& image, const util::Uuid& uuid) = 0;
  virtual Result ClearHeaderForMigration() = 0;
  virtual Result SaveHeaderForMigration() = 0;
  virtual Result DeleteFile() = 0;
  virtual Result DestroyFile() = 0;
  virtual Result ImportFile(const sf::InBuffer& buffer) = 0;
  virtual Result ExportFile(sf::Out<uint64_t> pOutSize,
    const sf::OutBuffer& buffer) = 0;
};

class ImageServiceProviderClient {
public:
  Result GetImageDatabaseServiceSharedPointer(
    sf::SharedPointer<IImageDatabaseService>* pOut);
};

}

class ImageDatabase {
public:
  ImageDatabase();
  ~ImageDatabase();

  Result Initialize(DatabaseResult* pOutResult, bool isForced);
  bool IsInitialized() const;
  Result Reload();
  int GetCount() const;
  bool IsEmpty() const;
  bool IsFull() const;
  void GetAttribute(ImageAttribute* pOut, int index) const;
  Result LoadImage(void* buffer, size_t size, const util::Uuid& uuid) const;
  Result AddOrUpdateImage(int* pOutIndex, Expression expression,
    ImagePoseType pose, FontRegion fontRegion, const Nickname& nickname,
    const CreateId& createId, const util::Uuid* pUuid,
    const util::Uuid* pDeleteUuids, int deleteCount, const void* image,
    int imageSize);
  Result AddImageForMigration(Expression expression, ImagePoseType pose,
    FontRegion fontRegion, const Nickname& nickname, const CreateId& createId,
    const void* image, int imageSize, const util::Uuid& uuid);
  void ClearHeaderForMigration();
  Result SaveHeaderForMigration();
  Result DeleteImages(const util::Uuid* pUuids, int count);
  void DeleteFile();
  void DestroyFile();

  static void ImportFile(const void* buffer, size_t size);
  static size_t ExportFile(void* buffer, size_t size);

private:
  bool m_IsInitialized;
};

}
