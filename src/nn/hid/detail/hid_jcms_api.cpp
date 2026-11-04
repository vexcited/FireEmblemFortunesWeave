#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

JcmsHandle GetJcmsHandle(const NpadIdType& id, const JcmsType& type) {
  return utility::MakeJcmsHandle(id, type);
}

}
