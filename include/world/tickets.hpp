#pragma once

#include "world/queue.hpp"

namespace fw::world {

struct TicketIterator {
  uint32_t** block;
  uint32_t* value;
};

struct TicketMoveResult {
  TicketIterator source;
  TicketIterator destination;
};

void PrepareTicket(JobQueue* queue, uint32_t ticket);
void MoveTicketsForward(
  TicketIterator begin, TicketIterator end, TicketIterator* destination
);
TicketMoveResult MoveTicketsBackward(
  TicketIterator begin, TicketIterator end, TicketIterator destination
);

static_assert(sizeof(TicketIterator) == 16);
static_assert(sizeof(TicketMoveResult) == 32);

}
