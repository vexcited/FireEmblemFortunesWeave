#pragma once

#include <stdint.h>

#include "nn/audio/server/memory_pool_info.hpp"
#include "nn/audio/server/renderer_ipc.hpp"

namespace nn::audio {

struct UpsamplerInfo;

namespace server {

class UpsamplerManager;

class CircularBufferSinkState {
public:
  void CleanUp();

  int m_LastWritePosition;
  int m_CurrentWritePosition;
  int m_PreviousWritePosition;
  AddressInfo m_Address;
};

class SinkInfoBase {
public:
  using ErrorInfo = common::BehaviorParameter::ErrorInfo;
  using InParameter = renderer::ipc::Sink::UpdateData<0>;
  using OutStatus = renderer::ipc::Sink::StatusData<0>;

  enum Type : uint8_t {
    Type_Invalid,
    Type_Device,
    Type_CircularBuffer,
  };

  SinkInfoBase();

  virtual void Update(ErrorInfo* error, OutStatus* status,
    const InParameter* in, PoolMapper& mapper);
  virtual void UpdateForCommandGeneration();
  virtual int GetChannelCount() const;
  virtual int8_t GetInput(int index) const;
  virtual const char* GetTypeName() const;
  virtual void Dump(char* buffer, int size) const;

  void* GetDeviceState();
  uint8_t GetType() const;
  bool IsUsed() const;
  bool ShouldSkip() const;
  uint32_t GetNodeId() const;
  void CleanUp();
  const void* GetState() const;
  const void* GetParameter() const;

protected:
  struct DeviceState {
    UpsamplerInfo* upsampler;
    int32_t downMixParameter[4];
  };

  Type m_Type;
  bool m_IsUsed;
  bool m_ShouldSkip;
  uint32_t m_NodeId;
  uint8_t reserved[16];
  alignas(8) uint8_t m_State[48];
  union {
    renderer::ipc::Sink::DeviceParameter device;
    renderer::ipc::Sink::CircularBufferParameter circularBuffer;
    uint8_t raw[284];
  } m_Parameter;
};

static_assert(sizeof(SinkInfoBase) == 368);

class DeviceSinkInfo : public SinkInfoBase {
public:
  DeviceState* GetDeviceSinkState() {
    return reinterpret_cast<DeviceState*>(m_State);
  }

  DeviceSinkInfo();

  void Update(ErrorInfo* error, OutStatus* status, const InParameter* in,
    PoolMapper& mapper) override;
  void UpdateForCommandGeneration() override;
  int GetChannelCount() const override;
  int8_t GetInput(int index) const override;
  const char* GetTypeName() const override;
  void Dump(char* buffer, int size) const override;

  void CleanUp();
};

class CircularBufferSinkInfo : public SinkInfoBase {
public:
  CircularBufferSinkState* GetCircularBufferState() {
    return reinterpret_cast<CircularBufferSinkState*>(m_State);
  }

  CircularBufferSinkInfo();

  void Update(ErrorInfo* error, OutStatus* status, const InParameter* in,
    PoolMapper& mapper) override;
  void UpdateForCommandGeneration() override;
  int GetChannelCount() const override;
  int8_t GetInput(int index) const override;
  const char* GetTypeName() const override;
  void Dump(char* buffer, int size) const override;

  bool ShouldUpdateWorkBufferInfo(const InParameter* in) const;
  void CleanUp();
};

class SinkContext {
public:
  SinkContext();

  void Initialize(SinkInfoBase* infos, int count);
  SinkInfoBase* GetInfo(int index) const;
  int GetDeviceSinkChannelCount() const;
  int GetCount() const;

private:
  SinkInfoBase* m_Infos;
  int m_Count;
};

}
}
