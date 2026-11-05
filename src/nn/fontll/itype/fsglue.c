#include <string.h>

#include "nn/fontll/itype/fnt.h"
#include "nn/fontll/itype/fsglue.h"

#define ALIGN8(x) (((x) + 7) & ~7u)
#define PHANTOMCOUNT 8

#define ERR_NOT_INITIALIZED 412

#define SCANCTRL_DROPOUT_IF_PPEM_LESS 0x100
#define SCANCTRL_DROPOUT_IF_ROTATED 0x200
#define SCANCTRL_DROPOUT_IF_STRETCHED 0x400
#define SCANCTRL_DROPOUT_OFF 0x20000

FS_LONG read_comp_parms_ttf(
  void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h);

static FS_ULONG PrivateFontSpaceSize(fsg_SplineKey* key) {
  key->offset_storage = 0;
  if (key->maxp->values[7] < 4) {
    key->maxp->values[7] = 4;
  }
  key->offset_functions = ALIGN8(key->maxp->values[7] * 4u);
  key->num_cvt = key->sfnt->lfnt->fnt->num_cvt;
  return ALIGN8(key->offset_functions + key->num_cvt * 4);
}

FS_LONG ScaleFuncCall(int type, const fsg_TransformRec* rec, FS_LONG value) {
  switch (type) {
    case 0:
      return (rec->numerator * value + (rec->denominator >> 1)) >> rec->shift;
    case 1: {
      FS_LONG product = rec->numerator * value;
      FS_LONG half = rec->denominator >> 1;
      if (value < 0) {
        return -((half - product) / rec->denominator);
      }
      return (half + product) / rec->denominator;
    }
    case 2:
      return varmul_64(rec->fixedScale, value, 16);
    default:
      return 0;
  }
}

void get_glyph_parms(
  FS_STATE* sp, TTF* ttf, FS_USHORT index, FS_ULONG* pOffset,
  FS_ULONG* pLength
) {
  (void)sp;
  if (ttf->head->indexToLocFormat != 0) {
    const FS_ULONG* loca = (const FS_ULONG*)ttf->loca;
    FS_ULONG offset = __builtin_bswap32(loca[index]);
    *pOffset = offset;
    loca = (const FS_ULONG*)ttf->loca;
    *pLength = __builtin_bswap32(loca[index + 1]) - offset;
    return;
  }

  const FS_USHORT* loca = (const FS_USHORT*)ttf->loca + index;
  FS_USHORT offset = __builtin_bswap16(loca[0]);
  *pOffset = 2 * offset;
  *pLength = 2 * (__builtin_bswap16(loca[1]) - offset);
}

FS_LONG fs_NewSfnt(
  FS_STATE* sp, fs_GlyphInputType* input, fs_GlyphInfoType* output
) {
  fsg_SplineKey* key = input->key;
  if ((key->state & 1) == 0) {
    return ERR_NOT_INITIALIZED;
  }

  SFNT* sfnt = input->sfnt;
  TTF* ttf = sfnt->lfnt->fnt;
  TTF_HEAD* head = ttf->head;
  TTF_HHEA* hhea = ttf->hhea;

  key->sfnt = sfnt;
  key->emResolution = head->unitsPerEm;
  output->emResolution = head->unitsPerEm;
  key->fontFlags = head->flags;
  key->numberOf_LongHorMetrics = hhea->numberOfMetrics;
  key->maxp = ttf->maxp;

  output->privateFontSpaceSize = PrivateFontSpaceSize(key);
  output->workSpaceSize = fsg_WorkSpaceSetOffsets(sp, key);
  key->scanControl = 0;
  key->state = 3;
  key->executePrePgm = 1;
  return SUCCESS;
}

FS_ULONG fsg_PrivateFontSpaceSize(FS_STATE* sp, fsg_SplineKey* key) {
  (void)sp;
  return PrivateFontSpaceSize(key);
}

