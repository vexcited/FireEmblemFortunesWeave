#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::lm::detail {

enum LogDataChunkKey : int32_t {
  LogDataChunkKey_LogSessionBegin,
  LogDataChunkKey_LogSessionEnd,
  LogDataChunkKey_TextLog,
  LogDataChunkKey_LineNumber,
  LogDataChunkKey_FileName,
  LogDataChunkKey_FunctionName,
  LogDataChunkKey_ModuleName,
  LogDataChunkKey_ThreadName,
  LogDataChunkKey_LogPacketDropCount,
  LogDataChunkKey_UserSystemClock,
  LogDataChunkKey_ProcessName,
};

class LogPacketHeader {
 public:
  uint64_t GetProcessId() const;
  LogPacketHeader& SetProcessId(uint64_t processId);
  uint64_t GetThreadId() const;
  LogPacketHeader& SetThreadId(uint64_t threadId);
  bool IsHead() const;
  LogPacketHeader& SetHead(bool isHead);
  bool IsTail() const;
  LogPacketHeader& SetTail(bool isTail);
  bool IsLittleEndian() const;
  LogPacketHeader& SetLittleEndian(bool isLittleEndian);
  uint8_t GetSeverity() const;
  LogPacketHeader& SetSeverity(uint8_t severity);
  uint8_t GetVerbosity() const;
  LogPacketHeader& SetVerbosity(uint8_t verbosity);
  uint32_t GetPayloadSize() const;
  LogPacketHeader& SetPayloadSize(uint32_t payloadSize);

 private:
  uint64_t m_ProcessId;
  uint64_t m_ThreadId;
  uint8_t m_IsHead : 1;
  uint8_t m_IsTail : 1;
  uint8_t m_IsLittleEndian : 1;
  uint8_t m_Reserved;
  uint8_t m_Severity;
  uint8_t m_Verbosity;
  uint32_t m_PayloadSize;
};

static_assert(sizeof(LogPacketHeader) == 24);

class LogPacketTransmitterBase {
 public:
  using FlushFunction = bool (*)(const uint8_t* data, size_t size);

  LogPacketTransmitterBase(void* buffer, size_t bufferSize,
    FlushFunction flushFunction, uint8_t severity, uint8_t verbosity,
    uint64_t processId, bool isHead, bool isTail);
  ~LogPacketTransmitterBase();

  bool Flush(bool isTail);
  void PushDataChunk(LogDataChunkKey key, const void* data, size_t size);
  void PushDataChunk(LogDataChunkKey key, const char* string, size_t length);

 private:
  static size_t GetRequiredSizeToPushUleb128(uint64_t value);
  size_t GetPushableDataSize(size_t keySize) const;
  void PushUleb128(uint64_t value);
  void PushData(const void* data, size_t size);
  size_t GetRemainSize() const;
  void PushDataChunkImpl(LogDataChunkKey key, const void* data, size_t size,
    bool isText);

  [[gnu::always_inline]] bool FlushImpl(bool isTail);
  [[gnu::always_inline]] size_t GetPushableDataSizeImpl(size_t keySize) const;
  [[gnu::always_inline]] void PushUleb128Impl(uint64_t value);

  LogPacketHeader* m_Header;
  uint8_t* m_Start;
  uint8_t* m_End;
  uint8_t* m_PayloadStart;
  uint8_t* m_Current;
  bool m_IsTail;
  FlushFunction m_FlushFunction;
};

class LogPacketTransmitter : public LogPacketTransmitterBase {
 public:
  LogPacketTransmitter(void* buffer, size_t bufferSize,
    FlushFunction flushFunction, uint8_t severity, uint8_t verbosity,
    uint64_t processId, bool isHead, bool isTail);

  void PushLogSessionBegin();
  void PushLogSessionEnd();
  void PushTextLog(const char* text, size_t length);
  void PushLineNumber(uint32_t lineNumber);
  void PushFileName(const char* name, size_t length);
  void PushFunctionName(const char* name, size_t length);
  void PushModuleName(const char* name, size_t length);
  void PushThreadName(const char* name, size_t length);
  void PushLogPacketDropCount(uint64_t count);
  void PushUserSystemClock(int64_t seconds);
  void PushProcessName(const char* name, size_t length);
};

}
