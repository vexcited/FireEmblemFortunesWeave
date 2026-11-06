#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_ref_base.hpp"
#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/movie_interfaces.hpp"
#include "movie/movie_memory_buffer.hpp"
#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/os/mutex.hpp"

namespace movie::detail {

// Reads a window of a file, the whole file when the length is 0.
class FileByteStream : public MovieRefBase<IByteStream> {
public:
  class ReadAsyncResult : public MovieRefBase<IAsyncResult> {
  public:
    ReadAsyncResult(IAllocator* allocator, size_t position, uint8_t* buffer,
      size_t size, IAsyncCallback* callback);

    MovieResult GetResult() const override;

    MovieResult m_Result;
    size_t m_Position;
    uint8_t* m_pBuffer;
    size_t m_Size;
    size_t m_ReadSize;
    RefPtr<IAsyncCallback> m_pCallback;
  };

  FileByteStream(IAllocator* allocator, ITaskQueue* taskQueue,
    const char* path, size_t offset, uint32_t length);
  ~FileByteStream() override;

  MovieResult Initialize() override;
  void Finalize() override;
  MovieResult GetInterface(void** ppOutInterface, int id) override;
  bool IsFinalized() const override;
  MovieResult GetStatus() const override;
  MovieResult IsEndOfStream(bool* pOutIsEndOfStream) override;
  MovieResult GetLength(size_t* pOutLength) override;
  MovieResult StartAsyncRead(uint8_t* buffer, size_t size,
    IAsyncCallback* callback) override;
  MovieResult CompleteAsyncRead(size_t* pOutReadSize,
    IAsyncResult* result) override;
  void Close() override;

  void InternalClose();
  void ReadTask(ReadAsyncResult* result);
  MovieResult ProcessRead(ReadAsyncResult* result);
  void QueueAsyncCallback(ReadAsyncResult* result);

private:
  mutable nn::os::Mutex m_Mutex;
  bool m_IsFinalized;
  AllocatedMemory m_Path;
  size_t m_Offset;
  uint32_t m_Length;
  nn::fs::FileHandle m_File;
  bool m_IsFileOpen;
  size_t m_Position;
  size_t m_Size;
  RefPtr<ITaskQueue> m_pTaskQueue;
};

}

namespace movie {

MovieResult CreateByteStreamForFile(IByteStream** ppOutStream,
  const char* path, ITaskQueue* taskQueue, IAllocator* allocator);
MovieResult CreateByteStreamForFile(IByteStream** ppOutStream,
  const char* path, size_t offset, uint32_t length, ITaskQueue* taskQueue,
  IAllocator* allocator);

}
