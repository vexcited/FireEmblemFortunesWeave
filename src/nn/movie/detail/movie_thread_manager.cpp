#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"

namespace nn::movie::detail {

void ThreadManager::_SetCoreMask(uint64_t coreMask) {
  m_Mutex.Lock();

  if (coreMask != m_DefaultCoreMask) {
    m_DefaultCoreMask = coreMask;
    for (ThreadInfo& info : m_Threads) {
      os::SetThreadCoreMask(&info.thread, -1, coreMask);
    }

    for (ComponentConfiguration& component : m_Components) {
      component.coreMask = coreMask;
    }
  }

  m_Mutex.Unlock();
}

uint32_t ThreadManager::_GetDefaultCoreMask() {
  m_Mutex.Lock();
  uint32_t coreMask = m_DefaultCoreMask;
  m_Mutex.Unlock();
  return coreMask;
}

void ThreadManager::_SetThreadPriority(int priority) {
  m_Mutex.Lock();

  if (priority != m_DefaultThreadPriority) {
    m_DefaultThreadPriority = priority;
    for (ThreadInfo& info : m_Threads) {
      if (info.componentType != 1 ||
          os::GetThreadPriority(&info.thread) > priority) {
        os::ChangeThreadPriority(&info.thread, priority);
      }
    }

    for (ComponentConfiguration& component : m_Components) {
      component.priority = priority;
    }
  }

  m_Mutex.Unlock();
}

void ThreadManager::_ChangeThreadPriority(ThreadInfo* threadInfo,
  int priority) {
  m_Mutex.Lock();

  if (threadInfo != nullptr) {
    for (ThreadInfo& info : m_Threads) {
      if (&info == threadInfo) {
        os::ChangeThreadPriority(&threadInfo->thread, priority);
        break;
      }
    }
  }

  m_Mutex.Unlock();
}

void ThreadManager::_SetThreadPriorityByComponentType(
  ThreadInfo::ComponentType type, int priority) {
  m_Mutex.Lock();

  if (priority != m_Components[type].priority) {
    m_Components[type].priority = priority;
    for (ThreadInfo& info : m_Threads) {
      if (info.componentType == type) {
        os::ChangeThreadPriority(&info.thread, priority);
      }
    }
  }

  m_Mutex.Unlock();
}

int ThreadManager::_GetThreadPriorityByComponentType(
  ThreadInfo::ComponentType type) {
  m_Mutex.Lock();
  int priority = m_Components[type].priority;
  m_Mutex.Unlock();
  return priority;
}

void ThreadManager::_SetThreadCoreMaskByComponentType(
  ThreadInfo::ComponentType type, uint64_t coreMask) {
  m_Mutex.Lock();

  if (coreMask != m_Components[type].coreMask) {
    m_Components[type].coreMask = coreMask;
    for (ThreadInfo& info : m_Threads) {
      if (info.componentType == type) {
        os::SetThreadCoreMask(&info.thread, -1, coreMask);
      }
    }
  }

  m_Mutex.Unlock();
}

uint64_t ThreadManager::_GetThreadCoreMaskByComponentType(
  ThreadInfo::ComponentType type) {
  m_Mutex.Lock();
  uint64_t coreMask = m_Components[type].coreMask;
  m_Mutex.Unlock();
  return coreMask;
}

void ThreadManager::_SetThreadPriorityByInstance(void* instance,
  int priority) {
  m_Mutex.Lock();

  bool isFound = false;
  for (InstanceConfiguration& configuration : m_Instances) {
    if (configuration.instance == instance) {
      configuration.priority = priority;
      if (configuration.thread != nullptr) {
        os::ChangeThreadPriority(configuration.thread, priority);
      }

      isFound = true;
      break;
    }
  }

  if (!isFound) {
    m_Instances.emplace_back();
    m_Instances.back().instance = instance;
    m_Instances.back().priority = priority;
  }

  m_Mutex.Unlock();
}

int ThreadManager::_GetThreadPriorityByInstance(void* instance) {
  if (instance == nullptr) {
    return DefaultThreadPriority;
  }

  m_Mutex.Lock();

  int priority = DefaultThreadPriority;
  for (InstanceConfiguration& configuration : m_Instances) {
    if (configuration.instance == instance) {
      priority = configuration.priority;
      break;
    }
  }

  m_Mutex.Unlock();
  return priority;
}

void ThreadManager::_SetThreadCoreMaskByInstance(void* instance,
  uint64_t coreMask) {
  m_Mutex.Lock();

  bool isFound = false;
  for (InstanceConfiguration& configuration : m_Instances) {
    if (configuration.instance == instance) {
      configuration.coreMask = coreMask;
      if (configuration.thread != nullptr) {
        os::SetThreadCoreMask(configuration.thread, -1, coreMask);
      }

      isFound = true;
      break;
    }
  }

  if (!isFound) {
    m_Instances.emplace_back();
    m_Instances.back().instance = instance;
    m_Instances.back().coreMask = coreMask;
  }

  m_Mutex.Unlock();
}

uint64_t ThreadManager::_GetThreadCoreMaskByInstance(void* instance) {
  if (instance == nullptr) {
    return os::GetThreadAvailableCoreMask();
  }

  m_Mutex.Lock();

  bool isFound = false;
  uint64_t coreMask = 0;
  for (InstanceConfiguration& configuration : m_Instances) {
    if (configuration.instance == instance) {
      coreMask = configuration.coreMask;
      isFound = true;
      break;
    }
  }

  if (!isFound) {
    coreMask = os::GetThreadAvailableCoreMask();
  }

  m_Mutex.Unlock();
  return coreMask;
}

void ThreadManager::_RemoveThreadConfigurationByInstance(void* instance) {
  m_Mutex.Lock();

  for (auto it = m_Instances.begin(); it != m_Instances.end(); ++it) {
    if (it->instance == instance) {
      m_Instances.erase(it);
      break;
    }
  }

  m_Mutex.Unlock();
}

int ThreadManager::_GetDefaultThreadPriority() {
  m_Mutex.Lock();
  int priority = m_DefaultThreadPriority;
  m_Mutex.Unlock();
  return priority;
}

void ThreadManager::_SetDefaultAudioThreadPriority(int priority) {
  m_Mutex.Lock();
  m_DefaultAudioThreadPriority = priority;
  m_Mutex.Unlock();
}

int ThreadManager::_GetDefaultAudioThreadPriority() {
  m_Mutex.Lock();
  int priority = m_DefaultAudioThreadPriority;
  m_Mutex.Unlock();
  return priority;
}

void ThreadManager::_SetStackAllocator(
  void* (*allocate)(size_t, size_t, void*), void (*free)(void*, void*),
  void* userData) {
  m_Mutex.Lock();
  NN_ABORT_UNLESS(m_StackAllocate == nullptr);

  m_StackAllocate = allocate;
  m_StackFree = free;
  m_StackUserData = userData;
  m_Mutex.Unlock();
}

void ThreadManager::_ResetStackAllocator() {
  m_Mutex.Lock();
  m_StackFree = nullptr;
  m_StackUserData = nullptr;
  m_StackAllocate = nullptr;
  m_Mutex.Unlock();
}

bool ThreadManager::_IsStackAllocatorConfigured() {
  m_Mutex.Lock();
  bool isConfigured = m_StackAllocate != nullptr;
  m_Mutex.Unlock();
  return isConfigured;
}

void* ThreadManager::_StackAllocate(size_t size, size_t alignment) {
  m_Mutex.Lock();
  void* stack = m_StackAllocate(size, alignment, m_StackUserData);
  m_Mutex.Unlock();
  return stack;
}

void ThreadManager::_StackFree(void* address) {
  m_Mutex.Lock();
  m_StackFree(address, m_StackUserData);
  m_Mutex.Unlock();
}

static_assert(offsetof(ThreadInfo, componentType) == 448);

}
