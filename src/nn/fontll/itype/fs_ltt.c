#include <string.h>

#include "nn/fontll/itype/fs_api.h"

static void InitLtt(FS_STATE* sp, FsLtt* ltt) {
  ltt->version = 0;
  ltt->numStrings = 0;
  ltt->strings = NULL;
  ltt->name = NULL;
  ltt->subfamilyName = NULL;
  ltt->fileVersion = NULL;
  ltt->groups = NULL;
  ltt->groupCapacity = 0;
  ltt->_8a = 0;
  ltt->components = NULL;
  memset(ltt->_38, 0, sizeof(ltt->_38));
  ltt->groupOffset = 0;
  ltt->numGroups = 0;
  ltt->numComponents = 0;
  ltt->metric = 0xffff;
  ltt->sp = sp;
}

FS_LONG FsLttComponent_init(FsLttComponent* component, FS_STATE* sp) {
  component->fontName = NULL;
  component->fileName = NULL;
  memset(component->_10, 0, sizeof(component->_10));
  component->familyName = NULL;
  component->styleName = NULL;
  memset(component->_30, 0, sizeof(component->_30));
  component->bold = 0;
  component->italic = 0;
  component->adjustments = NULL;
  component->adjustmentCapacity = 0;
  component->_82 = 0;
  memset(component->_54, 0, sizeof(component->_54));
  component->boldPercent = 0x60000;
  component->_64 = 0;
  component->_68 = 0;
  component->adjustmentOffset = 0;
  component->numAdjustments = 0;
  component->_88 = NULL;
  component->sp = sp;
  component->italicAngle = 0xf0000;
  return SUCCESS;
}

FS_LONG FsLttComponent_done(FS_STATE* sp, FsLttComponent* component) {
  if (component->fontName != NULL) {
    FSS_free(sp, component->fontName);
  }
  if (component->fileName != NULL) {
    FSS_free(sp, component->fileName);
  }
  if (component->styleName != NULL) {
    FSS_free(sp, component->styleName);
  }
  if (component->familyName != NULL) {
    FSS_free(sp, component->familyName);
  }
  if (component->adjustments != NULL) {
    FSS_free(sp, component->adjustments);
  }
  if (component->_88 != NULL) {
    FSS_free(sp, component->_88);
  }
  return SUCCESS;
}

FS_BYTE FsLttComponent_isBold(
  const FsLttComponent* component, FS_FIXED* pPercent
) {
  *pPercent = component->boldPercent;
  return component->bold;
}

FS_BYTE FsLttComponent_isItalic(
  const FsLttComponent* component, FS_FIXED* pAngle
) {
  *pAngle = component->italicAngle;
  return component->italic;
}

FS_USHORT FsLttComponent_numAdjustments(const FsLttComponent* component) {
  return component->numAdjustments;
}

FsLttAdjustment* FsLttComponent_getAdjustment(
  const FsLttComponent* component, FS_USHORT index
) {
  if (component->adjustments == NULL
    || index >= component->numAdjustments) {
    return NULL;
  }
  return &component->adjustments[index];
}

FS_LONG FsLttComponent_getAdjustmentAndRange(
  const FsLttComponent* component, FsLttAdjustment* pAdjustment,
  FS_USHORT* pEnd
) {
  if (component->adjustments == NULL && component->numAdjustments != 0) {
    return ERR_LTT_ADJUSTMENTS;
  }

  FS_USHORT start = pAdjustment->start;
  pAdjustment->start = 0;
  pAdjustment->dx = 0;
  pAdjustment->dy = 0;
  *pEnd = 0xffff;

  for (FS_ULONG i = 0; i < component->numAdjustments; ++i) {
    const FsLttAdjustment* adjustment = &component->adjustments[i];
    if (adjustment->start > start) {
      *pEnd = adjustment->start - 1;
      return SUCCESS;
    }
    *pAdjustment = *adjustment;
    *pEnd = 0xffff;
  }
  return SUCCESS;
}

FS_LONG FsLtt_init(FS_STATE* sp, FsLtt* ltt) {
  InitLtt(sp, ltt);
  return SUCCESS;
}

FsLtt* FsLtt_new(FS_STATE* sp) {
  FsLtt* ltt = FSS_malloc(sp, sizeof(FsLtt));
  if (ltt != NULL) {
    InitLtt(sp, ltt);
  }
  return ltt;
}

void FsLtt_done(FsLtt* ltt) {
  FS_STATE* sp = ltt->sp;

  for (FS_ULONG i = 0; i < ltt->numStrings; ++i) {
    if (ltt->strings[i] != NULL) {
      FSS_free(sp, ltt->strings[i]);
    }
  }
  if (ltt->strings != NULL) {
    FSS_free(sp, ltt->strings);
  }
  if (ltt->name != NULL) {
    FSS_free(sp, ltt->name);
  }
  if (ltt->subfamilyName != NULL) {
    FSS_free(sp, ltt->subfamilyName);
  }
  if (ltt->fileVersion != NULL) {
    FSS_free(sp, ltt->fileVersion);
  }

  for (FS_ULONG i = 0; i < ltt->numComponents; ++i) {
    FsLttComponent_done(sp, &ltt->components[i]);
  }
  if (ltt->components != NULL) {
    FSS_free(sp, ltt->components);
  }
  if (ltt->groups != NULL) {
    FSS_free(sp, ltt->groups);
  }
}

void FsLtt_delete(FsLtt* ltt) {
  FS_STATE* sp = ltt->sp;
  FsLtt_done(ltt);
  FSS_free(sp, ltt);
}

FILECHAR* FsLtt_getName(const FsLtt* ltt) {
  return ltt->name;
}

const FILECHAR* FsLtt_getSubfamilyName(const FsLtt* ltt) {
  if (ltt->subfamilyName != NULL) {
    return ltt->subfamilyName;
  }
  return "Regular";
}

FILECHAR* FsLtt_getFileVersion(const FsLtt* ltt) {
  return ltt->fileVersion;
}

FS_USHORT FsLtt_numComponents(const FsLtt* ltt) {
  return ltt->numComponents;
}

FsLttComponent* FsLtt_component(const FsLtt* ltt, FS_USHORT index) {
  if (index >= ltt->numComponents) {
    return NULL;
  }
  return &ltt->components[index];
}

FS_USHORT FsLtt_getMetric(const FsLtt* ltt) {
  return ltt->metric;
}

FS_USHORT FsLtt_getGroupType(const FsLtt* ltt, FS_USHORT id) {
  if (id == 0 || ltt->numGroups == 0) {
    return 0;
  }

  for (FS_ULONG i = 0; i < ltt->numGroups; ++i) {
    const FsLttGroup* group = &ltt->groups[i];
    if (group->id == id) {
      return group->type;
    }
    if (group->id > id) {
      return 0;
    }
  }
  return 0;
}
