#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>
#include <string_view>

#include "fs/memory.hpp"

namespace gfx {

// Load modes of the gfx loader, unknown modes load synchronously.
enum class LoadMode : int32_t {
  kSync,
  kAsync,
  kDeferred,
};

struct FileRequest {
  std::string_view path;
  fs::Memory* memory;
  LoadMode mode;
};

struct OwnedFileRequest {
  std::string_view path;
  std::weak_ptr<void> owner;
  fs::Memory* memory;
  LoadMode mode;
};

// The loader method names are placeholders named after the calling slot.
class FileLoader {
public:
  void* Load02(const OwnedFileRequest& request);
  void* Load03(const OwnedFileRequest& request);
  void* Load05(const OwnedFileRequest& request);
  void* Load07(const FileRequest& request);
  void* Load08(const FileRequest& request);
  void* Load10(const FileRequest& request);
  void* Load11(const FileRequest& request);
  void* Load12(const char* path, size_t size, int32_t flags, LoadMode mode);
};

class IFileSystem {
public:
  virtual ~IFileSystem() = default;

  virtual void* Load02(std::string_view path,
    const std::weak_ptr<void>& owner, int32_t mode) = 0;
  virtual void* Load03(std::string_view path,
    const std::weak_ptr<void>& owner) = 0;
  virtual void* Load04(std::string_view path,
    const std::weak_ptr<void>& owner) = 0;
  virtual void* Load05(std::string_view path,
    const std::weak_ptr<void>& owner) = 0;
  virtual void* Load06(std::string_view path,
    const std::weak_ptr<void>& owner) = 0;
  virtual void* Load07(std::string_view path, int32_t mode) = 0;
  virtual void* Load08(std::string_view path) = 0;
  virtual void* Load09(std::string_view path) = 0;
  virtual void* Load10(std::string_view path) = 0;
  virtual void* Load11(std::string_view path) = 0;
  virtual void* Load12(std::string_view path, int32_t mode) = 0;
};

}

namespace app {

class GfxOtherFileMemory : public fs::Memory {
public:
  ~GfxOtherFileMemory() override = default;

  void* alloc(size_t size, size_t alignment) override;
  void free(void* ptr) override;
};

class GfxFileSystem : public gfx::IFileSystem {
public:
  ~GfxFileSystem() override = default;

  void* Load02(std::string_view path, const std::weak_ptr<void>& owner,
    int32_t mode) override;
  void* Load03(std::string_view path,
    const std::weak_ptr<void>& owner) override;
  void* Load04(std::string_view path,
    const std::weak_ptr<void>& owner) override;
  void* Load05(std::string_view path,
    const std::weak_ptr<void>& owner) override;
  void* Load06(std::string_view path,
    const std::weak_ptr<void>& owner) override;
  void* Load07(std::string_view path, int32_t mode) override;
  void* Load08(std::string_view path) override;
  void* Load09(std::string_view path) override;
  void* Load10(std::string_view path) override;
  void* Load11(std::string_view path) override;
  void* Load12(std::string_view path, int32_t mode) override;

private:
  fs::Memory* GetMemory(std::string_view path);

  gfx::FileLoader* loader_;
  uint8_t unknown10_[0x28];
  GfxOtherFileMemory other_memory_;
};

}
