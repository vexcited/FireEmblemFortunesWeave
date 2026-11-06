#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/movie_result.hpp"
#include "nn/os/time.hpp"

namespace movie {

class IMovieInterface {
public:
  virtual void AddRef() = 0;
  virtual void Release() = 0;
};

class IMovieObject : public IMovieInterface {
public:
  virtual MovieResult Initialize() = 0;
  virtual void Finalize() = 0;
  virtual MovieResult GetInterface(void** ppOutInterface, int id) = 0;
};

class IAllocator : public IMovieObject {
public:
  virtual void* Allocate(size_t size) = 0;
  virtual void* Allocate(size_t size, size_t alignment) = 0;
  virtual void Free(void* address) = 0;
  virtual void* Reallocate(void* address, size_t size) = 0;
};

}

namespace nn::os {

struct EventType;
struct SemaphoreType;
struct SystemEventType;

}

namespace nn::socket {

struct FdSet;

}

namespace movie {

class IAsyncCallback;
class IAsyncResult;
class ITaskQueueCancellationToken;

class ITask : public IMovieInterface {
public:
  virtual void Run() = 0;
};
class ITaskQueueRegistrationToken;

class ITaskQueueCancellationToken : public IMovieInterface {
};

class ISerialTaskQueue : public IMovieInterface {
public:
  virtual void Finalize() = 0;
  virtual MovieResult QueueTask(ITask* task) = 0;
  virtual MovieResult QueueTask(ITaskQueueCancellationToken** ppOutToken,
    ITask* task) = 0;
  virtual void CancelTask(ITaskQueueCancellationToken* token) = 0;
  virtual MovieResult QueueAsyncCallback(IAsyncCallback* callback) = 0;
};

class ITaskQueue : public IMovieObject {
public:
  enum ThreadEvent : int32_t {
    ThreadEvent_None,
  };

  virtual MovieResult QueueTask(ITask* task) = 0;
  virtual MovieResult QueueTask(ITaskQueueCancellationToken** ppOutToken,
    ITask* task) = 0;
  virtual MovieResult QueueOneShotTimerTask(
    ITaskQueueCancellationToken** ppOutToken, nn::TimeSpan delay,
    ITask* task) = 0;
  virtual MovieResult QueuePeriodicTimerTask(
    ITaskQueueCancellationToken** ppOutToken, nn::TimeSpan delay,
    nn::TimeSpan period, ITask* task) = 0;
  virtual MovieResult CancelTask(ITaskQueueCancellationToken* token) = 0;
  virtual MovieResult QueueAsyncCallback(IAsyncCallback* callback) = 0;
  virtual MovieResult RegisterEventHandler(
    ITaskQueueRegistrationToken** ppOutToken, nn::os::EventType* event,
    ITask* task) = 0;
  virtual MovieResult RegisterSystemEventHandler(
    ITaskQueueRegistrationToken** ppOutToken,
    nn::os::SystemEventType* event, ITask* task) = 0;
  virtual MovieResult RegisterSemaphoreAcquiredHandler(
    ITaskQueueRegistrationToken** ppOutToken,
    nn::os::SemaphoreType* semaphore, ITask* task) = 0;
  virtual MovieResult RegisterSocketEventHandler(
    ITaskQueueRegistrationToken** ppOutToken, int socket,
    nn::socket::FdSet* readSet, nn::socket::FdSet* writeSet,
    nn::socket::FdSet* exceptSet, IAsyncCallback* callback) = 0;
  virtual MovieResult UpdateSocketEventHandler(
    ITaskQueueRegistrationToken* token, int socket,
    nn::socket::FdSet* readSet, nn::socket::FdSet* writeSet,
    nn::socket::FdSet* exceptSet) = 0;
  virtual MovieResult GetSocketEventResult(bool* pOutIsSignaled,
    nn::socket::FdSet* readSet, nn::socket::FdSet* writeSet,
    nn::socket::FdSet* exceptSet, IAsyncResult* result) = 0;
  virtual MovieResult UnregisterEventHandler(
    ITaskQueueRegistrationToken* token) = 0;
  virtual MovieResult UnregisterEventHandlerAsync(
    ITaskQueueRegistrationToken* token) = 0;
  virtual MovieResult RegisterThreadEventHandler(
    IAsyncCallback* callback) = 0;
  virtual MovieResult UnregisterThreadEventHandler(
    IAsyncCallback* callback) = 0;
  virtual MovieResult GetThreadEventResult(ThreadEvent* pOutEvent,
    IAsyncResult* result) = 0;
};

class ITaskQueueManager : public IMovieObject {
public:
  virtual MovieResult SetAllocator(IAllocator* allocator) = 0;
  virtual MovieResult GetTaskQueue(ITaskQueue** ppOutTaskQueue) = 0;
};

MovieResult CreateTaskQueue(ITaskQueue** ppOutTaskQueue,
  IAllocator* allocator, uint32_t priority, uint32_t coreMask);

}

