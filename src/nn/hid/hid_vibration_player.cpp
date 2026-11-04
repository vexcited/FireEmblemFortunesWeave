#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/hid_vibration_node.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::hid {

namespace {

constexpr float DefaultFrequencyLow = 160.0f;
constexpr float DefaultFrequencyHigh = 320.0f;

VibrationValue MakeDefaultVibrationValue() {
  return VibrationValue{0.0f, DefaultFrequencyLow, 0.0f, DefaultFrequencyHigh};
}

os::SdkMutexType g_PlayerMutex;

}

VibrationPlayer::VibrationPlayer() :
  m_IsLoaded(false), m_IsPlaying(false), m_IsLoop(false),
  m_CurrentPosition(0), m_NextPosition(0), m_LoopStartPosition(0),
  m_LoopEndPosition(0), m_LoopInterval(0), m_DelayTime(0), m_DelayCount(0),
  m_PlaySpeed(1.0f), m_PlayProgress(1.0f), m_FileInfo(), m_ParserContext() {}

VibrationPlayer::~VibrationPlayer() {}

Result VibrationPlayer::SetVibrationFileAddress(const void* address,
  size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(address);
  g_PlayerMutex.Lock();
  m_IsLoaded = false;
  const Result result =
    ParseVibrationFile(&m_FileInfo, &m_ParserContext, address, size);
  if (result.IsSuccess()) {
    m_CurrentPosition = 0;
    m_NextPosition = 0;
    m_IsLoaded = true;
    m_IsPlaying = false;
    m_IsLoop = m_FileInfo.isLoop != 0;
    const VibrationValue value = MakeDefaultVibrationValue();
    SetCurrentVibration(value);
    m_LoopStartPosition = m_FileInfo.loopStartPosition;
    m_LoopEndPosition = m_FileInfo.loopEndPosition;
    m_LoopInterval = m_FileInfo.loopInterval;
  }
  g_PlayerMutex.Unlock();
  return result;
}

void VibrationPlayer::UnsetVibrationFileAddress() {
  m_IsLoaded = false;
}

bool VibrationPlayer::IsPlayable() const {
  return m_IsLoaded;
}

Result VibrationPlayer::Load(const void* address, size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(address);
  return SetVibrationFileAddress(address, size);
}

void VibrationPlayer::Unload() {
  m_IsLoaded = false;
}

bool VibrationPlayer::IsLoaded() const {
  return m_IsLoaded;
}

VibrationFileInfo VibrationPlayer::GetFileInfo() const {
  VibrationFileInfo info;
  g_PlayerMutex.Lock();
  info = m_FileInfo;
  g_PlayerMutex.Unlock();
  return info;
}

void VibrationPlayer::Play() {
  g_PlayerMutex.Lock();
  if (m_IsLoaded) {
    m_IsPlaying = true;
    m_DelayCount = m_DelayTime;
    m_PlayProgress = 1.0f;
  }
  g_PlayerMutex.Unlock();
}

void VibrationPlayer::Stop() {
  g_PlayerMutex.Lock();
  if (m_IsLoaded) {
    m_IsPlaying = false;
    m_CurrentPosition = m_NextPosition;
    const VibrationValue value = MakeDefaultVibrationValue();
    SetCurrentVibration(value);
  }
  g_PlayerMutex.Unlock();
}

bool VibrationPlayer::IsPlaying() const {
  return m_IsPlaying;
}

void VibrationPlayer::SetCurrentPosition(int position) {
  NN_ABORT_UNLESS(position >= 0);
  g_PlayerMutex.Lock();
  if (m_IsLoaded) {
    m_CurrentPosition = position;
    m_NextPosition = position;
    if (m_IsPlaying) {
      VibrationValue value = {};
      RetrieveVibrationValue(&value, position, &m_ParserContext);
      SetCurrentVibration(value);
    }
  }
  g_PlayerMutex.Unlock();
}

int VibrationPlayer::GetCurrentPosition() const {
  return m_CurrentPosition;
}

void VibrationPlayer::SetLoop(bool isLoop) {
  g_PlayerMutex.Lock();
  if (m_IsLoaded) {
    m_IsLoop = isLoop;
  }
  g_PlayerMutex.Unlock();
}

