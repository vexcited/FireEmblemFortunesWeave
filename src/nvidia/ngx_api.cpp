#include <stdint.h>

using NVSDK_NGX_Result = uint32_t;

struct ID3D11Resource;
struct ID3D12Resource;
struct VkExtensionProperties;

// The parameter block of the public NGX interface, every setter and getter
// is one virtual slot.
class NVSDK_NGX_Parameter {
public:
  virtual void Set(const char* pName, unsigned long long value) = 0;
  virtual void Set(const char* pName, float value) = 0;
  virtual void Set(const char* pName, double value) = 0;
  virtual void Set(const char* pName, unsigned int value) = 0;
  virtual void Set(const char* pName, int value) = 0;
  virtual void Set(const char* pName, ID3D11Resource* pValue) = 0;
  virtual void Set(const char* pName, ID3D12Resource* pValue) = 0;
  virtual void Set(const char* pName, void* pValue) = 0;
  virtual NVSDK_NGX_Result Get(const char* pName,
    unsigned long long* pOutValue) const = 0;
  virtual NVSDK_NGX_Result Get(const char* pName, float* pOutValue) const = 0;
  virtual NVSDK_NGX_Result Get(const char* pName,
    double* pOutValue) const = 0;
  virtual NVSDK_NGX_Result Get(const char* pName,
    unsigned int* pOutValue) const = 0;
  virtual NVSDK_NGX_Result Get(const char* pName, int* pOutValue) const = 0;
  virtual NVSDK_NGX_Result Get(const char* pName,
    ID3D11Resource** ppOutValue) const = 0;
  virtual NVSDK_NGX_Result Get(const char* pName,
    ID3D12Resource** ppOutValue) const = 0;
  virtual NVSDK_NGX_Result Get(const char* pName,
    void** ppOutValue) const = 0;
  virtual void Reset() = 0;
};

using NgxFunction1 = NVSDK_NGX_Result (*)(void*);
using NgxFunction3 = NVSDK_NGX_Result (*)(void*, void*, void*);
using NgxFunction4 = NVSDK_NGX_Result (*)(void*, void*, void*, void*);
using NgxFunction5 = NVSDK_NGX_Result (*)(void*, void*, void*, void*,
  void*);
using NgxCreateFeature = NVSDK_NGX_Result (*)(void* pCommandBuffer,
  uint32_t feature, NVSDK_NGX_Parameter* pParameters, void** ppOutHandle);
using NgxCreateFeature1 = NVSDK_NGX_Result (*)(void* pDevice,
  void* pCommandBuffer, uint32_t feature, NVSDK_NGX_Parameter* pParameters,
  void** ppOutHandle);

// Entry points of the loaded feature module, empty until it is loaded.
struct NgxModuleTable {
  void* pModule;
  void* reserved08[6];
  NgxFunction3 getScratchBufferSize;
  NgxFunction1 getParameters;
  NgxCreateFeature createFeature;
  NgxCreateFeature1 createFeature1;
  NgxFunction4 evaluateFeature;
  NgxFunction1 releaseFeature;
  NgxFunction4 getFeatureRequirements;
  void* reserved70;
  NgxFunction5 getFeatureDeviceExtensionRequirements;
  NgxFunction1 allocateParameters;
  NgxFunction1 getCapabilityParameters;
  NgxFunction1 destroyParameters;
};

[[gnu::visibility("hidden")]] extern NgxModuleTable g_NgxModuleTable;
[[gnu::visibility("hidden")]] extern const VkExtensionProperties
  g_NgxInstanceExtensions[1];
[[gnu::visibility("hidden")]] extern const VkExtensionProperties
  g_NgxDeviceExtensions[4];
[[gnu::visibility("hidden")]] extern const char* const
  g_NgxRequiredExtensionNames[5];

[[gnu::visibility("hidden")]] void PrepareNgxParameters(
  NVSDK_NGX_Parameter* pParameters);
[[gnu::visibility("hidden")]] void NgxEvaluateProgressThunk();
[[gnu::visibility("hidden")]] void NgxLogWarning(const char* pFile, int line,
  const char* pFunction, const char* pMessage);
[[gnu::visibility("hidden")]] void RegisterDlssMiddleware(
  const char* pVersion);

