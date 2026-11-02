#include "world/queue.hpp"

extern "C" void* memmove(void* destination, const void* source, size_t size);

namespace fw::world {

void LockMutex(void* mutex);
void UnlockMutex(void* mutex);
void WaitCondition(void* condition, void* mutex);
void BroadcastCondition(void* condition);
void FinalizeCondition(void* condition);
void FinalizeMutex(void* mutex);
[[noreturn]] void AllocationSizeError();

namespace {

uintptr_t Bytes(const void* first, const void* last) {
  return reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(first);
}

void* Allocate(size_t size) {
  return memory::g_heap_manager->Allocate(size, 16, 0);
}

void Free(void* pointer) {
  memory::g_heap_manager->GetAllocator(0).Free(pointer);
}

uint64_t MapSize(const TicketDeque* tickets) {
  return static_cast<int64_t>(Bytes(tickets->map_begin, tickets->map_end)) >> 3;
}

void TrimTickets(TicketDeque* tickets) {
  tickets->size = 0;
  uint64_t count = MapSize(tickets);

  while (count > 2) {
    uint32_t* block = *tickets->map_begin;

    if (block != nullptr) {
      Free(block);
    }

    ++tickets->map_begin;
    count = MapSize(tickets);
  }

  if (count == 1) {
    tickets->begin = 512;
  }
  else if (count == 2) {
    tickets->begin = 1024;
  }
}

uint32_t PopTicket(TicketDeque* tickets) {
  uint64_t index = tickets->begin;
  uint32_t ticket = tickets->map_begin[index >> 10][index & 1023];
  tickets->begin = index + 1;
  --tickets->size;

  if (tickets->begin >= 2048) {
    uint32_t* block = *tickets->map_begin;

    if (block != nullptr) {
      Free(block);
    }

    ++tickets->map_begin;
    tickets->begin -= 1024;
  }

  return ticket;
}

Job* ReuseBroadcast(JobQueue* queue, uint32_t worker) {
  uint32_t ticket = queue->broadcast_ticket;

  if (ticket == 0) {
    return nullptr;
  }

  TicketSlot* slot = &queue->context->slots[ticket & 63];
  uint64_t worker_bit = uint64_t{1} << (worker & 63);
  uint64_t claim = ((uint64_t{1} << 32) << (worker & 63)) & 0xffff00000000;
  uint64_t state = __atomic_load_n(&slot->state, __ATOMIC_ACQUIRE);
  Job* result = nullptr;

  while (static_cast<uint32_t>(state) == ticket &&
         ((state >> 48) & worker_bit) == 0 && ((state >> 32) & 0xffff) != 0) {
    if (__atomic_compare_exchange_n(&slot->state, &state, state | claim, false,
                                    __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE)) {
      result = slot->job;
      break;
    }
  }

  if (result == nullptr) {
    queue->broadcast_ticket = 0;
  }

  return result;
}

Job* ClaimTicket(JobQueue* queue, uint32_t ticket, uint32_t worker) {
  if ((ticket & 0x40000000) != 0) {
    queue->broadcast_ticket = ticket;
  }

  TicketSlot* slot = &queue->context->slots[ticket & 63];
  uint64_t claim = uint64_t{1} << ((worker + 32) & 63);
  __atomic_fetch_or(&slot->state, claim, __ATOMIC_ACQ_REL);
  return slot->job;
}

void AppendBlock(TicketDeque* tickets, uint32_t* const* block) {
  uint32_t** end = tickets->map_end;

  if (end == tickets->map_capacity_end) {
    uint32_t** old_allocation = tickets->map_allocation;
    uint32_t** begin = tickets->map_begin;

    if (reinterpret_cast<uintptr_t>(begin) >
        reinterpret_cast<uintptr_t>(old_allocation)) {
      int64_t shift = static_cast<int64_t>(Bytes(old_allocation, begin)) >> 3;
      shift = (shift + 1) / 2;
      size_t bytes = Bytes(begin, end);
      uint32_t** moved = begin - shift;

      if (bytes != 0) {
        memmove(moved, begin, bytes);
      }

      tickets->map_begin -= shift;
      tickets->map_end = reinterpret_cast<uint32_t**>(
        reinterpret_cast<uintptr_t>(moved) + bytes
      );
    }
    else {
      size_t bytes = Bytes(old_allocation, end);
      uint64_t capacity = bytes == 0 ? 1 : static_cast<int64_t>(bytes) >> 2;

      if (capacity >> 61) {
        AllocationSizeError();
      }

      auto** allocation = static_cast<uint32_t**>(Allocate(capacity * 8));
      uint32_t** target = allocation + (capacity >> 2);
      uint32_t** copied_end = target;

      for (uint32_t** item = begin; item != end; ++item) {
        *copied_end++ = *item;
      }

      tickets->map_allocation = allocation;
      tickets->map_begin = target;
      tickets->map_end = copied_end;
      tickets->map_capacity_end = allocation + capacity;

      if (old_allocation != nullptr) {
        Free(old_allocation);
      }
    }
  }

  *tickets->map_end = *block;
  ++tickets->map_end;
}

}

Job* TakeReadyJob(JobQueue* queue, uint32_t worker) {
  LockMutex(queue->mutex);
  Job* result = nullptr;

  if ((queue->stopped & 1) == 0) {
    result = ReuseBroadcast(queue, worker);

    if (result == nullptr) {
      if (queue->priority_tickets.size != 0) {
        uint32_t ticket = PopTicket(&queue->priority_tickets);
        result = ClaimTicket(queue, ticket, worker);
      }
      else if (queue->tickets.size != 0) {
        result = ClaimTicket(queue, PopTicket(&queue->tickets), worker);
      }
    }
  }

  UnlockMutex(queue->mutex);
  return result;
}

Job* TakeWaitingJob(JobQueue* queue, uint32_t worker) {
  LockMutex(queue->mutex);
  Job* result = nullptr;

  if ((queue->stopped & 1) == 0) {
    result = ReuseBroadcast(queue, worker);

    if (result == nullptr && queue->priority_tickets.size != 0) {
      result = ClaimTicket(queue, PopTicket(&queue->priority_tickets), worker);
    }
  }

  UnlockMutex(queue->mutex);
  return result;
}

Job* TakeJob(JobQueue* queue, uint32_t worker) {
  LockMutex(queue->mutex);
  Job* result = nullptr;

  while ((queue->stopped & 1) == 0) {
    result = ReuseBroadcast(queue, worker);

    if (result != nullptr) {
      break;
    }

    if (queue->priority_tickets.size != 0) {
      result = ClaimTicket(queue, PopTicket(&queue->priority_tickets), worker);
      break;
    }

    if (queue->tickets.size != 0) {
      result = ClaimTicket(queue, PopTicket(&queue->tickets), worker);
      break;
    }

    queue->completed = static_cast<int32_t>(
      static_cast<uint32_t>(queue->completed) + 1
    );

    if (queue->completed >= queue->expected) {
      BroadcastCondition(queue->idle_condition);
    }

    WaitCondition(queue->work_condition, queue->mutex);
    queue->completed = static_cast<int32_t>(
      static_cast<uint32_t>(queue->completed) - 1
    );
  }

  if (queue->stopped != 0) {
    result = nullptr;
  }

  UnlockMutex(queue->mutex);
  return result;
}

void DestroyTickets(TicketDeque* tickets) {
  TrimTickets(tickets);
  uint32_t** begin = tickets->map_begin;
  uint32_t** end = tickets->map_end;

  if (begin != end) {
    for (uint32_t** block = begin; block != end; ++block) {
      if (*block != nullptr) {
        Free(*block);
      }
    }

    uintptr_t delta = Bytes(tickets->map_end, tickets->map_begin);

    if (delta != 0) {
      tickets->map_end = reinterpret_cast<uint32_t**>(
        reinterpret_cast<uintptr_t>(tickets->map_end) + ((delta + 7) & ~7ull)
      );
    }
  }

  if (tickets->map_allocation != nullptr) {
    Free(tickets->map_allocation);
  }
}

void DestroyQueue(JobQueue* queue) {
  LockMutex(queue->mutex);
  TrimTickets(&queue->tickets);
  TrimTickets(&queue->priority_tickets);
  UnlockMutex(queue->mutex);
  DestroyTickets(&queue->priority_tickets);
  DestroyTickets(&queue->tickets);
  FinalizeCondition(queue->work_condition);
  FinalizeCondition(queue->idle_condition);
  FinalizeMutex(queue->mutex);
}

void PrependTicketBlock(TicketDeque* tickets, uint32_t* const* block) {
  uint32_t** begin = tickets->map_begin;
  uint32_t** allocation = tickets->map_allocation;

  if (begin == allocation) {
    uint32_t** end = tickets->map_end;
    uint32_t** capacity_end = tickets->map_capacity_end;

    if (reinterpret_cast<uintptr_t>(end) <
        reinterpret_cast<uintptr_t>(capacity_end)) {
      int64_t shift = static_cast<int64_t>(Bytes(end, capacity_end)) >> 3;
      shift = (shift + 1) / 2;
      size_t bytes = Bytes(begin, end);
      uint32_t** moved = begin + shift;

      if (bytes != 0) {
        memmove(moved, begin, bytes);
      }

      tickets->map_begin = moved;
      tickets->map_end += shift;
    }
    else {
      size_t bytes = Bytes(begin, capacity_end);
      uint64_t capacity = bytes == 0 ? 1 : static_cast<int64_t>(bytes) >> 2;

      if (capacity >> 61) {
        AllocationSizeError();
      }

      auto** replacement = static_cast<uint32_t**>(Allocate(capacity * 8));
      size_t offset = (capacity * 2 + 6) & ~7ull;
      auto** moved = reinterpret_cast<uint32_t**>(
        reinterpret_cast<uintptr_t>(replacement) + offset
      );
      uint32_t** moved_end = moved;

      for (uint32_t** item = begin; item != end; ++item) {
        *moved_end++ = *item;
      }

      tickets->map_allocation = replacement;
      tickets->map_begin = moved;
      tickets->map_end = moved_end;
      tickets->map_capacity_end = replacement + capacity;

      if (begin != nullptr) {
        Free(allocation);
      }
    }
  }

  tickets->map_begin[-1] = *block;
  --tickets->map_begin;
}

void AppendTicketBlock(TicketDeque* tickets, uint32_t* const* block) {
  AppendBlock(tickets, block);
}

void AppendMovedTicketBlock(TicketDeque* tickets, uint32_t* const* block) {
  AppendBlock(tickets, block);
}

void GrowTickets(TicketDeque* tickets) {
  if (tickets->begin >= 1024) {
    tickets->begin -= 1024;
    uint32_t* block = *tickets->map_begin++;
    AppendMovedTicketBlock(tickets, &block);
    return;
  }

  size_t used = Bytes(tickets->map_begin, tickets->map_end);
  size_t capacity_bytes = Bytes(tickets->map_allocation,
                               tickets->map_capacity_end);

  if (used < capacity_bytes) {
    auto* block = static_cast<uint32_t*>(Allocate(4096));

    if (tickets->map_end != tickets->map_capacity_end) {
      AppendTicketBlock(tickets, &block);
    }
    else {
      PrependTicketBlock(tickets, &block);
      block = *tickets->map_begin++;
      AppendMovedTicketBlock(tickets, &block);
    }

    return;
  }

  uint64_t capacity = capacity_bytes == 0 ? 1 :
    static_cast<int64_t>(capacity_bytes) >> 2;

  if (capacity >> 61) {
    AllocationSizeError();
  }

  auto** allocation = static_cast<uint32_t**>(Allocate(capacity * 8));
  TicketDeque replacement;
  replacement.map_allocation = allocation;
  replacement.map_begin = reinterpret_cast<uint32_t**>(
    reinterpret_cast<uintptr_t>(allocation) + used
  );
  replacement.map_end = replacement.map_begin;
  replacement.map_capacity_end = allocation + capacity;
  auto* block = static_cast<uint32_t*>(Allocate(4096));
  AppendTicketBlock(&replacement, &block);

  for (uint32_t** item = tickets->map_end; item != tickets->map_begin;) {
    --item;
    PrependTicketBlock(&replacement, item);
  }

  uint32_t** previous = tickets->map_allocation;
  tickets->map_allocation = replacement.map_allocation;
  tickets->map_begin = replacement.map_begin;
  tickets->map_end = replacement.map_end;
  tickets->map_capacity_end = replacement.map_capacity_end;

  if (previous != nullptr) {
    Free(previous);
  }
}

}
