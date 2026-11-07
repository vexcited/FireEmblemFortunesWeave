#pragma once

#include <stddef.h>
#include <stdint.h>

#include <algorithm>
#include <atomic>
#include <cstddef>
#include <optional>

#include "nn/applet/applet_types.hpp"
#include "nn/audio/renderer_config.hpp"
#include "nn/audio/server/behavior_info.hpp"
#include "nn/audio/server/command_buffer.hpp"
#include "nn/audio/server/effect_context.hpp"
#include "nn/audio/server/memory_pool_info.hpp"
#include "nn/audio/server/mix_context.hpp"
#include "nn/audio/server/performance_manager.hpp"
#include "nn/audio/server/sink_info.hpp"
#include "nn/audio/server/splitter_context.hpp"
#include "nn/audio/server/upsampler_manager.hpp"
#include "nn/audio/server/voice_context.hpp"
#include "nn/os/event.hpp"
#include "nn/os/event_class.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/thread_manager.hpp"
#include "nn/result.hpp"
#include "nn/sf/exp_heap_allocator.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/span.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::os {

class SystemEvent;
struct SystemEventType;
struct EventType;

void WaitEvent(EventType* event);

void SignalSystemEvent(SystemEventType* event);
void ClearSystemEvent(SystemEventType* event);
uint32_t GetReadableHandleOfSystemEvent(const SystemEventType* event);

}

namespace nn::audio {

struct AudioDeviceName;

namespace detail {

class IAudioDevice;

}

namespace dsp {

Result Start();
void Stop();
void InitializeProcessSession(uint32_t processHandle, int sessionId,
  bool isUserProcess);
void FlushDataCache(const void* address, size_t size);
void Sleep();
void Wake();
void Wait();
void Signal();
void FinalizeProcessSession(uint32_t processHandle, int sessionId);
int GetRemainCommandCount(int sessionId);
void ClearRemainCommandCount(int sessionId);
os::Tick GetRenderingStartTick(int sessionId);
void SendCommandBuffer(int sessionId, DspAddr address, size_t size,
  int timeLimit, bool isResetRequired, uint64_t appletResourceUserId);

class CommandListProcessor {
public:
  CommandListProcessor();

  void SetProcessTimeMax(uint32_t time);
  void Setup(const void* commands, size_t size);
  void Process();

private:
  uint8_t reserved[96];
};

}

namespace renderer::server {

struct RendererParameter {
  RendererParameter() = default;

  int voiceCount = 0;
  int subMixCount = 0;
  int sinkCount = 0;
  int effectCount = 0;
  int performanceFrameCount = 0;
  int splitterCount = 0;
  int splitterSendChannelCount = 0;
  bool isVoiceDropEnabled = false;
  int mixBufferCount = 0;
  int sampleCount = 0;
  int sampleRate = 0;
  int memoryPoolCount = 0;
  int executionMode = 0;
  int renderingDevice = 0;
  audio::detail::AudioRendererParameterInternal parameter{};
  int renderingTimeLimit = 100;
  float voiceDropParameter = 1.0f;
  const audio::server::BehaviorInfo* behavior = nullptr;

