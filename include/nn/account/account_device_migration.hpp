#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_async_context.hpp"
#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/account/account_types.hpp"
#include "nn/account/detail/account_oauth_procedure.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/span.hpp"

namespace nn::account {

namespace migration {

class IDeviceMigrationUserExportRequest : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result ExportUserMigrationData(const sf::OutArray<Uid>& outUsers,
    const sf::InArray<Uid>& users, const sf::OutBuffer& buffer) = 0;
};

class IDeviceMigrationUserImportRequest : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetOAuthProcedureSessionId(sf::Out<SessionId> pOutId) = 0;
  virtual Result SetSystemProgramIdentification(
    const SystemProgramIdentification& identification,
    uint64_t processId) = 0;
  virtual Result EnsureOperatingUserIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result LoadOperatingUserIdTokenCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer) = 0;
  virtual Result GetOperatingUserAccountId(
    sf::Out<NetworkServiceAccountId> pOutId) = 0;
  virtual Result GetOperatingUserNickname(const sf::OutBuffer& nickname) = 0;
  virtual Result GetOperatingUserProfileImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) = 0;
  virtual Result GetOperatingUserProfileLargeImage(
    sf::Out<uint32_t> pOutSize, const sf::OutBuffer& image) = 0;
  virtual Result IsOperatingUserAnalyticsPermissionInternalAnalysisPermitted(
    sf::Out<bool> pOutIsPermitted) = 0;
  virtual Result SetTransferEventId(int64_t eventId) = 0;
  virtual Result PreprocessUserMigrationDataToRegister(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const sf::InArray<Uid>& users) = 0;
  virtual Result RegisterAllUsers(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const sf::InArray<Uid>& users) = 0;
};

}

class DeviceMigrationUserExporter {
 public:
  DeviceMigrationUserExporter();
  explicit DeviceMigrationUserExporter(
    migration::IDeviceMigrationUserExportRequest* pRequest);
  DeviceMigrationUserExporter(DeviceMigrationUserExporter&& other);
  ~DeviceMigrationUserExporter();
  DeviceMigrationUserExporter& operator=(DeviceMigrationUserExporter&& other);

  void Swap(DeviceMigrationUserExporter& other);
  Result ExportUserMigrationData(Span<Uid> outUsers, Span<const Uid> users,
    Span<uint8_t> buffer);

 private:
  migration::IDeviceMigrationUserExportRequest* m_pRequest;
};

class DeviceMigrationUserImporter {
 public:
  DeviceMigrationUserImporter();
  explicit DeviceMigrationUserImporter(
    migration::IDeviceMigrationUserImportRequest* pRequest);
  DeviceMigrationUserImporter(DeviceMigrationUserImporter&& other);
  ~DeviceMigrationUserImporter();
  DeviceMigrationUserImporter& operator=(DeviceMigrationUserImporter&& other);

  void Swap(DeviceMigrationUserImporter& other);
  Result GetOAuthProcedureSessionId(SessionId* pOutId) const;
  Result GetOperatingUserNetworkServiceAccountId(
    NetworkServiceAccountId* pOutId) const;
  Result GetOperatingUserNickname(Nickname* pOutNickname) const;
  Result GetOperatingUserProfileImage(size_t* pOutSize, void* buffer,
    size_t size) const;
  Result GetOperatingUserProfileLargeImage(size_t* pOutSize, void* buffer,
    size_t size) const;
  Result SetSystemProgramIdentification(
    const SystemProgramIdentification& identification);
  Result EnsureOperatingUserNetworkServiceAccountIdTokenCacheAsync(
    AsyncContext* pOutContext);
  Result LoadOperatingUserNetworkServiceAccountIdTokenCache(size_t* pOutSize,
    char* buffer, size_t size) const;
  Result IsOperatingUserAnalyticsPermissionInternalAnalysisPermitted(
    bool* pOutIsPermitted) const;
  Result SetTransferEventId(int64_t eventId) const;
  Result PreprocessUserMigrationDataToRegister(AsyncContext* pOutContext,
    Span<const Uid> users) const;
  Result RegisterAllUsers(AsyncContext* pOutContext,
    Span<const Uid> users) const;

 private:
  migration::IDeviceMigrationUserImportRequest* m_pRequest;
};

}
