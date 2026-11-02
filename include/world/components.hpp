#pragma once

#include "world/manager.hpp"
#include "task/callback.hpp"

namespace fw::world {

struct GroupCallable;

struct GroupCallableVTable {
  uintptr_t unknown_00;
  void (*delete_object)(GroupCallable* callable);
  GroupCallable* (*clone)(GroupCallable* callable);
  void (*copy_to)(GroupCallable* callable, void* target);
  void (*destroy_inline)(GroupCallable* callable);
  void (*destroy_heap)(GroupCallable* callable);
  void (*invoke)(GroupCallable* callable, uint32_t* worker, int32_t* cursor);
  void* (*target)(GroupCallable* callable, const task::CallableType* type);
};

struct GroupView {
  Component** begin;
  Component** end;
  Component** capacity_end;
};

struct GroupCallable {
  GroupCallableVTable* vtable;
  GroupView* group;

  void Delete();
  GroupCallable* Clone();
  void CopyTo(GroupCallable* target);
  void DestroyInline();
  void DestroyHeap();
  void Invoke(uint32_t* worker, int32_t* cursor);
  void* Target(const task::CallableType* type);
};

struct CallableBox {
  alignas(16) unsigned char storage[32];
  GroupCallable* callable;
};

struct Job;
struct JobContext;

struct JobVTable {
  void (*destroy)(Job* job);
  void (*delete_object)(Job* job);
  void (*run)(Job* job, uint32_t worker);
  void (*complete)(Job* job);
};

struct Job {
  JobVTable* vtable;
  JobContext* context;
  uint32_t ticket;
  int32_t cursor;
  unsigned char unknown_18[8];
  CallableBox callback;

  void Destroy();
  void Delete();
  void Run(uint32_t worker);
  void Complete();
};

struct TicketSlot {
  uint64_t state;
  unsigned char event[16];
  Job* job;
};

struct TicketDeque {
  uint32_t** map_allocation;
  uint32_t** map_begin;
  uint32_t** map_end;
  uint32_t** map_capacity_end;
  uint64_t begin;
  uint64_t size;
};

struct JobQueue {
  JobContext* context;
  int32_t expected;
  int32_t completed;
  unsigned char mutex[32];
  unsigned char idle_condition[8];
  unsigned char work_condition[8];
  TicketDeque tickets;
  TicketDeque priority_tickets;
  uint32_t broadcast_ticket;
  uint8_t stopped;

  void Submit(uint64_t ticket);
};

struct JobContext {
  uint32_t worker;
  uint32_t unknown_04;
  int32_t next_ticket;
  uint32_t unknown_0c;
  JobQueue* queue;
  uint64_t unknown_18;
  TicketSlot slots[64];
  void* workers_begin;
  void* workers_end;

  void Drain();
  void Wait(uint64_t ticket);
};

void SwapCallables(CallableBox* first, CallableBox* second);
void UpdateComponents(Components* components);

extern JobContext* g_job_context;
extern JobVTable g_group_job_vtable;
extern GroupCallableVTable g_group_callable_vtable;
extern const char g_group_callable_type_name[];

static_assert(sizeof(GroupCallable) == 16);
static_assert(sizeof(CallableBox) == 48);
static_assert(sizeof(Job) == 80);
static_assert(offsetof(Job, callback) == 0x20);
static_assert(offsetof(Job, cursor) == 0x14);
static_assert(sizeof(TicketSlot) == 32);
static_assert(offsetof(JobContext, slots) == 0x20);
static_assert(offsetof(JobContext, workers_begin) == 0x820);
static_assert(offsetof(JobQueue, tickets) == 0x40);
static_assert(offsetof(JobQueue, priority_tickets) == 0x70);
static_assert(offsetof(JobQueue, broadcast_ticket) == 0xa0);
static_assert(offsetof(JobQueue, stopped) == 0xa4);

}