  audio::detail::AudioRendererParameterInternal GetParameterInternal() const {
    return parameter;
  }
};

static_assert(sizeof(RendererParameter) == 128);

struct DspRenderingTimeBudgetInfo {
  uint32_t cycleTime = 0;
  uint32_t renderingTimeMax = 0;
  uint32_t renderingTimeDefault = 0;
  uint32_t renderingTimeBudget = 0;
  float renderingTimeLimitRatio = 1.0f;
};

template <bool IsServer>
struct TClientInfo;

template <>
struct TClientInfo<false> {
  uint8_t reserved[24];
  audio::server::BehaviorInfo behavior;
};

struct SystemDebugControl {
  bool isPerformanceDumpEnabled = false;
  bool isCommandDumpEnabled = false;
  bool isVoiceDumpEnabled = false;
};

}

namespace server {

struct CommandGeneratorProfileData;

namespace detail {

void InitializeAudioDevice(const applet::AppletResourceUserId& id);
void FinalizeAudioDevice(const applet::AppletResourceUserId& id);
int ListAudioDeviceName(AudioDeviceName* names, int count, uint32_t revision);
int ListAudioOutputDeviceName(AudioDeviceName* names, int count,
  uint32_t revision);
void SetAudioDeviceOutputVolume(const AudioDeviceName* name, float volume,
  const applet::AppletResourceUserId& id, uint32_t revision);
float GetAudioDeviceOutputVolume(const AudioDeviceName* name,
  const applet::AppletResourceUserId& id, uint32_t revision);
void GetActiveAudioDeviceName(AudioDeviceName* name, uint32_t revision);
void GetActiveAudioOutputDeviceName(AudioDeviceName* name,
  uint32_t revision);
Result QueryAudioDeviceSystemEvent(uint32_t* handle,
  const applet::AppletResourceUserId& id);
Result QueryAudioDeviceInputNotificationEvent(uint32_t* handle,
  const applet::AppletResourceUserId& id);
Result QueryAudioDeviceOutputNotificationEvent(uint32_t* handle,
  const applet::AppletResourceUserId& id);
int GetActiveChannelCount();
float GetAudioSystemMasterVolumeSetting(const AudioDeviceName* name);
void SetAudioDeviceOutputVolumeAutoTuneEnabled(bool isEnabled,
  applet::AppletResourceUserId id);
bool IsAudioDeviceOutputVolumeAutoTuneEnabled(
  applet::AppletResourceUserId id);
bool IsActiveOutputDeviceEstimatedLowLatency();

}

class AudioRenderSystem {
  friend class AudioRenderSystemManager;

public:
  static constexpr float VoiceDropParameterMax = 4.0f;
  static constexpr uint32_t RenderingTimeLimitMax = 100;

  enum ExecutionMode {
    ExecutionMode_Auto,
    ExecutionMode_Manual,
  };

  enum RenderingDevice {
    RenderingDevice_Dsp,
    RenderingDevice_Cpu,
  };

  explicit AudioRenderSystem(os::SystemEvent& event);

  static Result GetWorkBufferSize(size_t* size,
    const audio::detail::AudioRendererParameterInternal& parameter);
  static size_t GetWorkBufferSizeImpl(
    const audio::detail::AudioRendererParameterInternal& parameter);
  static size_t CalculateCommandBufferSize(
    const audio::detail::AudioRendererParameterInternal& parameter,
    const BehaviorInfo& behavior);

  static size_t GetRequiredBufferSizeForPerformanceMetricsPerFrame(
    const BehaviorInfo& behavior,
    const audio::detail::AudioRendererParameterInternal& parameter);

  void DumpRendererProperties();
  void DumpRendererMemoryMap();
  void SetUpSystemDebugControl();
  Result SetUpDependencies();
  void SetUpDspRenderingTimeBudgetInfo(
    const renderer::server::RendererParameter& parameter,
    const renderer::server::TClientInfo<false>& client);
  void SetUpRendererParameter(
    const audio::detail::AudioRendererParameterInternal& parameter,
    BehaviorInfo* behavior);
  Result SetUpRenderResourceSet(
    const renderer::server::RendererParameter& parameter,
    uint32_t processHandle, void* workBuffer, size_t workBufferSize);
  void SetUpStaticVoiceDropController(
    const renderer::server::RendererParameter& parameter,
    const renderer::server::DspRenderingTimeBudgetInfo& budget,
    const renderer::server::TClientInfo<false>& client,
    VoiceContext* voices, renderer::server::SystemDebugControl* debug);
  Result Initialize(
    const audio::detail::AudioRendererParameterInternal& parameter,
    uint32_t processHandle, void* workBuffer, size_t workBufferSize,
    const applet::AppletResourceUserId& id, int sessionId);
  Result InitializeImpl(
    const audio::detail::AudioRendererParameterInternal& parameter,
    uint32_t processHandle, void* workBuffer, size_t workBufferSize,
    const applet::AppletResourceUserId& id, int sessionId);
  void SetUpClientInfo(
    const audio::detail::AudioRendererParameterInternal& parameter,
    uint32_t processHandle, applet::AppletResourceUserId id);
  void TeardownRenderResourceSet();
  void Finalize();
  void FinalizeImpl();
  void DumpStatistics();
  void TeardownDependencies();
  Result Start();
  void Stop();
  void SetRenderingTimeLimit(int limit);
  Result Update(void* output, size_t outputSize, void* performance,
    size_t performanceSize, const void* input, size_t inputSize);
  Result UpdateImpl(void* output, size_t outputSize, void* performance,
    size_t performanceSize, const void* input, size_t inputSize);
  Span<std::byte> GenerateCommand(Span<std::byte> buffer);
  Span<std::byte> GenerateCommandImpl(Span<std::byte> buffer);
  void RecordStatisticsOnPostGenerateCommand(
    const CommandGeneratorProfileData& profile, size_t commandBufferSize,
    int droppedVoiceCount);
  Result ExecuteAudioRendererRendering();
  void SendCommandToDsp();
  int GetOutputChannelCount();
  void SignalSystemEvent();
  int GetSessionId() const;
  Result QuerySystemEvent(uint32_t* handle);
  void SetVoiceDropParameter(float parameter);