FS_ULONG fsg_WorkSpaceSetOffsets(FS_STATE* sp, fsg_SplineKey* key) {
  const TTF_MAXP* maxp = key->maxp;
  FS_ULONG twilightPoints = maxp->values[6];
  FS_ULONG stackSize = maxp->values[10] * 4u;
  (void)sp;

  key->stackBase = 0;
  fsg_OffsetInfo* twilight = &key->offsets[0];
  twilight->f = stackSize;
  FS_ULONG offset = ALIGN8(stackSize + twilightPoints);
  twilight->sp = offset;
  twilight->ep = offset + 8;
  offset += 16;
  FS_ULONG pointsSize = ALIGN8(twilightPoints * 4);
  twilight->oox = offset;
  offset += pointsSize;
  twilight->ooy = offset;
  offset += pointsSize;
  twilight->ox = offset;
  offset += pointsSize;
  twilight->oy = offset;
  offset += pointsSize;
  twilight->x = offset;
  offset += pointsSize;
  twilight->y = offset;
  offset += pointsSize;
  twilight->onCurve = offset;
  offset = ALIGN8(offset + twilightPoints);

  FS_ULONG maxPoints = maxp->values[1];
  if (maxPoints <= maxp->values[3]) {
    maxPoints = maxp->values[3];
  }
  FS_ULONG maxContours = maxp->values[4];
  if (maxp->values[2] > maxContours) {
    maxContours = maxp->values[2];
  }
  maxPoints += PHANTOMCOUNT;

  fsg_OffsetInfo* glyph = &key->offsets[1];
  glyph->f = offset;
  offset = ALIGN8(offset + maxPoints);
  FS_ULONG contoursSize = ALIGN8(maxContours * 2);
  glyph->sp = offset;
  offset += contoursSize;
  glyph->ep = offset;
  offset += contoursSize;
  pointsSize = ALIGN8(maxPoints * 4);
  glyph->oox = offset;
  offset += pointsSize;
  glyph->ooy = offset;
  offset += pointsSize;
  glyph->ox = offset;
  offset += pointsSize;
  glyph->oy = offset;
  offset += pointsSize;
  glyph->x = offset;
  offset += pointsSize;
  glyph->y = offset;
  offset += pointsSize;
  glyph->onCurve = offset;
  offset = ALIGN8(offset + maxPoints);

  glyph->extra[0] = offset;
  glyph->extra[1] = ALIGN8(offset + 2048);
  offset += 5120;
  glyph->extra[2] = ALIGN8(offset);
  offset = ALIGN8(offset + maxPoints * 64);
  glyph->extra[3] = offset;
  glyph->extra[4] = offset + 2048;
  glyph->extra[5] = offset + 2176;
  glyph->extra[6] = offset + 2304;
  glyph->extra[7] = offset + 2432;
  return offset + 2560;
}

FS_LONG fsg_SetDefaults(fsg_SplineKey* key) {
  fnt_ParameterBlock* par = &key->parBlock;
  par->wTCI = 68;
  par->sWCI = 0;
  par->scaledSW = 0;
  par->scanControl = 0;
  par->instructControl = 0;
  par->minimumDistance = 64;
  par->roundState = 2;
  par->periodMask = 0;
  par->period45 = 0;
  par->period = 0;
  par->phase = 0;
  par->threshold = 0;
  par->deltaBase = 9;
  par->deltaShift = 3;
  par->angleWeight = 128;
  par->sW = 0;
  par->autoFlip = 1;
  return SUCCESS;
}

void advance_elementPtr(fsg_SplineKey* key, fnt_ElementType* element) {
  FS_SHORT numContours = element->nc;
  if (numContours != 0) {
    FS_LONG numPoints =
      element->ep[numContours - 1] - element->sp[0] + 1;
    fnt_ElementType* glyph = &key->elements[1];
    glyph->x += numPoints;
    glyph->y += numPoints;
    glyph->ox += numPoints;
    glyph->oy += numPoints;
    glyph->oox += numPoints;
    glyph->ooy += numPoints;
    glyph->onCurve += numPoints;
    glyph->sp += numContours;
    glyph->ep += numContours;
    glyph->f += numPoints;
  }
  key->elements[1].nc = 0;
  element->nc = 0;
}

