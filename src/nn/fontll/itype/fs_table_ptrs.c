#include "nn/fontll/itype/fs_api.h"

typedef struct TABLE_PTR_REC {
  void* owner;
  void* data;
  FS_ULONG tag;
  FS_ULONG ref_count;
  FS_BYTE allocated;
  struct TABLE_PTR_REC* next;
} TABLE_PTR_REC;

typedef struct TABLE_OWNER {
  FS_BYTE _0[0x34];
  FS_ULONG ref_count;
} TABLE_OWNER;

TABLE_OWNER* find_table_owner(
  const TABLE_PTR_REC* rec, FNTSET* fntset, FS_BYTE* pShared);

FS_LONG squeeze_table_ptrs(FS_STATE* sp, FNTSET* fntset) {
  TABLE_PTR_REC* rec = sp->server->table_ptrs;
  if (rec == NULL) {
    return 0;
  }

  TABLE_PTR_REC* previous = NULL;
  FS_LONG count = 0;
  do {
    TABLE_PTR_REC* current = rec;
    rec = current->next;

    FS_BYTE shared;
    if (current->owner != find_table_owner(current, fntset, &shared)
      || current->ref_count != 0) {
      previous = current;
      continue;
    }

    if (current->allocated) {
      FSS_free(sp, current->data);
    }
    if (sp->server->table_ptrs == current) {
      sp->server->table_ptrs = rec;
    }
    else if (previous != NULL) {
      previous->next = rec;
    }
    FSS_free(sp, current);
    ++count;
  } while (rec != NULL);
  return count;
}

int any_used_fntset_or_unshared_lfnt_table_ptrs(
  FS_STATE* sp, FNTSET* fntset
) {
  for (TABLE_PTR_REC* rec = sp->server->table_ptrs; rec != NULL;
    rec = rec->next) {
    FS_BYTE shared;
    TABLE_OWNER* owner = find_table_owner(rec, fntset, &shared);
    if (rec->owner == owner && rec->ref_count != 0
      && (shared || owner->ref_count < 2)) {
      return 1;
    }
  }
  return 0;
}

int any_used_lfnt_table_ptrs(FS_STATE* sp, FNTSET* fntset, LFNT* lfnt) {
  for (TABLE_PTR_REC* rec = sp->server->table_ptrs; rec != NULL;
    rec = rec->next) {
    FS_BYTE shared;
    TABLE_OWNER* owner = find_table_owner(rec, fntset, &shared);
    if (rec->owner == owner && (void*)owner == lfnt && rec->ref_count != 0
      && !shared) {
      return 1;
    }
  }
  return 0;
}

void kill_table_ptrs(FS_STATE* sp) {
  TABLE_PTR_REC* rec = sp->server->table_ptrs;
  while (rec != NULL) {
    TABLE_PTR_REC* next = rec->next;
    if (rec->allocated) {
      FSS_free(sp, rec->data);
    }
    FSS_free(sp, rec);
    rec = next;
  }
  sp->server->table_ptrs = NULL;
}

void ptrs_to_offsets(FS_STATE* sp) {
  (void)sp;
}
