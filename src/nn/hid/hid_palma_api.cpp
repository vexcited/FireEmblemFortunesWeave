#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid {

Result InitializePalma(const PalmaConnectionHandle& palmaConnectionHandle) {
  return hid::detail::InitializePalma(palmaConnectionHandle);
}

Result PlayPalmaActivity(const PalmaConnectionHandle& palmaConnectionHandle,
  const unsigned short& unsignedshort) {
  return hid::detail::PlayPalmaActivity(palmaConnectionHandle, unsignedshort);
}

Result SetPalmaFrModeType(const PalmaConnectionHandle& palmaConnectionHandle,
  const PalmaFrModeType& palmaFrModeType) {
  return hid::detail::SetPalmaFrModeType(
    palmaConnectionHandle, palmaFrModeType);
}

Result ReadPalmaStep(const PalmaConnectionHandle& palmaConnectionHandle) {
  return hid::detail::ReadPalmaStep(palmaConnectionHandle);
}

Result EnablePalmaStep(
  const PalmaConnectionHandle& palmaConnectionHandle, bool isEnabled) {
  return hid::detail::EnablePalmaStep(palmaConnectionHandle, isEnabled);
}

Result ResetPalmaStep(const PalmaConnectionHandle& palmaConnectionHandle) {
  return hid::detail::ResetPalmaStep(palmaConnectionHandle);
}

Result WritePalmaApplicationSection(
  const PalmaConnectionHandle& palmaConnectionHandle, int count,
  unsigned long size,
  const PalmaApplicationSectionAccessBuffer&
    palmaApplicationSectionAccessBuffer) {
  return hid::detail::WritePalmaApplicationSection(
    palmaConnectionHandle, count, size, palmaApplicationSectionAccessBuffer);
}

Result ReadPalmaUniqueCode(const PalmaConnectionHandle& palmaConnectionHandle) {
  return hid::detail::ReadPalmaUniqueCode(palmaConnectionHandle);
}

Result SetPalmaUniqueCodeInvalid(
  const PalmaConnectionHandle& palmaConnectionHandle) {
  return hid::detail::SetPalmaUniqueCodeInvalid(palmaConnectionHandle);
}

Result SetPalmaDataBaseIdentificationVersion(
  const PalmaConnectionHandle& palmaConnectionHandle, int count) {
  return hid::detail::SetPalmaDataBaseIdentificationVersion(
    palmaConnectionHandle, count);
}

Result GetPalmaDataBaseIdentificationVersion(
  const PalmaConnectionHandle& palmaConnectionHandle) {
  return hid::detail::GetPalmaDataBaseIdentificationVersion(
    palmaConnectionHandle);
}

Result SuspendPalmaFeature(const PalmaConnectionHandle& palmaConnectionHandle,
  const util::BitFlagSet<32, PalmaFeature>& bitFlagSet) {
  return hid::detail::SuspendPalmaFeature(palmaConnectionHandle, bitFlagSet);
}

Result ReadPalmaPlayLog(const PalmaConnectionHandle& palmaConnectionHandle,
  const unsigned short& unsignedshort) {
  return hid::detail::ReadPalmaPlayLog(palmaConnectionHandle, unsignedshort);
}

Result ResetPalmaPlayLog(const PalmaConnectionHandle& palmaConnectionHandle,
  const unsigned short& unsignedshort) {
  return hid::detail::ResetPalmaPlayLog(palmaConnectionHandle, unsignedshort);
}

void EnablePairedPalmaConnection() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::EnablePairedPalmaConnection());
}

void DisablePairedPalmaConnection() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::DisablePairedPalmaConnection());
}

void EnableAnyPalmaConnection() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::EnableAnyPalmaConnection());
}

void DisableAnyPalmaConnection() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::DisableAnyPalmaConnection());
}

void PairPalma(const PalmaConnectionHandle& palmaConnectionHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::PairPalma(palmaConnectionHandle));
}

void SetPalmaBoostMode(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::EnablePalmaBoostMode(isEnabled));
}

Result CancelWritePalmaWaveEntry(
  const PalmaConnectionHandle& palmaConnectionHandle) {
  return hid::detail::CancelWritePalmaWaveEntry(palmaConnectionHandle);
}

Result SetDisallowedPalmaConnection(
  const bluetooth::Address* pAddress, int count) {
  return hid::detail::SetDisallowedPalmaConnection(pAddress, count);
}

}