void fsg_IncrementElement(
  fsg_SplineKey* key, int index, int numPoints, int numContours
) {
  fnt_ElementType* element = &key->elements[index];
  element->nc = 0;
  element->x += numPoints;
  element->y += numPoints;
  element->ox += numPoints;
  element->oy += numPoints;
  element->oox += numPoints;
  element->ooy += numPoints;
  element->onCurve += numPoints;
  element->sp += numContours;
  element->ep += numContours;
  element->f += numPoints;
}

void fsg_CopyElementBackwards(fnt_ElementType* element) {
  FS_USHORT numContours = element->nc;
  if (numContours == 0) {
    return;
  }

  int numPoints =
    element->ep[numContours - 1u] - element->sp[0] + 1 + PHANTOMCOUNT;
  memcpy(element->ox, element->x, numPoints * 4);
  memcpy(element->oy, element->y, numPoints * 4);
  memset(element->f, 0, numPoints);
}

void fsg_SetUpElement(FS_STATE* sp, fsg_SplineKey* key, int index) {
  const TTF_MAXP* maxp = key->maxp;
  const fsg_OffsetInfo* offsets = &key->offsets[index];
  fnt_ElementType* element = &key->elements[index];
  FS_BYTE* base = sp->server->scratch_owner;

  element->x = (int32_t*)(base + offsets->x);
  element->y = (int32_t*)(base + offsets->y);
  element->ox = (int32_t*)(base + offsets->ox);
  element->oy = (int32_t*)(base + offsets->oy);
  element->oox = (int32_t*)(base + offsets->oox);
  element->ooy = (int32_t*)(base + offsets->ooy);
  element->sp = (FS_USHORT*)(base + offsets->sp);
  element->ep = (FS_USHORT*)(base + offsets->ep);
  element->nc = 0;
  element->onCurve = base + offsets->onCurve;
  element->f = base + offsets->f;

  if (index != 0) {
    key->elementPointers[0] = base + offsets->extra[0];
    key->elementPointers[1] = base + offsets->extra[1];
    key->elementPointers[3] = base + offsets->extra[2];
    key->elementPointers[4] = base + offsets->extra[3];
    key->elementPointers[5] = base + offsets->extra[4];
    key->elementPointers[6] = base + offsets->extra[5];
    key->elementPointers[7] = base + offsets->extra[6];
    key->elementPointers[8] = base + offsets->extra[7];
    return;
  }

  element->sp[0] = 0;
  element->ep[0] = maxp->values[6] - 1;
  element->nc = 1;
}

void delete_key(FS_STATE* sp, fsg_SplineKey* key) {
  if (key->_20 != NULL) {
    FSS_free(sp, key->_20);
  }
  FSS_free(sp, key->_30);
  FSS_free(sp, key);
}

int get_dropout_control(const fsg_SplineKey* key) {
  FS_ULONG scanControl = key->scanControl;
  int rotated = key->rotated != 0 && key->stretched != 0;

  if ((scanControl & SCANCTRL_DROPOUT_OFF) != 0) {
    return 0;
  }
  if ((scanControl & SCANCTRL_DROPOUT_IF_PPEM_LESS) != 0
    && ((scanControl & 0xff) == 0xff
      || (FS_LONG)(scanControl & 0xff) >= key->pixelsPerEm >> 16)) {
    return 1;
  }
  if (rotated && (scanControl & SCANCTRL_DROPOUT_IF_ROTATED) != 0) {
    return 1;
  }
  return (scanControl & SCANCTRL_DROPOUT_IF_STRETCHED) != 0
    && key->xStretch != key->yStretch;
}

FS_LONG read_comp_parms(
  FS_STATE* sp, void* a, void* b, void* c, void* d, void* e, void* f,
  void* g, void* h
) {
  (void)sp;
  return read_comp_parms_ttf(a, b, c, d, e, f, g, h);
}
