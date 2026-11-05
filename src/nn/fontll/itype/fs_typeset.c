#include "nn/fontll/itype/fs_api.h"

FS_LONG TYPESET_init(FS_STATE* sp, TYPESET* typeset, FNTSET* fntset) {
  if (fntset == NULL) {
    typeset->num_fonts = 0;
    sp->error = ERR_NO_FNTSET;
    return ERR_NO_FNTSET;
  }

  if (fntset->num_fonts > typeset->num_fonts) {
    if (typeset->fonts != NULL) {
      FSS_free(sp, typeset->fonts);
    }
    typeset->fonts = FSS_malloc(sp, sizeof(TFNT) * fntset->num_fonts);
    if (typeset->fonts == NULL || sp->error != SUCCESS) {
      sp->error = ERR_MALLOC_FAIL;
      return ERR_MALLOC_FAIL;
    }
    typeset->num_fonts = fntset->num_fonts;
  }

  typeset->fntset = fntset;
  ++fntset->ref_count;
  for (FS_ULONG i = 0; i < fntset->num_fonts; ++i) {
    typeset->fonts[i].cfnt = &fntset->cfnts[i];
    typeset->fonts[i].sfnt = NULL;
    typeset->fonts[i].cmap_ok = 0;
  }

  sp->error = SUCCESS;
  return SUCCESS;
}

FS_LONG TYPESET_clear(FS_STATE* sp, TYPESET* typeset) {
  sp->error = SUCCESS;
  if (typeset == NULL) {
    return SUCCESS;
  }

  if (typeset->fntset != NULL) {
    --typeset->fntset->ref_count;
  }
  for (FS_ULONG i = 0; i < typeset->num_fonts; ++i) {
    SFNT* sfnt = typeset->fonts[i].sfnt;
    if (sfnt != NULL) {
      --sfnt->ref_count;
      typeset->fonts[i].sfnt = NULL;
    }
  }
  typeset->fntset = NULL;
  return sp->error;
}

FS_LONG TYPESET_destroy(FS_STATE* sp, TYPESET* typeset) {
  sp->error = SUCCESS;
  if (typeset == NULL) {
    return SUCCESS;
  }

  if (typeset->fntset != NULL) {
    --typeset->fntset->ref_count;
    typeset->fntset = NULL;
  }
  for (FS_ULONG i = 0; i < typeset->num_fonts; ++i) {
    SFNT* sfnt = typeset->fonts[i].sfnt;
    if (sfnt != NULL) {
      --sfnt->ref_count;
    }
  }

  FSS_free(sp, typeset->fonts);
  typeset->fonts = NULL;
  typeset->num_fonts = 0;
  return sp->error;
}
