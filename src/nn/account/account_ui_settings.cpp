#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/diag/unexpected_default.hpp"

namespace nn::account {

namespace {

constexpr int32_t UiMode_LicenseRequirementsForNetworkService = 10;
constexpr int32_t UiMode_LicenseRequirementsForNetworkServiceWithUser = 11;
constexpr int32_t UiMode_Reserved = 22;
constexpr int32_t UiModeCount = 27;
constexpr int32_t DialogTypeCount = 3;

}

int32_t UiSettings::GetUiMode() const {
  if (mode < 0 || mode >= UiModeCount || mode == UiMode_Reserved) {
    nn::detail::UnexpectedDefaultImpl();
  }

  return mode;
}

int32_t UiSettings::GetNintendoAccountStartupDialogType() const {
  if (static_cast<uint32_t>(dialogType) >= DialogTypeCount) {
    nn::detail::UnexpectedDefaultImpl();
  }

  return dialogType;
}

// The license requirement dialogs reuse the dialog type field for the
// license type, of which only the first one exists.
int32_t UiSettings::GetLicenseType() const {
  if ((mode != UiMode_LicenseRequirementsForNetworkService &&
    mode != UiMode_LicenseRequirementsForNetworkServiceWithUser) ||
    dialogType != 0) {
    nn::detail::UnexpectedDefaultImpl();
  }

  return 0;
}

}
