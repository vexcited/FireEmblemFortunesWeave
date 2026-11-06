#include <algorithm>
#include <cstring>
#include <new>

#include "movie/detail/movie_byte_stream_on_buffer.hpp"

namespace movie::detail {

namespace {

constexpr MovieResult StatusFinalized = static_cast<MovieResult>(19);
constexpr MovieResult StatusClosed = static_cast<MovieResult>(24);

}

ByteStreamOnBuffer::ReadAsyncResult::ReadAsyncResult(IAllocator* allocator,
  size_t position, uint8_t* buffer, size_t size, IAsyncCallback* callback)
  : MovieRefBase(allocator), m_Result(MovieResult_Success),
    m_Position(position), m_pBuffer(buffer), m_Size(size), m_ReadSize(0),
    m_pCallback(callback) {
}

MovieResult ByteStreamOnBuffer::ReadAsyncResult::GetResult() const {
  return m_Result;
}

ByteStreamOnBuffer::ByteStreamOnBuffer(IAllocator* allocator,
  ITaskQueue* taskQueue, const uint8_t* data, size_t size)
  : MovieRefBase(allocator), m_Mutex(false), m_IsFinalized(false),
    m_pData(data), m_Size(size), m_Position(0), m_IsOpen(true),
    m_pTaskQueue(taskQueue) {
}

ByteStreamOnBuffer::~ByteStreamOnBuffer() {
  Finalize();
}

MovieResult ByteStreamOnBuffer::Initialize() {
  return MovieResult_Success;
}

void ByteStreamOnBuffer::Finalize() {
  m_Mutex.Lock();
  if (!m_IsFinalized) {
    m_IsOpen = false;
    m_IsFinalized = true;
  }

  m_Mutex.Unlock();
}

MovieResult ByteStreamOnBuffer::GetInterface(void** ppOutInterface, int id) {
  *ppOutInterface = nullptr;
  return MovieResult_MessageNotProcessed;
}

bool ByteStreamOnBuffer::IsFinalized() const {
  m_Mutex.Lock();
  bool isFinalized = m_IsFinalized;
  m_Mutex.Unlock();
  return isFinalized;
}

MovieResult ByteStreamOnBuffer::GetStatus() const {
  m_Mutex.Lock();
  MovieResult status = m_IsFinalized ? StatusFinalized : MovieResult_Success;
  m_Mutex.Unlock();
  return status;
}

MovieResult ByteStreamOnBuffer::IsEndOfStream(bool* pOutIsEndOfStream) {
  *pOutIsEndOfStream = false;
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = StatusFinalized;
  }
  else if (m_IsOpen) {
    result = MovieResult_Success;
    *pOutIsEndOfStream = m_Position >= m_Size;
  }
  else {
    result = StatusClosed;
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult ByteStreamOnBuffer::GetLength(size_t* pOutLength) {
  *pOutLength = 0;
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = StatusFinalized;
  }
  else if (m_IsOpen) {
    result = MovieResult_Success;
    *pOutLength = m_Size;
  }
  else {
    result = StatusClosed;
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult ByteStreamOnBuffer::CompleteAsyncRead(size_t* pOutReadSize,
  IAsyncResult* result) {
  *pOutReadSize = 0;
  auto* readResult = static_cast<ReadAsyncResult*>(result);
  if (!IsSucceeded(readResult->m_Result)) {
    return readResult->m_Result;
  }

  *pOutReadSize = readResult->m_ReadSize;
  return MovieResult_Success;
}

void ByteStreamOnBuffer::Close() {
  m_Mutex.Lock();
  m_IsOpen = false;
  m_Mutex.Unlock();
}

void ByteStreamOnBuffer::ReadTask(ReadAsyncResult* result) {
  result->m_Result = ProcessRead(result);
  QueueAsyncCallback(result);
}

MovieResult ByteStreamOnBuffer::ProcessRead(ReadAsyncResult* result) {
  m_Mutex.Lock();
  MovieResult status;
  if (m_IsFinalized) {
    status = StatusFinalized;
  }
  else if (m_IsOpen) {
    size_t position = result->m_Position;
    if (m_Size > position) {
      size_t size = std::min(m_Size - position, result->m_Size);
      if (size != 0) {
        std::memcpy(result->m_pBuffer, m_pData + position, size);
        result->m_ReadSize = size;
      }
    }

    status = MovieResult_Success;
  }
  else {
    status = StatusClosed;
  }

  m_Mutex.Unlock();
  return status;
}

void ByteStreamOnBuffer::QueueAsyncCallback(ReadAsyncResult* result) {
  IAsyncCallback* callback = result->m_pCallback.Detach();
  callback->Invoke(result);
  m_pTaskQueue->QueueAsyncCallback(callback);
  callback->Release();
}

}

namespace movie {

MovieResult CreateByteStreamOnBuffer(IByteStream** ppOutStream,
  const void* data, size_t size, ITaskQueue* taskQueue,
  IAllocator* allocator) {
  *ppOutStream = nullptr;
  if (size == 0) {
    return MovieResult_InvalidArgument;
  }

  void* storage = allocator->Allocate(sizeof(detail::ByteStreamOnBuffer));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  IByteStream* stream = new (storage) detail::ByteStreamOnBuffer(allocator,
    taskQueue, static_cast<const uint8_t*>(data), size);
  stream->AddRef();
  *ppOutStream = stream;
  return MovieResult_Success;
}

}
