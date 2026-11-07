#pragma once

#include <stddef.h>
#include <stdint.h>

#include <atomic>
#include <optional>

#include "nn/codec/hwacod.hpp"
#include "nn/codec/util/fixed_queue.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::codec::util {

template<class T>
class FixedQueue : public detail::FixedQueueImpl {
public:
  FixedQueue(void* buffer, size_t size) : FixedQueueImpl(buffer, size) {}

  bool Push(const T& value) { return FixedQueueImpl::Push(&value, sizeof(T)); }
  bool Pop(T* value) { return FixedQueueImpl::Pop(value, sizeof(T), sizeof(T)); }

  size_t GetCapacity() const { return (GetBufferSize() - 1) / sizeof(T); }
  size_t GetCount() const { return GetUsedSize() / sizeof(T); }
  size_t GetFreeCount() const { return GetFreeSize() / sizeof(T); }
};

}

namespace nn::codec::hwacod {

enum HardwareAudioCodecManagerProperty {};

using HardwareAudioCodecManagerProperties =
  nn::util::BitPack<uint32_t, HardwareAudioCodecManagerProperty>;

}

namespace nn::codec::hwacod::detail {

enum InstanceType : uint64_t {
  InstanceType_Stub,
  InstanceType_Opus,
  InstanceType_OpusMultiStream,
  InstanceType_None,
};

struct InstanceParameter {
  InstanceType type = InstanceType_None;
  int32_t sampleRate;
  int32_t channelCount;
  TimeSpan frameDuration;
  int32_t totalStreamCount;
  int32_t stereoStreamCount;
  uint8_t channelMapping[255];
};

static_assert(sizeof(InstanceParameter) == 288);

Result ValidateInstanceParameter(const InstanceParameter& parameter);

struct IoBufferParameter {
  uint32_t inputBufferSize;
  uint32_t outputBufferSize;
  int32_t count;
};

}

namespace nn::codec::hwacod::shim {

class HardwareAudioCodecManager;

Result GetFirstInputDataSize(size_t* size, const InstanceParameter& parameter,
  const void* data, size_t dataSize);

class HardwareAudioCodecInstance {
public:
  Result Initialize(HardwareAudioCodecManager* manager, int index,
    const InstanceParameter& parameter);
  void Finalize();
  Result SetInputData(const void* data, size_t size);
  Result GetOutputData(size_t* outputSize, void* buffer, size_t bufferSize);
  void StartProcessing(int value);
  void FinishProcessing(int value, Result result, TimeSpan processingTime,
    size_t outputSize);

  int GetIndex() const { return m_Index; }
  HardwareAudioCodecManager* GetManager() const { return m_Manager; }
  const InstanceParameter& GetParameter() const { return m_Parameter; }
  TimeSpan GetProcessingTime() const { return m_ProcessingTime; }
  int GetInputDataCount() const { return CountNodes(m_InputList); }
  int GetProcessingDataCount() const { return CountNodes(m_ProcessingList); }
  int GetOutputDataCount() const { return CountNodes(m_OutputList); }

  void RequestReset() {
    m_IsResetRequested.store(true, std::memory_order_release);
  }

private:
  InstanceParameter m_Parameter;
  HardwareAudioCodecManager* m_Manager;
  ListNode m_InputList;
  ListNode m_ProcessingList;
  ListNode m_OutputList;
  TimeSpan m_ProcessingTime;
  int m_Index;
  bool m_IsInitialized;
  std::atomic<bool> m_IsResetRequested;

  static int CountNodes(const ListNode& list) {
    int count = 0;
    for (const ListNode* node = list.next; node != &list; node = node->next) {
      ++count;
    }
    return count;
  }
};

static_assert(sizeof(HardwareAudioCodecInstance) == 360);

class InstanceAccessor {
public:
  static int GetWorkBufferSize(int count);