namespace {

constexpr NVSDK_NGX_Result NVSDK_NGX_Result_Success = 1;
constexpr NVSDK_NGX_Result NVSDK_NGX_Result_FAIL_NotInitialized = 0xbad00007;
constexpr NVSDK_NGX_Result NVSDK_NGX_Result_FAIL_OutOfDate = 0xbad0000c;
constexpr NVSDK_NGX_Result NVSDK_NGX_Result_FAIL_NotImplemented = 0xbad00012;

// Without the module these fall back to an empty answer.
template<typename Function, typename... Arguments>
[[gnu::always_inline]] inline NVSDK_NGX_Result CallModule(Function function,
  NVSDK_NGX_Result fallback, Arguments... arguments) {
  if (function == nullptr) {
    return fallback;
  }

  return function(arguments...);
}

// Parameter blocks need the module itself and a recent enough one.
[[gnu::always_inline]] inline NVSDK_NGX_Result CallParameterFunction(
  NgxFunction1 NgxModuleTable::*member, void* pArgument) {
  if (g_NgxModuleTable.pModule == nullptr) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }

  if (g_NgxModuleTable.*member == nullptr) {
    return NVSDK_NGX_Result_FAIL_OutOfDate;
  }

  return (g_NgxModuleTable.*member)(pArgument);
}

}

