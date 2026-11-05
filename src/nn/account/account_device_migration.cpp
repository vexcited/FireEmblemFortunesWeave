#include "nn/account/account_device_migration.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

namespace {

using AsyncContextOut = sf::Out<sf::SharedPointer<detail::IAsyncContext>>;

}

DeviceMigrationUserExporter::DeviceMigrationUserExporter()
  : m_pRequest(nullptr) {}

DeviceMigrationUserExporter::DeviceMigrationUserExporter(
  migration::IDeviceMigrationUserExportRequest* pRequest)
  : m_pRequest(pRequest) {}

DeviceMigrationUserExporter::DeviceMigrationUserExporter(
  DeviceMigrationUserExporter&& other)
  : m_pRequest(other.m_pRequest) {
  other.m_pRequest = nullptr;
}

DeviceMigrationUserExporter::~DeviceMigrationUserExporter() {
  if (m_pRequest != nullptr) {
    m_pRequest->Release();
  }
}

DeviceMigrationUserExporter& DeviceMigrationUserExporter::operator=(
  DeviceMigrationUserExporter&& other) {
  DeviceMigrationUserExporter temporary(
    static_cast<DeviceMigrationUserExporter&&>(other));
  migration::IDeviceMigrationUserExportRequest* pRequest = m_pRequest;
  m_pRequest = temporary.m_pRequest;
  temporary.m_pRequest = pRequest;
  return *this;
}

void DeviceMigrationUserExporter::Swap(DeviceMigrationUserExporter& other) {
  migration::IDeviceMigrationUserExportRequest* pRequest = m_pRequest;
  m_pRequest = other.m_pRequest;
  other.m_pRequest = pRequest;
}

Result DeviceMigrationUserExporter::ExportUserMigrationData(
  Span<Uid> outUsers, Span<const Uid> users, Span<uint8_t> buffer) {
  return m_pRequest->ExportUserMigrationData(
    sf::OutArray<Uid>(outUsers.data, outUsers.size),
    sf::InArray<Uid>(users.data, users.size),
    sf::OutBuffer(buffer.data, static_cast<uint32_t>(buffer.size)));
}

DeviceMigrationUserImporter::DeviceMigrationUserImporter()
  : m_pRequest(nullptr) {}

DeviceMigrationUserImporter::DeviceMigrationUserImporter(
  migration::IDeviceMigrationUserImportRequest* pRequest)
  : m_pRequest(pRequest) {}

DeviceMigrationUserImporter::DeviceMigrationUserImporter(
  DeviceMigrationUserImporter&& other)
  : m_pRequest(other.m_pRequest) {
  other.m_pRequest = nullptr;
}

DeviceMigrationUserImporter::~DeviceMigrationUserImporter() {
  if (m_pRequest != nullptr) {
    m_pRequest->Release();
  }
}

DeviceMigrationUserImporter& DeviceMigrationUserImporter::operator=(
  DeviceMigrationUserImporter&& other) {
  DeviceMigrationUserImporter temporary(
    static_cast<DeviceMigrationUserImporter&&>(other));
  migration::IDeviceMigrationUserImportRequest* pRequest = m_pRequest;
  m_pRequest = temporary.m_pRequest;
  temporary.m_pRequest = pRequest;
  return *this;
}

void DeviceMigrationUserImporter::Swap(DeviceMigrationUserImporter& other) {
  migration::IDeviceMigrationUserImportRequest* pRequest = m_pRequest;
  m_pRequest = other.m_pRequest;
  other.m_pRequest = pRequest;
}

Result DeviceMigrationUserImporter::GetOAuthProcedureSessionId(
  SessionId* pOutId) const {
  SessionId sessionId = {};
  NN_RESULT_DO(m_pRequest->GetOAuthProcedureSessionId(
    sf::Out<SessionId>(&sessionId)));
  *pOutId = sessionId;
  return Result{0};
}

Result DeviceMigrationUserImporter::GetOperatingUserNetworkServiceAccountId(
  NetworkServiceAccountId* pOutId) const {
  return m_pRequest->GetOperatingUserAccountId(
    sf::Out<NetworkServiceAccountId>(pOutId));
}

Result DeviceMigrationUserImporter::GetOperatingUserNickname(
  Nickname* pOutNickname) const {
  return m_pRequest->GetOperatingUserNickname(
    sf::OutBuffer(pOutNickname->name, sizeof(Nickname)));
}

Result DeviceMigrationUserImporter::GetOperatingUserProfileImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(m_pRequest->GetOperatingUserProfileImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result DeviceMigrationUserImporter::GetOperatingUserProfileLargeImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(m_pRequest->GetOperatingUserProfileLargeImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result DeviceMigrationUserImporter::SetSystemProgramIdentification(
  const SystemProgramIdentification& identification) {
  return m_pRequest->SetSystemProgramIdentification(identification, 0);
}

Result DeviceMigrationUserImporter::
  EnsureOperatingUserNetworkServiceAccountIdTokenCacheAsync(
    AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pRequest->EnsureOperatingUserIdTokenCacheAsync(
    AsyncContextOut(&context)));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result DeviceMigrationUserImporter::
  LoadOperatingUserNetworkServiceAccountIdTokenCache(size_t* pOutSize,
    char* buffer, size_t size) const {
  uint32_t tokenSize = 0;
  NN_RESULT_DO(m_pRequest->LoadOperatingUserIdTokenCache(
    sf::Out<uint32_t>(&tokenSize), sf::OutBuffer(buffer, size)));
  *pOutSize = tokenSize;
  return Result{0};
}

Result DeviceMigrationUserImporter::
  IsOperatingUserAnalyticsPermissionInternalAnalysisPermitted(
    bool* pOutIsPermitted) const {
  return m_pRequest
    ->IsOperatingUserAnalyticsPermissionInternalAnalysisPermitted(
      sf::Out<bool>(pOutIsPermitted));
}

Result DeviceMigrationUserImporter::SetTransferEventId(int64_t eventId) const {
  return m_pRequest->SetTransferEventId(eventId);
}

Result DeviceMigrationUserImporter::PreprocessUserMigrationDataToRegister(
  AsyncContext* pOutContext, Span<const Uid> users) const {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pRequest->PreprocessUserMigrationDataToRegister(
    AsyncContextOut(&context), sf::InArray<Uid>(users.data, users.size)));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result DeviceMigrationUserImporter::RegisterAllUsers(AsyncContext* pOutContext,
  Span<const Uid> users) const {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pRequest->RegisterAllUsers(AsyncContextOut(&context),
    sf::InArray<Uid>(users.data, users.size)));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

}
