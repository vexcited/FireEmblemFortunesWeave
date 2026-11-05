#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::movie {

enum BufferFlags : int32_t {
  BufferFlags_None = 0,
};

class Buffer {
public:
  Buffer();

  Result GetBuffer(void** pOutData, size_t* pOutCapacity,
    size_t* pOutFilledSize) const;
  Result GetBufferCapacity(size_t* pOutCapacity) const;
  Result GetFilledBufferSize(size_t* pOutFilledSize) const;
  Result GetTimeStamp(TimeSpan* pOutTimeStamp) const;
  Result GetBufferFlags(BufferFlags* pOutFlags) const;

  Result SetBuffer(void* data, size_t capacity, size_t filledSize);
  Result SetFilledBufferSize(size_t filledSize);
  Result SetTimeStamp(TimeSpan timeStamp);
  Result SetBufferFlags(BufferFlags flags);

private:
  void* m_Data;
  size_t m_Capacity;
  size_t m_FilledSize;
  TimeSpan m_TimeStamp;
  BufferFlags m_Flags;
};

}
