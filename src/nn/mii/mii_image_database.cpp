#include "nn/mii/mii_image_database.hpp"

#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"

namespace nn::mii {

namespace {

using Service = detail::IImageDatabaseService;

detail::ImageServiceProviderClient g_ImageServiceProviderClient;
os::SdkMutex g_ServiceMutex;

constexpr util::Uuid EmptyUuid = {};

// Every database object shares one service, opened on first use.
class ServiceHolder {
public:
  [[gnu::noinline]] ServiceHolder() : m_Service(Acquire()) {}

  Service* operator->() const {
    return m_Service.Get();
  }

private:
  static sf::SharedPointer<Service> Acquire() {
    static sf::SharedPointer<Service> s_Service;
    std::lock_guard<os::SdkMutex> lock(g_ServiceMutex);
    if (!s_Service) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(g_ImageServiceProviderClient
        .GetImageDatabaseServiceSharedPointer(&s_Service));
    }
    return s_Service;
  }

  sf::SharedPointer<Service> m_Service;
};

}

ImageDatabase::ImageDatabase() : m_IsInitialized(false) {}

ImageDatabase::~ImageDatabase() {}

Result ImageDatabase::Initialize(DatabaseResult* pOutResult, bool isForced) {
  int8_t result = 0;
  const Result serviceResult =
    ServiceHolder()->Initialize(sf::Out<int8_t>(&result), isForced);
  if (serviceResult.IsSuccess()) {
    m_IsInitialized = true;
    *pOutResult = static_cast<DatabaseResult>(result);
  }
  return serviceResult;
}

bool ImageDatabase::IsInitialized() const {
  return m_IsInitialized;
}

Result ImageDatabase::Reload() {
  return ServiceHolder()->Reload();
}

int ImageDatabase::GetCount() const {
  int32_t count = 0;
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->GetCount(sf::Out<int32_t>(&count)));
  return count;
}

bool ImageDatabase::IsEmpty() const {
  bool isEmpty = false;
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->IsEmpty(sf::Out<bool>(&isEmpty)));
  return isEmpty;
}

bool ImageDatabase::IsFull() const {
  bool isFull = false;
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->IsFull(sf::Out<bool>(&isFull)));
  return isFull;
}

void ImageDatabase::GetAttribute(ImageAttribute* pOut, int index) const {
  detail::ImageAttributeRaw raw = {};
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetAttribute(
    sf::Out<detail::ImageAttributeRaw>(&raw), index));
  pOut->uuid = raw.uuid;
  pOut->createId = raw.createId;
  pOut->expression = static_cast<Expression>(raw.expression);
  pOut->pose = static_cast<ImagePoseType>(raw.pose);
  pOut->fontRegion = static_cast<FontRegion>(raw.fontRegion);
  pOut->nickname = raw.nickname;
}

Result ImageDatabase::LoadImage(void* buffer, size_t size,
  const util::Uuid& uuid) const {
  return ServiceHolder()->LoadImage(sf::OutBuffer(buffer, size), uuid);
}

// A missing uuid asks the service to pick a new one.
Result ImageDatabase::AddOrUpdateImage(int* pOutIndex, Expression expression,
  ImagePoseType pose, FontRegion fontRegion, const Nickname& nickname,
  const CreateId& createId, const util::Uuid* pUuid,
  const util::Uuid* pDeleteUuids, int deleteCount, const void* image,
  int imageSize) {
  int32_t index = 0;
  const util::Uuid uuid = pUuid != nullptr ? *pUuid : EmptyUuid;
  const Result result = ServiceHolder()->AddOrUpdateImage(
    sf::Out<int32_t>(&index), expression, pose, fontRegion, nickname,
    createId, uuid, sf::InArray<util::Uuid>(pDeleteUuids, deleteCount),
    sf::InBuffer(image, imageSize));
  if (result.IsSuccess()) {
    *pOutIndex = index;
  }
  return result;
}

Result ImageDatabase::AddImageForMigration(Expression expression,
  ImagePoseType pose, FontRegion fontRegion, const Nickname& nickname,
  const CreateId& createId, const void* image, int imageSize,
  const util::Uuid& uuid) {
  return ServiceHolder()->AddImageForMigration(expression, pose, fontRegion,
    nickname, createId, sf::InBuffer(image, imageSize), uuid);
}

void ImageDatabase::ClearHeaderForMigration() {
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->ClearHeaderForMigration());
}

Result ImageDatabase::SaveHeaderForMigration() {
  return ServiceHolder()->SaveHeaderForMigration();
}

Result ImageDatabase::DeleteImages(const util::Uuid* pUuids, int count) {
  return ServiceHolder()->DeleteImages(sf::InArray<util::Uuid>(pUuids, count));
}

void ImageDatabase::DeleteFile() {
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->DeleteFile());
}

void ImageDatabase::DestroyFile() {
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->DestroyFile());
}

void ImageDatabase::ImportFile(const void* buffer, size_t size) {
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->ImportFile(sf::InBuffer(buffer, size)));
}

size_t ImageDatabase::ExportFile(void* buffer, size_t size) {
  uint64_t exported = 0;
  const ServiceHolder service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->ExportFile(
    sf::Out<uint64_t>(&exported), sf::OutBuffer(buffer, size)));
  return exported;
}

}