namespace movie {

class IBuffer : public IMovieInterface {
public:
  virtual size_t GetCapacity() const = 0;
  virtual size_t GetSize() const = 0;
  virtual MovieResult SetSize(size_t size) = 0;
  virtual uint8_t* GetBuffer() const = 0;
  virtual MovieResult Grow(size_t capacity) = 0;
  virtual MovieResult Shrink() = 0;
  virtual bool IsResizable() const = 0;
  virtual int Compare(IBuffer* other) const = 0;
};

}

namespace nn::movie {

class MediaProperty;

}

namespace movie {

struct EncryptionProperty {
  uint8_t data[2104];
};

// Accessor names besides the buffer and property ones are guessed from
// their types.
class ISample : public IMovieInterface {
public:
  virtual int GetTrackIndex() const = 0;
  virtual void SetTrackIndex(int index) = 0;
  virtual int64_t GetPresentationTime() const = 0;
  virtual void SetPresentationTime(int64_t time) = 0;
  virtual int64_t GetDecodeTime() const = 0;
  virtual void SetDecodeTime(int64_t time) = 0;
  virtual int64_t GetDuration() const = 0;
  virtual void SetDuration(int64_t duration) = 0;
  virtual bool IsSyncSample() const = 0;
  virtual void SetSyncSample(bool isSyncSample) = 0;
  virtual bool IsEncrypted() const = 0;
  virtual void SetEncrypted(bool isEncrypted) = 0;
  virtual bool IsEOSSample() const = 0;
  virtual MovieResult GetBuffer(IBuffer** ppOutBuffer) = 0;
  virtual MovieResult SetBuffer(IBuffer* buffer) = 0;
  virtual MovieResult GetProperties(
    nn::movie::MediaProperty** ppOutProperties) = 0;
  virtual MovieResult GetEncryptionProperties(
    EncryptionProperty** ppOutProperties) = 0;
};

MovieResult CreateSample(ISample** ppOutSample, IAllocator* allocator);

}

namespace movie {

class IAsyncResult : public IMovieInterface {
public:
  virtual MovieResult GetResult() const = 0;
};

// Only the two invoke slots are known to be called, the others are not.
class IAsyncCallback : public IMovieInterface {
public:
  virtual MovieResult Initialize() = 0;
  virtual void Finalize() = 0;
  virtual void Invoke(IAsyncResult* result) = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  // Queued callbacks are invoked without a result.
  virtual void Invoke() = 0;
};

class IMovieActiveObject : public IMovieObject {
public:
  virtual bool IsFinalized() const = 0;
  virtual MovieResult GetStatus() const = 0;
};

class IByteStream : public IMovieActiveObject {
public:
  virtual MovieResult IsEndOfStream(bool* pOutIsEndOfStream) = 0;
  virtual MovieResult GetLength(size_t* pOutLength) = 0;
  virtual MovieResult StartAsyncRead(uint8_t* buffer, size_t size,
    IAsyncCallback* callback) = 0;
  virtual MovieResult CompleteAsyncRead(size_t* pOutReadSize,
    IAsyncResult* result) = 0;
  virtual void Close() = 0;
};

MovieResult CreateByteStreamOnBuffer(IByteStream** ppOutStream,
  const void* data, size_t size, ITaskQueue* taskQueue,
  IAllocator* allocator);

}
