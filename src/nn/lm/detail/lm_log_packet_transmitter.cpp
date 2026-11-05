#include "nn/lm/detail/lm_log_packet_transmitter.hpp"

#include <string.h>

#include "nn/os/thread_info.hpp"
#include "nn/os/tls.hpp"

namespace nn::diag::detail {

int GetValidSizeAsUtf8String(const char* string, size_t size);

}

namespace nn::lm::detail {

uint64_t LogPacketHeader::GetProcessId() const {
  return m_ProcessId;
}

LogPacketHeader& LogPacketHeader::SetProcessId(uint64_t processId) {
  m_ProcessId = processId;
  return *this;
}

uint64_t LogPacketHeader::GetThreadId() const {
  return m_ThreadId;
}

LogPacketHeader& LogPacketHeader::SetThreadId(uint64_t threadId) {
  m_ThreadId = threadId;
  return *this;
}

bool LogPacketHeader::IsHead() const {
  return m_IsHead;
}

LogPacketHeader& LogPacketHeader::SetHead(bool isHead) {
  m_IsHead = isHead;
  return *this;
}

bool LogPacketHeader::IsTail() const {
  return m_IsTail;
}

LogPacketHeader& LogPacketHeader::SetTail(bool isTail) {
  m_IsTail = isTail;
  return *this;
}

bool LogPacketHeader::IsLittleEndian() const {
  return m_IsLittleEndian;
}

LogPacketHeader& LogPacketHeader::SetLittleEndian(bool isLittleEndian) {
  m_IsLittleEndian = isLittleEndian;
  return *this;
}

uint8_t LogPacketHeader::GetSeverity() const {
  return m_Severity;
}

LogPacketHeader& LogPacketHeader::SetSeverity(uint8_t severity) {
  m_Severity = severity;
  return *this;
}

uint8_t LogPacketHeader::GetVerbosity() const {
  return m_Verbosity;
}

LogPacketHeader& LogPacketHeader::SetVerbosity(uint8_t verbosity) {
  m_Verbosity = verbosity;
  return *this;
}

uint32_t LogPacketHeader::GetPayloadSize() const {
  return m_PayloadSize;
}

LogPacketHeader& LogPacketHeader::SetPayloadSize(uint32_t payloadSize) {
  m_PayloadSize = payloadSize;
  return *this;
}

LogPacketTransmitter::LogPacketTransmitter(void* buffer, size_t bufferSize,
  FlushFunction flushFunction, uint8_t severity, uint8_t verbosity,
  uint64_t processId, bool isHead, bool isTail)
  : LogPacketTransmitterBase(buffer, bufferSize, flushFunction, severity,
      verbosity, processId, isHead, isTail) {}

void LogPacketTransmitter::PushLogSessionBegin() {
  uint8_t value = 1;
  PushDataChunk(LogDataChunkKey_LogSessionBegin, &value, sizeof(value));
}

void LogPacketTransmitter::PushLogSessionEnd() {
  uint8_t value = 1;
  PushDataChunk(LogDataChunkKey_LogSessionEnd, &value, sizeof(value));
}

void LogPacketTransmitter::PushTextLog(const char* text, size_t length) {
  PushDataChunk(LogDataChunkKey_TextLog, text, length);
}

void LogPacketTransmitter::PushLineNumber(uint32_t lineNumber) {
  PushDataChunk(LogDataChunkKey_LineNumber, &lineNumber, sizeof(lineNumber));
}

void LogPacketTransmitter::PushFileName(const char* name, size_t length) {
  PushDataChunk(LogDataChunkKey_FileName, name, length);
}

void LogPacketTransmitter::PushFunctionName(const char* name,
  size_t length) {
  PushDataChunk(LogDataChunkKey_FunctionName, name, length);
}

void LogPacketTransmitter::PushModuleName(const char* name, size_t length) {
  PushDataChunk(LogDataChunkKey_ModuleName, name, length);
}

void LogPacketTransmitter::PushThreadName(const char* name, size_t length) {
  PushDataChunk(LogDataChunkKey_ThreadName, name, length);
}

void LogPacketTransmitter::PushLogPacketDropCount(uint64_t count) {
  PushDataChunk(LogDataChunkKey_LogPacketDropCount, &count, sizeof(count));
}

void LogPacketTransmitter::PushUserSystemClock(int64_t seconds) {
  PushDataChunk(LogDataChunkKey_UserSystemClock, &seconds, sizeof(seconds));
}

void LogPacketTransmitter::PushProcessName(const char* name, size_t length) {
  PushDataChunk(LogDataChunkKey_ProcessName, name, length);
}

LogPacketTransmitterBase::LogPacketTransmitterBase(void* buffer,
  size_t bufferSize, FlushFunction flushFunction, uint8_t severity,
  uint8_t verbosity, uint64_t processId, bool isHead, bool isTail)
  : m_Header(static_cast<LogPacketHeader*>(buffer)),
    m_Start(static_cast<uint8_t*>(buffer)),
    m_End(static_cast<uint8_t*>(buffer) + bufferSize),
    m_PayloadStart(static_cast<uint8_t*>(buffer) + sizeof(LogPacketHeader)),
    m_Current(m_PayloadStart),
    m_IsTail(isTail),
    m_FlushFunction(flushFunction) {
  m_Header->SetProcessId(processId);
  m_Header->SetThreadId(os::GetThreadId(os::GetCurrentThread()));
  m_Header->SetHead(isHead);
  m_Header->SetLittleEndian(true);
  m_Header->SetSeverity(severity);
  m_Header->SetVerbosity(verbosity);
}

LogPacketTransmitterBase::~LogPacketTransmitterBase() {
  FlushImpl(m_IsTail);
}

bool LogPacketTransmitterBase::FlushImpl(bool isTail) {
  if (m_Current == m_PayloadStart) {
    return true;
  }

  m_Header->SetTail(isTail);
  m_Header->SetPayloadSize(static_cast<uint32_t>(m_Current - m_PayloadStart));
  bool result =
    m_FlushFunction(m_Start, static_cast<size_t>(m_Current - m_Start));
  m_Header->SetHead(false);
  m_Current = m_PayloadStart;
  return result;
}

bool LogPacketTransmitterBase::Flush(bool isTail) {
  return FlushImpl(isTail);
}

void LogPacketTransmitterBase::PushDataChunk(LogDataChunkKey key,
  const void* data, size_t size) {
  PushDataChunkImpl(key, data, size, false);
}

void LogPacketTransmitterBase::PushDataChunkImpl(LogDataChunkKey key,
  const void* data, size_t size, bool isText) {
  const uint8_t* current = static_cast<const uint8_t*>(data);
  const uint8_t* end = current + size;
  size_t keySize = GetRequiredSizeToPushUleb128(key);
  size_t requiredSize = isText ? 4 : 1;

  do {
    size_t pushableSize = GetPushableDataSizeImpl(keySize);

    if (pushableSize < requiredSize) {
      FlushImpl(false);
      pushableSize = GetPushableDataSizeImpl(keySize);
    }

    size_t remainSize = static_cast<size_t>(end - current);

    if (pushableSize > remainSize) {
      pushableSize = remainSize;
    }

    if (isText) {
      int validSize = diag::detail::GetValidSizeAsUtf8String(
        reinterpret_cast<const char*>(current), pushableSize);

      if (validSize >= 0) {
        pushableSize = static_cast<size_t>(validSize);
      }
    }

    PushUleb128Impl(key);
    PushUleb128Impl(pushableSize);

    if (pushableSize != 0) {
      memcpy(m_Current, current, pushableSize);
      m_Current += pushableSize;
    }

    current += pushableSize;
  } while (current < end);
}

void LogPacketTransmitterBase::PushDataChunk(LogDataChunkKey key,
  const char* string, size_t length) {
  PushDataChunkImpl(key, string, length, true);
}

size_t LogPacketTransmitterBase::GetRequiredSizeToPushUleb128(
  uint64_t value) {
  size_t size = 0;

  do {
    ++size;
    value >>= 7;
  } while (value != 0);

  return size;
}

size_t LogPacketTransmitterBase::GetPushableDataSizeImpl(
  size_t keySize) const {
  size_t remainSize = static_cast<size_t>(m_End - m_Current);

  if (remainSize < keySize + 2) {
    return 0;
  }

  size_t size = remainSize - keySize;
  size_t sizeSize = 1;

  for (size_t max = 0x7f; size > max + sizeSize; max |= max << 7) {
    ++sizeSize;
  }

  return size - sizeSize;
}

size_t LogPacketTransmitterBase::GetPushableDataSize(size_t keySize) const {
  return GetPushableDataSizeImpl(keySize);
}

void LogPacketTransmitterBase::PushUleb128Impl(uint64_t value) {
  const uint32_t mask = 0x7f;
  const uint32_t inverseMask = ~mask;

  do {
    *m_Current++ = static_cast<uint8_t>(
      ((value & inverseMask) != 0 ? 0x80 : 0) | (value & mask));
    value >>= 7;
  } while (value != 0);
}

void LogPacketTransmitterBase::PushUleb128(uint64_t value) {
  PushUleb128Impl(value);
}

void LogPacketTransmitterBase::PushData(const void* data, size_t size) {
  if (size != 0) {
    memcpy(m_Current, data, size);
    m_Current += size;
  }
}

size_t LogPacketTransmitterBase::GetRemainSize() const {
  return static_cast<size_t>(m_End - m_Current);
}

}
