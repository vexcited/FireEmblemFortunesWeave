#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_save_data.hpp"

namespace nn::account {

Result GetUserExistence(bool* outExistence, const Uid& user);

}

namespace nn::fs {

UserId ConvertAccountUidToFsUserId(const account::Uid& user) {
  return UserId{{user.value[0], user.value[1]}};
}

Result CheckUid(const account::Uid& user) {
  bool isExisting = false;
  NN_FS_RESULT_DO(account::GetUserExistence(&isExisting, user));
  NN_FS_RESULT_THROW_UNLESS(isExisting, ResultUserNotExist());
  return ResultSuccess();
}

}
