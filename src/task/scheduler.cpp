#include "task/scheduler.hpp"

namespace fw::task {
namespace {

Task* GetTask(Link* link) {
  return reinterpret_cast<Task*>(
    reinterpret_cast<unsigned char*>(link) - offsetof(Task, link)
  );
}

Link* Detach(Link& first) {
  Link* next = first.next;
  Link* last = next->previous;
  first.previous->next = next;
  next->previous = first.previous;
  last->next = &first;
  first.previous = last;
  return last;
}

void InsertBefore(Link& position, Link& first, Link& last) {
  first.previous = position.previous;
  last.next = &position;
  position.previous->next = &first;
  position.previous = &last;
}

}

void Scheduler::Dispatch() {
  while (pending.next != &pending) {
    Link* first = pending.next;
    Link* last = Detach(*first);
    Link* position = active.next;

    while (
      position != &active &&
      GetTask(position)->priority <= GetTask(first)->priority
    ) {
      position = position->next;
    }

    InsertBefore(*position, *first, *last);
    GetTask(first)->state = 0;
  }

  Link* node = active.next;

  while (node != &active) {
    current = GetTask(node);

    if (current->state != 0 || (current->flags & 1) != 0) {
      node = node->next;
      continue;
    }

    current->callback_flag = 0;
    callback_result = 1;
    callback_result = current->vtable->update(current) & 1;
    ++current->update_count;

    if ((callback_result & 1) == 0) {
      Task* finished = current;
      node = node->next;
      Remove(finished);
    }
    else {
      node = node->next;
    }
  }

  current = nullptr;
}

uint32_t Scheduler::Remove(Task* task) {
  Task* child = task->first_child;

  while (child != nullptr) {
    Task* next = child->next_sibling;
    Remove(child);
    child = next;
  }

  Link* sentinel = task->state == 1 ? &pending : &active;

  if (&task->link != sentinel) {
    Detach(task->link);
  }

  Task* parent = task->parent;

  if (parent != nullptr) {
    if (parent->first_child == task) {
      parent->first_child = task->next_sibling;
      parent = task->parent;
    }

    if (parent->last_child == task) {
      parent->last_child = task->previous_sibling;
    }
  }

  Task* next = task->next_sibling;
  Task* previous = task->previous_sibling;

  if (previous != nullptr) {
    previous->next_sibling = next;
  }

  if (next != nullptr) {
    next->previous_sibling = task->previous_sibling;
  }

  task->vtable->destroy(task);
  return 1;
}

}
