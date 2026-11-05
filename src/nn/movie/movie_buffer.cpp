#include "nn/movie/movie_buffer.hpp"
#include "nn/movie/movie_result.hpp"

namespace nn::movie {

Buffer::Buffer()
  : m_Data(nullptr), m_Capacity(0), m_FilledSize(0), m_TimeStamp(),
    m_Flags(BufferFlags_None) {
}

Result Buffer::GetBuffer(void** pOutData, size_t* pOutCapacity,
  size_t* pOutFilledSize) const {
  *pOutData = m_Data;
  *pOutCapacity = m_Capacity;
  *pOutFilledSize = m_FilledSize;
  return {};
}

Result Buffer::GetBufferCapacity(size_t* pOutCapacity) const {
  *pOutCapacity = m_Capacity;
  return {};
}

Result Buffer::GetFilledBufferSize(size_t* pOutFilledSize) const {
  *pOutFilledSize = m_FilledSize;
  return {};
}

Result Buffer::GetTimeStamp(TimeSpan* pOutTimeStamp) const {
  *pOutTimeStamp = m_TimeStamp;
  return {};
}

Result Buffer::GetBufferFlags(BufferFlags* pOutFlags) const {
  *pOutFlags = m_Flags;
  return {};
}

Result Buffer::SetBuffer(void* data, size_t capacity, size_t filledSize) {
  m_Data = data;
  m_Capacity = capacity;
  m_FilledSize = filledSize;
  return {};
}

Result Buffer::SetFilledBufferSize(size_t filledSize) {
  if (filledSize > m_Capacity) {
    return ResultInvalidArgument;
  }

  m_FilledSize = filledSize;
  return {};
}

Result Buffer::SetTimeStamp(TimeSpan timeStamp) {
  m_TimeStamp = timeStamp;
  return {};
}

Result Buffer::SetBufferFlags(BufferFlags flags) {
  m_Flags = flags;
  return {};
}

}
