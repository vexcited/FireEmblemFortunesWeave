#pragma once

#include <stdint.h>

#include "nn/capsrv/capsrv_album_types.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::album {

enum ImageSize : int32_t {
  ImageSize_1280x720,
  ImageSize_1920x1080,
};

struct AlbumFileEntry {
  int64_t size;
  uint64_t hash;
  capsrv::AlbumFileDateTime time;
  uint8_t storage;
  uint8_t contents;
  uint8_t reserved[6];
};

class ConvertAlbumEntry {
 public:
  static AlbumFileEntry ConvertToAlbum(
    const capsrv::ApplicationAlbumEntry& entry);
  static capsrv::ApplicationAlbumEntry ConvertToCapsrv(
    const AlbumFileEntry& entry);
  static capsrv::ApplicationAlbumEntry* ReinterpretArrayToCapsrv(
    AlbumFileEntry* pEntries);
};

class LibraryState {
 public:
  LibraryState();

  bool IsInitialized() const;
  bool IsAlbumAvailable() const;
  bool IsShareAvailable() const;
  void Initialize();
  void Finalize();
  os::SdkRecursiveMutexType& GetLibraryMutex();
  void EnsureAlbumAvailable();
  void EnsureShareAvailable();

 private:
  int m_InitializeCount;
  bool m_IsAlbumAvailable;
  bool m_IsShareAvailable;
  os::SdkRecursiveMutexType m_Mutex;
};

extern LibraryState g_LibraryState;

Result ConvertCapsrvResult(Result result);
int GetImageWidth(ImageSize size);
int GetImageHeight(ImageSize size);
void Initialize();
void Finalize();

}
