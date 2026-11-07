#include <errno.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>

#include "nn/os/random.hpp"
#include "nn/os/thread_info.hpp"

extern "C" int pthread_setschedprio(unsigned long thread, int priority);

namespace {

constexpr int EInval = 22;
constexpr int ENoSys = 38;
constexpr int EOpNotSupp = 95;

}

// The file system, process and allocator entry points have no backend on
// this platform.
extern "C" {

int nnmem_nlib_mlock(void*, size_t) {
  return 0;
}

int nnmem_nlib_munlock(void*, size_t) {
  return 0;
}

int nnmem_nlib_mempagesize(size_t* pOutSize) {
  *pOutSize = 0x200000;
  return 0;
}

int nnmem_nlib_gen_random(void* buffer, size_t size) {
  nn::os::GenerateRandomBytes(buffer, size);
  return 0;
}

int nnmem_nlib_yield() {
  nn::os::YieldThread();
  return 0;
}

int nnmem_nlib_thread_create(void*, const void*, void*, void*) {
  return ENoSys;
}

int nnmem_nlib_thread_setpriority(unsigned long thread, int priority) {
  return pthread_setschedprio(thread, priority);
}

int nnmem_nlib_getenv(size_t*, char* buffer, size_t bufferSize,
  const char*) {
  return bufferSize != 0 && buffer == nullptr ? EInval : EOpNotSupp;
}

int nnmem_nlib_fd_open(int*, const char*, unsigned int, int) {
  return ENoSys;
}

int nnmem_nlib_fd_close(int fd) {
  if (close(fd) != 0) {
    return errno;
  }
  return 0;
}

int nnmem_nlib_fd_flush(int) {
  return 0;
}

int nnmem_nlib_fd_sync(int) {
  return 0;
}

int nnmem_nlib_fd_native_handle(void** pOutHandle, int fd) {
  *pOutHandle = reinterpret_cast<void*>(static_cast<intptr_t>(fd));
  return 0;
}

int nnmem_nlib_unlink(const char*) {
  return ENoSys;
}

int nnmem_nlib_mkdir(const char*, unsigned int) {
  return ENoSys;
}

int nnmem_nlib_rmdir(const char*) {
  return ENoSys;
}

int nnmem_nlib_remove(const char*) {
  return ENoSys;
}

int nnmem_nlib_rename(const char*, const char*) {
  return ENoSys;
}

int nnmem_nlib_dir_open(void*, const char*) {
  return ENoSys;
}

int nnmem_nlib_dir_close(void*) {
  return ENoSys;
}

int nnmem_nlib_dir_read(void*, void*) {
  return ENoSys;
}

int nnmem_nlib_is_dir(int*, const char*) {
  return ENoSys;
}

int nnmem_nlib_exist_path(int*, const char*) {
  return ENoSys;
}

int nnmem_nlib_disk_freespace(const char* directory, uint64_t*, uint64_t*,
  uint64_t*) {
  return directory == nullptr ? EInval : EOpNotSupp;
}

int nnmem_nlib_fd_fileid(void*, int) {
  return EOpNotSupp;
}

int nnmem_nlib_readlink(size_t*, const char*, char*, size_t) {
  return EOpNotSupp;
}

void* nnmem_nlib_malloc_(size_t) {
  return nullptr;
}

void nnmem_nlib_free_(void*) {
}

void* nnmem_nlib_calloc_(size_t, size_t) {
  return nullptr;
}

void* nnmem_nlib_realloc_(void*, size_t) {
  return nullptr;
}

void* nnmem_nlib_memalign_(size_t, size_t) {
  return nullptr;
}

void nnmem_nlib_free_size_(void*, size_t) {
}

size_t nnmem_nlib_malloc_size_(const void*) {
  return 0;
}

}
