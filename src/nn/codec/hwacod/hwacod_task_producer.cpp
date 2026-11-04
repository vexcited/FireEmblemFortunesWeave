#include "nn/codec/hwacod/hwacod_shim.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();
bool NotNullImpl(uintptr_t pointer);

}

namespace nn::codec::hwacod::shim {

int TaskProducer::GetWorkBufferSize(int count) {
  return sizeof(Task) * count + 1;
}

Result TaskProducer::Initialize(void* buffer, size_t size, int count,
  int id) {
  m_Queue.reset();
  m_Queue.emplace(buffer, sizeof(Task) * count + 1);
  if (!nn::diag::detail::NotNullImpl(reinterpret_cast<uintptr_t>(buffer))) {
    nn::diag::detail::AbortImpl();
  }
  if (count <= 0) {
    nn::diag::detail::AbortImpl();
  }
  if (size <= sizeof(Task) * count) {
    nn::diag::detail::AbortImpl();
  }

  m_Id = id;
  m_SequenceNumber = 0;
  return {0};
}

void TaskProducer::Finalize() {
  m_Queue.reset();
  m_Id = -1;
}

bool TaskProducer::RegisterTask(int type, const IoBuffer& buffer,
  bool isResetRequested) {
  Task task = {};
  task.header = CreateHeader(type, buffer.GetIndex());
  task.dataSize = buffer.GetInputDataSize();
  task.isResetRequested = isResetRequested;
  task.reserved = false;
  return m_Queue->Push(task);
}

// Task headers pack the producer id, the task type, a type specific value
// and a sequence number in 16 bit fields.
uint64_t TaskProducer::CreateHeader(int type, int value) {
  const uint16_t id = m_Id;
  const uint16_t sequenceNumber = m_SequenceNumber;
  ++m_SequenceNumber;
  return static_cast<uint64_t>(sequenceNumber) << 48
    | static_cast<uint64_t>(static_cast<uint16_t>(value)) << 32
    | static_cast<uint32_t>(type << 16) | id;
}

}
