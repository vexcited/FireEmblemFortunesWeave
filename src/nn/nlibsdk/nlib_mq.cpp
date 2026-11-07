#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <atomic>
#include <new>

#include "nn/nlibsdk/lockfree.hpp"
#include "nn/nlibsdk/posix_tls.hpp"

extern "C" {

typedef uint32_t nlib_mq;
typedef void* nlib_mq_msg;
typedef void (*nlib_mq_msg_destructor)(nlib_mq_msg message);

struct nlib_mq_attr {
  int32_t flag;
  int32_t maxmsg;
  int32_t curmsg;
  nlib_mq_msg_destructor destructor;
};

void* nnmem_nlib_malloc(size_t size);
void nnmem_nlib_free(void* pointer);
int nnmem_nlib_gen_random(void* buffer, size_t size);
int nnmem_nlib_cond_wait_until(void* condition, void* mutex,
  int64_t deadline);

}

namespace {

int InitializeMutex(void* mutex, const void* attribute)
  asm("pthread_mutex_init");
int DestroyMutex(void* mutex) asm("pthread_mutex_destroy");
int LockMutex(void* mutex) asm("pthread_mutex_lock");
int UnlockMutex(void* mutex) asm("pthread_mutex_unlock");
int InitializeCondition(void* condition, const void* attribute)
  asm("pthread_cond_init");
int DestroyCondition(void* condition) asm("pthread_cond_destroy");
int WaitCondition(void* condition, void* mutex) asm("pthread_cond_wait");
int SignalCondition(void* condition) asm("pthread_cond_signal");
int BroadcastCondition(void* condition) asm("pthread_cond_broadcast");

using nn::nlibsdk::NotifyThreadPool;

constexpr int EPerm = 1;
constexpr int ENoEnt = 2;
constexpr int EBadF = 9;
constexpr int EAgain = 11;
constexpr int ENoMem = 12;
constexpr int EInval = 22;
constexpr int ENFile = 23;
constexpr int ETimedOut = 110;

constexpr int32_t MqNonBlock = 1;
constexpr int32_t MqLockFree = 2;
constexpr int32_t DefaultMaxMessages = 128;
constexpr int PriorityCount = 32;
constexpr int MaxPriority = PriorityCount - 1;
constexpr size_t HandleCount = 256;

enum MqState {
  MqClosed = 0,
  MqOpen = 1,
  MqReadOnly = 2,
};

enum MqOperation {
  MqLock = 0,
  MqUnlock = 1,
  MqClose = 2,
  MqSetReadOnly = 3,
};

enum MqMode {
  MqNoWait = 0,
  MqUntil = 1,
  MqDrop = 2,
};

}

namespace nn::nlibsdk {

template <class T, class U>
template <class Queue>
int LockFreePlaceHolderPool<T, U>::Init(size_t count, Queue* queues,
  size_t queueCount) {
  if (m_Storage != nullptr) {
    return ENoMem;
  }
  Node* nodes = new (std::nothrow) Node[count];
  if (nodes == nullptr) {
    return ENoMem;
  }
  // Consecutive free nodes are four apart, a cache line each.
  uint64_t previous = 1;
  for (size_t lane = 0; lane < 4; ++lane) {
    size_t i = lane;
    do {
      nodes[i].next.store(previous);
      nodes[i].value = T();
      previous = reinterpret_cast<uintptr_t>(&nodes[i]);
      i += 4;
    } while (i < count);
  }
  m_FreeHead.store(previous, std::memory_order_relaxed);
  m_Storage = nodes;
  uintptr_t first = reinterpret_cast<uintptr_t>(nodes);
  uintptr_t last = reinterpret_cast<uintptr_t>(nodes + count);
  m_Mask = UINT64_MAX >> __builtin_clzll(last ^ first);
  m_Base = first & ~m_Mask;

  // Each queue starts with a dummy node.
  for (size_t i = 0; i < queueCount; ++i) {
    Node* dummy = PopUnsafe();
    queues[i].head.store(reinterpret_cast<uintptr_t>(dummy),
      std::memory_order_relaxed);
    queues[i].tail.store(reinterpret_cast<uintptr_t>(dummy),
      std::memory_order_relaxed);
  }
  return 0;
}

}