bool VibrationPlayer::IsLoop() const {
  return m_IsLoop;
}

void VibrationPlayer::SetLoopRange(int startPosition, int endPosition) {
  NN_ABORT_UNLESS(startPosition >= 0);
  NN_ABORT_UNLESS(endPosition >= startPosition);
  g_PlayerMutex.Lock();
  if (m_IsLoaded) {
    m_LoopStartPosition = startPosition;
    m_LoopEndPosition = endPosition;
  }
  g_PlayerMutex.Unlock();
}

void VibrationPlayer::SetLoopStartPosition(int position) {
  NN_ABORT_UNLESS(position >= 0);
  g_PlayerMutex.Lock();
  if (m_IsLoaded) {
    m_LoopStartPosition = position;
  }
  g_PlayerMutex.Unlock();
}

int VibrationPlayer::GetLoopStartPosition() const {
  return m_LoopStartPosition;
}

void VibrationPlayer::SetLoopEndPosition(int position) {
  NN_ABORT_UNLESS(position >= 0);
  g_PlayerMutex.Lock();
  if (m_IsLoaded) {
    m_LoopEndPosition = position;
  }
  g_PlayerMutex.Unlock();
}

int VibrationPlayer::GetLoopEndPosition() const {
  return m_LoopEndPosition;
}

void VibrationPlayer::SetLoopInterval(int interval) {
  NN_ABORT_UNLESS(interval >= 0);
  g_PlayerMutex.Lock();
  if (m_IsLoaded) {
    m_LoopInterval = interval;
  }
  g_PlayerMutex.Unlock();
}

int VibrationPlayer::GetLoopInterval() const {
  return m_LoopInterval;
}

void VibrationPlayer::SetPlaySpeed(float speed) {
  NN_ABORT_UNLESS(speed >= 0.0f);
  m_PlaySpeed = speed;
}

void VibrationPlayer::SetDelayTime(int delayTime) {
  NN_ABORT_UNLESS(delayTime >= 0);
  m_DelayTime = delayTime;
}

// Positions below zero are the silent gap inserted by the loop interval, the
// loop restarts once the gap has been played.
void VibrationPlayer::OnNextSampleRequired(VibrationValue* pValue,
  VibrationNodeConnectionList* pInputConnections) {
  static_cast<void>(pInputConnections);
  g_PlayerMutex.Lock();
  if (!m_IsLoaded) {
    *pValue = MakeDefaultVibrationValue();
  }
  else if (m_DelayCount > 0) {
    *pValue = MakeDefaultVibrationValue();
    --m_DelayCount;
  }
  else {
    float progress = m_PlayProgress;
    while (progress >= 1.0f) {
      if (m_IsPlaying) {
        if (m_IsLoop) {
          if (m_NextPosition < -m_LoopInterval ||
            m_NextPosition >= m_LoopEndPosition) {
            m_NextPosition =
              m_LoopInterval > 0 ? -m_LoopInterval : m_LoopStartPosition;
          }
        }
        else if (m_NextPosition >= m_FileInfo.sampleLength) {
          m_CurrentPosition = 0;
          m_NextPosition = 0;
          m_IsPlaying = false;
          *pValue = MakeDefaultVibrationValue();
          g_PlayerMutex.Unlock();
          return;
        }
        if (m_CurrentPosition < 0 && m_NextPosition == 0) {
          m_NextPosition = m_LoopStartPosition;
        }
        if (m_NextPosition >= 0 &&
          m_NextPosition < m_FileInfo.sampleLength) {
          RetrieveVibrationValue(pValue, m_NextPosition, &m_ParserContext);
        }
        else {
          *pValue = MakeDefaultVibrationValue();
        }
        m_CurrentPosition = m_NextPosition;
        m_NextPosition = m_CurrentPosition + 1;
        progress = m_PlayProgress;
      }
      progress -= 1.0f;
      m_PlayProgress = progress;
    }
    m_PlayProgress = progress + m_PlaySpeed;
  }
  g_PlayerMutex.Unlock();
}

}
