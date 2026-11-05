#include <string.h>

#include "nn/fontll/itype/fs_api.h"

FS_LONG FSS_free(FS_STATE* sp, void* p) {
  if (p == NULL) {
    return SUCCESS;
  }
  return fs__free(sp, p);
}

void* FSS_malloc(FS_STATE* sp, FS_ULONG size) {
  if (size >= sp->server->heap_size) {
    sp->error = ERR_MALLOC_FAIL;
    return NULL;
  }
  if (size == 0) {
    return NULL;
  }

  for (;;) {
    sp->error = SUCCESS;
    void* p = fs__malloc(sp, size);
    if (p != NULL) {
      return p;
    }
    if (get_some_back(sp) == 0) {
      sp->error = ERR_MALLOC_FAIL;
      return NULL;
    }
  }
}

void* FSS_calloc(FS_STATE* sp, FS_ULONG size) {
  if (size >= sp->server->heap_size) {
    sp->error = ERR_MALLOC_FAIL;
    return NULL;
  }
  if (size == 0) {
    return NULL;
  }

  for (;;) {
    sp->error = SUCCESS;
    void* p = fs__malloc(sp, size);
    if (p != NULL) {
      return memset(p, 0, size);
    }
    if (get_some_back(sp) == 0) {
      sp->error = ERR_MALLOC_FAIL;
      return NULL;
    }
  }
}

void* FSS_realloc(FS_STATE* sp, void* p, FS_ULONG size) {
  if (size >= sp->server->heap_size) {
    sp->error = ERR_REALLOC_FAIL;
    return NULL;
  }
  if (size == 0) {
    if (p != NULL) {
      fs__free(sp, p);
    }
    return NULL;
  }

  if (p == NULL) {
    for (;;) {
      sp->error = SUCCESS;
      void* q = fs__malloc(sp, size);
      if (q != NULL) {
        return q;
      }
      if (get_some_back(sp) == 0) {
        sp->error = ERR_MALLOC_FAIL;
        return NULL;
      }
    }
  }

  for (;;) {
    sp->error = SUCCESS;
    void* q = fs__realloc(sp, p, size);
    if (q != NULL) {
      return q;
    }
    if (get_some_back(sp) == 0) {
      sp->error = ERR_REALLOC_FAIL;
      return NULL;
    }
  }
}
