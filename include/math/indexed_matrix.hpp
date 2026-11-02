#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::math {

template<size_t Rows, size_t Columns>
struct FixedProduct {
  float elements[Rows * Columns];
};

template<size_t Columns>
struct DynamicProduct {
  size_t columns;
  float elements[3 * Columns];
};

struct IndexedMatrix {
  float* elements;
  size_t column_stride;
  size_t row_stride;
  const size_t* rows;
  const size_t* columns;
};

struct RangeMatrix {
  float* elements;
  size_t column_stride;
  size_t row_stride;
  const size_t* rows;
  size_t columns;
  size_t first_column;
};

FixedProduct<3, 9> MultiplyIndexed3x9(const float*,
                                     const IndexedMatrix&)
  asm(
    "_ZN4nerd14linear_algebramlIffLl3ELl9ELl9ENS0_11LMatrixType5DenseILb1EE"
    "ENS2_4ViewIRNS0_7LVectorImLl9ELb0ENS0_11LVectorType5DenseEEESA_EEEEDaR"
    "KNS0_7LMatrixIT_XT1_EXT2_ET4_EERKNSC_IT0_XT2_EXT3_ET5_EE"
  );

FixedProduct<6, 9> MultiplyIndexed6x9(const float*,
                                     const IndexedMatrix&)
  asm(
    "_ZN4nerd14linear_algebramlIffLl6ELl9ELl9ENS0_11LMatrixType5DenseILb1EE"
    "ENS2_4ViewIRNS0_7LVectorImLl9ELb0ENS0_11LVectorType5DenseEEESA_EEEEDaR"
    "KNS0_7LMatrixIT_XT1_EXT2_ET4_EERKNSC_IT0_XT2_EXT3_ET5_EE"
  );

DynamicProduct<30> MultiplyIndexed3x3Dynamic(const float*,
                                            const IndexedMatrix&)
  asm(
    "_ZN4nerd14linear_algebramlIffLl3ELl3ELln30ENS0_11LMatrixType5DenseILb1"
    "EEENS2_4ViewIRNS0_7LVectorImLl3ELb0ENS0_11LVectorType5DenseEEERNS6_ImL"
    "ln30ELb0ES8_EEEEEEDaRKNS0_7LMatrixIT_XT1_EXT2_ET4_EERKNSE_IT0_XT2_EXT3"
    "_ET5_EE"
  );

DynamicProduct<30> MultiplyIndexed3x9Dynamic(const float*,
                                            const IndexedMatrix&)
  asm(
    "_ZN4nerd14linear_algebramlIffLl3ELl9ELln30ENS0_11LMatrixType5DenseILb1"
    "EEENS2_4ViewIRNS0_7LVectorImLl9ELb0ENS0_11LVectorType5DenseEEERNS6_ImL"
    "ln30ELb0ES8_EEEEEEDaRKNS0_7LMatrixIT_XT1_EXT2_ET4_EERKNSE_IT0_XT2_EXT3"
    "_ET5_EE"
  );

DynamicProduct<33> MultiplyRange3x3(const float*,
                                    const RangeMatrix&)
  asm(
    "_ZN4nerd14linear_algebramlIffLl3ELl3ELln33ENS0_11LMatrixType5DenseILb1"
    "EEENS2_4ViewIRNS0_7LVectorImLl3ELb0ENS0_11LVectorType5DenseEEENS6_ImLl"
    "n33ELb0ENS7_5RangeEEEEEEEDaRKNS0_7LMatrixIT_XT1_EXT2_ET4_EERKNSE_IT0_X"
    "T2_EXT3_ET5_EE"
  );

void MakeIndexedSymmetric6(IndexedMatrix&)
  asm(
    "_ZN4nerd14linear_algebra21LMakeSymmetricInPlaceIfLl6ENS0_11LMatrixType"
    "4ViewIRNS0_7LVectorImLl6ELb0ENS0_11LVectorType5DenseEEES8_EEEEvRNS0_7L"
    "MatrixIT_XT0_EXT0_ET1_EE"
  );

void SymmetricLowerProduct21(const float*, float*)
  asm(
    "_ZN4nerd14linear_algebra28LSymmetricProductLSLTInPlaceIfLl21ENS0_11LMa"
    "trixType5DenseILb1EEEEEvRKNS0_7LMatrixIT_XT0_EXT0_ENS2_10TriangularILb"
    "0ET1_EEEERNS5_IS6_XT0_EXT0_ES4_EE"
  );

static_assert(sizeof(IndexedMatrix) == 40);
static_assert(sizeof(RangeMatrix) == 48);
static_assert(sizeof(DynamicProduct<30>) == 368);
static_assert(sizeof(DynamicProduct<33>) == 408);

}
