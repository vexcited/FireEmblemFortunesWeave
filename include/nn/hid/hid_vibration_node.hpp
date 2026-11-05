#pragma once

#include <stdint.h>

#include "nn/hid/detail/hid_intrusive_list.hpp"
#include "nn/hid/hid_types.hpp"

namespace nn::hid {

struct VibrationValue {
  float amplitudeLow;
  float frequencyLow;
  float amplitudeHigh;
  float frequencyHigh;
};

struct VibrationModulation {
  float gainLow;
  float frequencyLow;
  float gainHigh;
  float frequencyHigh;
};

class VibrationNode;

class VibrationNodeConnection :
  public util::IntrusiveListBaseNode<VibrationNodeConnection> {
 public:
  VibrationNodeConnection();
  VibrationNodeConnection(VibrationNode* pSource, VibrationNode* pDestination);
  virtual ~VibrationNodeConnection();

  bool Connect(VibrationNode* pSource, VibrationNode* pDestination);
  void Disconnect();
  bool IsConnected() const;
  VibrationNode* GetSource() const;
  VibrationNode* GetDestination() const;
  void SetModulation(const VibrationModulation& modulation);
  VibrationModulation GetModulation() const;

 private:
  friend class VibrationNode;

  VibrationNode* m_pSource;
  VibrationNode* m_pDestination;
  VibrationModulation m_Modulation;
};

using VibrationNodeConnectionList = util::IntrusiveList<
  VibrationNodeConnection, util::IntrusiveListBaseNodeTraits<
    VibrationNodeConnection, VibrationNodeConnection>>;

class VibrationNode : public util::IntrusiveListBaseNode<VibrationNode> {
 public:
  VibrationNode();
  virtual ~VibrationNode();

  static void Update();

  VibrationValue GetCurrentVibration() const;
  void SetCurrentVibration(const VibrationValue& value);
  void DisconnectFrom(VibrationNode* pDestination);
  VibrationNodeConnection* GetConnectionTo(
    const VibrationNode* pDestination) const;
  bool IsConnectedTo(const VibrationNode* pDestination) const;
  void SetModulationTo(const VibrationNode* pDestination,
    const VibrationModulation& modulation);
  VibrationModulation GetModulationTo(const VibrationNode* pDestination) const;
  void SyncSampleNumber();

 protected:
  virtual void OnNextSampleRequired(VibrationValue* pValue,
    VibrationNodeConnectionList* pInputConnections) = 0;

 private:
  friend class VibrationNodeConnection;

  VibrationValue m_CurrentVibration;
  VibrationNodeConnectionList m_InputConnections;
  uint8_t m_SampleNumber;
};

enum VibrationMixMode {
  VibrationMixMode_None,
  VibrationMixMode_MaxAmplitude,
  VibrationMixMode_MaxAmplitudePerSubband,
  VibrationMixMode_AmplitudeSum,
};

class VibrationMixer : public VibrationNode {
 public:
  struct CompressorParameter {
    float threshold;
    float ratio;

    void Apply(VibrationValue* pValue);
  };

  VibrationMixer();
  ~VibrationMixer() override;

  void SetMixMode(const VibrationMixMode& mode);
  void SetCompressor(const CompressorParameter& parameter);

 protected:
  void OnNextSampleRequired(VibrationValue* pValue,
    VibrationNodeConnectionList* pInputConnections) override;

 private:
  VibrationMixMode m_MixMode;
  CompressorParameter m_Compressor;
};

struct VibrationFileInfo {
  uint32_t metaDataSize;
  uint16_t formatId;
  uint16_t samplingRate;
  int32_t dataSize;
  int32_t sampleLength;
  int32_t isLoop;
  int32_t loopStartPosition;
  int32_t loopEndPosition;
  int32_t loopInterval;
};

struct VibrationFileParserContext {
  uint64_t _storage[10];
};

Result ParseVibrationFile(VibrationFileInfo* pOutInfo,
  VibrationFileParserContext* pOutContext, const void* address, size_t size);
void RetrieveVibrationValue(VibrationValue* pOutValue, int position,
  VibrationFileParserContext* pContext);

class VibrationPlayer : public VibrationNode {
 public:
  VibrationPlayer();
  ~VibrationPlayer() override;

  Result SetVibrationFileAddress(const void* address, size_t size);
  void UnsetVibrationFileAddress();
  bool IsPlayable() const;
  Result Load(const void* address, size_t size);
  void Unload();
  bool IsLoaded() const;
  VibrationFileInfo GetFileInfo() const;
  void Play();
  void Stop();
  bool IsPlaying() const;
  void SetCurrentPosition(int position);
  int GetCurrentPosition() const;
  void SetLoop(bool isLoop);
  bool IsLoop() const;
  void SetLoopRange(int startPosition, int endPosition);
  void SetLoopStartPosition(int position);
  int GetLoopStartPosition() const;
  void SetLoopEndPosition(int position);
  int GetLoopEndPosition() const;
  void SetLoopInterval(int interval);
  int GetLoopInterval() const;
  void SetPlaySpeed(float speed);
  void SetDelayTime(int delayTime);

 protected:
  void OnNextSampleRequired(VibrationValue* pValue,
    VibrationNodeConnectionList* pInputConnections) override;

 private:
  bool m_IsLoaded;
  bool m_IsPlaying;
  bool m_IsLoop;
  int32_t m_CurrentPosition;
  int32_t m_NextPosition;
  int32_t m_LoopStartPosition;
  int32_t m_LoopEndPosition;
  int32_t m_LoopInterval;
  int32_t m_DelayTime;
  int32_t m_DelayCount;
  float m_PlaySpeed;
  float m_PlayProgress;
  VibrationFileInfo m_FileInfo;
  VibrationFileParserContext m_ParserContext;
};

struct VibrationDeviceInfo {
  int32_t deviceType;
  int32_t position;
};

void GetVibrationDeviceInfo(VibrationDeviceInfo* pOutInfo,
  const VibrationDeviceHandle& handle);
void GetActualVibrationValue(VibrationValue* pOutValue,
  const VibrationDeviceHandle& handle);

class VibrationTarget : public VibrationMixer {
 public:
  VibrationTarget();
  explicit VibrationTarget(const VibrationDeviceHandle& handle);
  ~VibrationTarget() override;

  void SetVibrationDeviceHandle(const VibrationDeviceHandle& handle);
  void UnsetVibrationDeviceHandle();
  bool IsVibrationDeviceHandleSet() const;
  VibrationDeviceHandle GetVibrationDeviceHandle();
  void GetActualVibration(VibrationValue* pOutValue) const;
  void GetVibrationDeviceInfo(VibrationDeviceInfo* pOutInfo) const;

 protected:
  void OnNextSampleRequired(VibrationValue* pValue,
    VibrationNodeConnectionList* pInputConnections) override;

 private:
  bool m_IsVibrationDeviceHandleSet;
  VibrationDeviceHandle m_VibrationDeviceHandle;
};

class VibrationWriter : public VibrationNode {
 public:
  VibrationWriter();
  ~VibrationWriter() override;

  void Write(const VibrationValue& value);

 protected:
  void OnNextSampleRequired(VibrationValue* pValue,
    VibrationNodeConnectionList* pInputConnections) override;
};

}
