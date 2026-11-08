#include "nn/irsensor/irsensor_types.hpp"

namespace nn::irsensor {

namespace {

// The moment processor splits the window into eight columns and six rows.
constexpr int MomentColumnCount = 8;
constexpr int MomentRowCount = 6;

}

struct MomentStatistic {
  float averageIntensity;
  float centroidX;
  float centroidY;
};

struct MomentProcessorState {
  uint8_t header[0x18];
  MomentStatistic blocks[MomentRowCount * MomentColumnCount];
};

// The centroid is weighted by the light of each block, the average is over
// every pixel of the region.
MomentStatistic CalculateMomentRegionStatistic(
  const MomentProcessorState* pState, const Rect& window, int startRow,
  int startColumn, int rowCount, int columnCount) {
  const int blockWidth = window.width / MomentColumnCount;
  const int16_t blockHeight =
    static_cast<int16_t>(window.height / MomentRowCount);
  double sum = 0.0;
  double sumX = 0.0;
  double sumY = 0.0;
  if (rowCount >= 1 && columnCount >= 1) {
    for (long row = startRow; row < startRow + rowCount; row++) {
      for (long column = startColumn; column < startColumn + columnCount;
        column++) {
        const MomentStatistic& block =
          pState->blocks[row * MomentColumnCount + column];
        const float weight = block.averageIntensity *
          static_cast<float>(blockWidth) * static_cast<float>(blockHeight);
        sum += weight;
        sumX += block.centroidX * weight;
        sumY += block.centroidY * weight;
      }
    }
  }
  MomentStatistic statistic;
  if (sum != 0.0) {
    statistic.centroidX = static_cast<float>(sumX / sum);
    statistic.centroidY = static_cast<float>(sumY / sum);
  }
  else {
    statistic.centroidX = 0.0f;
    statistic.centroidY = 0.0f;
  }
  statistic.averageIntensity = static_cast<float>(sum /
    static_cast<double>(columnCount * rowCount * blockWidth * blockHeight));
  return statistic;
}

}
