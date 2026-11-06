#pragma once

#include <map>
#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_ref_base.hpp"
#include "movie/movie_dictionary.hpp"
#include "movie/movie_std_lib_allocator.hpp"

namespace movie::detail {

// Values are keyed by the std::hash of their name, the name itself is not
// kept.
class Dictionary : public MovieRefBase<IDictionary> {
public:
  struct value_t {
    ValueType type;
    union {
      char* string;
      int32_t int32;
      long int64;
      IBuffer* buffer;
      IDictionary* dictionary;
    };
  };

  explicit Dictionary(IAllocator* allocator);
  ~Dictionary() override;

  size_t GetCount() const override {
    return m_Values.size();
  }

  bool Contains(const char* name) const override;
  bool Contains(ValueType* pOutType, const char* name) const override;
  MovieResult Remove(const char* name) override;
  MovieResult GetString(const char** pOutValue,
    const char* name) const override;
  MovieResult SetString(const char* name, const char* value,
    long length) override;
  MovieResult GetBool(bool* pOutValue, const char* name) const override;
  MovieResult SetBool(const char* name, bool value) override;
  MovieResult GetInt32(int32_t* pOutValue, const char* name) const override;
  MovieResult SetInt32(const char* name, int32_t value) override;
  MovieResult GetInt64(long* pOutValue, const char* name) const override;
  MovieResult SetInt64(const char* name, long value) override;
  MovieResult GetBuffer(IBuffer** ppOutBuffer,
    const char* name) const override;
  MovieResult SetBuffer(const char* name, IBuffer* buffer) override;
  MovieResult SetBuffer(const char* name, const void* data,
    size_t size) override;
  MovieResult GetDictionary(IDictionary** ppOutDictionary,
    const char* name) const override;
  MovieResult SetDictionary(const char* name,
    IDictionary* dictionary) override;
  MovieResult Clone(IDictionary** ppOutDictionary) override;

  void ClearValue(value_t& value);

private:
  using ValueMap = std::map<size_t, value_t, std::less<size_t>,
    StdLibAllocator<std::pair<const size_t, value_t>>>;

  ValueMap m_Values;
};

}
