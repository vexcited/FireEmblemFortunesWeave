#include "nn/util/sdk_version.hpp"

extern "C" {

struct nnutilMiddlewareInfo;

[[gnu::visibility("hidden")]] extern const nnutilMiddlewareInfo
  g_ZlibMiddlewareInfo;

void nnutilReferSymbol(const void*) {
}

const char* nnutilZlib_zlibVersion() {
  return "1.3.1.f-NINTENDO-SDK-v1";
}

void Libz_SigloMiddlewareInfo() {
  nn::util::ReferSymbol(&g_ZlibMiddlewareInfo);
}

}
