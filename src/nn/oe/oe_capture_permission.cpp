#include "nn/oe/initialization.hpp"

namespace nn::oe::detail {

namespace {

constexpr uint32_t BufferPermission_ScreenShot = 1;
constexpr uint32_t BufferPermission_Recording = 2;

void ChangeBufferPermission(uint32_t bits, bool isEnabled) asm(
  "_ZN2nn3vi23sdk22ChangeBufferPermissionENS0_20BufferPermissionBitsEb");

// The permissions are read as flags, the raw bytes are trusted to be 0 or 1.
struct CaptureFlags {
  bool isScreenShotInitiallyEnabled;
  uint8_t reserved01[3];
  bool isScreenShotEnabled;
  uint8_t reserved05[3];
  bool isRecordingInitiallyEnabled;
  uint8_t reserved09[3];
  bool isRecordingEnabled;
  uint8_t reserved0d[3];
  bool isMovieMakerRecordingEnabled;
  uint8_t reserved11[3];
};

[[gnu::always_inline]] CaptureFlags& GetFlags() {
  return *reinterpret_cast<CaptureFlags*>(&Capture);
}

}

void SetScreenShotEnabled(bool isEnabled) {
  Capture.mutex.Lock();
  CaptureFlags& flags = GetFlags();
  flags.isScreenShotEnabled = isEnabled;
  const bool screenshot = flags.isScreenShotInitiallyEnabled & isEnabled;
  const bool recording = screenshot && flags.isRecordingInitiallyEnabled &&
    flags.isRecordingEnabled;
  ChangeBufferPermission(BufferPermission_ScreenShot, screenshot);
  ChangeBufferPermission(BufferPermission_Recording,
    recording | flags.isMovieMakerRecordingEnabled);
  Capture.mutex.Unlock();
}

void SetContinuousRecordingEnabled(bool isEnabled) {
  Capture.mutex.Lock();
  CaptureFlags& flags = GetFlags();
  flags.isRecordingEnabled = isEnabled;
  const bool screenshot =
    flags.isScreenShotInitiallyEnabled & flags.isScreenShotEnabled;
  const bool recording =
    screenshot & flags.isRecordingInitiallyEnabled & isEnabled;
  ChangeBufferPermission(BufferPermission_ScreenShot, screenshot);
  ChangeBufferPermission(BufferPermission_Recording,
    recording | flags.isMovieMakerRecordingEnabled);
  Capture.mutex.Unlock();
}

void SetMovieMakerRecordingEnabled(bool isEnabled) {
  Capture.mutex.Lock();
  CaptureFlags& flags = GetFlags();
  flags.isMovieMakerRecordingEnabled = isEnabled;
  const bool screenshot =
    flags.isScreenShotInitiallyEnabled & flags.isScreenShotEnabled;
  const bool recording = screenshot && flags.isRecordingInitiallyEnabled &&
    flags.isRecordingEnabled;
  ChangeBufferPermission(BufferPermission_ScreenShot, screenshot);
  ChangeBufferPermission(BufferPermission_Recording, recording | isEnabled);
  Capture.mutex.Unlock();
}

}
