#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadParameter = 4,
  NvError_InsufficientMemory = 6,
  NvError_InvalidState = 8,
  NvError_Overflow = 17,
};

// The command buffer fills the front of the stream, the bookkeeping of the
// open command block sits behind it.
struct NvRmHost1xStream {
  uint8_t buffer[0x22da0];
  uint8_t isInBegin;
  uint32_t syncpointShift;
  uint32_t classId;
  uint32_t remainingCommands;
  uint32_t remainingWords;
  uint32_t remainingRelocs;
  uint32_t remainingIncrements;
  uint64_t owner;
};

static_assert(sizeof(NvRmHost1xStream) == 0x22dc8);

extern "C" {

void* NvOsAlloc(uint64_t size);
void NvOsFree(void* pointer);
uint64_t getpid();
uint32_t NvRmHost1xChannelGetClassPRIVATE(void* channel);
NvError NvRmChannelNumSyncPoints(uint32_t* pOutCount);
NvError NvRmHost1xChannelGetPinAddressPRIVATE(void* memory, uint64_t offset,
  uint64_t* pOutAddress);
uint32_t NvRmHost1xChannelPinGetUIdPRIVATE(void* memory);

}

[[gnu::visibility("hidden")]] NvError NvRmHost1xStreamInit(
  NvRmHost1xStream* stream, void* channel);
[[gnu::visibility("hidden")]] NvError NvRmHost1xStreamDeinit(
  NvRmHost1xStream* stream);
[[gnu::visibility("hidden")]] uint8_t NvRmHost1xStreamReserve(
  NvRmHost1xStream* stream, uint32_t size, uint8_t isCommand,
  uint32_t relocs);
[[gnu::visibility("hidden")]] NvError NvRmHost1xStreamSubmit(
  NvRmHost1xStream* stream, uint32_t flags, void* fence, void* sync);
[[gnu::visibility("hidden")]] NvError NvRmHost1xStreamWaitIdle(
  NvRmHost1xStream* stream);
[[gnu::visibility("hidden")]] NvError NvRmHost1xStreamSetClass(
  NvRmHost1xStream* stream, uint32_t classId, uint32_t mask);
[[gnu::visibility("hidden")]] NvError NvRmHost1xStreamPushWord(
  NvRmHost1xStream* stream, uint32_t word);
[[gnu::visibility("hidden")]] NvError NvRmHost1xStreamAddReloc(
  NvRmHost1xStream* stream, uint32_t uid, uint32_t offset, uint32_t shift,
  uint32_t mode);
[[gnu::visibility("hidden")]] NvError NvRmHost1xStreamGetFence(
  NvRmHost1xStream* stream, void* sync, void* fence);
[[gnu::visibility("hidden")]] void NvRmHost1xStreamReset(
  NvRmHost1xStream* stream);

namespace {

const uint32_t NvRmHost1xStreamSize = sizeof(NvRmHost1xStream);
const uint32_t Host1xOpcodeIncr = 1;
const uint32_t Host1xOpcodeNonIncr = 2;
const uint32_t Host1xOpcodeMask = 3;
const uint32_t Host1xOpcodeImm = 4;
const uint32_t Host1xMaxOffset = 0xfff;
const uint64_t Host1xAddressHighBit = 1ull << 39;

// Streams belong to the process that created them.
[[gnu::always_inline]] inline bool IsOwner(NvRmHost1xStream* stream) {
  const uint64_t owner = stream->owner;
  return owner == getpid();
}

[[gnu::always_inline]] inline NvError PushOpcode(NvRmHost1xStream* stream,
  uint32_t opcode, uint32_t offset, uint32_t value) {
  if (stream == nullptr) {
    return NvError_BadParameter;
  }

  const bool isOwner = IsOwner(stream);
  if (offset > Host1xMaxOffset || !isOwner) {
    return NvError_BadParameter;
  }

  if (stream->isInBegin == 0) {
    return NvError_InvalidState;
  }

  if (stream->remainingCommands == 0) {
    return NvError_BadParameter;
  }

  const NvError result = NvRmHost1xStreamPushWord(stream,
    opcode << 28 | offset << 16 | (value & 0xffff));
  if (result == NvSuccess) {
    stream->remainingCommands--;
  }

  return result;
}

}