namespace {

using Pool = nn::nlibsdk::LockFreePlaceHolderPool<nlib_mq_msg>;
using Node = Pool::Node;

struct MqQueue {
  std::atomic<uint64_t> head;
  std::atomic<uint64_t> tail;
};

Node* AsNode(uint64_t link) {
  return reinterpret_cast<Node*>(link);
}

class nnmem_MqImplBase {
public:
  explicit nnmem_MqImplBase(const nlib_mq_attr& attr) : m_Attr(attr) {
    if (m_Attr.maxmsg <= 0) {
      m_Attr.maxmsg = DefaultMaxMessages;
    }
    m_Attr.curmsg = 0;
  }

  virtual ~nnmem_MqImplBase() {
    delete[] m_Queues;
  }

  virtual int Send(nlib_mq_msg, int, int64_t, int) {
    return EInval;
  }

  virtual int Receive(nlib_mq_msg*, int*, int64_t, int) {
    return EInval;
  }

  virtual int Control(int) {
    return EInval;
  }

  int Init(size_t count) {
    m_Queues = new (std::nothrow) MqQueue[PriorityCount]();
    if (m_Queues == nullptr) {
      return ENoMem;
    }
    return m_Pool.Init(count, m_Queues, PriorityCount);
  }

  bool IsOpen() {
    return m_State.load() != MqClosed;
  }

  void MarkClosed() {
    m_State.store(MqClosed);
  }

  const nlib_mq_attr& GetAttr() const {
    return m_Attr;
  }

protected:
  // The queues of the locked implementations hold plain node pointers.
  Node* PopFree() {
    return m_Pool.PopUnsafe();
  }

  void Push(Node* node, nlib_mq_msg message, int priority) {
    node->value = message;
    node->next.store(1);
    MqQueue& queue = m_Queues[priority];
    AsNode(queue.tail.load(std::memory_order_relaxed))->next.store(
      reinterpret_cast<uintptr_t>(node));
    queue.tail.store(reinterpret_cast<uintptr_t>(node),
      std::memory_order_relaxed);
    m_Mask.fetch_or(1u << priority);
    ++m_Attr.curmsg;
  }

  void Pop(int priority, nlib_mq_msg* pOutMessage, int* pOutPriority) {
    MqQueue& queue = m_Queues[priority];
    Node* dummy = AsNode(queue.head.load(std::memory_order_relaxed));
    Node* next = AsNode(dummy->next.load());
    dummy->next.store(m_Pool.GetFreeHead());
    m_Pool.SetFreeHead(reinterpret_cast<uintptr_t>(dummy));
    queue.head.store(reinterpret_cast<uintptr_t>(next),
      std::memory_order_relaxed);
    *pOutMessage = next->value;
    *pOutPriority = priority;
    if (next == AsNode(queue.tail.load(std::memory_order_relaxed))) {
      m_Mask.fetch_and(~(1u << priority));
    }
    --m_Attr.curmsg;
  }

  // Drop takes the lowest priority, the others the highest.
  static int Select(uint32_t mask, int mode) {
    return mode == MqDrop ? 31 - __builtin_clz(mask) : __builtin_ctz(mask);
  }

  void DestroyMessages() {
    nlib_mq_msg_destructor destructor = m_Attr.destructor;
    if (destructor == nullptr || m_Queues == nullptr) {
      return;
    }
    for (int i = 0; i < PriorityCount; ++i) {
      Node* node = AsNode(m_Queues[i].head.load(std::memory_order_relaxed));
      while ((node->next.load() & 1) == 0) {
        node = AsNode(node->next.load());
        destructor(node->value);
      }
    }
  }

  std::atomic<int32_t> m_State = MqOpen;
  std::atomic<uint32_t> m_Mask = 0;
  nlib_mq_attr m_Attr;
  MqQueue* m_Queues = nullptr;
  Pool m_Pool;
};

class MqImplNonBlock : public nnmem_MqImplBase {
public:
  explicit MqImplNonBlock(const nlib_mq_attr& attr) : nnmem_MqImplBase(attr) {
    InitializeMutex(m_Mutex, nullptr);
  }

  ~MqImplNonBlock() override {
    DestroyMutex(m_Mutex);
    DestroyMessages();
  }

