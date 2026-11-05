#include "nn/account/account_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/friends/detail/friends_my_page.hpp"
#include "nn/friends/friends_types.hpp"
#include "nn/result.hpp"
#include "nn/settings/settings_types.hpp"
#include "nn/util/string_util.hpp"

namespace nn::nifm {

struct ClientId {
  uint32_t value;
};

ClientId GetClientId();
bool IsAnyInternetRequestAccepted(ClientId clientId);

}

namespace nn::account {

Result ListOpenUsers(int* pOutCount, Uid* pOutUsers, int count);

}

namespace nn::util {

size_t CopyUtf8String(char* dst, size_t dstSize, const char* src,
  size_t srcLength, int count);

}

namespace nn::friends {

struct MiiImageUrlParam {
  char value[160];
};

}

namespace nn::friends::detail::util {

bool VerifyLanguageCode(const settings::LanguageCode& code);

}

namespace nn::friends::detail {

namespace {

const Result ResultInternetRequestNotAccepted = {0xc79};
const Result ResultInvalidUser = {0x479};
const Result ResultUserNotOpened = {0x679};

}

[[gnu::visibility("hidden")]] bool g_IsCheckUserStatusEnabled = true;

account::Uid GetCurrentUser() {
  account::Uid uid = {};
  int count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(account::ListOpenUsers(&count, &uid, 1));
  NN_ABORT_UNLESS(count == 1);
  return uid;
}

Result CheckUserStatus(const account::Uid& uid) {
  if (uid.value[0] == 0 && uid.value[1] == 0) {
    return ResultInvalidUser;
  }
  if (g_IsCheckUserStatusEnabled) {
    account::Uid users[8] = {};
    int count = 0;
    NN_RESULT_DO(account::ListOpenUsers(&count, users, 8));
    for (int i = 0; i < count; i++) {
      if (users[i].value[0] == uid.value[0] &&
        users[i].value[1] == uid.value[1]) {
        return Result();
      }
    }
    return ResultUserNotOpened;
  }
  return Result();
}

void EnableCheckUserStatus(bool isEnabled) {
  g_IsCheckUserStatusEnabled = isEnabled;
}

Result CheckInternetRequestAccepted() {
  if (!nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return ResultInternetRequestNotAccepted;
  }
  return Result();
}

Result NormalizeInAppScreenName(InAppScreenName* pOutName,
  const InAppScreenName& name) {
  int length = nn::util::Strnlen(name.name, sizeof(name.name));
  if (length == 0) {
    pOutName->name[0] = 0;
  }
  else if (nn::util::CopyUtf8String(pOutName->name, sizeof(pOutName->name),
    name.name, length, 20) == 0) {
    return ResultInvalidUser;
  }
  const settings::LanguageCode& languageCode =
    reinterpret_cast<const settings::LanguageCode&>(name.languageCode);
  if (!util::VerifyLanguageCode(languageCode)) {
    return ResultInvalidUser;
  }
  nn::util::Strlcpy(reinterpret_cast<char*>(&pOutName->languageCode),
    languageCode.string, sizeof(languageCode.string));
  return Result();
}

Result GetMiiImageUrl(Url* pOutUrl, const MiiImageUrlParam& param) {
  if (param.value[0] != 0) {
    nn::util::SNPrintf(pOutUrl->value, sizeof(pOutUrl->value),
      "https://mii-secure-%%.cdn.nintendo.net/%s_normal_face.png",
      param.value);
  }
  else {
    pOutUrl->value[0] = 0;
  }
  return Result();
}

}