extern "C" NvError NvRmHost1xStreamCreate(NvRmHost1xStream** pOutStream,
  void* channel) {
  if (pOutStream == nullptr || channel == nullptr) {
    return NvError_BadParameter;
  }

  const uint32_t classId = NvRmHost1xChannelGetClassPRIVATE(channel);
  if (classId == 0) {
    return NvError_BadParameter;
  }

  auto* stream = static_cast<NvRmHost1xStream*>(
    NvOsAlloc(NvRmHost1xStreamSize));
  if (stream == nullptr) {
    return NvError_InsufficientMemory;
  }

  uint32_t syncpointCount = 0;
  NvError result = NvRmHost1xStreamInit(stream, channel);
  if (result == NvSuccess) {
    result = NvRmChannelNumSyncPoints(&syncpointCount);
    if (result == NvSuccess) {
      stream->classId = classId;
      stream->isInBegin = 0;
      stream->syncpointShift = syncpointCount > 0xff ? 10 : 8;
      stream->remainingCommands = 0;
      stream->remainingWords = 0;
      stream->remainingRelocs = 0;
      stream->remainingIncrements = 0;
      stream->owner = getpid();
      *pOutStream = stream;
      return NvSuccess;
    }

    NvRmHost1xStreamDeinit(stream);
  }

  NvOsFree(stream);
  return result;
}

extern "C" NvError NvRmHost1xStreamFree(NvRmHost1xStream* stream) {
  if (stream == nullptr || !IsOwner(stream)) {
    return NvError_BadParameter;
  }

  const NvError result = NvRmHost1xStreamDeinit(stream);
  NvOsFree(stream);
  return result;
}

extern "C" NvError NvRmHost1xStreamBegin(NvRmHost1xStream* stream,
  uint32_t commands, uint32_t words, uint32_t relocs, int32_t increments) {
  if (stream == nullptr) {
    return NvError_BadParameter;
  }

  if (!IsOwner(stream)) {
    return NvError_BadParameter;
  }

  if (stream->isInBegin == 1) {
    return NvError_InvalidState;
  }

  uint32_t total;
  if (__builtin_add_overflow(commands, words, &total) ||
    __builtin_add_overflow(total, relocs, &total) || increments < 0 ||
    __builtin_add_overflow(total, static_cast<uint32_t>(increments) * 2,
      &total) ||
    (total >> 30) != 0) {
    return NvError_Overflow;
  }

  const uint32_t size = total * 4;
  if (NvRmHost1xStreamReserve(stream, size, 1, relocs) == 0) {
    NvError result = NvRmHost1xStreamSubmit(stream, 0, nullptr, nullptr);
    if (result != NvSuccess) {
      return result;
    }

    result = NvRmHost1xStreamWaitIdle(stream);
    if (result != NvSuccess) {
      return result;
    }

    if (NvRmHost1xStreamReserve(stream, size, 1, relocs) == 0) {
      return NvError_BadParameter;
    }
  }

  stream->isInBegin = 1;
  stream->remainingCommands = commands;
  stream->remainingWords = words;
  stream->remainingRelocs = relocs;
  stream->remainingIncrements = increments;
  return NvSuccess;
}

extern "C" NvError NvRmHost1xStreamEnd(NvRmHost1xStream* stream) {
  if (stream == nullptr || !IsOwner(stream)) {
    return NvError_BadParameter;
  }

  if (stream->isInBegin == 0 || stream->remainingCommands != 0 ||
    stream->remainingWords != 0 || stream->remainingRelocs != 0 ||
    stream->remainingIncrements != 0) {
    return NvError_InvalidState;
  }

  const NvError result = NvRmHost1xStreamSetClass(stream, stream->classId,
    UINT32_MAX);
  if (result != NvSuccess) {
    return result;
  }

  stream->isInBegin = 0;
  stream->remainingCommands = 0;
  stream->remainingWords = 0;
  stream->remainingRelocs = 0;
  stream->remainingIncrements = 0;
  return NvSuccess;
}

