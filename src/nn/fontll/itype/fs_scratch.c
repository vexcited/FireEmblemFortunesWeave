#include <string.h>

#include "nn/fontll/itype/fs_api.h"

static FsScratchBlock* NextBlock(FsScratchBlock* block) {
  return (FsScratchBlock*)((uint8_t*)block + block->size + 8);
}

static void InitSpace(FsScratchSpace* space, FS_STATE* sp, FS_ULONG size) {
  FS_ULONG rounded = (size + 7) & ~7u;
  space->begin = FSS_malloc(sp, rounded);
  if (space->begin == NULL) {
    space->end = NULL;
    return;
  }

  FsScratchBlock* block = (FsScratchBlock*)space->begin;
  memset(block, 0, sizeof(*block));
  block->flags = 0;
  block->size = rounded - 8;
  space->end = space->begin + rounded;
}

static void DoneSpace(FsScratchSpace* space, FS_STATE* sp) {
  if (space->begin != NULL) {
    FSS_free(sp, space->begin);
    space->begin = NULL;
    space->end = NULL;
  }
}

FsScratchSpace* FsScratchSpace_new(FS_STATE* sp, FS_ULONG size) {
  FsScratchSpace* space = FSS_malloc(sp, sizeof(FsScratchSpace));
  if (space == NULL) {
    return NULL;
  }

  InitSpace(space, sp, size);
  if (sp->error != SUCCESS) {
    FSS_free(sp, space);
    return NULL;
  }
  return space;
}

FS_LONG FsScratchSpace_init(
  FsScratchSpace* space, FS_STATE* sp, FS_ULONG size
) {
  InitSpace(space, sp, size);
  return sp->error;
}

void FsScratchSpace_done(FsScratchSpace* space, FS_STATE* sp) {
  DoneSpace(space, sp);
}

void FsScratchSpace_delete(FsScratchSpace* space, FS_STATE* sp) {
  DoneSpace(space, sp);
  FSS_free(sp, space);
}

void* FsScratchSpace_reserve(
  FsScratchSpace* space, FS_STATE* sp, FS_ULONG size
) {
  FS_ULONG rounded = (size + 7) & ~7u;
  FsScratchBlock* block = (FsScratchBlock*)space->begin;

  do {
    FS_ULONG blockSize = block->size;
    if ((block->flags & FS_SCRATCH_USED) == 0 && blockSize >= rounded) {
      block->flags = FS_SCRATCH_USED;
      FS_ULONG rest = blockSize - rounded;
      if (rest > 8) {
        block->size = rounded;
        FsScratchBlock* next = NextBlock(block);
        next->size = rest - 8;
        next->flags = 0;
      }
      sp->error = SUCCESS;
      return block + 1;
    }
    block = (FsScratchBlock*)((uint8_t*)block + blockSize + 8);
  } while ((uint8_t*)block < space->end);

  return FSS_malloc(sp, size);
}

FS_LONG FsScratchSpace_release(
  FsScratchSpace* space, FS_STATE* sp, void* p
) {
  FsScratchBlock* block = (FsScratchBlock*)space->begin;
  if ((uint8_t*)p < space->begin || (uint8_t*)p >= space->end) {
    FSS_free(sp, p);
    sp->error = SUCCESS;
    return SUCCESS;
  }

  FsScratchBlock* previous = NULL;
  while ((void*)(block + 1) != p) {
    previous = block;
    block = NextBlock(block);
    if ((uint8_t*)block >= space->end) {
      sp->error = ERR_SCRATCH_RELEASE;
      return ERR_SCRATCH_RELEASE;
    }
  }

  if ((block->flags & FS_SCRATCH_USED) == 0) {
    sp->error = ERR_SCRATCH_RELEASE;
    return ERR_SCRATCH_RELEASE;
  }
  block->flags = 0;

  if (previous != NULL && (previous->flags & FS_SCRATCH_USED) == 0) {
    previous->size += block->size + 8;
    block = previous;
  }

  FsScratchBlock* next = NextBlock(block);
  if ((uint8_t*)next < space->end && (next->flags & FS_SCRATCH_USED) == 0) {
    block->size += next->size + 8;
  }
  sp->error = SUCCESS;
  return SUCCESS;
}

FS_LONG FsScratchSpace_shrink(
  FsScratchSpace* space, FS_STATE* sp, FS_ULONG* pSize
) {
  (void)space;
  *pSize = 0;
  sp->error = SUCCESS;
  return SUCCESS;
}
