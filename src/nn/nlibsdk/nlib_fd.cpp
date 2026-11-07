#include <errno.h>
#include <stddef.h>
#include <stdint.h>

#include "nn/nlibsdk/posix_tls.hpp"

namespace {

struct FileStatus {
  uint8_t reserved0[0x30];
  int64_t size;
  uint8_t reserved1[0x48];
};

}

extern "C" {

ptrdiff_t read(int fd, void* buffer, size_t size);
ptrdiff_t write(int fd, const void* buffer, size_t size);
int64_t lseek(int fd, int64_t offset, int whence);
int fstat(int fd, FileStatus* status);
ptrdiff_t pread(int fd, void* buffer, size_t size, int64_t offset);
ptrdiff_t pwrite(int fd, const void* buffer, size_t size, int64_t offset);
int ftruncate(int fd, int64_t size);

}

namespace {

using nn::nlibsdk::NotifyThreadPool;

constexpr int EBusy = 16;
constexpr int EInval = 22;
constexpr int EOverflow = 75;
constexpr int SeekEnd = 2;

// The status is retried while the file is busy.
[[gnu::always_inline]] inline int GetFileSize(int64_t* pOutSize, int fd) {
  NotifyThreadPool(1, 1);
  FileStatus status = {};
  int result;
  for (;;) {
    if (fstat(fd, &status) == 0) {
      *pOutSize = status.size;
      result = 0;
      break;
    }
    result = errno;
    if (result != EBusy) {
      break;
    }
  }
  NotifyThreadPool(1, 1);
  return result;
}

bool IsValidBuffer(const void* buffer, size_t size) {
  return buffer != nullptr && static_cast<ptrdiff_t>(size) >= 0;
}

}

extern "C" {

// A read past the end of the file reports nothing read.
int nnmem_nlib_fd_read(size_t* pOutRead, int fd, void* buffer, size_t size) {
  NotifyThreadPool(1, 1);
  int result = EInval;
  if (IsValidBuffer(buffer, size)) {
    ptrdiff_t count = read(fd, buffer, size);
    if (count < 0) {
      result = errno;
      if (result == EOverflow) {
        count = 0;
        result = 0;
      }
    }
    else {
      result = 0;
    }
    if (result == 0) {
      *pOutRead = static_cast<size_t>(count);
    }
  }
  NotifyThreadPool(1, 1);
  return result;
}

int nnmem_nlib_fd_write(size_t* pOutWritten, int fd, const void* buffer,
  size_t size) {
  NotifyThreadPool(1, 1);
  int result = EInval;
  if (IsValidBuffer(buffer, size)) {
    ptrdiff_t count = write(fd, buffer, size);
    if (count < 0) {
      result = errno;
    }
    else {
      result = 0;
      *pOutWritten = static_cast<size_t>(count);
    }
  }
  NotifyThreadPool(1, 1);
  return result;
}

// Seeking from the end is refused.
int nnmem_nlib_fd_seek(int64_t* pOutOffset, int fd, int64_t offset,
  int whence) {
  NotifyThreadPool(1, 1);
  int result;
  if (whence == SeekEnd) {
    result = EInval;
  }
  else {
    int64_t position = lseek(fd, offset, whence);
    if (position == -1) {
      result = errno;
    }
    else {
      result = 0;
      *pOutOffset = position;
    }
  }
  NotifyThreadPool(1, 1);
  return result;
}

// Reading at an offset past the size reports nothing read without reading.
int nnmem_nlib_fd_pread(size_t* pOutRead, int fd, void* buffer, size_t size,
  int64_t offset) {
  NotifyThreadPool(1, 1);
  int result = EInval;
  if (IsValidBuffer(buffer, size)) {
    int64_t fileSize = 0;
    result = GetFileSize(&fileSize, fd);
    if (result == 0) {
      if (offset > fileSize) {
        *pOutRead = 0;
      }
      else {
        ptrdiff_t count = pread(fd, buffer, size, offset);
        if (count < 0) {
          result = errno;
        }
        else {
          *pOutRead = static_cast<size_t>(count);
        }
      }
    }
  }
  NotifyThreadPool(1, 1);
  return result;
}

int nnmem_nlib_fd_getsize(int64_t* pOutSize, int fd) {
  return GetFileSize(pOutSize, fd);
}

int nnmem_nlib_fd_pwrite(size_t* pOutWritten, int fd, const void* buffer,
  size_t size, int64_t offset) {
  NotifyThreadPool(1, 1);
  int result = EInval;
  if (IsValidBuffer(buffer, size)) {
    ptrdiff_t count = pwrite(fd, buffer, size, offset);
    if (count < 0) {
      result = errno;
    }
    else {
      result = 0;
      *pOutWritten = static_cast<size_t>(count);
    }
  }
  NotifyThreadPool(1, 1);
  return result;
}

int nnmem_nlib_fd_truncate(int fd, int64_t size) {
  NotifyThreadPool(1, 1);
  int result;
  if (size < 0) {
    result = EInval;
  }
  else {
    result = ftruncate(fd, size) != 0 ? errno : 0;
  }
  NotifyThreadPool(1, 1);
  return result;
}

}
