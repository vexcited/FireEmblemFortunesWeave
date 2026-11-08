#include <stdint.h>

using CUresult = uint32_t;
using CudbgResult = uint32_t;

using CudbgVersionFunction = CudbgResult (*)(uint32_t* pOutMajor,
  uint32_t* pOutMinor, uint32_t* pOutRevision);

extern "C" uint64_t cudbgReportedDriverInternalErrorCode;

[[gnu::visibility("hidden")]] extern uint32_t g_CudbgDriverApiErrorCount;
[[gnu::visibility("hidden")]] extern uint32_t g_CudbgDriverInternalErrorCount;
[[gnu::visibility("hidden")]] extern void (*g_pCudbgInitializeCallback)();
[[gnu::visibility("hidden")]] extern CudbgVersionFunction
  g_pCudbgGetApiVersion;

[[gnu::visibility("hidden")]] CudbgResult CheckCudbgAvailable();

namespace {

constexpr CUresult CUDA_ERROR_NOT_SUPPORTED = 801;
constexpr CudbgResult CUDBG_ERROR_INVALID_ARGS = 4;

constexpr uint32_t CudbgApiVersionMajor = 13;
constexpr uint32_t CudbgApiVersionMinor = 0;
constexpr uint32_t CudbgApiVersionRevision = 163;

// Reported when the debugger attaches in a mode the driver cannot serve.
constexpr uint64_t CudbgUnsupportedAttachError = 0x41a8c0000000a;

}

extern "C" {

CUresult cuMemGetAttribute(void* /* pOutValue */, int /* attribute */,
  uint64_t /* address */) {
  return CUDA_ERROR_NOT_SUPPORTED;
}

CUresult cuMemGetAttribute_v2(void* /* pOutValue */, int /* attribute */,
  uint64_t /* address */) {
  return CUDA_ERROR_NOT_SUPPORTED;
}

void cudbgReportDriverApiError() {
  g_CudbgDriverApiErrorCount++;
}

void cudbgReportDriverInternalError() {
  g_CudbgDriverInternalErrorCount++;
}

void cudbgApiInit(uint32_t mode) {
  if (mode - 1 < 2) {
    return;
  }

  cudbgReportedDriverInternalErrorCode = CudbgUnsupportedAttachError;
  g_pCudbgInitializeCallback();
}

void cudbgApiAttach() {}

CudbgResult cudbgGetAPIVersion(uint32_t* pOutMajor, uint32_t* pOutMinor,
  uint32_t* pOutRevision) {
  const CudbgResult result = CheckCudbgAvailable();
  if (result != 0) {
    return result;
  }

  if (g_pCudbgGetApiVersion != nullptr) {
    return g_pCudbgGetApiVersion(pOutMajor, pOutMinor, pOutRevision);
  }

  if (pOutMajor == nullptr || pOutMinor == nullptr ||
    pOutRevision == nullptr) {
    return CUDBG_ERROR_INVALID_ARGS;
  }

  *pOutMajor = CudbgApiVersionMajor;
  *pOutMinor = CudbgApiVersionMinor;
  *pOutRevision = CudbgApiVersionRevision;
  return 0;
}

}
