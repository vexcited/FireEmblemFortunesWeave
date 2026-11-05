#pragma once

#include <stddef.h>
#include <stdint.h>

#include <cstddef>

#include "nn/applet/applet_types.hpp"
#include "nn/audio/renderer_config.hpp"
#include "nn/audio/server/behavior_info.hpp"
#include "nn/audio/server/splitter_context.hpp"
#include "nn/audio/server/voice_context.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/span.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::os {

struct SystemEventType;
struct EventType;

void WaitEvent(EventType* event);

void SignalSystemEvent(SystemEventType* event);
uint32_t GetReadableHandleOfSystemEvent(const SystemEventType* event);

}

namespace nn::audio {

struct AudioDeviceName;

namespace dsp {

void Sleep();
void Wake();

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
  uint8_t reserved0[88];
  bool isVoiceDropEnabled;
  uint8_t reserved1;
  uint8_t executionMode;
};

struct DspRenderingTimeBudgetInfo {
  uint32_t reserved0;
  uint32_t renderingTimeMax;
  uint32_t reserved1;
  uint32_t renderingTimeBudget;
  float renderingTimeLimitRatio;
};

template <bool IsServer>
struct TClientInfo;

struct SystemDebugControl;

}

namespace server {

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
  void SetUpStaticVoiceDropController(
    const renderer::server::RendererParameter& parameter,
    const renderer::server::DspRenderingTimeBudgetInfo& budget,
    const renderer::server::TClientInfo<false>& client,
    VoiceContext* voices, renderer::server::SystemDebugControl* debug);
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
  Result ExecuteAudioRendererRendering();
  int GetOutputChannelCount();
  void SignalSystemEvent();
  int GetSessionId() const;
  Result QuerySystemEvent(uint32_t* handle);
  void SetVoiceDropParameter(float parameter);

private:
  struct StaticVoiceDropController {
    bool isEnabled;
    bool isAutomatic;
    uint8_t reserved0[2];
    int renderingTimeBudget;
    uint64_t droppedVoiceCount;
    VoiceContext* voices;
    renderer::server::SystemDebugControl* debug;
  };

  struct SystemDebugControlState {
    bool isPerformanceDumpEnabled;
    bool isCommandDumpEnabled;
    bool isVoiceDumpEnabled;
  };

  uint8_t reserved0[17];
  bool m_IsActive;
  uint8_t reserved1[38];
  int m_MixBufferCount;
  int m_SampleCount;
  int m_SampleRate;
  uint8_t reserved2[4];
  int m_ExecutionMode;
  int m_RenderingDevice;
  uint8_t reserved3[52];
  uint32_t m_RenderingTimeLimit;
  float m_VoiceDropParameter;
  uint8_t reserved4[108];
  Span<std::byte> m_CommandBuffer;
  uint8_t reserved5[408];
  int m_SessionId;
  uint8_t reserved6[4];
  os::SystemEventType* m_SystemEvent;
  alignas(8) uint8_t m_TerminateEvent[40];
  os::SdkMutexType m_Mutex;
  uint8_t reserved7[412];
  renderer::server::DspRenderingTimeBudgetInfo m_RenderingTimeBudget;
  renderer::server::DspRenderingTimeBudgetInfo m_VoiceDropTimeBudget;
  os::Tick m_ProcessStartTick;
  uint64_t m_GenerateCommandCount;
  uint64_t m_UpdateCount;
  uint64_t m_SignalCount;
  int64_t m_GenerateCommandTimeMax;
  int64_t m_GenerateCommandTime;
  int64_t m_UpdateTimeMax;
  int64_t m_UpdateTime;
  uint8_t reserved8[232];
  StaticVoiceDropController m_VoiceDropController;
  SystemDebugControlState m_SystemDebugControl;
  uint8_t reserved9[5];
  uint64_t m_RenderingTime;
};


class AudioRendererManagerImpl {
public:
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

  private:
    uint8_t reserved[96];
    AudioRenderSystem m_System;
  };

  class AudioDeviceImpl {
  public:
    Result GetActiveAudioDeviceNameInternal(const sf::OutBuffer& name);
    Result GetActiveAudioDeviceName(const sf::OutBuffer& name);
    Result GetActiveAudioDeviceNameAuto(const sf::OutBuffer& name);
    Result GetActiveAudioOutputDeviceName(const sf::OutBuffer& name);
    Result ReleaseAudioInputDeviceNotification(uint64_t processId);
    Result ReleaseAudioOutputDeviceNotification(uint64_t processId);
    Result SetAudioDeviceOutputVolumeAutoTuneEnabled(bool isEnabled);

  private:
    uint8_t reserved[8];
    applet::AppletResourceUserId m_AppletResourceUserId;
    uint32_t m_Revision;
  };

  void Sleep();
  void Wake();
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
  void Sleep();
  void Wake();

private:
  static AudioRenderSystemManager* sManagerInstance;

  uint8_t m_State[456];
  bool m_IsRunning;
  util::IntrusiveListNode m_Systems;
};

}
}
