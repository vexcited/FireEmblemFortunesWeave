#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_ref_base.hpp"
#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/movie_interfaces.hpp"
#include "nn/os/mutex.hpp"

namespace movie::detail {

class ByteStreamOnBuffer : public MovieRefBase<IByteStream> {
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

  ByteStreamOnBuffer(IAllocator* allocator, ITaskQueue* taskQueue,
    const uint8_t* data, size_t size);
  ~ByteStreamOnBuffer() override;

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

  void ReadTask(ReadAsyncResult* result);
  MovieResult ProcessRead(ReadAsyncResult* result);
  void QueueAsyncCallback(ReadAsyncResult* result);

private:
  mutable nn::os::Mutex m_Mutex;
  bool m_IsFinalized;
  const uint8_t* m_pData;
  size_t m_Size;
  size_t m_Position;
  bool m_IsOpen;
  RefPtr<ITaskQueue> m_pTaskQueue;
};

}