  int Send(nlib_mq_msg message, int priority, int64_t, int mode) override {
    if (mode != MqNoWait) {
      return EInval;
    }
    if (m_State.load() != MqOpen) {
      return m_State.load() != MqClosed ? EPerm : EBadF;
    }
    Node* node = PopFree();
    if (node == nullptr) {
      return EAgain;
    }
    Push(node, message, priority);
    return 0;
  }

  int Receive(nlib_mq_msg* pOutMessage, int* pOutPriority, int64_t,
    int mode) override {
    if (mode == MqUntil) {
      return EInval;
    }
    if (m_State.load() == MqClosed) {
      return EBadF;
    }
    if (m_Mask.load() == 0) {
      return mode == MqDrop ? ENoEnt : EAgain;
    }
    Pop(Select(m_Mask.load(), mode), pOutMessage, pOutPriority);
    return 0;
  }

  int Control(int operation) override {
    if (operation > MqUnlock) {
      m_State.store(operation == MqClose ? MqClosed : MqReadOnly);
      return 0;
    }
    if (operation != MqLock) {
      UnlockMutex(m_Mutex);
    }
    else {
      NotifyThreadPool(1, 1);
      LockMutex(m_Mutex);
      NotifyThreadPool(1, 0);
    }
    return 0;
  }

private:
  uint32_t m_Mutex[2];
};

class MqImplLockFree : public nnmem_MqImplBase {
public:
  explicit MqImplLockFree(const nlib_mq_attr& attr) : nnmem_MqImplBase(attr) {
    m_Users.store(1, std::memory_order_relaxed);
    std::atomic_thread_fence(std::memory_order_seq_cst);
  }

  ~MqImplLockFree() override {
    nlib_mq_msg_destructor destructor = m_Attr.destructor;
    if (destructor == nullptr || m_Queues == nullptr) {
      return;
    }
    for (int i = 0; i < PriorityCount; ++i) {
      uint64_t link = m_Pool.ToNode(m_Queues[i].head.load())->next.load();
      while ((link & 1) == 0) {
        Node* node = m_Pool.ToNode(link);
        destructor(node->value);
        link = node->next.load();
      }
    }
  }

  int Send(nlib_mq_msg message, int priority, int64_t, int mode) override {
    if (m_Users.load(std::memory_order_relaxed) < 1) {
      return EBadF;
    }
    if (mode == MqUntil) {
      return EInval;
    }
    if (m_State.load() == MqClosed) {
      return EBadF;
    }
    if (m_State.load() == MqReadOnly) {
      return EPerm;
    }
    if (m_Pool.Enqueue(&m_Queues[priority].tail, message) != 0) {
      return EAgain;
    }
    uint32_t bit = 1u << priority;
    uint32_t mask = m_Mask.load(std::memory_order_relaxed);
    while ((mask & bit) == 0) {
      if (m_Mask.compare_exchange_strong(mask, mask | bit,
        std::memory_order_relaxed)) {
        break;
      }
    }
    return 0;
  }

  // Users count the callers inside, closing waits for none.
  int Control(int operation) override {
    if (operation <= MqUnlock) {
      if (operation != MqLock) {
        m_Users.fetch_sub(1, std::memory_order_relaxed);
        return 0;
      }
      int32_t users = m_Users.load(std::memory_order_relaxed);
      while (users >= 1) {
        if (m_Users.compare_exchange_strong(users, users + 1,
          std::memory_order_acquire)) {
          break;
        }
      }
      return 0;
    }
    if (operation == MqClose) {
      int32_t users = m_Users.load(std::memory_order_relaxed);
      do {
        if (users < 1) {
          return EBadF;
        }
      } while (!m_Users.compare_exchange_strong(users, 0,
        std::memory_order_acquire));
      m_State.store(MqClosed);
      return 0;
    }
    int32_t state = m_State.load(std::memory_order_relaxed);
    if (state == MqClosed) {
      return EBadF;
    }
    while (state != MqReadOnly) {
      if (m_State.compare_exchange_strong(state, MqReadOnly,
        std::memory_order_acquire)) {
        break;
      }
      if (state == MqClosed) {
        return EBadF;
      }
    }
    return 0;
  }

private:
  std::atomic<int32_t> m_Users;
};

class MqImpl : public nnmem_MqImplBase {
public:
  explicit MqImpl(const nlib_mq_attr& attr) : nnmem_MqImplBase(attr) {
    InitializeMutex(m_Mutex, nullptr);
    InitializeCondition(m_NotFull, nullptr);
    InitializeCondition(m_NotEmpty, nullptr);
  }

