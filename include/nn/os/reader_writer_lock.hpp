#pragma once

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct ThreadType;

void FinalizeReaderWriterLock(ReaderWriterLockType* lock);
void AcquireReadLock(ReaderWriterLockType* lock);
bool TryAcquireReadLock(ReaderWriterLockType* lock);
void ReleaseReadLock(ReaderWriterLockType* lock);
void AcquireWriteLock(ReaderWriterLockType* lock);
bool TryAcquireWriteLock(ReaderWriterLockType* lock);
void ReleaseWriteLock(ReaderWriterLockType* lock);
bool IsReadLockHeld(const ReaderWriterLockType* lock);
bool IsWriteLockHeldByCurrentThread(const ReaderWriterLockType* lock);
bool IsReaderWriterLockOwnerThread(const ReaderWriterLockType* lock);
Result GetReaderWriterLockOwnerThread(ThreadType** output,
  const ReaderWriterLockType* lock);

namespace detail {

struct ReaderWriterLockImplByHorizon {
  static void AcquireReadLockWriteLocked(ReaderWriterLockType* lock);
  static void AcquireReadLock(ReaderWriterLockType* lock);
  static bool TryAcquireReadLock(ReaderWriterLockType* lock);
  static void ReleaseReadLockWriteLocked(ReaderWriterLockType* lock);
  static void ReleaseWriteLockImpl(ReaderWriterLockType* lock);
  static void ReleaseReadLock(ReaderWriterLockType* lock);
  static void AcquireWriteLock(ReaderWriterLockType* lock);
  static bool TryAcquireWriteLock(ReaderWriterLockType* lock);
  static void ReleaseWriteLock(ReaderWriterLockType* lock);
};

}
}
