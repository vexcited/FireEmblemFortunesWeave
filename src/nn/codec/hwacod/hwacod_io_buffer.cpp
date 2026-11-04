#include "nn/codec/hwacod/hwacod_shim.hpp"

#include <string.h>

#include "nn/os/transfer_memory.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();
bool NotNullImpl(uintptr_t pointer);

}

namespace nn::codec::hwacod::shim {

void IoBuffer::WriteInputBuffer(const void* data, size_t size) {
  memcpy(m_InputBuffer, data, size);
  m_InputDataSize = size;
  m_State = IoBufferState_Written;
  os::FlushDataCache(m_InputBuffer, size);
}

void IoBuffer::StartProcessing() {
  m_State = IoBufferState_Processing;
}

void IoBuffer::FinishProcessing(Result result, TimeSpan processingTime,
  size_t outputSize) {
  m_Result = result;
  m_ProcessingTime = processingTime;
  m_OutputDataSize = outputSize;
  m_State = IoBufferState_Finished;
}

size_t IoBuffer::ReadOutputBuffer(void* buffer, size_t bufferSize) {
  os::FlushDataCache(m_OutputBuffer, m_OutputDataSize);
  memcpy(buffer, m_OutputBuffer, m_OutputDataSize);
  m_State = IoBufferState_Free;
  return m_OutputDataSize;
}

void IoBuffer::Reset() {
  m_InputDataSize = 0;
  m_OutputDataSize = 0;
  m_State = IoBufferState_Free;
}

IoBufferManager::IoBufferManager()
  : m_Buffers(nullptr), m_Count(0), m_FreeQueue(), m_Mutex(),
    m_IsInitialized(false) {
}

IoBufferManager::~IoBufferManager() {
  if (m_IsInitialized) {
    Finalize();
  }
}

void IoBufferManager::Finalize() {
  for (size_t i = 0; i < m_Count; ++i) {
    m_Buffers[i].reset();
  }
  m_FreeQueue.reset();
  m_IsInitialized = false;
}

int IoBufferManager::GetWorkBufferSize(int count) {
  return sizeof(std::optional<IoBuffer>) * count + sizeof(int) * count + 1
    + alignof(std::optional<IoBuffer>) - 1;
}

Result IoBufferManager::Initialize(void* buffer, size_t size,
  const detail::IoBufferParameter& parameter, void* ioMemory) {
  const int count = parameter.count;
  m_Buffers = reinterpret_cast<std::optional<IoBuffer>*>(
    (reinterpret_cast<uintptr_t>(buffer) + alignof(IoBuffer) - 1)
    & ~(alignof(IoBuffer) - 1));
  m_Count = count;

  void* queueBuffer = m_Buffers + count;
  m_FreeQueue.reset();
  m_FreeQueue.emplace(queueBuffer, sizeof(int) * count + 1);
  if (!nn::diag::detail::NotNullImpl(reinterpret_cast<uintptr_t>(
    queueBuffer))) {
    nn::diag::detail::AbortImpl();
  }
  if (count <= 0) {
    nn::diag::detail::AbortImpl();
  }
  if (static_cast<size_t>(static_cast<uint8_t*>(buffer) + size
    - static_cast<uint8_t*>(queueBuffer)) <= sizeof(int) * count) {
    nn::diag::detail::AbortImpl();
  }

  uint8_t* memory = static_cast<uint8_t*>(ioMemory);
  const uint32_t stride =
    parameter.inputBufferSize + parameter.outputBufferSize;
  for (int index = 0; index < count;) {
    m_Buffers[index].emplace(index, memory, parameter.inputBufferSize,
      memory + parameter.inputBufferSize, parameter.outputBufferSize);
    m_FreeQueue->Push(index);
    memory += stride;
    ++index;
  }

  m_IsInitialized = true;
  return {0};
}

IoBuffer* IoBufferManager::AcquireIoBuffer() {
  m_Mutex.Lock();
  IoBuffer* buffer = nullptr;
  int index = 0;
  if (m_FreeQueue->Pop(&index)) {
    buffer = &m_Buffers[index].value();
  }
  m_Mutex.Unlock();
  return buffer;
}

void IoBufferManager::ReleaseIoBuffer(IoBuffer* buffer) {
  m_Mutex.Lock();
  const int index = buffer->GetIndex();
  m_FreeQueue->Push(index);
  m_Mutex.Unlock();
}

}
