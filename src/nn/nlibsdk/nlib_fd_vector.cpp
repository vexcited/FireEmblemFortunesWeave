#include <stddef.h>
#include <stdint.h>
#include <string.h>

extern "C" {

int nnmem_nlib_fd_read(size_t* pOutRead, int fd, void* buffer, size_t size);
int nnmem_nlib_fd_write(size_t* pOutWritten, int fd, const void* buffer,
  size_t size);
int nnmem_nlib_fd_pread(size_t* pOutRead, int fd, void* buffer, size_t size,
  int64_t offset);
int nnmem_nlib_fd_pwrite(size_t* pOutWritten, int fd, const void* buffer,
  size_t size, int64_t offset);
void* nnmem_nlib_malloc(size_t size);
void nnmem_nlib_free(void* pointer);

}

namespace {

constexpr int ENoMem = 12;
constexpr int EInval = 22;
constexpr unsigned int MaxVectorCount = 1024;
constexpr size_t StackBufferSize = 0x2000;

struct IoVector {
  void* base;
  size_t size;
};

// Returns false when the total does not fit a signed size.
bool GetTotalSize(size_t* pOutSize, const IoVector* vectors,
  unsigned int count) {
  size_t total = 0;
  for (unsigned int i = 0; i < count; ++i) {
    if (vectors[i].size > (total ^ INT64_MAX)) {
      return false;
    }
    total += vectors[i].size;
  }
  *pOutSize = total;
  return true;
}

void Scatter(const IoVector* vectors, unsigned int count,
  const uint8_t* buffer, size_t size) {
  size_t position = 0;
  for (unsigned int i = 0; i < count; ++i) {
    void* base = vectors[i].base;
    size_t length = vectors[i].size;
    if (length + position >= size) {
      if (length >= size - position) {
        memcpy(base, buffer + position, size - position);
      }
      else {
        memset(base, 0, length);
      }
      return;
    }
    memcpy(base, buffer + position, length);
    position += length;
  }
}

void Gather(uint8_t* buffer, size_t size, const IoVector* vectors,
  unsigned int count) {
  size_t position = 0;
  for (unsigned int i = 0; i < count; ++i) {
    size_t length = vectors[i].size;
    if (size - position >= length) {
      memcpy(buffer + position, vectors[i].base, length);
    }
    else {
      memset(buffer + position, 0, size - position);
    }
    position += length;
  }
}

// Vectors are read through one buffer, on the stack up to 8 KB.
template <typename Read>
[[gnu::always_inline]] inline int ReadVectors(size_t* pOutRead,
  const IoVector* vectors, int count, Read read) {
  unsigned int vectorCount = static_cast<unsigned int>(count);
  if (vectorCount > MaxVectorCount) {
    return EInval;
  }
  size_t total = 0;
  if (vectorCount != 0) {
    if (!GetTotalSize(&total, vectors, vectorCount)) {
      return EInval;
    }
  }
  if (total == 0) {
    *pOutRead = 0;
    return 0;
  }
  size_t readSize = 0;
  if (total <= StackBufferSize) {
    uint8_t buffer[StackBufferSize];
    int result = read(&readSize, buffer, total);
    if (result != 0) {
      return result;
    }
    *pOutRead = readSize;
    Scatter(vectors, vectorCount, buffer, readSize);
    return 0;
  }
  uint8_t* buffer = static_cast<uint8_t*>(nnmem_nlib_malloc(total));
  if (buffer == nullptr) {
    return ENoMem;
  }
  int result = read(&readSize, buffer, total);
  if (result != 0) {
    nnmem_nlib_free(buffer);
    return result;
  }
  *pOutRead = readSize;
  Scatter(vectors, vectorCount, buffer, readSize);
  nnmem_nlib_free(buffer);
  return 0;
}

template <typename Write>
[[gnu::always_inline]] inline int WriteVectors(size_t* pOutWritten,
  const IoVector* vectors, int count, Write write) {
  unsigned int vectorCount = static_cast<unsigned int>(count);
  if (vectorCount > MaxVectorCount) {
    return EInval;
  }
  size_t total = 0;
  if (vectorCount != 0) {
    if (!GetTotalSize(&total, vectors, vectorCount)) {
      return EInval;
    }
  }
  if (total == 0) {
    *pOutWritten = 0;
    return 0;
  }
  if (total <= StackBufferSize) {
    uint8_t buffer[StackBufferSize];
    Gather(buffer, total, vectors, vectorCount);
    return write(pOutWritten, buffer, total);
  }
  uint8_t* buffer = static_cast<uint8_t*>(nnmem_nlib_malloc(total));
  if (buffer == nullptr) {
    return ENoMem;
  }
  Gather(buffer, total, vectors, vectorCount);
  int result = write(pOutWritten, buffer, total);
  nnmem_nlib_free(buffer);
  return result;
}

}

extern "C" {

int nnmem_nlib_fd_readv(size_t* pOutRead, int fd, const IoVector* vectors,
  int count) {
  return ReadVectors(pOutRead, vectors, count,
    [fd](size_t* pOut, void* buffer, size_t size) {
      return nnmem_nlib_fd_read(pOut, fd, buffer, size);
    });
}

int nnmem_nlib_fd_writev(size_t* pOutWritten, int fd,
  const IoVector* vectors, int count) {
  return WriteVectors(pOutWritten, vectors, count,
    [fd](size_t* pOut, const void* buffer, size_t size) {
      return nnmem_nlib_fd_write(pOut, fd, buffer, size);
    });
}

int nnmem_nlib_fd_preadv(size_t* pOutRead, int fd, const IoVector* vectors,
  int count, int64_t offset) {
  return ReadVectors(pOutRead, vectors, count,
    [fd, offset](size_t* pOut, void* buffer, size_t size) {
      return nnmem_nlib_fd_pread(pOut, fd, buffer, size, offset);
    });
}

int nnmem_nlib_fd_pwritev(size_t* pOutWritten, int fd,
  const IoVector* vectors, int count, int64_t offset) {
  return WriteVectors(pOutWritten, vectors, count,
    [fd, offset](size_t* pOut, const void* buffer, size_t size) {
      return nnmem_nlib_fd_pwrite(pOut, fd, buffer, size, offset);
    });
}

}