  Result Initialize(void* buffer, size_t size, int count);
  void Finalize();
  HardwareAudioCodecInstance* GetInstance(int index);
  void RegisterInstance(HardwareAudioCodecInstance* instance);
  void UnregisterInstance(HardwareAudioCodecInstance* instance);

private:
  HardwareAudioCodecInstance** m_Instances;
  size_t m_Count;
};

enum IoBufferState {
  IoBufferState_Free,
  IoBufferState_Written,
  IoBufferState_Processing,
  IoBufferState_Finished,
};

class IoBuffer {
public:
  IoBuffer(int index, void* inputBuffer, size_t inputBufferSize,
    void* outputBuffer, size_t outputBufferSize)
    : m_Node(), m_State(IoBufferState_Free), m_Index(index),
      m_InputBuffer(inputBuffer), m_InputBufferSize(inputBufferSize),
      m_InputDataSize(0), m_OutputBuffer(outputBuffer),
      m_OutputBufferSize(outputBufferSize), m_OutputDataSize(0),
      m_ProcessingTime() {}

  void WriteInputBuffer(const void* data, size_t size);
  void StartProcessing();
  void FinishProcessing(Result result, TimeSpan processingTime,
    size_t outputSize);
  size_t ReadOutputBuffer(void* buffer, size_t bufferSize);
  void Reset();

  int GetIndex() const { return m_Index; }
  size_t GetInputBufferSize() const { return m_InputBufferSize; }
  size_t GetInputDataSize() const { return m_InputDataSize; }
  size_t GetOutputDataSize() const { return m_OutputDataSize; }
  Result GetResult() const { return m_Result; }
  TimeSpan GetProcessingTime() const { return m_ProcessingTime; }

  static IoBuffer* FromNode(ListNode* node) {
    return reinterpret_cast<IoBuffer*>(node);
  }

  ListNode* GetNode() { return &m_Node; }

private:
  ListNode m_Node;
  IoBufferState m_State;
  int m_Index;
  void* m_InputBuffer;
  size_t m_InputBufferSize;
  size_t m_InputDataSize;
  void* m_OutputBuffer;
  size_t m_OutputBufferSize;
  size_t m_OutputDataSize;
  Result m_Result;
  TimeSpan m_ProcessingTime;
};

static_assert(sizeof(std::optional<IoBuffer>) == 96);

class IoBufferManager {
public:
  IoBufferManager();
  ~IoBufferManager();

  static int GetWorkBufferSize(int count);

  Result Initialize(void* buffer, size_t size,
    const detail::IoBufferParameter& parameter, void* ioMemory);
  void Finalize();
  IoBuffer* AcquireIoBuffer();
  void ReleaseIoBuffer(IoBuffer* buffer);

  int GetTotalCount() const { return m_FreeQueue->GetCapacity(); }
  int GetFreeCount() const { return m_FreeQueue->GetCount(); }
  int GetUsingCount() const { return m_FreeQueue->GetFreeCount(); }

private:
  std::optional<IoBuffer>* m_Buffers;
  size_t m_Count;
  std::optional<util::FixedQueue<int>> m_FreeQueue;
  os::SdkMutexType m_Mutex;
  bool m_IsInitialized;
};

static_assert(sizeof(IoBufferManager) == 384);

struct Task {
  uint64_t header;
  uint32_t dataSize;
  bool isResetRequested;
  bool reserved;
};

class TaskProducer {
public:
  static int GetWorkBufferSize(int count);

  Result Initialize(void* buffer, size_t size, int count, int id);
  void Finalize();
  bool RegisterTask(int type, const IoBuffer& buffer, bool isResetRequested);
  uint64_t CreateHeader(int type, int value);

  util::FixedQueue<Task>& GetQueue() { return *m_Queue; }

private:
  std::optional<util::FixedQueue<Task>> m_Queue;
  std::atomic<uint16_t> m_SequenceNumber;
  int m_Id;
};

class WorkBufferSizeCalculator {
public:
  WorkBufferSizeCalculator(const InstanceParameter& parameter,
    int instanceCount, int ioBufferCount);