extern "C" {

NVSDK_NGX_Result NVSDK_NGX_UpdateFeature(const void* /* pApplicationId */,
  uint32_t /* feature */) {
  return NVSDK_NGX_Result_FAIL_NotImplemented;
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_RequiredExtensions(
  uint32_t* pOutInstanceCount, const char* const** ppOutInstanceNames,
  uint32_t* pOutDeviceCount, const char* const** ppOutDeviceNames) {
  NgxLogWarning("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
    "nvn2/dlss/vulkan/sdk/source/api/nvsdk_ngx_vulkan_lib.cpp", 161,
    "NVSDK_NGX_VULKAN_RequiredExtensions",
    "warning: NVSDK_NGX_VULKAN_RequiredExtensions will be deprecated in "
    "future SDK release. Use "
    "NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements() and "
    "NVSDK_NGX_VULKAN_GetFeatureRequirements() instead");
  *pOutInstanceCount = 1;
  *pOutDeviceCount = 4;
  *ppOutInstanceNames = &g_NgxRequiredExtensionNames[0];
  *ppOutDeviceNames = &g_NgxRequiredExtensionNames[1];
  return NVSDK_NGX_Result_Success;
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_GetParameters(void* ppOutParameters) {
  return CallModule(g_NgxModuleTable.getParameters,
    NVSDK_NGX_Result_FAIL_NotInitialized, ppOutParameters);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_AllocateParameters(void* ppOutParameters) {
  return CallParameterFunction(&NgxModuleTable::allocateParameters,
    ppOutParameters);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_GetCapabilityParameters(
  void* ppOutParameters) {
  return CallParameterFunction(&NgxModuleTable::getCapabilityParameters,
    ppOutParameters);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_DestroyParameters(void* pParameters) {
  return CallParameterFunction(&NgxModuleTable::destroyParameters,
    pParameters);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_GetScratchBufferSize(void* pFeature,
  void* pParameters, void* pOutSize) {
  return CallModule(g_NgxModuleTable.getScratchBufferSize,
    NVSDK_NGX_Result_FAIL_NotInitialized, pFeature, pParameters, pOutSize);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_CreateFeature(void* pCommandBuffer,
  uint32_t feature, NVSDK_NGX_Parameter* pParameters, void** ppOutHandle) {
  if (g_NgxModuleTable.createFeature == nullptr) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }

  PrepareNgxParameters(pParameters);
  return g_NgxModuleTable.createFeature(pCommandBuffer, feature, pParameters,
    ppOutHandle);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_CreateFeature1(void* pDevice,
  void* pCommandBuffer, uint32_t feature, NVSDK_NGX_Parameter* pParameters,
  void** ppOutHandle) {
  if (g_NgxModuleTable.createFeature1 == nullptr) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }

  PrepareNgxParameters(pParameters);
  return g_NgxModuleTable.createFeature1(pDevice, pCommandBuffer, feature,
    pParameters, ppOutHandle);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_ReleaseFeature(void* pHandle) {
  return CallModule(g_NgxModuleTable.releaseFeature,
    NVSDK_NGX_Result_FAIL_NotInitialized, pHandle);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_GetFeatureRequirements(void* pInstance,
  void* pPhysicalDevice, void* pFeatureInfo, void* pOutRequirement) {
  return CallModule(g_NgxModuleTable.getFeatureRequirements,
    NVSDK_NGX_Result_FAIL_NotImplemented, pInstance, pPhysicalDevice,
    pFeatureInfo, pOutRequirement);
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements(
  const void* /* pFeatureInfo */, uint32_t* pOutCount,
  const VkExtensionProperties** ppOutProperties) {
  if (pOutCount != nullptr) {
    *pOutCount = 1;
  }

  if (ppOutProperties != nullptr) {
    *ppOutProperties = g_NgxInstanceExtensions;
  }

  return NVSDK_NGX_Result_Success;
}

// An older module may not know the query, the fixed list answers then.
NVSDK_NGX_Result NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements(
  void* pInstance, void* pPhysicalDevice, void* pFeatureInfo,
  uint32_t* pOutCount, const VkExtensionProperties** ppOutProperties) {
  if (g_NgxModuleTable.getFeatureDeviceExtensionRequirements != nullptr) {
    const NVSDK_NGX_Result result =
      g_NgxModuleTable.getFeatureDeviceExtensionRequirements(pInstance,
        pPhysicalDevice, pFeatureInfo, pOutCount, ppOutProperties);
    if (result != NVSDK_NGX_Result_FAIL_NotImplemented) {
      return result;
    }
  }

  if (pOutCount != nullptr) {
    *pOutCount = 4;
  }

  if (ppOutProperties != nullptr) {
    *ppOutProperties = g_NgxDeviceExtensions;
  }

  return NVSDK_NGX_Result_Success;
}

NVSDK_NGX_Result NVSDK_NGX_VULKAN_EvaluateFeature_C(void* pCommandBuffer,
  void* pHandle, void* pParameters, void* pCallback) {
  if (g_NgxModuleTable.evaluateFeature == nullptr) {
    return NVSDK_NGX_Result_FAIL_NotInitialized;
  }

  return g_NgxModuleTable.evaluateFeature(pCommandBuffer, pHandle,
    pParameters, pCallback != nullptr ?
      reinterpret_cast<void*>(NgxEvaluateProgressThunk) : nullptr);
}

void NVSDK_NGX_Parameter_SetF(NVSDK_NGX_Parameter* pParameters,
  const char* pName, float value) {
  pParameters->Set(pName, value);
}

void NVSDK_NGX_Parameter_SetUI(NVSDK_NGX_Parameter* pParameters,
  const char* pName, unsigned int value) {
  pParameters->Set(pName, value);
}

void NVSDK_NGX_Parameter_SetI(NVSDK_NGX_Parameter* pParameters,
  const char* pName, int value) {
  pParameters->Set(pName, value);
}

void NVSDK_NGX_Parameter_SetVoidPointer(NVSDK_NGX_Parameter* pParameters,
  const char* pName, void* pValue) {
  pParameters->Set(pName, pValue);
}

NVSDK_NGX_Result NVSDK_NGX_Parameter_GetULL(NVSDK_NGX_Parameter* pParameters,
  const char* pName, unsigned long long* pOutValue) {
  return pParameters->Get(pName, pOutValue);
}

NVSDK_NGX_Result NVSDK_NGX_Parameter_GetF(NVSDK_NGX_Parameter* pParameters,
  const char* pName, float* pOutValue) {
  return pParameters->Get(pName, pOutValue);
}

NVSDK_NGX_Result NVSDK_NGX_Parameter_GetUI(NVSDK_NGX_Parameter* pParameters,
  const char* pName, unsigned int* pOutValue) {
  return pParameters->Get(pName, pOutValue);
}

NVSDK_NGX_Result NVSDK_NGX_Parameter_GetVoidPointer(
  NVSDK_NGX_Parameter* pParameters, const char* pName, void** ppOutValue) {
  return pParameters->Get(pName, ppOutValue);
}

}

void dlssdetailUseMiddleWare() {
  RegisterDlssMiddleware("SDK MW+Nintendo+NintendoSDK_DLSS-22_2_0-Release");
}
