#include "world/tickets.hpp"

extern "C" void* memmove(void* destination, const void* source, size_t size);

namespace fw::world {

void LockMutex(void* mutex);
void UnlockMutex(void* mutex);
uint32_t* FindTicket(const uint32_t* begin, uint32_t ticket, size_t count);
[[noreturn]] void AllocationSizeError();

namespace {

uintptr_t Bytes(const void* begin, const void* end) {
  return reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin);
}

size_t MapSize(const TicketDeque* tickets) {
  return static_cast<int64_t>(Bytes(tickets->map_begin, tickets->map_end)) >> 3;
}

void* Allocate(size_t size) {
  return memory::g_heap_manager->Allocate(size, 16, 0);
}

void Free(void* pointer) {
  memory::g_heap_manager->GetAllocator(0).Free(pointer);
}

TicketIterator At(const TicketDeque* tickets, uint64_t index) {
  uint32_t** block = reinterpret_cast<uint32_t**>(
    reinterpret_cast<uintptr_t>(tickets->map_begin) + (index >> 10) * 8
  );
  uint32_t* value = tickets->map_begin == tickets->map_end ? nullptr :
    *block + (index & 1023);
  return {block, value};
}

void CopyForwardSegment(
  uint32_t* begin, uint32_t* end, TicketIterator* destination
) {
  while (begin != end) {
    size_t count = Bytes(begin, end) / 4;
    size_t available = Bytes(
      destination->value, *destination->block + 1024
    ) / 4;

    if (available < count) {
      count = available;
    }

    if (count != 0) {
      memmove(destination->value, begin, count * 4);
    }

    begin += count;
    destination->value += count;

    if (destination->value == *destination->block + 1024) {
      destination->value = *++destination->block;
    }
  }
}

void CopyBackwardSegment(
  uint32_t* begin, uint32_t* end, TicketIterator* destination
) {
  while (begin != end) {
    size_t count = Bytes(begin, end) / 4;
    size_t available = Bytes(*destination->block, destination->value) / 4;

    if (available < count) {
      count = available;
    }

    end -= count;
    destination->value -= count;

    if (count != 0) {
      memmove(destination->value, end, count * 4);
    }

    if (begin != end) {
      destination->value = *--destination->block + 1024;
    }
  }

  if (destination->value == *destination->block + 1024) {
    destination->value = *++destination->block;
  }
}

void ReserveBack(TicketDeque* tickets, uint64_t count) {
  uint64_t blocks = MapSize(tickets);
  uint64_t capacity = blocks == 0 ? 0 : blocks * 1024 - 1;
  uint64_t available = capacity - (tickets->begin + tickets->size);

  if (count <= available) {
    return;
  }

  uint64_t needed = count - available + static_cast<uint64_t>(blocks == 0);
  uint64_t additions = (needed >> 10) + ((needed & 1023) != 0);
  uint64_t reusable = tickets->begin >> 10;

  if (additions < reusable) {
    reusable = additions;
  }

  uint64_t fresh = additions - reusable;
  uint64_t map_capacity = static_cast<int64_t>(
    Bytes(tickets->map_allocation, tickets->map_capacity_end)
  ) >> 3;

  if (fresh <= map_capacity - blocks) {
    while (fresh != 0 && tickets->map_end != tickets->map_capacity_end) {
      uint32_t* block = static_cast<uint32_t*>(Allocate(4096));
      AppendTicketBlock(tickets, &block);
      --fresh;
      --additions;
    }

    if (fresh != 0) {
      do {
        uint32_t* block = static_cast<uint32_t*>(Allocate(4096));
        PrependTicketBlock(tickets, &block);
        tickets->begin += MapSize(tickets) == 1 ? 1023 : 1024;
      } while (--fresh != 0);

      reusable = additions;
    }

    tickets->begin -= reusable * 1024;

    while (reusable-- != 0) {
      uint32_t* block = *tickets->map_begin++;
      AppendMovedTicketBlock(tickets, &block);
    }
  }
  else {
    uint64_t replacement_capacity = map_capacity * 2;

    if (replacement_capacity < fresh + blocks) {
      replacement_capacity = fresh + blocks;
    }

    if (replacement_capacity >> 61) {
      AllocationSizeError();
    }

    uint32_t** replacement = static_cast<uint32_t**>(
      Allocate(replacement_capacity * 8)
    );
    uint32_t** begin = replacement + blocks - reusable;
    uint32_t** end = begin;

    for (uint64_t i = 0; i < fresh; ++i) {
      *end++ = static_cast<uint32_t*>(Allocate(4096));
    }

    for (uint64_t i = 0; i < reusable; ++i) {
      *end++ = *tickets->map_begin++;
    }

    uint32_t** old_end = tickets->map_end;

    while (old_end != tickets->map_begin) {
      *--begin = *--old_end;
    }

    uint32_t** old_allocation = tickets->map_allocation;
    tickets->map_allocation = replacement;
    tickets->map_begin = begin;
    tickets->map_end = end;
    tickets->map_capacity_end = replacement + replacement_capacity;
    tickets->begin -= reusable * 1024;

    if (old_allocation != nullptr) {
      Free(old_allocation);
    }
  }
}

}

