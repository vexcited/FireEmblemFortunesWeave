#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/settings_api.hpp"

namespace nn::settings::factory {

void GetConfigurationId1(ConfigurationId1* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetConfigurationId1(pOutValue));
}

unsigned long GetCpCertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetCpCertificateFileSize(&value));
  return value;
}

unsigned long GetCpCertificateFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetCpCertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetRaCertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRaCertificateFileSize(&value));
  return value;
}

unsigned long GetRaCertificateFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRaCertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetOta0CertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta0CertificateFileSize(&value));
  return value;
}

unsigned long GetOta0CertificateFile(
  unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta0CertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetOta1CertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta1CertificateFileSize(&value));
  return value;
}

unsigned long GetOta1CertificateFile(
  unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta1CertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetOta2CertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta2CertificateFileSize(&value));
  return value;
}

unsigned long GetOta2CertificateFile(
  unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta2CertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetJc0CertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc0CertificateFileSize(&value));
  return value;
}

unsigned long GetJc0CertificateFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc0CertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetJc1CertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc1CertificateFileSize(&value));
  return value;
}

unsigned long GetJc1CertificateFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc1CertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetCpDeviceKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetCpDeviceKeyFileSize(&value));
  return value;
}

unsigned long GetCpDeviceKeyFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetCpDeviceKeyFile(
    &value, buffer, size));
  return value;
}

unsigned long GetRaOemEkFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRaOemEkFileSize(&value));
  return value;
}

unsigned long GetRaOemEkFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRaOemEkFile(&value, buffer, size));
  return value;
}

unsigned long GetRaPkaKekFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRaPkaKekFileSize(&value));
  return value;
}

unsigned long GetRaPkaKekFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRaPkaKekFile(&value, buffer, size));
  return value;
}

unsigned long GetOta0DeviceKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta0DeviceKeyFileSize(&value));
  return value;
}

unsigned long GetOta0DeviceKeyFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta0DeviceKeyFile(
    &value, buffer, size));
  return value;
}

unsigned long GetOta1DeviceKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta1DeviceKeyFileSize(&value));
  return value;
}

unsigned long GetOta1DeviceKeyFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta1DeviceKeyFile(
    &value, buffer, size));
  return value;
}

unsigned long GetOta2DeviceKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta2DeviceKeyFileSize(&value));
  return value;
}

unsigned long GetOta2DeviceKeyFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetOta2DeviceKeyFile(
    &value, buffer, size));
  return value;
}

unsigned long GetJc0PrivateKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc0PrivateKeyFileSize(&value));
  return value;
}

unsigned long GetJc0PrivateKeyFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc0PrivateKeyFile(
    &value, buffer, size));
  return value;
}

unsigned long GetJc0PkKekFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc0PkKekFileSize(&value));
  return value;
}

unsigned long GetJc0PkKekFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc0PkKekFile(&value, buffer, size));
  return value;
}

unsigned long GetJc1PrivateKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc1PrivateKeyFileSize(&value));
  return value;
}

unsigned long GetJc1PrivateKeyFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc1PrivateKeyFile(
    &value, buffer, size));
  return value;
}

unsigned long GetJc1PkKekFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc1PkKekFileSize(&value));
  return value;
}

unsigned long GetJc1PkKekFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetJc1PkKekFile(&value, buffer, size));
  return value;
}

unsigned long GetDrmCertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDrmCertificateFileSize(&value));
  return value;
}

unsigned long GetDrmCertificateFile(void* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDrmCertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetGcNxPkKekFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcNxPkKekFileSize(&value));
  return value;
}

unsigned long GetGcNxPkKekFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcNxPkKekFile(
    &value, buffer, size));
  return value;
}

unsigned long GetGcNxKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcNxKeyFileSize(&value));
  return value;
}

unsigned long GetGcNxKeyFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcNxKeyFile(&value, buffer, size));
  return value;
}

unsigned long GetGcNxCertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcNxCertificateFileSize(&value));
  return value;
}

unsigned long GetGcNxCertificateFile(
  unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcNxCertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetGcUniqueImportKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcUniqueImportKeyFileSize(&value));
  return value;
}

unsigned long GetGcUniqueImportKeyFile(
  unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcUniqueImportKeyFile(
    &value, buffer, size));
  return value;
}

unsigned long GetGcUniqueEncryptionKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcUniqueEncryptionKeyFileSize(
    &value));
  return value;
}

unsigned long GetGcUniqueEncryptionKeyFile(
  unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcUniqueEncryptionKeyFile(
    &value, buffer, size));
  return value;
}

unsigned long GetGcCertificateFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcCertificateFileSize(&value));
  return value;
}

unsigned long GetGcCertificateFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcCertificateFile(
    &value, buffer, size));
  return value;
}

unsigned long GetGcUniqueKeyAFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcUniqueKeyAFileSize(&value));
  return value;
}

unsigned long GetGcUniqueKeyAFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcUniqueKeyAFile(
    &value, buffer, size));
  return value;
}

unsigned long GetGcUniqueKeyBFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcUniqueKeyBFileSize(&value));
  return value;
}

unsigned long GetGcUniqueKeyBFile(unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGcUniqueKeyBFile(
    &value, buffer, size));
  return value;
}

unsigned long GetEncryptedSecretDeviceIdFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetEncryptedSecretDeviceIdFileSize(
    &value));
  return value;
}

unsigned long GetEncryptedSecretDeviceIdFile(void* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetEncryptedSecretDeviceIdFile(
    &value, buffer, size));
  return value;
}

unsigned long GetEncryptedSecretDeviceIdEncryptionKeyFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetEncryptedSecretDeviceIdEncryptionKeyFileSize(&value));
  return value;
}

unsigned long GetEncryptedSecretDeviceIdEncryptionKeyFile(
  void* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetEncryptedSecretDeviceIdEncryptionKeyFile(&value, buffer, size));
  return value;
}

}
