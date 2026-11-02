#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::task {

struct Task;

struct TaskVTable {
  uintptr_t unknown_00;
  void (*destroy)(Task* task);
  uint32_t (*update)(Task* task);
};

struct Link {
  Link* previous;
  Link* next;
};

struct Task {
  TaskVTable* vtable;
  Link link;
  unsigned char unknown_18[8];
  uint16_t priority;
  uint16_t update_count;
  uint32_t state;
  uint8_t flags;
  uint8_t callback_flag;
  unsigned char unknown_2a[6];
  Task* parent;
  Task* first_child;
  Task* next_sibling;
  Task* previous_sibling;
  Task* last_child;
};

struct Scheduler {
  Task* current;
  Link active;
  Link pending;
  uint8_t callback_result;

  void Dispatch();
  uint32_t Remove(Task* task);
};

static_assert(sizeof(Link) == 0x10);
static_assert(offsetof(Task, link) == 0x08);
static_assert(offsetof(Task, priority) == 0x20);
static_assert(offsetof(Task, update_count) == 0x22);
static_assert(offsetof(Task, state) == 0x24);
static_assert(offsetof(Task, flags) == 0x28);
static_assert(offsetof(Task, callback_flag) == 0x29);
static_assert(offsetof(Task, parent) == 0x30);
static_assert(offsetof(Task, first_child) == 0x38);
static_assert(offsetof(Task, next_sibling) == 0x40);
static_assert(offsetof(Task, previous_sibling) == 0x48);
static_assert(offsetof(Task, last_child) == 0x50);
static_assert(offsetof(Scheduler, active) == 0x08);
static_assert(offsetof(Scheduler, pending) == 0x18);
static_assert(offsetof(Scheduler, callback_result) == 0x28);

}
