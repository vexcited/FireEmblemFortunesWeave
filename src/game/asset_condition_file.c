#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21c9c40;
void AssetConditionFile_Unknown4();
void AssetConditionFile_a03a60();

void AssetConditionFile_Unknown4()
{
  _QWORD* v0;
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;

  v0 = *(_QWORD**)(GameData_21c9c40 + 64);
  v1 = *(_QWORD**)(GameData_21c9c40 + 72);
  if (v0 != v1) {
    v2 = nullptr;
    do {
      v3 = (_QWORD*)*v0;
      if (*(_QWORD*)*v0 == 0 && v2 != nullptr) {
        *(_QWORD*)(v2[3] + 48LL) = v3;
        v3 = (_QWORD*)*v0;
      }
      ++v0;
      v2 = v3;
    } while (v0 != v1);
  }
}

void AssetConditionFile_a03a60()
{
  _QWORD* v0;
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;

  v0 = *(_QWORD**)(GameData_21c9c40 + 64);
  v1 = *(_QWORD**)(GameData_21c9c40 + 72);
  if (v0 != v1) {
    v2 = nullptr;
    do {
      v3 = (_QWORD*)*v0;
      if (*(_QWORD*)*v0 == 0 && v2 != nullptr) {
        *(_QWORD*)(v2[3] + 48LL) = v3;
        v3 = (_QWORD*)*v0;
      }
      ++v0;
      v2 = v3;
    } while (v0 != v1);
  }
}

#pragma GCC visibility pop