  ~MqImpl() override {
    DestroyMutex(m_Mutex);
    DestroyCondition(m_NotFull);
    DestroyCondition(m_NotEmpty);
    DestroyMessages();
  }

  int Send(nlib_mq_msg message, int priority, int64_t deadline,
    int mode) override {
    Node* node = PopFree();
    while (node == nullptr && m_State.load() == MqOpen) {
      if (mode != MqNoWait) {
        int error = nnmem_nlib_cond_wait_until(m_NotFull, m_Mutex, deadline);
        if (error == ETimedOut) {
          return error;
        }
      }
      else {
        NotifyThreadPool(1, 1);
        WaitCondition(m_NotFull, m_Mutex);
        NotifyThreadPool(1, 0);
      }
      node = PopFree();
    }
    if (m_State.load() != MqOpen) {
      return m_State.load() != MqClosed ? EPerm : EBadF;
    }
    Push(node, message, priority);
    SignalCondition(m_NotEmpty);
    return 0;
  }

  int Receive(nlib_mq_msg* pOutMessage, int* pOutPriority, int64_t deadline,
    int mode) override {
    if (mode == MqDrop) {
      if (m_Mask.load() == 0) {
        return ENoEnt;
      }
    }
    else {
      while (m_Mask.load() == 0 && m_State.load() != MqClosed) {
        if (mode != MqNoWait) {
          int error = nnmem_nlib_cond_wait_until(m_NotEmpty, m_Mutex,
            deadline);
          if (error == ETimedOut) {
            return error;
          }
        }
        else {
          NotifyThreadPool(1, 1);
          WaitCondition(m_NotEmpty, m_Mutex);
          NotifyThreadPool(1, 0);
        }
      }
    }
    if (m_State.load() == MqClosed) {
      return EBadF;
    }
    Pop(Select(m_Mask.load(), mode), pOutMessage, pOutPriority);
    SignalCondition(m_NotFull);
    return 0;
  }

  int Control(int operation) override {
    if (operation > MqUnlock) {
      if (operation == MqClose) {
        m_State.store(MqClosed);
        BroadcastCondition(m_NotFull);
        return BroadcastCondition(m_NotEmpty);
      }
      m_State.store(MqReadOnly);
      return BroadcastCondition(m_NotFull);
    }
    if (operation != MqLock) {
      return UnlockMutex(m_Mutex);
    }
    NotifyThreadPool(1, 1);
    int error = LockMutex(m_Mutex);
    NotifyThreadPool(1, 0);
    return error;
  }

private:
  uint32_t m_Mutex[2];
  uint32_t m_NotFull[2];
  uint32_t m_NotEmpty[2];
};

// Handles keep the entry index in bits 2 to 9 and a serial above, all mixed
// with a random base.
struct HandleEntry {
  std::atomic<int32_t> count;
  std::atomic<uint32_t> handle;
  nnmem_MqImplBase* body;
};

struct HandleTable {
  std::atomic<uint32_t> base;
  uint32_t serial;
  uint32_t cursor;
  HandleEntry entries[HandleCount];
};

void Release(HandleEntry* entry) {
  nnmem_MqImplBase* body = entry->body;
  body->Control(MqUnlock);
  if (entry->count.fetch_sub(1, std::memory_order_relaxed) == 1) {
    delete body;
  }
}

struct HandleAccess {
  HandleEntry* entry = nullptr;
  HandleTable* table = nullptr;

  ~HandleAccess() {
    if (table != nullptr) {
      Release(entry);
    }
  }

  void Reset() {
    HandleEntry* held = entry;
    if (held != nullptr) {
      HandleTable* heldTable = table;
      entry = nullptr;
      table = nullptr;
      if (heldTable != nullptr) {
        Release(held);
      }
    }
  }

  nnmem_MqImplBase* Body() {
    return entry->body;
  }
};

struct HandleMaker {
  HandleTable* table;