  bool IsActive() const {
    return m_IsActive;
  }

  int GetMixBufferCount() const {
    return m_Parameter.mixBufferCount;
  }

  int GetSampleCount() const {
    return m_Parameter.sampleCount;
  }

  int GetSampleRate() const {
    return m_Parameter.sampleRate;
  }

  uint32_t GetRenderingTimeLimit() const {
    return m_Parameter.renderingTimeLimit;
  }

  float GetVoiceDropParameter() const {
    return m_Parameter.voiceDropParameter;
  }

private:
  struct StaticVoiceDropController {
    bool isEnabled = false;
    bool isAutomatic = false;
    uint8_t reserved0[2];
    int renderingTimeBudget = 0;
    const ICommandProcessingTimeEstimator* estimator = nullptr;
    VoiceContext* voices = nullptr;
    renderer::server::SystemDebugControl* debug = nullptr;

    int DropVoices(CommandBuffer& commandBuffer, uint32_t timeBudget);
  };

  template <class T>
  struct StatisticsValue {
    T max = 0;
    T current = 0;

    void Record(T value) {
      current = value;
      max = std::max(max, value);
    }
  };

  struct Statistics {
    StatisticsValue<int> commandCount;
    StatisticsValue<int> voiceCommandCount;
    StatisticsValue<int> mixCommandCount;
    StatisticsValue<int> sinkCommandCount;
    StatisticsValue<size_t> commandBufferSize;
    StatisticsValue<int> voiceCount;
    StatisticsValue<int> voiceChannelCount;
    StatisticsValue<int> topPriorityVoiceCount;
    StatisticsValue<int> splitterMixCount;
    StatisticsValue<int> splitterMixBufferCount;
    StatisticsValue<int> effectCount;
    StatisticsValue<int> mixCount;
    StatisticsValue<int> sinkCount;
    StatisticsValue<int> mappedMemoryPoolCount;
    StatisticsValue<size_t> mappedMemoryPoolSize;
    StatisticsValue<int> usedMemoryPoolCount;
    StatisticsValue<int> performanceEntryCount;
    StatisticsValue<int> performanceDetailCount;
    StatisticsValue<uint32_t> estimatedProcessingTime;
    StatisticsValue<uint32_t> voiceProcessingTime;
    StatisticsValue<uint32_t> finalMixProcessingTime;
    StatisticsValue<uint32_t> otherProcessingTime;
    uint64_t mixUpdateCount = 0;
    StatisticsValue<uint64_t> updatedMixCount;
    StatisticsValue<int> droppedVoiceCount;
  };

  static_assert(sizeof(Statistics) == 224);

