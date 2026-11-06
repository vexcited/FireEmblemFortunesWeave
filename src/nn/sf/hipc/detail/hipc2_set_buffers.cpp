#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/sf/cmif/client/cmif_client_message.hpp"

namespace nn::sf::hipc::detail {

namespace {

using namespace cmif::client::detail;

constexpr Result ResultPointerBufferTooSmall() {
  return Result{0x11a0b};
}

constexpr Result ResultPointerSizeTooLarge() {
  return Result{0x20b};
}

constexpr int MaxPendingCount = 8;

// An auto select buffer small enough to go through the pointer buffer.
struct PendingBuffer {
  uint8_t index;
  uint8_t mapIndex;
  uint8_t pointerIndex;
  uint8_t sizeIndex;
};

uint32_t GetMapMode(uint32_t attribute) {
  if (attribute & BufferAttribute_HipcMapTransferAllowsNonSecure) {
    return 1;
  }
  return (attribute & BufferAttribute_HipcMapTransferAllowsNonDevice) ? 3 : 0;
}

void WriteMapDescriptor(Hipc2MessageWriter* pWriter, int offset,
  uintptr_t pointer, size_t size, uint32_t attribute) {
  const uint32_t mode = GetMapMode(attribute) |
    (static_cast<uint32_t>(pointer >> 4) & 0xf0000000) |
    (static_cast<uint32_t>(pointer >> 34) & 0x1c) |
    (static_cast<uint32_t>(size >> 8) & 0xf000000);
  uint32_t* message = static_cast<uint32_t*>(pWriter->buffer);
  message[offset] = static_cast<uint32_t>(size);
  message[offset + 1] = static_cast<uint32_t>(pointer);
  message[offset + 2] = mode;
}

void WriteEmptyMapDescriptor(Hipc2MessageWriter* pWriter, int offset,
  uint32_t attribute) {
  uint32_t* message = static_cast<uint32_t*>(pWriter->buffer);
  message[offset] = 0;
  message[offset + 1] = 0;
  message[offset + 2] = GetMapMode(attribute);
}

uint32_t GetPointerAddressBits(uintptr_t pointer) {
  return (static_cast<uint32_t>(pointer >> 20) & 0xf000) |
    (static_cast<uint32_t>(pointer >> 30) & 0x1c0);
}

void WriteReceiveList(Hipc2MessageWriter* pWriter, int index,
  uintptr_t pointer, size_t size) {
  const int offset = pWriter->pInfo->receiveListOffset + index * 2;
  uint32_t* message = static_cast<uint32_t*>(pWriter->buffer);
  message[offset] = static_cast<uint32_t>(pointer);
  message[offset + 1] = static_cast<uint32_t>(
    ((pointer & 0xffff00000000) | static_cast<uint64_t>(size) << 48) >> 32);
}

void WritePointerSize(Hipc2MessageWriter* pWriter, size_t sizeOffset,
  int index, size_t size) {
  uint16_t* sizes = reinterpret_cast<uint16_t*>(
    reinterpret_cast<char*>(static_cast<uint32_t*>(pWriter->buffer) +
      pWriter->pInfo->rawDataOffset) + sizeOffset);
  sizes[index] = static_cast<uint16_t>(size);
}

}

Result SetBuffers(Hipc2MessageWriter* pWriter, int count,
  const BufferParameter* pBuffers, const uint32_t* pAttributes,
  size_t pointerBufferSize, size_t pointerSizeOffset) {
  if (count < 1) {
    return Result{0};
  }

  PendingBuffer pending[MaxPendingCount] = {};
  int pendingCount = 0;
  int sendIndex = 0;
  int receiveIndex = 0;
  int pointerIndex = 0;
  int receiveListIndex = 0;
  int sizeIndex = 0;

  for (int i = 0; i < count; i++) {
    const uint32_t attribute = pAttributes[i];
    const BufferParameter& buffer = pBuffers[i];
    uint32_t* message;
    if (attribute & BufferAttribute_HipcMapAlias) {
      if (attribute & BufferAttribute_In) {
        WriteMapDescriptor(pWriter, pWriter->pInfo->sendOffset +
          sendIndex * 3, buffer.pointer, buffer.size, attribute);
        sendIndex++;
      }
      else if (attribute & BufferAttribute_Out) {
        WriteMapDescriptor(pWriter, pWriter->pInfo->receiveOffset +
          receiveIndex * 3, buffer.pointer, buffer.size, attribute);
        receiveIndex++;
      }
      else {
        diag::detail::AbortImpl();
      }
    }
    else if (attribute & BufferAttribute_HipcPointer) {
      const size_t alignedSize = AlignUp(buffer.size, 0x10);
      if (pointerBufferSize < alignedSize) {
        return ResultPointerBufferTooSmall();
      }
      pointerBufferSize -= alignedSize;
      if (attribute & BufferAttribute_In) {
        const int offset = pWriter->pInfo->pointerOffset + pointerIndex * 2;
        message = static_cast<uint32_t*>(pWriter->buffer);
        message[offset] = (pointerIndex & 0xe3f) |
          static_cast<uint32_t>(buffer.size) << 16 |
          GetPointerAddressBits(buffer.pointer);
        message[offset + 1] = static_cast<uint32_t>(buffer.pointer);
        pointerIndex++;
      }
      else if (attribute & BufferAttribute_Out) {
        WriteReceiveList(pWriter, receiveListIndex, buffer.pointer,
          buffer.size);
        receiveListIndex++;
        if (!(attribute & BufferAttribute_FixedSize)) {
          if (buffer.size >> 16 != 0) {
            return ResultPointerSizeTooLarge();
          }
          WritePointerSize(pWriter, pointerSizeOffset, sizeIndex,
            buffer.size);
          sizeIndex++;
        }
      }
      else {
        diag::detail::AbortImpl();
      }
    }
    else if (attribute & BufferAttribute_HipcAutoSelect) {
      if (attribute & BufferAttribute_In) {
        if (buffer.size >> 16 == 0) {
          pending[pendingCount++] = {static_cast<uint8_t>(i),
            static_cast<uint8_t>(sendIndex),
            static_cast<uint8_t>(pointerIndex), 0};
        }
        else {
          WriteMapDescriptor(pWriter, pWriter->pInfo->sendOffset +
            sendIndex * 3, buffer.pointer, buffer.size, attribute);
          const int offset = pWriter->pInfo->pointerOffset +
            pointerIndex * 2;
          message = static_cast<uint32_t*>(pWriter->buffer);
          message[offset] = pointerIndex & 0xe3f;
          message[offset + 1] = 0;
        }
        sendIndex++;
        pointerIndex++;
      }
      else if (attribute & BufferAttribute_Out) {
        if (buffer.size >> 16 == 0) {
          pending[pendingCount++] = {static_cast<uint8_t>(i),
            static_cast<uint8_t>(receiveIndex),
            static_cast<uint8_t>(receiveListIndex),
            static_cast<uint8_t>(sizeIndex)};
        }
        else {
          WriteMapDescriptor(pWriter, pWriter->pInfo->receiveOffset +
            receiveIndex * 3, buffer.pointer, buffer.size, attribute);
          WriteReceiveList(pWriter, receiveListIndex, 0, 0);
        }
        sizeIndex += (attribute & BufferAttribute_FixedSize) ? 0 : 1;
        receiveIndex++;
        receiveListIndex++;
      }
      else {
        diag::detail::AbortImpl();
      }
    }
    else {
      diag::detail::AbortImpl();
    }
  }

  // Give the pointer buffer to the pending buffers until it runs out, then
  // map the rest.
  while (pendingCount > 0) {
    int best = 0;
    for (int i = 1; i < pendingCount; i++) {
      if (pBuffers[pending[i].index].size !=
        pBuffers[pending[best].index].size) {
        best = i;
      }
    }

    const PendingBuffer entry = pending[best];
    const BufferParameter& buffer = pBuffers[entry.index];
    const size_t alignedSize = AlignUp(buffer.size, 0x10);
    if (pointerBufferSize < alignedSize) {
      for (int i = 0; i < pendingCount; i++) {
        const PendingBuffer& rest = pending[i];
        const BufferParameter& mapped = pBuffers[rest.index];
        const uint32_t attribute = pAttributes[rest.index];
        if (attribute & BufferAttribute_In) {
          WriteMapDescriptor(pWriter, pWriter->pInfo->sendOffset +
            rest.mapIndex * 3, mapped.pointer, mapped.size, attribute);
          const int offset = pWriter->pInfo->pointerOffset +
            rest.pointerIndex * 2;
          uint32_t* message = static_cast<uint32_t*>(pWriter->buffer);
          message[offset] = rest.pointerIndex & 0x3f;
          message[offset + 1] = 0;
        }
        else {
          WriteMapDescriptor(pWriter, pWriter->pInfo->receiveOffset +
            rest.mapIndex * 3, mapped.pointer, mapped.size, attribute);
          WriteReceiveList(pWriter, rest.pointerIndex, 0, 0);
        }
      }
      return Result{0};
    }

    pointerBufferSize -= alignedSize;
    const uint32_t attribute = pAttributes[entry.index];
    if (attribute & BufferAttribute_In) {
      WriteEmptyMapDescriptor(pWriter, pWriter->pInfo->sendOffset +
        entry.mapIndex * 3, attribute);
      const int offset = pWriter->pInfo->pointerOffset +
        entry.pointerIndex * 2;
      uint32_t* message = static_cast<uint32_t*>(pWriter->buffer);
      message[offset] = (entry.pointerIndex & 0x3f) |
        GetPointerAddressBits(buffer.pointer) |
        static_cast<uint32_t>(buffer.size) << 16;
      message[offset + 1] = static_cast<uint32_t>(buffer.pointer);
    }
    else {
      WriteEmptyMapDescriptor(pWriter, pWriter->pInfo->receiveOffset +
        entry.mapIndex * 3, attribute);
      WriteReceiveList(pWriter, entry.pointerIndex, buffer.pointer,
        buffer.size);
      if (!(attribute & BufferAttribute_FixedSize)) {
        WritePointerSize(pWriter, pointerSizeOffset, entry.sizeIndex,
          buffer.size);
      }
    }

    pendingCount--;
    if (best != pendingCount) {
      pending[best] = pending[pendingCount];
    }
  }
  return Result{0};
}

}