  // A found queue is returned locked.
  [[gnu::noinline]] int GetHandleAccess(uint32_t handle,
    HandleAccess* access) {
    if (table->base.load(std::memory_order_relaxed) == 0) {
      return EBadF;
    }
    HandleEntry* entry =
      &table->entries[((table->base.load() ^ handle) >> 2) & 0xff];
    int32_t count = entry->count.load(std::memory_order_relaxed);
    do {
      if (count < 1) {
        return EBadF;
      }
    } while (!entry->count.compare_exchange_strong(count, count + 1,
      std::memory_order_relaxed));

    HandleTable* owner = table;
    access->Reset();
    access->entry = entry;
    access->table = owner;
    entry->body->Control(MqLock);
    if (entry->handle.load() == handle && entry->body->IsOpen()) {
      return 0;
    }
    access->Reset();
    return EBadF;
  }
};

std::atomic<HandleTable*> g_MqTable;

HandleTable* GetTable() {
  HandleTable* table = g_MqTable.load(std::memory_order_relaxed);
  if (table == nullptr) {
    table = static_cast<HandleTable*>(nnmem_nlib_malloc(sizeof(HandleTable)));
    if (table != nullptr) {
      memset(table, 0, sizeof(HandleTable));
      HandleTable* expected = nullptr;
      if (!g_MqTable.compare_exchange_strong(expected, table)) {
        nnmem_nlib_free(table);
        table = expected;
      }
    }
    else {
      table = g_MqTable.load(std::memory_order_acquire);
    }
  }
  return table;
}

bool Reserve(HandleEntry* entry) {
  int32_t expected = 0;
  return entry->count.compare_exchange_strong(expected, -1,
    std::memory_order_relaxed);
}

// Reserves a free entry in [first, last).
bool ReserveIn(HandleTable* table, size_t first, size_t last,
  size_t* pOutIndex) {
  for (size_t i = first; i < last; ++i) {
    if (Reserve(&table->entries[i])) {
      *pOutIndex = i;
      return true;
    }
  }
  return false;
}

[[gnu::always_inline]] inline int ReceiveFrom(nlib_mq mq,
  nlib_mq_msg* pOutMessage, int* pOutPriority, int64_t deadline, int mode) {
  HandleTable* table = GetTable();
  if (table == nullptr) {
    return ENoMem;
  }
  HandleMaker maker = {table};
  HandleAccess access;
  int error = maker.GetHandleAccess(mq, &access);
  if (error == 0) {
    int priority = 0;
    error = access.Body()->Receive(pOutMessage, &priority, deadline, mode);
    if (pOutPriority != nullptr && error == 0) {
      *pOutPriority = MaxPriority - priority;
    }
  }
  return error;
}

}

extern "C" {

int nnmem_nlib_mq_open(nlib_mq* pOutMq, const nlib_mq_attr* attr) {
  int32_t maxmsg = attr->maxmsg;
  if (maxmsg < 0) {
    return EInval;
  }
  nnmem_MqImplBase* body;
  if ((attr->flag & MqNonBlock) != 0) {
    body = new (std::nothrow) MqImplNonBlock(*attr);
  }
  else if ((attr->flag & MqLockFree) != 0) {
    body = new (std::nothrow) MqImplLockFree(*attr);
  }
  else {
    body = new (std::nothrow) MqImpl(*attr);
  }
  if (body == nullptr) {
    return ENoMem;
  }
  if (body->Init(static_cast<size_t>(maxmsg) + PriorityCount) != 0) {
    delete body;
    return ENoMem;
  }

  HandleTable* table = GetTable();
  if (table == nullptr) {
    return ENoMem;
  }
  if (table->base.load() == 0) {
    uint32_t seed = 0;
    if (nnmem_nlib_gen_random(&seed, sizeof(seed)) != 0) {
      seed = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&seed));
    }
    uint32_t expected = 0;
    table->base.compare_exchange_strong(expected, (seed & ~3u) | 0x400000,
      std::memory_order_relaxed);
  }

  // The cursor entry first, then two scans around the table.
  size_t start = table->cursor & 0xff;
  table->cursor += 7;
  size_t index = start;
  if (!Reserve(&table->entries[start]) &&
    !ReserveIn(table, start, HandleCount, &index) &&
    !ReserveIn(table, 0, start + 1, &index) &&
    !ReserveIn(table, start + 1, HandleCount, &index) &&
    !ReserveIn(table, 0, start + 1, &index)) {
    body->MarkClosed();
    delete body;
    return ENFile;
  }

  HandleEntry* entry = &table->entries[index];
  entry->body = body;
  uint32_t serial = table->serial + 1;
  if (serial == 0x100000) {
    serial = 0;
  }
  table->serial = serial;
  uint32_t tag = serial | (serial + 1) << 10 | (serial + 2) << 20;
  uint32_t key = static_cast<uint32_t>(index) + (tag << 8);
  entry->handle.store(table->base.load() ^ (key << 2));
  entry->count.store(1);
  *pOutMq = entry->handle.load();
  return 0;
}