  size_t GetWorkBufferSize() const { return m_WorkBufferSize; }

private:
  InstanceParameter m_Parameter;
  int m_InstanceCount;
  int m_IoBufferCount;
  size_t m_WorkBufferSize;
  // Sizes and offsets of the work buffer regions shared with the service.
  uint32_t m_Layout[24];
};

static_assert(sizeof(WorkBufferSizeCalculator) == 400);

class IHardwareAudioCodecSession : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result InitializeInstance(int index,
    const detail::InstanceParameter& parameter) = 0;
  virtual Result FinalizeInstance(int index) = 0;
  virtual Result SubmitTasks(const sf::InArray<Task>& tasks) = 0;
};

class IHardwareAudioCodecService : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result GetInstanceWorkBufferSize(sf::Out<uint32_t> size,
    const detail::InstanceParameter& parameter, int version) = 0;
  virtual Result GetIoBufferHeaderSize(sf::Out<uint32_t> size, int count,
    int version) = 0;
};

sf::SharedPointer<IHardwareAudioCodecService> GetClientHipcSession();

struct MemoryRegion {
  void* address;
  size_t size;
};

struct ResultRingHeader {
  uint32_t reserved0;
  uint32_t writeIndex;
  uint8_t reserved8[56];
  uint32_t reserved64;
  uint32_t readIndex;
  uint8_t reserved72[56];
};

struct ResultEntry {
  uint16_t reserved0;
  uint16_t instanceIndex;
  uint16_t value;
  uint16_t reserved6;
  TimeSpan processingTime;
  uint32_t outputSize;
  Result result;
  uint8_t reserved24[40];
};

static_assert(sizeof(ResultEntry) == 64);

static_assert(sizeof(ResultRingHeader) == 128);

struct ResultRing {
  ResultRingHeader* header;
  ResultEntry* entries;
  size_t count;
};

class HardwareAudioCodecManager {
public:
  HardwareAudioCodecManager();
  ~HardwareAudioCodecManager();

  static int GetWorkBufferSize(int instanceCount, int ioBufferCount);

  Result Initialize(os::SystemEventType* event, void* buffer, size_t size,
    const WorkBufferSizeCalculator& calculator,
    HardwareAudioCodecManagerProperties properties);
  void Finalize();
  void Execute();
  void UpdateProcessResult();
  bool CanInstantiate(const InstanceParameter& parameter) const;
  Result InitializeInstance(HardwareAudioCodecInstance* instance,
    const InstanceParameter& parameter);
  Result FinalizeInstance(HardwareAudioCodecInstance* instance);

  int GetTotalInstanceCount() const {
    return m_FreeInstanceQueue->GetCapacity();
  }
  int GetFreeInstanceCount() const { return m_FreeInstanceQueue->GetCount(); }
  int GetUsingInstanceCount() const {
    return m_FreeInstanceQueue->GetFreeCount();
  }
  int GetTotalIoBufferCount() const {
    return m_IoBufferManager.GetTotalCount();
  }
  int GetFreeIoBufferCount() const { return m_IoBufferManager.GetFreeCount(); }
  int GetUsingIoBufferCount() const {
    return m_IoBufferManager.GetUsingCount();
  }

  IoBufferManager& GetIoBufferManager() { return m_IoBufferManager; }
  TaskProducer& GetTaskProducer() { return m_TaskProducer; }

private:
  std::optional<os::TransferMemory> m_TransferMemory;
  sf::SharedPointer<IHardwareAudioCodecSession> m_Session;
  std::optional<MemoryRegion> m_SharedMemory;
  std::optional<MemoryRegion> m_IoMemory;
  std::optional<util::FixedQueue<int>> m_FreeInstanceQueue;
  std::optional<ResultRing> m_ResultRing;
  InstanceAccessor m_InstanceAccessor;
  IoBufferManager m_IoBufferManager;
  TaskProducer m_TaskProducer;
  os::SdkMutexType m_Mutex;
  size_t m_InstanceWorkBufferSize;
  int m_SessionId;
  bool m_IsInitialized;
};

static_assert(sizeof(HardwareAudioCodecManager) == 1216);

}