void MoveTicketsForward(
  TicketIterator begin, TicketIterator end, TicketIterator* destination
) {
  TicketIterator output = *destination;

  while (begin.block != end.block) {
    CopyForwardSegment(begin.value, *begin.block + 1024, &output);
    *destination = output;
    begin.value = *++begin.block;
  }

  CopyForwardSegment(begin.value, end.value, &output);
  *destination = output;
}

TicketMoveResult MoveTicketsBackward(
  TicketIterator begin, TicketIterator end, TicketIterator destination
) {
  TicketIterator source = end;

  while (source.block != begin.block) {
    if (source.value != *source.block) {
      CopyBackwardSegment(*source.block, source.value, &destination);
    }

    source.value = *--source.block + 1024;
  }

  if (begin.value != source.value) {
    CopyBackwardSegment(begin.value, source.value, &destination);
  }

  return {end, destination};
}

void PrepareTicket(JobQueue* queue, uint32_t ticket) {
  LockMutex(queue->mutex);

  if ((queue->stopped & 1) != 0 || queue->priority_tickets.size != 0) {
    UnlockMutex(queue->mutex);
    return;
  }

  TicketDeque* source = &queue->tickets;
  TicketIterator begin = At(source, source->begin);
  TicketIterator end = At(source, source->begin + source->size);
  TicketIterator found = begin;

  while (found.block != end.block) {
    uint32_t* limit = *found.block + 1024;
    uint32_t* value = FindTicket(
      found.value, ticket, Bytes(found.value, limit) / 4
    );

    if (value != nullptr && value != limit) {
      found.value = value;
      break;
    }

    found.value = *++found.block;
  }

  if (found.block == end.block) {
    uint32_t* value = FindTicket(
      found.value, ticket, Bytes(found.value, end.value) / 4
    );
    found.value = value == nullptr ? end.value : value;
  }

  if (found.value == end.value) {
    UnlockMutex(queue->mutex);
    return;
  }

  uint64_t count = Bytes(begin.block, found.block) * 128 +
    Bytes(*found.block, found.value) / 4 -
    Bytes(*begin.block, begin.value) / 4 + 1;
  TicketDeque* destination = &queue->priority_tickets;
  ReserveBack(destination, count);
  TicketIterator output = At(destination, destination->begin);
  TicketIterator input = begin;

  for (uint64_t i = 0; i < count; ++i) {
    *output.value++ = *input.value++;

    if (output.value == *output.block + 1024) {
      output.value = *++output.block;
    }

    if (input.value == *input.block + 1024) {
      input.value = *++input.block;
    }

    ++destination->size;
  }

  MoveTicketsBackward(begin, begin, input);
  source->begin += count;
  source->size -= count;

  while (source->begin >= 2048) {
    uint32_t* block = *source->map_begin;

    if (block != nullptr) {
      Free(block);
    }

    ++source->map_begin;
    source->begin -= 1024;
  }

  UnlockMutex(queue->mutex);
}

}