int nnmem_nlib_mq_getattr(nlib_mq mq, nlib_mq_attr* attr) {
  HandleTable* table = GetTable();
  if (table == nullptr) {
    return ENoMem;
  }
  HandleMaker maker = {table};
  HandleAccess access;
  int error = maker.GetHandleAccess(mq, &access);
  if (error == 0) {
    *attr = access.Body()->GetAttr();
  }
  return error;
}

int nnmem_nlib_mq_close(nlib_mq mq) {
  HandleTable* table = GetTable();
  if (table == nullptr) {
    return ENoMem;
  }
  HandleMaker maker = {table};
  HandleAccess access;
  int error = maker.GetHandleAccess(mq, &access);
  if (error == 0) {
    HandleEntry* entry = access.entry;
    uint32_t handle = entry->handle.load();
    if (handle != 0 && entry->handle.compare_exchange_strong(handle, 0,
      std::memory_order_relaxed)) {
      entry->count.fetch_sub(1, std::memory_order_relaxed);
    }
    error = entry->body->Control(MqClose);
  }
  return error;
}

int nnmem_nlib_mq_readonly(nlib_mq mq) {
  HandleTable* table = GetTable();
  if (table == nullptr) {
    return ENoMem;
  }
  HandleMaker maker = {table};
  HandleAccess access;
  int error = maker.GetHandleAccess(mq, &access);
  if (error == 0) {
    error = access.Body()->Control(MqSetReadOnly);
  }
  return error;
}

int nnmem_nlib_mq_send(nlib_mq mq, nlib_mq_msg message,
  unsigned int priority) {
  if (priority > MaxPriority) {
    return EInval;
  }
  HandleTable* table = GetTable();
  if (table == nullptr) {
    return ENoMem;
  }
  HandleMaker maker = {table};
  HandleAccess access;
  int error = maker.GetHandleAccess(mq, &access);
  if (error == 0) {
    error = access.Body()->Send(message, MaxPriority - priority, 0, MqNoWait);
  }
  return error;
}

int nnmem_nlib_mq_send_until(nlib_mq mq, nlib_mq_msg message,
  unsigned int priority, int64_t deadline) {
  if (priority > MaxPriority) {
    return EInval;
  }
  HandleTable* table = GetTable();
  if (table == nullptr) {
    return ENoMem;
  }
  HandleMaker maker = {table};
  HandleAccess access;
  int error = maker.GetHandleAccess(mq, &access);
  if (error == 0) {
    error = access.Body()->Send(message, MaxPriority - priority, deadline,
      MqUntil);
  }
  return error;
}

int nnmem_nlib_mq_receive(nlib_mq mq, nlib_mq_msg* pOutMessage,
  int* pOutPriority) {
  return ReceiveFrom(mq, pOutMessage, pOutPriority, 0, MqNoWait);
}

int nnmem_nlib_mq_receive_until(nlib_mq mq, nlib_mq_msg* pOutMessage,
  int* pOutPriority, int64_t deadline) {
  return ReceiveFrom(mq, pOutMessage, pOutPriority, deadline, MqUntil);
}

int nnmem_nlib_mq_drop(nlib_mq mq, nlib_mq_msg* pOutMessage,
  int* pOutPriority) {
  return ReceiveFrom(mq, pOutMessage, pOutPriority, 0, MqDrop);
}

}
