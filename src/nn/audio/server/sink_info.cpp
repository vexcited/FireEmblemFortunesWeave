#include <string.h>

#include "nn/audio/server/sink_info.hpp"
#include "nn/audio/server/upsampler_manager.hpp"
#include "nn/util/string_util.hpp"

namespace nn::audio::server {

SinkInfoBase::SinkInfoBase()
  : m_Type(Type_Invalid), m_IsUsed(false), m_ShouldSkip(false) {
  memset(m_State, 0, sizeof(m_State));
  memset(&m_Parameter, 0, sizeof(m_Parameter));
}

void SinkInfoBase::Update(ErrorInfo* error, OutStatus* status,
  const InParameter* in, PoolMapper& mapper) {
  *status = {};
  error->result = {0};
  error->info = 0;
}

void SinkInfoBase::UpdateForCommandGeneration() {
}

int SinkInfoBase::GetChannelCount() const {
  return 0;
}

int8_t SinkInfoBase::GetInput(int index) const {
  return 0;
}

const char* SinkInfoBase::GetTypeName() const {
  return "Invalid";
}

void SinkInfoBase::Dump(char* buffer, int size) const {
  util::Strlcpy(buffer, "Invalid", size);
}

void* SinkInfoBase::GetDeviceState() {
  return m_State;
}

uint8_t SinkInfoBase::GetType() const {
  return m_Type;
}

bool SinkInfoBase::IsUsed() const {
  return m_IsUsed;
}

bool SinkInfoBase::ShouldSkip() const {
  return m_ShouldSkip;
}

uint32_t SinkInfoBase::GetNodeId() const {
  return m_NodeId;
}

void SinkInfoBase::CleanUp() {
  m_Type = Type_Invalid;
  m_IsUsed = false;
}

const void* SinkInfoBase::GetState() const {
  return m_State;
}

const void* SinkInfoBase::GetParameter() const {
  return &m_Parameter;
}

DeviceSinkInfo::DeviceSinkInfo() {
  // Only the leading part of the device name is cleared.
  memset(m_Parameter.device.name, 0, 24);
  m_Type = Type_Device;
}

void DeviceSinkInfo::Update(ErrorInfo* error, OutStatus* status,
  const InParameter* in, PoolMapper& mapper) {
  renderer::ipc::Sink::DeviceParameter& parameter = m_Parameter.device;
  if (m_IsUsed == in->isUsed) {
    parameter.isDownMixParameterEnabled =
      in->parameter.device.isDownMixParameterEnabled;
    memcpy(parameter.downMixParameter,
      in->parameter.device.downMixParameter,
      sizeof(parameter.downMixParameter));
  }
  else {
    m_Type = static_cast<Type>(in->type);
    m_IsUsed = in->isUsed;
    m_NodeId = in->nodeId;
    memcpy(&m_Parameter, &in->parameter, sizeof(in->parameter));
  }
  DeviceState* state = GetDeviceSinkState();
  for (int i = 0; i < 4; i++) {
    state->downMixParameter[i] =
      static_cast<int32_t>(parameter.downMixParameter[i] * 65536.0f);
  }
  *status = {};
  error->result = {0};
  error->info = 0;
}

void DeviceSinkInfo::UpdateForCommandGeneration() {
}

int DeviceSinkInfo::GetChannelCount() const {
  return m_Parameter.device.channelCount;
}

int8_t DeviceSinkInfo::GetInput(int index) const {
  return m_Parameter.device.input[index];
}

const char* DeviceSinkInfo::GetTypeName() const {
  return "DeviceSink";
}

void DeviceSinkInfo::Dump(char* buffer, int size) const {
  const renderer::ipc::Sink::DeviceParameter& parameter = m_Parameter.device;
  if (parameter.isDownMixParameterEnabled == true) {
    util::SNPrintf(buffer, size,
      "%s <UseDownMixMatrix> Coeff: %.2f %.2f %.2f %.2f", parameter.name,
      parameter.downMixParameter[0], parameter.downMixParameter[1],
      parameter.downMixParameter[2], parameter.downMixParameter[3]);
    return;
  }
  util::SNPrintf(buffer, size, "%s", parameter.name);
}

void DeviceSinkInfo::CleanUp() {
  DeviceState* state = GetDeviceSinkState();
  if (state->upsampler != nullptr) {
    state->upsampler->manager->Free(state->upsampler);
    state->upsampler = nullptr;
  }
  memset(m_Parameter.device.name, 0, 24);
  SinkInfoBase::CleanUp();
}

void CircularBufferSinkState::CleanUp() {
  m_LastWritePosition = 0;
  m_CurrentWritePosition = 0;
  m_PreviousWritePosition = 0;
  m_Address.Setup(CpuAddr(), 0);
}

CircularBufferSinkInfo::CircularBufferSinkInfo() {
  CircularBufferSinkState* state = GetCircularBufferState();
  state->m_CurrentWritePosition = 0;
  m_Parameter.circularBuffer = {};
  m_Type = Type_CircularBuffer;
  state->m_Address.Setup(CpuAddr(), 0);
}

bool CircularBufferSinkInfo::ShouldUpdateWorkBufferInfo(
  const InParameter* in) const {
  return in->isUsed != m_IsUsed || m_ShouldSkip;
}

void CircularBufferSinkInfo::Update(ErrorInfo* error, OutStatus* status,
  const InParameter* in, PoolMapper& mapper) {
  CircularBufferSinkState* state = GetCircularBufferState();
  if (!ShouldUpdateWorkBufferInfo(in)) {
    error->result = {0};
    error->info = 0;
    status->writeOffset = state->m_LastWritePosition;
    return;
  }
  m_NodeId = in->nodeId;
  m_IsUsed = in->isUsed;
  if (m_IsUsed) {
    m_ShouldSkip = !mapper.TryAttachBuffer(error, &state->m_Address,
      in->parameter.circularBuffer.address,
      static_cast<int32_t>(in->parameter.circularBuffer.size));
  }
  m_Parameter.circularBuffer = in->parameter.circularBuffer;
  status->writeOffset = state->m_LastWritePosition;
}

void CircularBufferSinkInfo::CleanUp() {
  memset(m_State, 0, sizeof(m_State));
  SinkInfoBase::CleanUp();
}

void CircularBufferSinkInfo::UpdateForCommandGeneration() {
  if (!m_IsUsed) {
    return;
  }
  CircularBufferSinkState* state = GetCircularBufferState();
  const renderer::ipc::Sink::CircularBufferParameter& parameter =
    m_Parameter.circularBuffer;
  state->m_LastWritePosition = state->m_PreviousWritePosition;
  state->m_PreviousWritePosition = state->m_CurrentWritePosition;
  state->m_CurrentWritePosition +=
    parameter.channelCount * parameter.sampleCount * sizeof(int16_t);
  if (static_cast<int>(parameter.size) > 0) {
    state->m_CurrentWritePosition %= static_cast<int>(parameter.size);
  }
}

int CircularBufferSinkInfo::GetChannelCount() const {
  return m_Parameter.circularBuffer.channelCount;
}

int8_t CircularBufferSinkInfo::GetInput(int index) const {
  return m_Parameter.circularBuffer.input[index];
}

const char* CircularBufferSinkInfo::GetTypeName() const {
  return "CircularBufferSink";
}

void CircularBufferSinkInfo::Dump(char* buffer, int size) const {
  const renderer::ipc::Sink::CircularBufferParameter& parameter =
    m_Parameter.circularBuffer;
  const char* format = parameter.format == 0 ? "Invalid"
    : parameter.format == 2 ? "PcmInt16" : "Unknown or Unsupported";
  util::SNPrintf(buffer, size,
    "BufferAddress: 0x%016llx-0x%016llx (%u [byte]) SampleCount: %d "
    "PreviousPosition: %d SampleFormat: %s",
    static_cast<unsigned long long>(parameter.address),
    static_cast<unsigned long long>(parameter.address + parameter.size - 1),
    parameter.size, parameter.sampleCount, parameter.previousPosition,
    format);
}

SinkContext::SinkContext() : m_Infos(nullptr), m_Count(0) {
}

void SinkContext::Initialize(SinkInfoBase* infos, int count) {
  m_Infos = infos;
  m_Count = count;
}

SinkInfoBase* SinkContext::GetInfo(int index) const {
  return &m_Infos[index];
}

int SinkContext::GetDeviceSinkChannelCount() const {
  for (int i = 0; i < m_Count; i++) {
    SinkInfoBase* info = GetInfo(i);
    if (info->GetType() == SinkInfoBase::Type_Device) {
      return info->GetChannelCount();
    }
  }
  return 0;
}

int SinkContext::GetCount() const {
  return m_Count;
}

}
