#include "nn/codec/hwacod/hwacod_shim.hpp"

namespace nn::codec::hwacod::shim {

int InstanceAccessor::GetWorkBufferSize(int count) {
  return sizeof(HardwareAudioCodecInstance*) * count
    + alignof(HardwareAudioCodecInstance*) - 1;
}

Result InstanceAccessor::Initialize(void* buffer, size_t size, int count) {
  m_Instances = reinterpret_cast<HardwareAudioCodecInstance**>(
    (reinterpret_cast<uintptr_t>(buffer)
      + alignof(HardwareAudioCodecInstance*) - 1)
    & ~(alignof(HardwareAudioCodecInstance*) - 1));
  m_Count = count;
  return {0};
}

void InstanceAccessor::Finalize() {
  m_Instances = nullptr;
  m_Count = 0;
}

HardwareAudioCodecInstance* InstanceAccessor::GetInstance(int index) {
  return m_Instances[index];
}

void InstanceAccessor::RegisterInstance(HardwareAudioCodecInstance* instance) {
  m_Instances[instance->GetIndex()] = instance;
}

void InstanceAccessor::UnregisterInstance(
  HardwareAudioCodecInstance* instance) {
  m_Instances[instance->GetIndex()] = nullptr;
}

}
