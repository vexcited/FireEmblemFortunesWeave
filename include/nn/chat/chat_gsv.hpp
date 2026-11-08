#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/memory_permission.hpp"
#include "nn/result.hpp"
#include "nn/syncpt/syncpt_sdk.hpp"

namespace nn::gs {

#ifndef NN_GS_NATIVE_IMAGE_HANDLE_DEFINED
#define NN_GS_NATIVE_IMAGE_HANDLE_DEFINED

struct NativeImageHandle {
  uint32_t value;
};

#endif

struct NativeSyncHandle;

}

namespace nn::chat::gsv {

enum ImageEncoding : int32_t {
  ImageEncoding_Raw = 0,
};

// Sizes are kept minus one.
struct ImagePreference {
  ImageEncoding encoding;
  uint32_t planeCount;
  uint16_t widthMinusOne;
  uint16_t heightMinusOne;
  uint8_t reserved[0x34];
};

struct MetadataType {
  uint8_t flags;
  uint8_t streamGeneration;
  uint8_t reserved[6];
};

struct VirtualDisplayType {
  uint8_t reserved[0x10];
  syncpt::sdk::SyncPointHandle syncPoint;
};

struct ImagePoolType {
  uint32_t memoryHandle;
  uint32_t imageHandle;
  void* pMemory;
};

// The state is one once created and two once destroyed.
struct MetadataPoolType {
  uint32_t state;
  uint32_t id;
};

void Initialize();
void Finalize();
Result OpenVirtualDisplay(VirtualDisplayType* pDisplay, const char* pName);
void CloseVirtualDisplay(VirtualDisplayType* pDisplay);
Result CreateImagePool(ImagePoolType* pPool,
  const ImagePreference& preference, uint64_t count, void* pMemory,
  size_t memorySize, os::MemoryPermission permission);
void DestroyImagePool(ImagePoolType* pPool);
Result CreateMetadataPool(MetadataPoolType* pPool, uint64_t count);
void DestroyMetadataPool(MetadataPoolType* pPool);
Result RequestReceiveImage(gs::NativeSyncHandle* pOutSync,
  VirtualDisplayType* pDisplay, ImagePoolType* pPool, uint32_t index,
  MetadataPoolType* pMetadataPool, uint8_t metadataIndex,
  gs::NativeSyncHandle releaseSync);
gs::NativeImageHandle GetImagePoolImageHandle(const ImagePoolType* pPool,
  uint32_t index);

ImagePreference MakeImagePreference(uint16_t width, uint16_t height,
  ImageEncoding encoding);
void GetMetadataFaceDetectionFlag(bool* pOutValue,
  const MetadataType* pMetadata);
void GetMetadataPhotographedContentsFlag(bool* pOutValue,
  const MetadataType* pMetadata);
void GetMetadataSmallVideoOnlyFlag(bool* pOutValue,
  const MetadataType* pMetadata);
void GetMetadataStreamGeneration(uint8_t* pOutValue,
  const MetadataType* pMetadata);

}
