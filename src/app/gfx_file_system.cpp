#pragma GCC visibility push(hidden)
#include "app/gfx_file_system.hpp"
#pragma GCC visibility pop

namespace app {

namespace {

gfx::LoadMode ToLoadMode(int32_t mode) {
  switch (mode) {
    case 1:
      return gfx::LoadMode::kAsync;
    case 2:
      return gfx::LoadMode::kDeferred;
    default:
      return gfx::LoadMode::kSync;
  }
}

}

void* GfxFileSystem::Load02(std::string_view path,
  const std::weak_ptr<void>& owner, int32_t mode) {
  gfx::FileLoader* loader = loader_;
  const gfx::OwnedFileRequest request{path, owner, GetMemory(path),
    ToLoadMode(mode)};
  return loader->Load02(request);
}

void* GfxFileSystem::Load03(std::string_view path,
  const std::weak_ptr<void>& owner) {
  gfx::FileLoader* loader = loader_;
  const gfx::OwnedFileRequest request{path, owner, GetMemory(path),
    gfx::LoadMode::kAsync};
  return loader->Load03(request);
}

void* GfxFileSystem::Load05(std::string_view path,
  const std::weak_ptr<void>& owner) {
  gfx::FileLoader* loader = loader_;
  const gfx::OwnedFileRequest request{path, owner, GetMemory(path),
    gfx::LoadMode::kAsync};
  return loader->Load05(request);
}

void* GfxFileSystem::Load07(std::string_view path, int32_t mode) {
  gfx::FileLoader* loader = loader_;
  const gfx::FileRequest request{path, GetMemory(path), ToLoadMode(mode)};
  return loader->Load07(request);
}

void* GfxFileSystem::Load08(std::string_view path) {
  gfx::FileLoader* loader = loader_;
  const gfx::FileRequest request{path, GetMemory(path),
    gfx::LoadMode::kAsync};
  return loader->Load08(request);
}

void* GfxFileSystem::Load10(std::string_view path) {
  gfx::FileLoader* loader = loader_;
  const gfx::FileRequest request{path, GetMemory(path),
    gfx::LoadMode::kAsync};
  return loader->Load10(request);
}

void* GfxFileSystem::Load11(std::string_view path) {
  gfx::FileLoader* loader = loader_;
  const gfx::FileRequest request{path, GetMemory(path),
    gfx::LoadMode::kAsync};
  return loader->Load11(request);
}

void* GfxFileSystem::Load12(std::string_view path, int32_t mode) {
  return loader_->Load12(path.data(), path.size(), 0, ToLoadMode(mode));
}

}
