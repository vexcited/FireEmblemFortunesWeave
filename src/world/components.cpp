#include "world/components.hpp"

namespace fw::world {

void ClearLightEvent(void* event);
void SignalLightEvent(void* event);
void WaitLightEvent(void* event);
bool TryWaitLightEvent(void* event);
void LockMutex(void* mutex);
void UnlockMutex(void* mutex);
void WaitCondition(void* condition, void* mutex);
void SignalCondition(void* condition);
void BroadcastCondition(void* condition);
void GrowTickets(TicketDeque* tickets);
void PrepareTicket(JobQueue* queue, uint32_t ticket);
Job* TakeReadyJob(JobQueue* queue, uint32_t worker);
Job* TakeWaitingJob(JobQueue* queue, uint32_t worker);
[[noreturn]] void BadFunctionCall();

namespace {

void Free(void* pointer) {
  memory::g_heap_manager->GetAllocator(0).Free(pointer);
}

void* Allocate(size_t size) {
  return memory::g_heap_manager->Allocate(size, 16, 0);
}

GroupCallable* Inline(CallableBox* box) {
  return reinterpret_cast<GroupCallable*>(box->storage);
}

void DestroyCallable(CallableBox* box) {
  GroupCallable* callable = box->callable;

  if (callable == Inline(box)) {
    callable->vtable->destroy_inline(callable);
  }
  else if (callable != nullptr) {
    callable->vtable->destroy_heap(callable);
  }
}

void RunJob(Job* job, uint32_t worker) {
  job->vtable->run(job, worker);
  TicketSlot* slot = &job->context->slots[job->ticket & 63];
  uint64_t bit = (uint64_t{1} << (worker & 63)) & 0xffff;
  uint64_t mask = bit * 0x1000100000000;
  uint64_t previous = __atomic_fetch_xor(&slot->state, mask, __ATOMIC_ACQ_REL);

  if (((previous >> 32) & 0xffff) == bit) {
    slot->job->vtable->complete(slot->job);
    SignalLightEvent(slot->event);
    Job* completed = slot->job;
    slot->job = nullptr;

    if (completed != nullptr) {
      completed->vtable->delete_object(completed);
    }

    __atomic_store_n(&slot->state, uint64_t{0}, __ATOMIC_RELEASE);
  }
}

}

void SwapCallables(CallableBox* first, CallableBox* second) {
  if (first == second) {
    return;
  }

  GroupCallable* a = first->callable;
  GroupCallable* b = second->callable;

  if (a != Inline(first)) {
    if (b != Inline(second)) {
      first->callable = b;
      second->callable = a;
      return;
    }

    b->vtable->copy_to(b, first);
    second->callable->vtable->destroy_inline(second->callable);
    second->callable = first->callable;
    first->callable = Inline(first);
    return;
  }

  if (b != Inline(second)) {
    a->vtable->copy_to(a, second);
    first->callable->vtable->destroy_inline(first->callable);
    first->callable = second->callable;
    second->callable = Inline(second);
    return;
  }

  alignas(16) unsigned char temporary[32];
  a->vtable->copy_to(a, temporary);
  first->callable->vtable->destroy_inline(first->callable);
  first->callable = nullptr;
  second->callable->vtable->copy_to(second->callable, first);
  second->callable->vtable->destroy_inline(second->callable);
  second->callable = nullptr;
  first->callable = Inline(first);
  auto* saved = reinterpret_cast<GroupCallable*>(temporary);
  saved->vtable->copy_to(saved, second);
  saved->vtable->destroy_inline(saved);
  second->callable = Inline(second);
}

void GroupCallable::Delete() {
  Free(this);
}

GroupCallable* GroupCallable::Clone() {
  auto* result = static_cast<GroupCallable*>(Allocate(16));
  result->vtable = &g_group_callable_vtable;
  result->group = group;
  return result;
}

void GroupCallable::CopyTo(GroupCallable* target) {
  target->vtable = &g_group_callable_vtable;
  target->group = group;
}

void GroupCallable::DestroyInline() {}

void GroupCallable::DestroyHeap() {
  vtable->delete_object(this);
}

void GroupCallable::Invoke(uint32_t*, int32_t* cursor) {
  uintptr_t bytes = reinterpret_cast<uintptr_t>(group->end) -
                    reinterpret_cast<uintptr_t>(group->begin);
  int32_t count = static_cast<int32_t>(bytes >> 3);

  if (count < 1) {
    return;
  }

  JobContext* context = g_job_context;
  uintptr_t workers_bytes = reinterpret_cast<uintptr_t>(context->workers_end) -
                            reinterpret_cast<uintptr_t>(context->workers_begin);
  uint32_t divisor_bits = (static_cast<uint32_t>(workers_bytes >> 2) & ~1u) + 2;
  int32_t divisor = static_cast<int32_t>(divisor_bits);
  int32_t chunk = divisor == 0 ? 0 : count / divisor;

  if (chunk < 1) {
    chunk = 1;
  }

  while (true) {
    int32_t first = __atomic_fetch_add(cursor, chunk, __ATOMIC_ACQ_REL);

    if (first < count) {
      int32_t limit = static_cast<int32_t>(
        static_cast<uint32_t>(first) + static_cast<uint32_t>(chunk)
      );

      if (limit >= count) {
        limit = count;
      }

      do {
        Component* component = group->begin[first];
        auto callback = reinterpret_cast<void (*)(Component*)>(
          component->vtable->unknown_20
        );
        callback(component);
        ++first;
      } while (first < limit);
    }

    chunk = static_cast<uint32_t>(chunk) >> 1;

    if (chunk < 1) {
      chunk = 1;
    }

    if (first >= count) {
      break;
    }
  }
}

void* GroupCallable::Target(const task::CallableType* type) {
  return type->name == g_group_callable_type_name ? &group : nullptr;
}

void Job::Destroy() {
  DestroyCallable(&callback);
}

void Job::Delete() {
  DestroyCallable(&callback);
  Free(this);
}

void Job::Run(uint32_t worker) {
  if (callback.callable == nullptr) {
    BadFunctionCall();
  }

  GroupCallable* callable = callback.callable;
  callable->vtable->invoke(callable, &worker, &cursor);
}

void Job::Complete() {}

void JobQueue::Submit(uint64_t ticket) {
  LockMutex(mutex);

  if ((stopped & 1) == 0) {
    bool empty = tickets.size == 0;
    uint64_t priority_count = empty ? priority_tickets.size : 0;
    uintptr_t map_bytes = reinterpret_cast<uintptr_t>(tickets.map_end) -
                          reinterpret_cast<uintptr_t>(tickets.map_begin);
    uint64_t capacity = map_bytes == 0 ? 0 : (map_bytes << 7) - 1;
    uint64_t index = tickets.begin + tickets.size;

    if (capacity == index) {
      GrowTickets(&tickets);
      index = tickets.begin + tickets.size;
    }

    tickets.map_begin[index >> 10][index & 1023] =
      static_cast<uint32_t>(ticket);
    ++tickets.size;

    if (empty && priority_count == 0) {
      if ((ticket & 0x40000000) != 0) {
        BroadcastCondition(work_condition);
      }
      else {
        SignalCondition(work_condition);
      }
    }
  }

  UnlockMutex(mutex);
}

void JobContext::Drain() {
  for (Job* job = TakeReadyJob(queue, worker); job != nullptr;
       job = TakeReadyJob(queue, worker)) {
    RunJob(job, worker);
  }

  JobQueue* target = queue;
  LockMutex(target->mutex);

  while (target->completed < target->expected) {
    WaitCondition(target->idle_condition, target->mutex);
  }

  UnlockMutex(target->mutex);
}

void JobContext::Wait(uint64_t ticket) {
  TicketSlot* target = &slots[ticket & 63];

  uint64_t initial = __atomic_load_n(&target->state, __ATOMIC_ACQUIRE);

  if (static_cast<uint32_t>(initial) != static_cast<uint32_t>(ticket) ||
      TryWaitLightEvent(target->event)) {
    return;
  }

  PrepareTicket(queue, static_cast<uint32_t>(ticket));

  for (Job* job = TakeWaitingJob(queue, worker); job != nullptr;
       job = TakeWaitingJob(queue, worker)) {
    RunJob(job, worker);
  }

  uint64_t remaining = __atomic_load_n(&target->state, __ATOMIC_ACQUIRE);

  if (static_cast<uint32_t>(remaining) == static_cast<uint32_t>(ticket)) {
    WaitLightEvent(target->event);
  }
}

void UpdateComponents(Components* components) {
  Component** first = components->removed_begin;
  Component** last = components->removed_end;

  if (first != last) {
    do {
      Component* component = *first++;

      if (component != nullptr) {
        component->vtable->destroy(component);
      }
    } while (first != last);

    first = components->removed_begin;
  }

  components->removed_end = first;
  components->Rebuild();
  ComponentGroup* begin = components->cached_begin;
  ComponentGroup* end = components->cached_end;

  if (begin != end) {
    for (ComponentGroup* group = begin; group != end; ++group) {
      Component** item = group->begin;
      Component** limit = group->end;

      for (; item != limit; ++item) {
        Component* component = *item;
        component->vtable->update(component);
      }
    }

    begin = components->cached_begin;
    end = components->cached_end;

    for (ComponentGroup* group = begin; group != end; ++group) {
      auto* state = reinterpret_cast<unsigned char*>(components);
      __builtin_memcpy(state + 24, &group->key, 4);
      state[28] = 1;
      g_job_context->Drain();
      JobContext* context = g_job_context;
      int32_t ticket;
      TicketSlot* slot;

      do {
        ticket = context->next_ticket;
        uint32_t incremented = static_cast<uint32_t>(ticket) + 1;
        int32_t remainder = static_cast<int32_t>(incremented) % 0x1000000;
        context->next_ticket = remainder;
        slot = &context->slots[static_cast<uint32_t>(ticket) & 63];

        if (__atomic_load_n(&slot->state, __ATOMIC_ACQUIRE) != 0) {
          ticket = -1;
        }
      } while (ticket < 0);

      slot = &context->slots[static_cast<uint32_t>(ticket) & 63];
      ClearLightEvent(slot->event);
      auto* job = static_cast<Job*>(Allocate(80));
      job->vtable = &g_group_job_vtable;
      job->context = nullptr;
      job->ticket = 0;
      job->cursor = 0;
      job->callback.callable = nullptr;
      Job* previous = slot->job;
      slot->job = job;

      if (previous != nullptr) {
        previous->vtable->delete_object(previous);
      }

      uint32_t tagged = static_cast<uint32_t>(ticket) | 0xc0000000;
      __atomic_store_n(&slot->state, uint64_t{tagged}, __ATOMIC_RELEASE);
      job->context = context;
      job->ticket = tagged;
      CallableBox callback;
      auto* binding = Inline(&callback);
      binding->vtable = &g_group_callable_vtable;
      binding->group = reinterpret_cast<GroupView*>(&group->begin);
      callback.callable = binding;
      SwapCallables(&callback, &job->callback);
      DestroyCallable(&callback);
      context->queue->Submit(tagged);
      g_job_context->Wait(tagged);
    }
  }

  auto* state = reinterpret_cast<unsigned char*>(components);

  if (state[28] == 1) {
    state[28] = 0;
  }
}

}