  util::IntrusiveListNode m_ListNode;
  bool m_IsInitialized = false;
  bool m_IsActive = false;
  renderer::server::RendererParameter m_Parameter{};
  void* m_WorkBuffer = nullptr;
  size_t m_WorkBufferSize = 0;
  Span<std::byte> m_DspSharedWorkBuffer{};
  Span<int32_t> m_MixBuffer{};
  Span<int32_t> m_DepopBuffer{};
  Span<std::byte> m_PerformanceBuffer{};
  Span<std::byte> m_CommandList{};
  Span<std::byte> m_CommandBuffer{};
  Span<MemoryPoolInfo> m_MemoryPools{};
  uint8_t reserved5[8];
  MemoryPoolInfo m_MemoryPool;
  UpsamplerManager* m_UpsamplerManager = nullptr;
  Span<UpsamplerInfo> m_UpsamplerInfos{};
  VoiceContext m_VoiceContext;
  MixContext m_MixContext;
  EffectContext m_EffectContext;
  SinkContext m_SinkContext;
  SplitterContext m_SplitterContext;
  int m_SessionId = -1;
  uint8_t reserved6[4];
  os::SystemEventType* m_SystemEvent;
  os::Event m_TerminateEvent{os::EventClearMode_AutoClear};
  os::SdkMutexType m_Mutex{};
  uint8_t reserved7[4];
  PerformanceManager m_PerformanceManager;
  bool m_IsCommandBufferResetRequired = false;
  uint8_t reserved13[7];
  std::optional<uint32_t> m_ProcessHandle;
  std::optional<applet::AppletResourceUserId> m_AppletResourceUserId;
  std::optional<BehaviorInfo> m_Behavior;
  renderer::server::DspRenderingTimeBudgetInfo m_RenderingTimeBudget;
  renderer::server::DspRenderingTimeBudgetInfo m_VoiceDropTimeBudget;
  os::Tick m_ProcessStartTick{};
  uint64_t m_GenerateCommandCount = 0;
  uint64_t m_UpdateCount = 0;
  uint64_t m_SignalCount = 0;
  int64_t m_GenerateCommandTimeMax = 0;
  int64_t m_GenerateCommandTime = 0;
  int64_t m_UpdateTimeMax = 0;
  int64_t m_UpdateTime = 0;
  Statistics m_Statistics;
  uint64_t m_DspBusyCount = 0;
  StaticVoiceDropController m_VoiceDropController;
  renderer::server::SystemDebugControl m_SystemDebugControl;
  uint8_t reserved9[5];
  uint64_t m_ElapsedFrameCount = 0;
};

class AudioRenderSystemManager {
public:
  AudioRenderSystemManager();
  ~AudioRenderSystemManager();

  static void ThreadFunction(void* argument);
  void ThreadFunctionImpl();
  static void CreateInstance(void* buffer, size_t size);
  static void DeleteInstance();
  static AudioRenderSystemManager* GetInstance();
  void InitializeUnsafe();
  void FinalizeUnsafe();
  bool Add(AudioRenderSystem& system);
  void Remove(AudioRenderSystem& system);
  void Sleep();
  void Wake();

private:
  static AudioRenderSystemManager* sManagerInstance;

  static constexpr int SystemCountMax = 2;

  os::SdkMutexType m_Mutex;
  os::SdkMutexType m_ListMutex;
  os::ThreadType m_Thread;
  std::atomic<bool> m_IsRunning;
  util::IntrusiveListNode m_Systems;
};

class AudioRendererManagerImpl : public sf::IServiceObject {
public:
  AudioRendererManagerImpl();
  virtual ~AudioRendererManagerImpl();

  class AudioRendererImpl {
  public:
    Result Start();
    Result Stop();
    Result SetRenderingTimeLimit(int limit);
    Result RequestUpdateInternal(const sf::OutBuffer& output,
      const sf::OutBuffer& performance, const sf::InBuffer& input);
    Result RequestUpdate(const sf::OutBuffer& output,
      const sf::OutBuffer& performance, const sf::InBuffer& input);
    Result RequestUpdateAuto(const sf::OutBuffer& output,
      const sf::OutBuffer& performance, const sf::InBuffer& input);
    Result SetVoiceDropParameter(float parameter);
    Result ExecuteAudioRendererRendering();
    Result GetSampleRate(sf::Out<int> pOutSampleRate);
    Result GetSampleCount(sf::Out<int> pOutSampleCount);
    Result GetMixBufferCount(sf::Out<int> pOutMixBufferCount);
    Result GetState(sf::Out<int> pOutState);
    Result GetRenderingTimeLimit(sf::Out<int> pOutLimit);
    Result QuerySystemEvent(sf::Out<sf::NativeHandle> pOutHandle);
    Result GetVoiceDropParameter(sf::Out<float> pOutParameter);

  private:
    uint8_t reserved[96];
    AudioRenderSystem m_System;
  };

  class AudioDeviceImpl {
  public:
    AudioDeviceImpl(AudioRendererManagerImpl* parent,
      applet::AppletResourceUserId& id, uint32_t revision);
    ~AudioDeviceImpl();

