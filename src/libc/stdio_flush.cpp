/*
 * SPDX-License-Identifier: MIT
 * Origin: musl fflush.c, __stdio_exit.c, ofl.c and file-locking routines.
 * Revision: 57b97b42bdecafd81c4967a10aef6eaf43d3fcb8.
 * Copyright (c) 2005-2014 Rich Felker, et al.
 * License: https://git.musl-libc.org/cgit/musl/tree/COPYRIGHT
 * The full MIT notice is included in src/rtld/string.cpp.
 */

#include "libc/stdio.hpp"

#include <stddef.h>
#include <stdint.h>

#include "nn/os/synchronization.hpp"

namespace {

struct FilePrefix {
  unsigned char reserved00[8];
  unsigned char* read_position;
  unsigned char* read_end;
  unsigned char reserved18[8];
  unsigned char* write_end;
  unsigned char* write_position;
  unsigned char reserved30[8];
  unsigned char* write_base;
  unsigned char reserved40[8];
  size_t (*write)(libc::File*, const unsigned char*, size_t);
  int64_t (*seek)(libc::File*, int64_t, int);
  unsigned char reserved58[24];
  libc::File* next;
  unsigned char reserved78[10];
  int8_t lock_mode;
  unsigned char reserved83;
  nn::os::SdkRecursiveMutexType mutex;
};

struct OpenFileList {
  nn::os::SdkMutexType mutex;
  uint32_t reserved04;
  libc::File* head;
};

static_assert(offsetof(FilePrefix, read_position) == 8);
static_assert(offsetof(FilePrefix, write_end) == 32);
static_assert(offsetof(FilePrefix, write_position) == 40);
static_assert(offsetof(FilePrefix, write_base) == 56);
static_assert(offsetof(FilePrefix, write) == 72);
static_assert(offsetof(FilePrefix, seek) == 80);
static_assert(offsetof(FilePrefix, next) == 112);
static_assert(offsetof(FilePrefix, lock_mode) == 130);
static_assert(offsetof(FilePrefix, mutex) == 132);
static_assert(sizeof(nn::os::SdkRecursiveMutexType) == 8);
static_assert(offsetof(OpenFileList, head) == 8);

OpenFileList open_file_list;

FilePrefix& State(libc::File* file) {
  return *reinterpret_cast<FilePrefix*>(file);
}

int64_t ReadOffset(const FilePrefix& file) {
  return static_cast<int64_t>(reinterpret_cast<uintptr_t>(file.read_position)
                             - reinterpret_cast<uintptr_t>(file.read_end));
}

}

extern "C" {

extern libc::File* __stdin_used;
extern libc::File* __stdout_used;
extern libc::File* __stderr_used;
void LockQuickExitState(nn::os::SdkMutexType* mutex);
void UnlockQuickExitState(nn::os::SdkMutexType* mutex);

void LockLibcRecursiveMutex(nn::os::SdkRecursiveMutexType* mutex) {
  mutex->Lock();
}

int TryLockLibcRecursiveMutex(nn::os::SdkRecursiveMutexType* mutex) {
  return static_cast<int>(mutex->TryLock()) - 1;
}

void UnlockLibcRecursiveMutex(nn::os::SdkRecursiveMutexType* mutex) {
  mutex->Unlock();
}

int LockFile(libc::File* file) {
  auto& state = State(file);

  if (state.lock_mode < 0) {
    return 0;
  }

  LockLibcRecursiveMutex(&state.mutex);
  return 1;
}

void UnlockFile(libc::File* file) {
  auto& state = State(file);

  if (state.lock_mode >= 1) {
    UnlockLibcRecursiveMutex(&state.mutex);
  }
}

void InitializeFileLock(libc::File* file) {
  auto& state = State(file);

  if (state.lock_mode == 0) {
    state.mutex = {};
    state.lock_mode = 1;
  }
}

void flockfile(libc::File* file) {
  auto& state = State(file);

  if (state.lock_mode < 0) {
    state.lock_mode = 0;
    state.mutex = {};
  }

  LockLibcRecursiveMutex(&state.mutex);
}

int ftrylockfile(libc::File* file) {
  auto& state = State(file);

  if (state.lock_mode < 0) {
    state.lock_mode = 0;
    state.mutex = {};
  }

  return TryLockLibcRecursiveMutex(&state.mutex);
}

void funlockfile(libc::File* file) {
  UnlockLibcRecursiveMutex(&State(file).mutex);
}

libc::File** LockOpenFileList() {
  LockQuickExitState(&open_file_list.mutex);
  return &open_file_list.head;
}

void UnlockOpenFileList() {
  UnlockQuickExitState(&open_file_list.mutex);
}

int fflush(libc::File* file) {
  if (!file) {
    int result = __stdout_used ? fflush(__stdout_used) : 0;

    if (__stderr_used) {
      result |= fflush(__stderr_used);
    }

    for (file = *LockOpenFileList(); file; file = State(file).next) {
      int locked = LockFile(file);

      if (State(file).write_position != State(file).write_base) {
        result |= fflush(file);
      }

      if (locked) {
        UnlockFile(file);
      }
    }

    UnlockOpenFileList();
    return result;
  }

  int locked = LockFile(file);
  auto& state = State(file);

  if (state.write_position != state.write_base) {
    state.write(file, nullptr, 0);

    if (!state.write_position) {
      if (locked) {
        UnlockFile(file);
      }

      return -1;
    }
  }

  if (state.read_position != state.read_end) {
    state.seek(file, ReadOffset(state), 1);
  }

  state.write_base = nullptr;
  state.write_end = nullptr;
  state.write_position = nullptr;
  state.read_position = nullptr;
  state.read_end = nullptr;

  if (locked) {
    UnlockFile(file);
  }

  return 0;
}

}

static void CloseFileForExit(libc::File* file) {
  if (!file) {
    return;
  }

  LockFile(file);
  auto& state = State(file);

  if (state.write_position != state.write_base) {
    state.write(file, nullptr, 0);
  }

  if (state.read_position != state.read_end) {
    state.seek(file, ReadOffset(state), 1);
  }
}

extern "C" void FlushStreamsForExit() {
  for (auto* file = *LockOpenFileList(); file; file = State(file).next) {
    CloseFileForExit(file);
  }

  CloseFileForExit(__stdin_used);
  CloseFileForExit(__stdout_used);
  CloseFileForExit(__stderr_used);
}