extern "C" NvError NvRmHost1xStreamPushIncr(NvRmHost1xStream* stream,
  uint32_t offset, uint32_t count) {
  return PushOpcode(stream, Host1xOpcodeIncr, offset, count);
}

extern "C" NvError NvRmHost1xStreamPushNonIncr(NvRmHost1xStream* stream,
  uint32_t offset, uint32_t count) {
  return PushOpcode(stream, Host1xOpcodeNonIncr, offset, count);
}

extern "C" NvError NvRmHost1xStreamPushMask(NvRmHost1xStream* stream,
  uint32_t offset, uint32_t mask) {
  return PushOpcode(stream, Host1xOpcodeMask, offset, mask);
}

extern "C" NvError NvRmHost1xStreamPushImm(NvRmHost1xStream* stream,
  uint32_t offset, uint32_t value) {
  return PushOpcode(stream, Host1xOpcodeImm, offset, value);
}

extern "C" NvError NvRmHost1xStreamPushWords(NvRmHost1xStream* stream,
  uint32_t count, const uint32_t* words) {
  if (stream == nullptr) {
    return NvError_BadParameter;
  }

  const bool isOwner = IsOwner(stream);
  if (words == nullptr || !isOwner) {
    return NvError_BadParameter;
  }

  if (stream->isInBegin == 0) {
    return NvError_InvalidState;
  }

  if (stream->remainingWords < count) {
    return NvError_BadParameter;
  }

  for (uint64_t i = count; i != 0; i--) {
    const NvError result = NvRmHost1xStreamPushWord(stream, *words++);
    stream->remainingWords--;
    if (result != NvSuccess) {
      return result;
    }
  }

  return NvSuccess;
}

// Mode 2 addresses the upper memory window through bit 39.
extern "C" NvError NvRmHost1xStreamPushBufferAddress(NvRmHost1xStream* stream,
  void* memory, uint64_t offset, uint32_t shift, uint32_t mode) {
  uint64_t address = 0;
  if (stream == nullptr || !IsOwner(stream)) {
    return NvError_BadParameter;
  }

  if ((offset >> 32) != 0 || memory == nullptr || shift > 31) {
    return NvError_BadParameter;
  }

  if (stream->isInBegin == 0) {
    return NvError_InvalidState;
  }

  if (stream->remainingRelocs == 0) {
    return NvError_BadParameter;
  }

  NvError result = NvRmHost1xChannelGetPinAddressPRIVATE(memory, offset,
    &address);
  if (result != NvSuccess) {
    return result;
  }

  if (mode >= 2) {
    if (mode != 2) {
      return NvError_BadParameter;
    }

    address |= Host1xAddressHighBit;
  }

  address >>= shift;
  if ((address >> 32) != 0) {
    return NvError_Overflow;
  }

  const uint32_t uid = NvRmHost1xChannelPinGetUIdPRIVATE(memory);
  if (uid == 0) {
    return NvError_BadParameter;
  }

  result = NvRmHost1xStreamAddReloc(stream, uid,
    static_cast<uint32_t>(offset), shift, mode);
  if (result != NvSuccess) {
    return result;
  }

  result = NvRmHost1xStreamPushWord(stream, static_cast<uint32_t>(address));
  if (result != NvSuccess) {
    return result;
  }

  stream->remainingRelocs--;
  return NvSuccess;
}

extern "C" NvError NvRmHost1xStreamFlush(NvRmHost1xStream* stream,
  void* fence, void* sync) {
  if (stream == nullptr || !IsOwner(stream)) {
    return NvError_BadParameter;
  }

  if (stream->isInBegin == 1) {
    return NvError_InvalidState;
  }

  NvError result = NvRmHost1xStreamSubmit(stream, 0, nullptr, nullptr);
  if (result != NvSuccess) {
    return result;
  }

  result = NvRmHost1xStreamGetFence(stream, sync, fence);
  if (result != NvSuccess) {
    return result;
  }

  NvRmHost1xStreamReset(stream);
  return NvSuccess;
}
