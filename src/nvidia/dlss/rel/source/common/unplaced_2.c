#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 sqrtf_plt(float);
float fabsf_plt(float);
float logf_plt(_QWORD, float);
__attribute__((swiftcall)) void
nvidia_dlss_rel_source_common_33a60(PSEUDO_X8 x8_, char a1, char a2, char a3,
                                    unsigned __int8 a4, float a6, float a7,
                                    float a8);
__attribute__((swiftcall)) void

nvidia_dlss_rel_source_common_33a60(PSEUDO_X8 x8_, char a1, char a2, char a3,
                                    unsigned __int8 a4, float a6, float a7,
                                    float a8)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8 v10;
  char v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  int v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  bool v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float result;
  float v53;
  float v54;

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  v10 = a2 ^ 1;
  v15 = a3 & (a2 ^ 1);
  if ((v15 & 1) != 0) {
    v16 = 0x1.99999a0000000p-4f;
  }
  else {
    v16 = 0x1.5c28f60000000p-3f;
  }
  v17 = fabsf_plt(a6),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((float)(v17 + fabsf_plt(a7)) >= 0x1.0000000000000p-2f) {
    v19 = fabsf_plt(a6),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
    v18 = fabsf(a6) / (float)(v19 + fabsf_plt(a7)),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v18 = (float)(PSEUDO_UNFUSED(fabsf_plt(a7) * -0x1.0000000000000p+2f)) +
          0x1.0000000000000p+0f,
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  sqrtf_plt(0x1.0000000000000p-1f),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  if (a7 <= 0x0.0p+0f) {
    v20 = -v20;
  }
  v21 = (float)(0x1.0000000000000p+0f - v18) * v20;
  if (a6 < 0x0.0p+0f) {
    v22 = -v21;
  }
  else {
    v22 = v21;
  }
  v23 = sqrtf_plt(0x1.0000000000000p+0f - (float)(v22 * v22)),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  v25 = v24;
  v26 = 0x1.ee147a0000000p+0f;
  if ((v15 & 1) != 0) {
    v26 = 0x1.99999a0000000p-2f;
  }
  v27 = v16 +
        (float)(v26 * (float)((float)((float)(PSEUDO_UNFUSED(a7 * a7)) +
                                      (float)(a6 * a6)) /
                              (float)((float)((float)(PSEUDO_UNFUSED(a7 * a7)) +
                                              (float)(a6 * a6)) +
                                      0x1.0000000000000p+0f)));
  v54 = (float)((float)(PSEUDO_UNFUSED(a7 * a7)) + (float)(a6 * a6)) /
        (float)((float)((float)(PSEUDO_UNFUSED(a7 * a7)) + (float)(a6 * a6)) +
                0x1.0000000000000p+0f);
  if ((v15 & 1) == 0) {
    *(float*)&v29 = 0x1.5c28f60000000p-3f;
    goto LABEL_21;
  }
  if (v27 <= 0x1.0000000000000p-1f) {
    v28 = 0x1.99999a0000000p-4f;
  }
  else {
    v28 = 0x1.1eb8520000000p-4f;
  }
  if (v27 > 0x1.99999a0000000p-2f) {
    *(float*)&v29 = 0x1.47ae140000000p-4f;
  LABEL_21:
    v28 = *(float*)&v29;
  }
  v53 = logf_plt(v23, 0x1.0000000000000p+1f),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  fabsf_plt(v25),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  fabsf_plt(v25),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  if (a6 < 0x0.0p+0f) {
    v30 = -v22;
  }
  else {
    v30 = v25;
  }
  if (a6 < 0x0.0p+0f) {
    v31 = v25;
  }
  else {
    v31 = v21;
  }
  v32 = -v31;
  v33 = fabsf_plt(v30),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  v34 = fabsf_plt(v32),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  v35 = v30 / v32;
  *(_BYTE*)(a5 + 16) = v33 > v34;
  if (v33 > v34) {
    v35 = v32 / v30;
  }
  v36 = 0x1.99999a0000000p-3f;
  v37 = -0x1.0000000000000p+0f / v53;
  if (v27 >= 0x1.99999a0000000p-3f) {
    v38 = v27;
  }
  else {
    v38 = 0x1.99999a0000000p-3f;
  }
  if ((a1 & 1) != 0) {
    v36 = v28;
    v38 = v27;
  }
  if ((a2 & 1) != 0) {
    v36 = 0x1.0000000000000p-1f;
  }
  if ((a2 & 1 & (v38 < 0x1.0000000000000p-1f)) != 0) {
    v38 = 0x1.0000000000000p-1f;
  }
  if (a6 < 0x0.0p+0f) {
    v39 = v38;
  }
  else {
    v39 = v36;
  }
  if (a6 >= 0x0.0p+0f) {
    v36 = v38;
  }
  v40 = v33 <= v34;
  v41 = v22 / v36;
  v42 = (float)-v25 / v36;
  v43 = v25 / v39;
  v44 = v22 / v39;
  v45 = v41 * v42;
  v46 = v37 * (float)((float)(PSEUDO_UNFUSED(v41 * v41)) + (float)(v43 * v43));
  v47 = v37 * (float)((float)(PSEUDO_UNFUSED(v42 * v42)) + (float)(v44 * v44));
  v48 = v37 * (float)((float)(v45 + (float)(v43 * v44)) +
                      (float)(v45 + (float)(v43 * v44)));
  if (v33 <= v34) {
    v49 = v46;
  }
  else {
    v49 = v47;
  }
  if (!v40) {
    v47 = v46;
  }
  *(float*)a5 = v49;
  *(float*)(a5 + 4) = v47;
  *(float*)(a5 + 8) = v48;
  *(float*)(a5 + 12) = v35;
  v50 = 0x0.0p+0f;
  if ((a4 & v10 & 1) == 0) {
    v50 = v54;
  }
  v51 = (float)(a8 - (float)(a8 * a8)) * v50;
  result = a8 * v50;
  *(float*)(a5 + 20) = (float)(v51 + (float)(a8 * a8)) - result;
  *(float*)(a5 + 24) = result;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
