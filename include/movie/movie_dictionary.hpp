#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/movie_interfaces.hpp"

namespace movie {

class IDictionary : public IMovieInterface {
public:
  enum ValueType : int32_t {
    ValueType_String,
    ValueType_Bool,
    ValueType_Int32,
    ValueType_Int64,
    ValueType_Buffer,
    ValueType_Dictionary,
  };

  virtual size_t GetCount() const = 0;
  virtual bool Contains(const char* name) const = 0;
  virtual bool Contains(ValueType* pOutType, const char* name) const = 0;
  virtual MovieResult Remove(const char* name) = 0;
  virtual MovieResult GetString(const char** pOutValue,
    const char* name) const = 0;
  virtual MovieResult SetString(const char* name, const char* value,
    long length) = 0;
  virtual MovieResult GetBool(bool* pOutValue, const char* name) const = 0;
  virtual MovieResult SetBool(const char* name, bool value) = 0;
  virtual MovieResult GetInt32(int32_t* pOutValue,
    const char* name) const = 0;
  virtual MovieResult SetInt32(const char* name, int32_t value) = 0;
  virtual MovieResult GetInt64(long* pOutValue, const char* name) const = 0;
  virtual MovieResult SetInt64(const char* name, long value) = 0;
  virtual MovieResult GetBuffer(IBuffer** ppOutBuffer,
    const char* name) const = 0;
  virtual MovieResult SetBuffer(const char* name, IBuffer* buffer) = 0;
  virtual MovieResult SetBuffer(const char* name, const void* data,
    size_t size) = 0;
  virtual MovieResult GetDictionary(IDictionary** ppOutDictionary,
    const char* name) const = 0;
  virtual MovieResult SetDictionary(const char* name,
    IDictionary* dictionary) = 0;
  virtual MovieResult Clone(IDictionary** ppOutDictionary) = 0;
};

MovieResult CreateDictionary(IDictionary** ppOutDictionary,
  IAllocator* allocator);

}