    Result ListAudioDeviceNameInternal(const sf::OutBuffer& names,
      sf::Out<int> pOutCount);
    Result ListAudioDeviceName(const sf::OutBuffer& names,
      sf::Out<int> pOutCount);
    Result ListAudioDeviceNameAuto(const sf::OutBuffer& names,
      sf::Out<int> pOutCount);
    Result SetAudioDeviceOutputVolumeInternal(const sf::InBuffer& name,
      float volume);
    Result SetAudioDeviceOutputVolume(const sf::InBuffer& name, float volume);
    Result SetAudioDeviceOutputVolumeAuto(const sf::InBuffer& name,
      float volume);
    Result GetAudioDeviceOutputVolumeInternal(const sf::InBuffer& name,
      sf::Out<float> pOutVolume);
    Result GetAudioDeviceOutputVolume(const sf::InBuffer& name,
      sf::Out<float> pOutVolume);
    Result GetAudioDeviceOutputVolumeAuto(const sf::InBuffer& name,
      sf::Out<float> pOutVolume);
    Result QueryAudioDeviceSystemEvent(sf::Out<sf::NativeHandle> pOutHandle);
    Result QueryAudioDeviceInputEvent(sf::Out<sf::NativeHandle> pOutHandle);
    Result QueryAudioDeviceOutputEvent(sf::Out<sf::NativeHandle> pOutHandle);
    Result GetActiveChannelCount(sf::Out<int> pOutCount);
    Result ListAudioOutputDeviceName(const sf::OutBuffer& names,
      sf::Out<int> pOutCount);
    Result AcquireAudioInputDeviceNotification(
      sf::Out<sf::NativeHandle> pOutHandle, uint64_t processId);
    Result AcquireAudioOutputDeviceNotification(
      sf::Out<sf::NativeHandle> pOutHandle, uint64_t processId);
    Result IsAudioDeviceOutputVolumeAutoTuneEnabled(
      sf::Out<bool> pOutIsEnabled);
    Result IsActiveOutputDeviceEstimatedLowLatency(
      sf::Out<bool> pOutIsLowLatency);
    Result GetActiveAudioDeviceNameInternal(const sf::OutBuffer& name);
    Result GetActiveAudioDeviceName(const sf::OutBuffer& name);
    Result GetActiveAudioDeviceNameAuto(const sf::OutBuffer& name);
    Result GetActiveAudioOutputDeviceName(const sf::OutBuffer& name);
    Result ReleaseAudioInputDeviceNotification(uint64_t processId);
    Result ReleaseAudioOutputDeviceNotification(uint64_t processId);
    Result SetAudioDeviceOutputVolumeAutoTuneEnabled(bool isEnabled);

  private:
    sf::SharedPointer<AudioRendererManagerImpl> m_Parent;
    applet::AppletResourceUserId m_AppletResourceUserId;
    uint32_t m_Revision;
  };

  Result GetAudioDeviceService(
    sf::Out<sf::SharedPointer<audio::detail::IAudioDevice>> pOutDevice,
    applet::AppletResourceUserId& id);
  Result GetAudioDeviceServiceWithRevisionInfo(
    sf::Out<sf::SharedPointer<audio::detail::IAudioDevice>> pOutDevice,
    applet::AppletResourceUserId& id, uint32_t revision);
  int AcquireSessionId();
  void ReleaseSessionId(int sessionId);
  Result GetWorkBufferSize(sf::Out<int64_t> pOutSize,
    const audio::detail::AudioRendererParameterInternal& parameter);

  void Sleep();
  void Wake();

private:
  static constexpr int SessionCountMax = 2;
  static constexpr size_t HeapSize = 0x1800;

  sf::ExpHeapAllocator m_Allocator;
  uint8_t m_HeapBuffer[HeapSize];
  lmem::detail::HeapHead* m_Heap;
  int m_SessionIds[SessionCountMax];
  int m_SessionIdIndex;
  os::SdkMutexType m_SessionIdMutex;
  alignas(std::max_align_t)
    uint8_t m_SystemManagerBuffer[sizeof(AudioRenderSystemManager)];
};

static_assert(sizeof(AudioRenderSystemManager) == 0x1e0);
static_assert(sizeof(AudioRenderSystem) == 0x5f8);

}
}
