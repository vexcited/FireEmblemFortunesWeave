#include "nn/codec/hardware_opus_service.hpp"
#include "nn/codec/hwacod/hwacod_parameter.hpp"
#include "nn/codec/hwacod/hwacod_shim.hpp"

namespace nn::audio::driver {

void FlushDataCache(const void* address, size_t size);

}

namespace nn::diag::detail {

[[noreturn]] void AbortImpl(const Result* result);

}

namespace nn::codec::hwacod::shim {
namespace {

constexpr Result ResultInvalidArgument = {0x7d06f};
constexpr Result ResultInstanceFull = {0x7ee6f};
constexpr int TaskCountMax = 255;

inline void AbortUnlessSuccess(Result result) {
  if (result.IsFailure()) {
    nn::diag::detail::AbortImpl(&result);
  }
}

}

sf::SharedPointer<IHardwareAudioCodecService> GetClientHipcSession() {
  sf::SharedPointer<codec::detail::IHardwareOpusDecoderManager> manager =
    opus::hw::server::GetHardwareOpusDecoderManagerByHipc();
  sf::SharedPointer<IHardwareAudioCodecService> service;
  manager->GetHardwareAudioCodecService(
    sf::Out<sf::SharedPointer<IHardwareAudioCodecService>>(&service));
  return service;
}

int HardwareAudioCodecManager::GetWorkBufferSize(int instanceCount,
  int ioBufferCount) {
  return InstanceAccessor::GetWorkBufferSize(instanceCount)
    + sizeof(int) * instanceCount
    + IoBufferManager::GetWorkBufferSize(ioBufferCount)
    + TaskProducer::GetWorkBufferSize(ioBufferCount) + 1;
}

HardwareAudioCodecManager::HardwareAudioCodecManager()
  : m_TransferMemory(), m_Session(), m_SharedMemory(), m_IoMemory(),
    m_FreeInstanceQueue(), m_ResultRing(), m_InstanceAccessor(),
    m_IoBufferManager(), m_TaskProducer(), m_Mutex(), m_SessionId(0),
    m_IsInitialized(false) {
}

HardwareAudioCodecManager::~HardwareAudioCodecManager() {
  if (m_IsInitialized) {
    Finalize();
  }
}

void HardwareAudioCodecManager::Finalize() {
  m_Mutex.Lock();
  m_Session.Reset();
  m_TransferMemory.reset();
  m_ResultRing.reset();
  m_IoMemory.reset();
  m_SharedMemory.reset();
  m_FreeInstanceQueue.reset();
  m_InstanceAccessor.Finalize();
  m_IoBufferManager.Finalize();
  m_TaskProducer.Finalize();
  m_InstanceWorkBufferSize = 0;
  m_IsInitialized = false;
  m_Mutex.Unlock();
}

void HardwareAudioCodecManager::Execute() {
  util::FixedQueue<Task>& queue = m_TaskProducer.GetQueue();
  const int count = queue.GetCount();
  if (count == 0) {
    return;
  }

  Task tasks[TaskCountMax];
  for (int i = 0; i < count; ++i) {
    queue.Pop(&tasks[i]);
  }
  // The service starts processing when it sees the last task flag.
  tasks[count - 1].reserved = true;
  AbortUnlessSuccess(m_Session->SubmitTasks(sf::InArray<Task>(tasks, count)));

  for (int i = 0; i < count; ++i) {
    const uint64_t header = tasks[i].header;
    m_InstanceAccessor.GetInstance(static_cast<uint16_t>(header >> 16))
      ->StartProcessing(static_cast<uint16_t>(header >> 32));
  }
}

void HardwareAudioCodecManager::UpdateProcessResult() {
  ResultRingHeader* header;
  for (;;) {
    audio::driver::FlushDataCache(m_ResultRing->header, 64);
    header = m_ResultRing->header;
    const int count = m_ResultRing->count;
    const uint32_t writeIndex = header->writeIndex;
    const uint32_t readIndex = header->readIndex;
    if (writeIndex - readIndex + (writeIndex < readIndex ? count : 0) == 0) {
      break;
    }

    audio::driver::FlushDataCache(&m_ResultRing->entries[readIndex], 64);
    const ResultEntry& entry = m_ResultRing->entries[readIndex];
    const int instanceIndex = entry.instanceIndex;
    const int value = entry.value;
    const TimeSpan processingTime = entry.processingTime;
    const Result result = entry.result;
    const size_t outputSize = entry.outputSize;
    header->readIndex = static_cast<int>(readIndex + 1)
      < static_cast<int>(m_ResultRing->count) ? readIndex + 1 : 0;
    audio::driver::FlushDataCache(
      reinterpret_cast<uint8_t*>(m_ResultRing->header) + 64, 64);

    m_InstanceAccessor.GetInstance(instanceIndex)->FinishProcessing(value,
      result, processingTime, outputSize);
  }
  audio::driver::FlushDataCache(reinterpret_cast<uint8_t*>(header) + 64, 64);
}

bool HardwareAudioCodecManager::CanInstantiate(
  const InstanceParameter& parameter) const {
  sf::SharedPointer<IHardwareAudioCodecService> service =
    GetClientHipcSession();
  uint32_t size = 0;
  AbortUnlessSuccess(service->GetInstanceWorkBufferSize(
    sf::Out<uint32_t>(&size), detail::ConvertInstanceParameter(parameter),
    1));
  return m_InstanceWorkBufferSize >= size;
}

Result HardwareAudioCodecManager::InitializeInstance(
  HardwareAudioCodecInstance* instance, const InstanceParameter& parameter) {
  m_Mutex.Lock();
  Result result;
  int index = 0;
  if (!m_FreeInstanceQueue->Pop(&index)) {
    result = ResultInstanceFull;
  }
  else {
    AbortUnlessSuccess(m_Session->InitializeInstance(index,
      detail::ConvertInstanceParameter(parameter)));
    result = instance->Initialize(this, index, parameter);
    if (result.IsFailure()) {
      m_FreeInstanceQueue->Push(index);
    }
    else {
      m_InstanceAccessor.RegisterInstance(instance);
    }
  }
  m_Mutex.Unlock();
  return result;
}

Result HardwareAudioCodecManager::FinalizeInstance(
  HardwareAudioCodecInstance* instance) {
  m_Mutex.Lock();
  m_InstanceAccessor.UnregisterInstance(instance);
  const int index = instance->GetIndex();
  AbortUnlessSuccess(m_Session->FinalizeInstance(index));
  instance->Finalize();
  const Result result = m_FreeInstanceQueue->Push(index)
    ? Result{0} : ResultInvalidArgument;
  m_Mutex.Unlock();
  return result;
}

}
