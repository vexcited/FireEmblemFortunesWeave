#include <algorithm>
#include <cstring>
#include <new>
#include <strings.h>

#include "movie/detail/movie_file_byte_stream.hpp"
#include "movie/detail/movie_task.hpp"
#include "movie/detail/movie_utils.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/fs/fs_file.hpp"

namespace movie::detail {

namespace {

constexpr MovieResult StatusFinalized = static_cast<MovieResult>(19);
constexpr MovieResult StatusClosed = static_cast<MovieResult>(24);
constexpr int OpenModeRead = 1;

}

FileByteStream::ReadAsyncResult::ReadAsyncResult(IAllocator* allocator,
  size_t position, uint8_t* buffer, size_t size, IAsyncCallback* callback)
  : MovieRefBase(allocator), m_Result(MovieResult_Success),
    m_Position(position), m_pBuffer(buffer), m_Size(size), m_ReadSize(0),
    m_pCallback(callback) {
}

MovieResult FileByteStream::ReadAsyncResult::GetResult() const {
  return m_Result;
}

FileByteStream::FileByteStream(IAllocator* allocator, ITaskQueue* taskQueue,
  const char* path, size_t offset, uint32_t length)
  : MovieRefBase(allocator), m_Mutex(false), m_IsFinalized(false),
    m_Offset(offset), m_Length(length), m_File{}, m_IsFileOpen(false),
    m_Position(0), m_Size(0), m_pTaskQueue(taskQueue) {
  if (strncasecmp(path, "file://", 7) == 0) {
    path += 7;
  }

  size_t size = std::strlen(path) + 1;
  void* data = nullptr;
  uint32_t dataSize = 0;
  bool isZeroFilled = false;
  IAllocator* owner = nullptr;
  if (size != 0) {
    data = allocator->Allocate(size, 1);
    if (data != nullptr) {
      std::memset(data, 0, size);
      allocator->AddRef();
      std::strcpy(static_cast<char*>(data), path);
      dataSize = size;
      isZeroFilled = true;
      owner = allocator;
    }
  }

  m_Path.Assign(data, dataSize, isZeroFilled, owner);
}

FileByteStream::~FileByteStream() {
  Finalize();
}

MovieResult FileByteStream::Initialize() {
  if (m_Path.pData == nullptr) {
    return MovieResult_OutOfMemory;
  }

  if (nn::fs::OpenFile(&m_File, static_cast<const char*>(m_Path.pData),
      OpenModeRead).IsFailure()) {
    return MovieResult_Unknown;
  }

  int64_t fileSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::fs::GetFileSize(&fileSize, m_File));
  if (fileSize >= 1) {
    m_Size = fileSize;
  }

  if (m_Length != 0) {
    size_t start = std::min(m_Offset, m_Size);
    size_t end = start + m_Length;
    if (end <= start) {
      end = m_Size;
    }
    else {
      end = std::min(end, m_Size);
    }

    m_Position = start;
    m_Size = end - start;
  }

  m_IsFileOpen = true;
  return MovieResult_Success;
}

void FileByteStream::InternalClose() {
  if (m_IsFileOpen) {
    nn::fs::CloseFile(m_File);
    m_IsFileOpen = false;
  }
}

void FileByteStream::Finalize() {
  m_Mutex.Lock();
  if (!m_IsFinalized) {
    InternalClose();
    m_IsFinalized = true;
  }

  m_Mutex.Unlock();
}

MovieResult FileByteStream::GetInterface(void** ppOutInterface, int id) {
  *ppOutInterface = nullptr;
  return MovieResult_MessageNotProcessed;
}

bool FileByteStream::IsFinalized() const {
  m_Mutex.Lock();
  bool isFinalized = m_IsFinalized;
  m_Mutex.Unlock();
  return isFinalized;
}

MovieResult FileByteStream::GetStatus() const {
  m_Mutex.Lock();
  MovieResult status = m_IsFinalized ? StatusFinalized : MovieResult_Success;
  m_Mutex.Unlock();
  return status;
}

