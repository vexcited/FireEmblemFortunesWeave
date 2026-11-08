#include "nn/settings/detail/settings_api.hpp"

namespace nn::settings::factory {

Result GetDisplayModuleId(DisplayModuleId* pOutId) {
  return detail::GetDisplayModuleId(pOutId);
}

}
