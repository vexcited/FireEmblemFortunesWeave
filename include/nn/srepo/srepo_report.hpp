#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/srepo/detail/srepo_generator.hpp"

namespace nn::srepo {

class Struct;

class Array {
 public:
  Array();

  void SetBuffer(void* buffer, size_t size);
  void Clear();
  Result Add(long value);
  Result Add(const Any64BitId& value);
  Result Add(float value);
  Result Add(double value);
  Result Add(const char* value);
  Result Add(bool value);
  Result Add(const Struct& value);
  int GetCount() const;
  size_t GetSize() const;
  const void* GetBuffer() const;

 private:
  uint8_t* m_Buffer;
  size_t m_BufferSize;
  size_t m_Size;
  size_t m_Count;
};

class Struct {
 public:
  Struct();

  void SetBuffer(void* buffer, size_t size);
  void Clear();
  Result Add(const char* key, long value);
  Result Add(const char* key, const Any64BitId& value);
  Result Add(const char* key, float value);
  Result Add(const char* key, double value);
  Result Add(const char* key, const char* value);
  Result Add(const char* key, bool value);
  Result Add(const char* key, const Array& value);
  Result Add(const char* key, const Struct& value);
  int GetCount() const;
  size_t GetSize() const;
  const void* GetBuffer() const;

 private:
  uint8_t* m_Buffer;
  size_t m_BufferSize;
  size_t m_Size;
  size_t m_Count;
};

}
