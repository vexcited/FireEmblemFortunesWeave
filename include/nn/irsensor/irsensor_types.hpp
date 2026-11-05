#pragma once

#include <stdint.h>

namespace nn::irsensor {

struct IrCameraHandle {
  uint32_t _handle;
};

enum IrCameraStatus : int32_t {
  IrCameraStatus_Available,
  IrCameraStatus_Unsupported,
  IrCameraStatus_Unconnected,
};

enum IrCameraInternalStatus : int32_t {
  IrCameraInternalStatus_Available,
};

}

namespace nn::irsensor {

struct IrSensorFunctionLevel {
  int32_t level;
};

struct PackedFunctionLevel {
  uint8_t level;
};

struct PackedMcuVersion {
  uint32_t value;
};

struct Rect {
  int16_t x;
  int16_t y;
  int16_t width;
  int16_t height;
};

enum ImageTransferProcessorFormat : int32_t {
  ImageTransferProcessorFormat_320x240,
  ImageTransferProcessorFormat_160x120,
  ImageTransferProcessorFormat_80x60,
  ImageTransferProcessorFormat_40x30,
  ImageTransferProcessorFormat_20x15,
};

enum IrCameraAmbientNoiseLevel : int32_t {
  IrCameraAmbientNoiseLevel_Low,
  IrCameraAmbientNoiseLevel_Middle,
  IrCameraAmbientNoiseLevel_High,
  IrCameraAmbientNoiseLevel_Unknown,
};

struct PackedImageProcessorConfig {
  int64_t exposureTime;
  uint8_t lightTarget;
  uint8_t gain;
  bool isNegativeImageUsed;
  uint8_t reserved[5];
};

struct PackedMomentProcessorConfig {
  PackedImageProcessorConfig base;
  Rect windowOfInterest;
  uint8_t preprocess;
  uint8_t preprocessIntensityThreshold;
  uint8_t reserved[6];
};

struct PackedClusteringProcessorConfig {
  PackedImageProcessorConfig base;
  Rect windowOfInterest;
  uint32_t objectPixelCountMin;
  uint32_t objectPixelCountMax;
  uint8_t objectIntensityMin;
  bool isExternalLightFilterEnabled;
  uint8_t reserved[2];
};

struct PackedImageTransferProcessorConfig {
  PackedImageProcessorConfig base;
  uint8_t reserved[4];
  int8_t format;
  uint8_t reserved2[3];
};

struct PackedImageTransferProcessorExConfig {
  PackedImageProcessorConfig base;
  uint8_t reserved[4];
  int8_t origFormat;
  int8_t trimmingFormat;
  uint8_t reserved2[2];
};

struct PackedPointingProcessorConfig {
  Rect windowOfInterest;
};

struct PackedTeraPluginProcessorConfig {
  uint64_t value;
};

struct PackedIrLedProcessorConfig {
  uint64_t value;
};

struct ImageTransferProcessorState {
  int64_t samplingNumber;
  IrCameraAmbientNoiseLevel ambientNoiseLevel;
  uint8_t reserved[4];
};

struct ClusteringProcessorState {
  int64_t samplingNumber;
  int64_t timeStampNanoSeconds;
  int8_t objectCount;
  uint8_t reserved[3];
  IrCameraAmbientNoiseLevel ambientNoiseLevel;
};

struct PointingProcessorMarkerData {
  uint8_t pointingStatus;
  uint8_t reserved[31];
};

struct PointingProcessorMarkerState {
  int64_t samplingNumber;
  int64_t timeStampNanoSeconds;
  PointingProcessorMarkerData data[3];
};

struct TeraPluginProcessorState {
  int64_t samplingNumber;
  int64_t timeStampNanoSeconds;
  IrCameraAmbientNoiseLevel ambientNoiseLevel;
};

}
