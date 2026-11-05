#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"

namespace nn::settings::detail {

Result GetAnalogStickModuleTypeL(unsigned char* buffer) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetAnalogStickModuleTypeL(sf::Out<unsigned char>(buffer));
}

Result GetAnalogStickModelParameterL(
  factory::AnalogStickModelParameter* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetAnalogStickModelParameterL(
    sf::Out<factory::AnalogStickModelParameter>(pOutValue));
}

Result GetAnalogStickFactoryCalibrationL(
  factory::AnalogStickFactoryCalibration* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetAnalogStickFactoryCalibrationL(
    sf::Out<factory::AnalogStickFactoryCalibration>(pOutValue));
}

Result GetAnalogStickModuleTypeR(unsigned char* buffer) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetAnalogStickModuleTypeR(sf::Out<unsigned char>(buffer));
}

Result GetAnalogStickModelParameterR(
  factory::AnalogStickModelParameter* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetAnalogStickModelParameterR(
    sf::Out<factory::AnalogStickModelParameter>(pOutValue));
}

Result GetAnalogStickFactoryCalibrationR(
  factory::AnalogStickFactoryCalibration* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetAnalogStickFactoryCalibrationR(
    sf::Out<factory::AnalogStickFactoryCalibration>(pOutValue));
}

Result GetBatteryLotForFactory(BatteryLot* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetBatteryLotForFactory(sf::Out<BatteryLot>(pOutValue));
}

Result GetBluetoothBdAddressSet(factory::BdAddressSet* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetBluetoothBdAddressSet(
    sf::Out<factory::BdAddressSet>(pOutValue));
}

Result GetCalibrationTimeStampUtc(time::PosixTime* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetCalibrationTimeStampUtc(sf::Out<time::PosixTime>(pOutValue));
}

Result GetConfigurationId1(factory::ConfigurationId1* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetConfigurationId1(
    sf::Out<factory::ConfigurationId1>(pOutValue));
}

Result GetCpCertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetCpCertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetCpCertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetCpCertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetRaCertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetRaCertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetRaCertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetRaCertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetOta0CertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta0CertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetOta0CertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta0CertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetOta1CertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta1CertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetOta1CertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta1CertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetOta2CertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta2CertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetOta2CertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta2CertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetJc0CertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc0CertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetJc0CertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc0CertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetJc1CertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc1CertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetJc1CertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc1CertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetDeviceId(factory::DeviceId* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceId(sf::Out<factory::DeviceId>(pOutValue));
}

Result GetCpDeviceKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetCpDeviceKeyFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetCpDeviceKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetCpDeviceKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetRaOemEkFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetRaOemEkFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetRaOemEkFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetRaOemEkFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetRaPkaKekFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetRaPkaKekFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetRaPkaKekFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetRaPkaKekFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetOta0DeviceKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta0DeviceKeyFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetOta0DeviceKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta0DeviceKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetOta1DeviceKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta1DeviceKeyFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetOta1DeviceKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta1DeviceKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetOta2DeviceKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta2DeviceKeyFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetOta2DeviceKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetOta2DeviceKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetJc0PrivateKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc0PrivateKeyFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetJc0PrivateKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc0PrivateKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetJc0PkKekFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc0PkKekFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetJc0PkKekFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc0PkKekFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetJc1PrivateKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc1PrivateKeyFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetJc1PrivateKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc1PrivateKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetJc1PkKekFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc1PkKekFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetJc1PkKekFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetJc1PkKekFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetDisplayModuleId(factory::DisplayModuleId* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetDisplayModuleId(
    sf::Out<factory::DisplayModuleId>(pOutValue));
}

Result GetDrmCertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetDrmCertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetDrmCertificateFile(
  unsigned long* pOutValue, void* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetDrmCertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetGcNxPkKekFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcNxPkKekFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetGcNxPkKekFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcNxPkKekFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetGcNxKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcNxKeyFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetGcNxKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcNxKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetGcNxCertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcNxCertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetGcNxCertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcNxCertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetGcUniqueImportKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcUniqueImportKeyFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetGcUniqueImportKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcUniqueImportKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetGcUniqueEncryptionKeyFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcUniqueEncryptionKeyFileSize(
    sf::Out<unsigned long>(pOutValue));
}

Result GetGcUniqueEncryptionKeyFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcUniqueEncryptionKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetGcCertificateFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcCertificateFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetGcCertificateFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcCertificateFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetGcUniqueKeyAFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcUniqueKeyAFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetGcUniqueKeyAFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcUniqueKeyAFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetGcUniqueKeyBFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcUniqueKeyBFileSize(sf::Out<unsigned long>(pOutValue));
}

Result GetGcUniqueKeyBFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetGcUniqueKeyBFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetConsoleSixAxisSensorModuleType(unsigned char* buffer) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetConsoleSixAxisSensorModuleType(
    sf::Out<unsigned char>(buffer));
}

Result GetConsoleSixAxisSensorMountType(unsigned char* buffer) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetConsoleSixAxisSensorMountType(
    sf::Out<unsigned char>(buffer));
}

Result GetConsoleSixAxisSensorFactoryCalibration(
  factory::ConsoleSixAxisSensorFactoryCalibration* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetConsoleSixAxisSensorFactoryCalibration(
    sf::Out<factory::ConsoleSixAxisSensorFactoryCalibration>(pOutValue));
}

Result GetConsoleSixAxisSensorFactoryAccelerationLog(
  factory::ConsoleSixAxisSensorFactoryAccelerationLog* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetConsoleSixAxisSensorFactoryAccelerationLog(
    sf::Out<factory::ConsoleSixAxisSensorFactoryAccelerationLog>(pOutValue));
}

Result GetRadioForbidden(bool* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetRadioForbidden(sf::Out<bool>(pOutValue));
}

Result GetRegionCodeForFactory(int* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetRegionCodeForFactory(sf::Out<int>(pOutValue));
}

Result GetEncryptedSecretDeviceIdFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetEncryptedSecretDeviceIdFileSize(
    sf::Out<unsigned long>(pOutValue));
}

Result GetEncryptedSecretDeviceIdFile(
  unsigned long* pOutValue, void* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetEncryptedSecretDeviceIdFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetEncryptedSecretDeviceIdEncryptionKeyFileSize(
  unsigned long* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetEncryptedSecretDeviceIdEncryptionKeyFileSize(
    sf::Out<unsigned long>(pOutValue));
}

Result GetEncryptedSecretDeviceIdEncryptionKeyFile(
  unsigned long* pOutValue, void* buffer, unsigned long size) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetEncryptedSecretDeviceIdEncryptionKeyFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetSerialNumber(factory::SerialNumber* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetSerialNumber(sf::Out<factory::SerialNumber>(pOutValue));
}

Result GetToolModel(int* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetToolModel(sf::Out<int>(pOutValue));
}

Result GetWirelessLanMacAddress(factory::MacAddress* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetWirelessLanMacAddress(
    sf::Out<factory::MacAddress>(pOutValue));
}

Result GetWirelessLanRegulatoryDomain(
  factory::WlanRegulatoryDomain* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetWirelessLanRegulatoryDomain(
    sf::Out<factory::WlanRegulatoryDomain>(pOutValue));
}

Result GetWirelessLanPowerTable(factory::WlanPowerTable* pOutValue) {
  sf::SharedPointer<IFactorySettingsServer> proxy;
  NN_RESULT_DO(CreateFactorySettingsServerProxyForIpc(&proxy));
  return proxy->GetWirelessLanPowerTable(
    sf::Out<factory::WlanPowerTable>(pOutValue));
}

}
