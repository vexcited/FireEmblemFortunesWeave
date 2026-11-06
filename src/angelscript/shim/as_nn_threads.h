#ifndef AS_NN_THREADS_H
#define AS_NN_THREADS_H

// The game ports the Windows thread support of AngelScript to nn::os. Its
// critical sections are 0x20 byte mutexes, its read write locks are a mutex
// followed by a 0x28 byte semaphore holding ten readers, and its thread local
// storage uses TLS slots that abort when none is left.

#define AS_CRITICALSECTION_H

#include <stdint.h>

namespace nn {

struct Result {
  uint32_t value;
};

namespace diag {
namespace detail {

[[noreturn]] void AbortImpl(const Result* result);

}
}

namespace os {

struct ThreadType;

struct MutexType {
  uint8_t initialized;
  uint8_t recursive;
  int32_t lock_level;
  uint32_t count;
  ThreadType* owner;
  uint32_t lock;
};

struct SemaphoreType {
  uint64_t storage[5];
};

struct TlsSlot {
  uint32_t value;
};

void InitializeMutex(MutexType* mutex, bool recursive, int lock_level);
void FinalizeMutex(MutexType* mutex);
void LockMutex(MutexType* mutex);
bool TryLockMutex(MutexType* mutex);
void UnlockMutex(MutexType* mutex);

void InitializeSemaphore(SemaphoreType* semaphore, int count, int maximum);
void FinalizeSemaphore(SemaphoreType* semaphore);
void AcquireSemaphore(SemaphoreType* semaphore);
void ReleaseSemaphore(SemaphoreType* semaphore);
void ReleaseSemaphore(SemaphoreType* semaphore, int count);

Result AllocateTlsSlot(TlsSlot* slot, void (*destructor)(uintptr_t));
void FreeTlsSlot(TlsSlot slot);
uintptr_t GetTlsValue(TlsSlot slot);
void SetTlsValue(TlsSlot slot, uintptr_t value);

}
}

static const unsigned int maxReaders = 10;

class asCNnMutex {
public:
  asCNnMutex() {
    m.initialized = 0;
    m.recursive = 0;
    m.lock_level = 0;
    m.count = 0;
    m.owner = nullptr;
    m.lock = 0;
    nn::os::InitializeMutex(&m, false, 0);
  }

  ~asCNnMutex() {
    nn::os::FinalizeMutex(&m);
  }

  nn::os::MutexType m;
};

class asCNnSemaphore {
public:
  asCNnSemaphore() {
    nn::os::InitializeSemaphore(&s, maxReaders, maxReaders);
  }

  ~asCNnSemaphore() {
    nn::os::FinalizeSemaphore(&s);
  }

  asCNnSemaphore& operator=(int) {
    return *this;
  }

  nn::os::SemaphoreType s;
};

typedef unsigned int DWORD;

#define INFINITE 0
#define FALSE 0

inline void InitializeCriticalSection(asCNnMutex*) {
}

inline void DeleteCriticalSection(asCNnMutex*) {
}

inline void EnterCriticalSection(asCNnMutex* x) {
  nn::os::LockMutex(&x->m);
}

inline void LeaveCriticalSection(asCNnMutex* x) {
  nn::os::UnlockMutex(&x->m);
}

inline bool TryEnterCriticalSection(asCNnMutex* x) {
  return nn::os::TryLockMutex(&x->m);
}

inline int CreateSemaphoreW(void*, int, int, int) {
  return 0;
}

inline void CloseHandle(asCNnSemaphore&) {
}

inline void WaitForSingleObjectEx(asCNnSemaphore& x, int, int) {
  nn::os::AcquireSemaphore(&x.s);
}

inline void ReleaseSemaphore(asCNnSemaphore& x, int count, int) {
  if (count == 1) {
    nn::os::ReleaseSemaphore(&x.s);
  }
  else {
    nn::os::ReleaseSemaphore(&x.s, count);
  }
}

inline DWORD TlsAlloc() {
  nn::os::TlsSlot slot;
  nn::Result result = nn::os::AllocateTlsSlot(&slot, nullptr);
  if (result.value != 0) {
    nn::diag::detail::AbortImpl(&result);
  }
  return slot.value;
}

inline void TlsFree(DWORD key) {
  nn::os::FreeTlsSlot({key});
}

inline void* TlsGetValue(DWORD key) {
  return reinterpret_cast<void*>(nn::os::GetTlsValue({key}));
}

inline void TlsSetValue(DWORD key, void* value) {
  nn::os::SetTlsValue({key}, reinterpret_cast<uintptr_t>(value));
}

#define DECLARECRITICALSECTION(x) asCThreadCriticalSection x;
#define ENTERCRITICALSECTION(x) x.Enter()
#define LEAVECRITICALSECTION(x) x.Leave()
#define TRYENTERCRITICALSECTION(x) x.TryEnter()

#define DECLAREREADWRITELOCK(x) asCThreadReadWriteLock x;
#define ACQUIREEXCLUSIVE(x) x.AcquireExclusive()
#define RELEASEEXCLUSIVE(x) x.ReleaseExclusive()
#define ACQUIRESHARED(x) x.AcquireShared()
#define RELEASESHARED(x) x.ReleaseShared()

class asCThreadCriticalSection {
public:
  asCThreadCriticalSection();
  ~asCThreadCriticalSection();

  void Enter();
  void Leave();
  bool TryEnter();

protected:
  asCNnMutex cs;
};

class asCThreadReadWriteLock {
public:
  asCThreadReadWriteLock();
  ~asCThreadReadWriteLock();

  void AcquireExclusive();
  void ReleaseExclusive();

  void AcquireShared();
  void ReleaseShared();

protected:
  asCNnMutex writeLock;
  asCNnSemaphore readLocks;
};

#include "as_config.h"

#undef AS_POSIX_THREADS
#define AS_WINDOWS_THREADS

#endif
