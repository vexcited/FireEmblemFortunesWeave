#include "nn/codec/hardware_opus.hpp"

namespace nn::codec::opus::hw {

hwacod::HardwareAudioCodecManagerType* GetManagerType(
  HardwareOpusDecoderManagerType* manager) {
  return manager->storage->manager;
}

const hwacod::HardwareAudioCodecManagerType* GetManagerType(
  const HardwareOpusDecoderManagerType* manager) {
  return manager->storage->manager;
}

hwacod::HardwareAudioCodecInstanceType* AcquireInstanceType(
  HardwareOpusDecoderManagerType* manager) {
  DecoderManagerStorage* storage = manager->storage;
  storage->mutex.Lock();

  hwacod::HardwareAudioCodecInstanceType* instance = nullptr;
  for (size_t i = 0; i < storage->instanceCount; ++i) {
    if (!storage->isInstanceUsed[i]) {
      instance = &storage->instances[i];
      storage->isInstanceUsed[i] = true;
      break;
    }
  }

  storage->mutex.Unlock();
  return instance;
}

void ReleaseInstanceType(HardwareOpusDecoderManagerType* manager,
  hwacod::HardwareAudioCodecInstanceType* instance) {
  DecoderManagerStorage* storage = manager->storage;
  storage->mutex.Lock();

  for (size_t i = 0; i < storage->instanceCount; ++i) {
    if (&storage->instances[i] == instance) {
      storage->isInstanceUsed[i] = false;
      break;
    }
  }

  storage->mutex.Unlock();
}

hwacod::HardwareAudioCodecManagerType* GetManagerType(
  HardwareOpusMultiStreamDecoderManagerType* manager) {
  return manager->storage->manager;
}

const hwacod::HardwareAudioCodecManagerType* GetManagerType(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return manager->storage->manager;
}

hwacod::HardwareAudioCodecInstanceType* AcquireInstanceType(
  HardwareOpusMultiStreamDecoderManagerType* manager) {
  DecoderManagerStorage* storage = manager->storage;
  storage->mutex.Lock();

  hwacod::HardwareAudioCodecInstanceType* instance = nullptr;
  for (size_t i = 0; i < storage->instanceCount; ++i) {
    if (!storage->isInstanceUsed[i]) {
      instance = &storage->instances[i];
      storage->isInstanceUsed[i] = true;
      break;
    }
  }

  storage->mutex.Unlock();
  return instance;
}

void ReleaseInstanceType(HardwareOpusMultiStreamDecoderManagerType* manager,
  hwacod::HardwareAudioCodecInstanceType* instance) {
  DecoderManagerStorage* storage = manager->storage;
  storage->mutex.Lock();

  for (size_t i = 0; i < storage->instanceCount; ++i) {
    if (&storage->instances[i] == instance) {
      storage->isInstanceUsed[i] = false;
      break;
    }
  }

  storage->mutex.Unlock();
}

}
