#pragma once

#include "world/components.hpp"

namespace fw::world {

Job* TakeJob(JobQueue* queue, uint32_t worker);
Job* TakeReadyJob(JobQueue* queue, uint32_t worker);
Job* TakeWaitingJob(JobQueue* queue, uint32_t worker);
void DestroyQueue(JobQueue* queue);
void DestroyTickets(TicketDeque* tickets);
void PrependTicketBlock(TicketDeque* tickets, uint32_t* const* block);
void AppendTicketBlock(TicketDeque* tickets, uint32_t* const* block);
void AppendMovedTicketBlock(TicketDeque* tickets, uint32_t* const* block);
void GrowTickets(TicketDeque* tickets);

}