MovieResult FileByteStream::IsEndOfStream(bool* pOutIsEndOfStream) {
  *pOutIsEndOfStream = false;
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = StatusFinalized;
  }
  else if (m_IsFileOpen) {
    result = MovieResult_Success;
    *pOutIsEndOfStream = m_Position >= m_Size + m_Offset;
  }
  else {
    result = StatusClosed;
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult FileByteStream::GetLength(size_t* pOutLength) {
  *pOutLength = 0;
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = StatusFinalized;
  }
  else if (m_IsFileOpen) {
    result = MovieResult_Success;
    *pOutLength = m_Size;
  }
  else {
    result = StatusClosed;
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult FileByteStream::StartAsyncRead(uint8_t* buffer, size_t size,
  IAsyncCallback* callback) {
  if (size == 0) {
    return MovieResult_InvalidArgument;
  }

  m_Mutex.Lock();
  MovieResult status;
  if (m_IsFinalized) {
    status = StatusFinalized;
  }
  else if (!m_IsFileOpen) {
    status = StatusClosed;
  }
  else {
    IAllocator* allocator = m_pAllocator;
    void* storage = allocator->Allocate(sizeof(ReadAsyncResult));
    if (storage == nullptr) {
      status = MovieResult_OutOfMemory;
    }
    else {
      RefPtr<ReadAsyncResult> result(new (storage) ReadAsyncResult(allocator,
        m_Position, buffer, size, callback));
      RefPtr<FileByteStream> self(this);
      status = QueueTask(m_pAllocator, m_pTaskQueue.Get(),
        [this, self, result]() {
          ReadTask(result.Get());
        });
      if (IsSucceeded(status)) {
        status = MovieResult_Success;
        m_Position += size;
      }
    }
  }

  m_Mutex.Unlock();
  return status;
}

MovieResult FileByteStream::CompleteAsyncRead(size_t* pOutReadSize,
  IAsyncResult* result) {
  *pOutReadSize = 0;
  auto* readResult = static_cast<ReadAsyncResult*>(result);
  if (!IsSucceeded(readResult->m_Result)) {
    return readResult->m_Result;
  }

  *pOutReadSize = readResult->m_ReadSize;
  return MovieResult_Success;
}

void FileByteStream::Close() {
  m_Mutex.Lock();
  if (!m_IsFinalized) {
    InternalClose();
  }

  m_Mutex.Unlock();
}

void FileByteStream::ReadTask(ReadAsyncResult* result) {
  result->m_Result = ProcessRead(result);
  QueueAsyncCallback(result);
}

__attribute__((noinline))
MovieResult FileByteStream::ProcessRead(ReadAsyncResult* result) {
  m_Mutex.Lock();
  MovieResult status;
  if (m_IsFinalized) {
    status = StatusFinalized;
  }
  else if (m_IsFileOpen) {
    status = MovieResult_Success;
    size_t position = result->m_Position;
    size_t end = m_Size + m_Offset;
    if (end > position) {
      size_t size = std::min(end - position, result->m_Size);
      if (size != 0) {
        status = ConvertNnMovieToMovieResult(nn::fs::ReadFile(m_File,
          position, result->m_pBuffer, size));
        if (IsSucceeded(status)) {
          result->m_ReadSize = size;
          status = MovieResult_Success;
        }
      }
    }
  }
  else {
    status = StatusClosed;
  }

  m_Mutex.Unlock();
  return status;
}

void FileByteStream::QueueAsyncCallback(ReadAsyncResult* result) {
  IAsyncCallback* callback = result->m_pCallback.Detach();
  callback->Invoke(result);
  m_pTaskQueue->QueueAsyncCallback(callback);
  callback->Release();
}

}

namespace movie {

namespace {

MovieResult CreateFileStream(IByteStream** ppOutStream, const char* path,
  size_t offset, uint32_t length, ITaskQueue* taskQueue,
  IAllocator* allocator) {
  *ppOutStream = nullptr;
  void* storage = allocator->Allocate(sizeof(detail::FileByteStream));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  IByteStream* stream = new (storage) detail::FileByteStream(allocator,
    taskQueue, path, offset, length);
  stream->AddRef();
  MovieResult result = stream->Initialize();
  if (result != MovieResult_Success) {
    stream->Finalize();
    stream->Release();
    if (result != MovieResult_EndOfStream) {
      return result;
    }

    stream = nullptr;
  }

  *ppOutStream = stream;
  return MovieResult_Success;
}

}

MovieResult CreateByteStreamForFile(IByteStream** ppOutStream,
  const char* path, ITaskQueue* taskQueue, IAllocator* allocator) {
  return CreateFileStream(ppOutStream, path, 0, 0, taskQueue, allocator);
}

MovieResult CreateByteStreamForFile(IByteStream** ppOutStream,
  const char* path, size_t offset, uint32_t length, ITaskQueue* taskQueue,
  IAllocator* allocator) {
  return CreateFileStream(ppOutStream, path, offset, length, taskQueue,
    allocator);
}

}
