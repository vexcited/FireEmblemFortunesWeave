#include "nn/codec/hwacod/hwacod_shim.hpp"

namespace nn::codec::hwacod::shim {
namespace {

constexpr Result ResultInputTooLarge = {0x7ea6f};
constexpr Result ResultOutputBufferTooSmall = {0x7ec6f};
constexpr Result ResultIoBufferFull = {0x7f06f};
constexpr Result ResultNoOutputData = {0x7f46f};

void ClearList(ListNode* list) {
  while (!list->IsEmpty()) {
    list->next->Unlink();
  }
}

}

Result HardwareAudioCodecInstance::Initialize(
  HardwareAudioCodecManager* manager, int index,
  const InstanceParameter& parameter) {
  m_Parameter = parameter;
  m_Manager = manager;
  ClearList(&m_InputList);
  ClearList(&m_OutputList);
  m_Index = index;
  m_IsInitialized = true;
  m_IsResetRequested = false;
  return {0};
}

void HardwareAudioCodecInstance::Finalize() {
  HardwareAudioCodecManager* manager = m_Manager;
  for (ListNode* node = m_InputList.next; node != &m_InputList;
    node = node->next) {
    IoBuffer::FromNode(node)->Reset();
    manager->GetIoBufferManager().ReleaseIoBuffer(IoBuffer::FromNode(node));
  }
  for (ListNode* node = m_OutputList.next; node != &m_OutputList;
    node = node->next) {
    IoBuffer::FromNode(node)->Reset();
    manager->GetIoBufferManager().ReleaseIoBuffer(IoBuffer::FromNode(node));
  }

  m_Parameter = std::monostate();
  m_Manager = nullptr;
  ClearList(&m_InputList);
  ClearList(&m_OutputList);
  m_IsInitialized = false;
  m_Index = -1;
  m_IsResetRequested = false;
}

Result HardwareAudioCodecInstance::SetInputData(const void* data,
  size_t size) {
  HardwareAudioCodecManager* manager = m_Manager;
  IoBuffer* buffer = manager->GetIoBufferManager().AcquireIoBuffer();
  if (buffer == nullptr) {
    return ResultIoBufferFull;
  }
  if (size > buffer->GetInputBufferSize()) {
    manager->GetIoBufferManager().ReleaseIoBuffer(buffer);
    return ResultInputTooLarge;
  }

  buffer->WriteInputBuffer(data, size);
  m_InputList.LinkNext(buffer->GetNode());
  manager->GetTaskProducer().RegisterTask(m_Index, *buffer,
    m_IsResetRequested);
  m_IsResetRequested = false;
  return {0};
}

Result HardwareAudioCodecInstance::GetOutputData(size_t* outputSize,
  void* buffer, size_t bufferSize) {
  if (m_OutputList.IsEmpty()) {
    return ResultNoOutputData;
  }

  IoBuffer* output = IoBuffer::FromNode(m_OutputList.previous);
  if (outputSize != nullptr) {
    *outputSize = output->GetOutputDataSize();
  }
  if (buffer == nullptr) {
    output->Reset();
  }
  else {
    if (bufferSize < output->GetOutputDataSize()) {
      return ResultOutputBufferTooSmall;
    }
    output->ReadOutputBuffer(buffer, bufferSize);
  }

  const Result result = output->GetResult();
  m_ProcessingTime = output->GetProcessingTime();
  m_OutputList.previous->Unlink();
  m_Manager->GetIoBufferManager().ReleaseIoBuffer(output);
  return result;
}

void HardwareAudioCodecInstance::StartProcessing(int value) {
  ListNode* node = m_InputList.previous;
  IoBuffer::FromNode(node)->StartProcessing();
  m_InputList.previous->Unlink();
  m_ProcessingList.LinkNext(node);
}

void HardwareAudioCodecInstance::FinishProcessing(int value, Result result,
  TimeSpan processingTime, size_t outputSize) {
  ListNode* node = m_ProcessingList.previous;
  IoBuffer::FromNode(node)->FinishProcessing(result, processingTime,
    outputSize);
  m_ProcessingList.previous->Unlink();
  m_OutputList.LinkNext(node);
}

}
