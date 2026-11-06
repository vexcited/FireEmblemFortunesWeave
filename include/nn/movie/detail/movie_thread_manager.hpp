#pragma once

#include <list>
#include <stddef.h>
#include <stdint.h>

#include "nn/movie/detail/movie_message.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/result.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t size, AllocatorInfo* allocatorInfo);
void FreeMemory(void* address, AllocatorInfo* allocatorInfo);

template <typename T>
class MovieAllocator {
public:
  using value_type = T;

  explicit MovieAllocator(AllocatorInfo* allocatorInfo)
    : m_pAllocatorInfo(allocatorInfo) {}

  template <typename U>
  MovieAllocator(const MovieAllocator<U>& other)
    : m_pAllocatorInfo(other.GetAllocatorInfo()) {}

  T* allocate(size_t count) {
    return static_cast<T*>(
      AllocateMemory(count * sizeof(T), m_pAllocatorInfo));
  }

  void deallocate(T* address, size_t) {
    FreeMemory(address, m_pAllocatorInfo);
  }

  AllocatorInfo* GetAllocatorInfo() const {
    return m_pAllocatorInfo;
  }

  bool operator==(const MovieAllocator& other) const {
    return m_pAllocatorInfo == other.m_pAllocatorInfo;
  }

private:
  AllocatorInfo* m_pAllocatorInfo;
};

struct ThreadInfo {
  enum ComponentType : int32_t {
    ComponentType_Muxer = 5,
    ComponentType_Count = 8,
  };

  os::ThreadType thread;
  ComponentType componentType;
};

#define NN_MOVIE_DETAIL_THREAD_MANAGER_DEFINED

class ThreadManager {
public:
  static constexpr int DefaultThreadPriority = 16;

  static ThreadManager* GetInstance();

  static int _StaticCreate(ThreadInfo::ComponentType type,
    ThreadInfo** threadInfo, void (*entry)(void*), void* argument,
    void* stack, size_t stackSize, int priority, const char* name,
    uint64_t coreMask, void* instance);

  // Internal to the movie module and pinned by address.
  void _Destroy(ThreadInfo* threadInfo);

  void _SetCoreMask(uint64_t coreMask);
  uint32_t _GetDefaultCoreMask();
  void _SetThreadPriority(int priority);
  void _ChangeThreadPriority(ThreadInfo* threadInfo, int priority);
  void _SetThreadPriorityByComponentType(ThreadInfo::ComponentType type,
    int priority);
  int _GetThreadPriorityByComponentType(ThreadInfo::ComponentType type);
  void _SetThreadCoreMaskByComponentType(ThreadInfo::ComponentType type,
    uint64_t coreMask);
  uint64_t _GetThreadCoreMaskByComponentType(ThreadInfo::ComponentType type);
  void _SetThreadPriorityByInstance(void* instance, int priority);
  int _GetThreadPriorityByInstance(void* instance);
  void _SetThreadCoreMaskByInstance(void* instance, uint64_t coreMask);
  uint64_t _GetThreadCoreMaskByInstance(void* instance);
  void _RemoveThreadConfigurationByInstance(void* instance);
  int _GetDefaultThreadPriority();
  void _SetDefaultAudioThreadPriority(int priority);
  int _GetDefaultAudioThreadPriority();
  void _SetStackAllocator(void* (*allocate)(size_t, size_t, void*),
    void (*free)(void*, void*), void* userData);
  void _ResetStackAllocator();
  bool _IsStackAllocatorConfigured();
  void* _StackAllocate(size_t size, size_t alignment);
  void _StackFree(void* address);

private:
  struct ComponentConfiguration {
    int priority;
    uint64_t coreMask;
    uint64_t reserved[2];
  };

  struct InstanceConfiguration {
    int priority = DefaultThreadPriority;
    uint64_t coreMask = os::GetThreadAvailableCoreMask();
    void* instance = nullptr;
    os::ThreadType* thread = nullptr;
  };

  AllocatorInfo* m_pAllocatorInfo;
  std::list<ThreadInfo, MovieAllocator<ThreadInfo>> m_Threads;
  os::SdkMutexType m_Mutex;
  uint64_t m_Reserved[4];
  int m_DefaultThreadPriority;
  int m_DefaultAudioThreadPriority;
  uint64_t m_DefaultCoreMask;
  ComponentConfiguration m_Components[ThreadInfo::ComponentType_Count];
  std::list<InstanceConfiguration, MovieAllocator<InstanceConfiguration>>
    m_Instances;
  void* (*m_StackAllocate)(size_t, size_t, void*);
  void (*m_StackFree)(void*, void*);
  void* m_StackUserData;
};

}
