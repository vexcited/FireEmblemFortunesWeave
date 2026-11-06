#include <new>
#include <string.h>
#include <string>
#include <utility>

#include "movie/detail/movie_dictionary.hpp"
#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/movie_memory_buffer.hpp"

namespace movie::detail {

namespace {

constexpr MovieResult ResultNotFound = static_cast<MovieResult>(23);
constexpr MovieResult ResultTypeMismatch = static_cast<MovieResult>(28);

inline size_t HashName(const char* name) {
  return std::hash<std::string>()(name);
}

}

Dictionary::Dictionary(IAllocator* allocator)
  : MovieRefBase(allocator),
    m_Values(StdLibAllocator<value_t>(allocator)) {
}

Dictionary::~Dictionary() {
  for (auto it = m_Values.begin(); it != m_Values.end(); ++it) {
    ClearValue(it->second);
  }
}

void Dictionary::ClearValue(value_t& value) {
  if (value.type == ValueType_String) {
    m_pAllocator->Free(value.string);
    value.string = nullptr;
  }
  else if (value.type == ValueType_Dictionary ||
    value.type == ValueType_Buffer) {
    value.buffer->Release();
    value.buffer = nullptr;
  }
}

bool Dictionary::Contains(const char* name) const {
  return m_Values.find(std::hash<std::string>()(name)) != m_Values.end();
}

bool Dictionary::Contains(ValueType* pOutType, const char* name) const {
  auto it = m_Values.find(std::hash<std::string>()(name));
  if (pOutType != nullptr && it != m_Values.end()) {
    *pOutType = it->second.type;
  }

  return it != m_Values.end();
}

MovieResult Dictionary::Remove(const char* name) {
  auto it = m_Values.find(std::hash<std::string>()(name));
  if (it == m_Values.end()) {
    return ResultNotFound;
  }

  ClearValue(it->second);
  m_Values.erase(it);
  return MovieResult_Success;
}

MovieResult Dictionary::GetString(const char** pOutValue,
  const char* name) const {
  auto it = m_Values.find(std::hash<std::string>()(name));
  if (it == m_Values.end()) {
    return ResultNotFound;
  }

  if (it->second.type != ValueType_String) {
    return ResultTypeMismatch;
  }

  *pOutValue = it->second.string;
  return MovieResult_Success;
}

MovieResult Dictionary::SetString(const char* name, const char* value,
  long length) {
  size_t key = HashName(name);
  auto it = m_Values.find(key);
  if (length <= 0) {
    length = strlen(value);
  }

  if (it != m_Values.end()) {
    ClearValue(it->second);
    it->second.type = ValueType_String;
    it->second.string = static_cast<char*>(
      m_pAllocator->Allocate(length + 1));
    if (it->second.string != nullptr) {
      strncpy(it->second.string, value, length);
      it->second.string[length] = '\0';
    }

    return MovieResult_Success;
  }

  char* copy = static_cast<char*>(m_pAllocator->Allocate(length + 1));
  if (copy != nullptr) {
    strncpy(copy, value, length);
    copy[length] = '\0';
  }

  value_t entry = {};
  entry.type = ValueType_String;
  entry.string = copy;
  m_Values.insert(std::make_pair(key, entry));
  return MovieResult_Success;
}

MovieResult Dictionary::GetBool(bool* pOutValue, const char* name) const {
  auto it = m_Values.find(std::hash<std::string>()(name));
  if (it == m_Values.end()) {
    return ResultNotFound;
  }

  if (it->second.type != ValueType_Bool) {
    return ResultTypeMismatch;
  }

  *pOutValue = it->second.int32 == 1;
  return MovieResult_Success;
}

MovieResult Dictionary::SetBool(const char* name, bool value) {
  size_t key = HashName(name);
  auto it = m_Values.find(key);
  if (it != m_Values.end()) {
    ClearValue(it->second);
    it->second.type = ValueType_Bool;
    it->second.int32 = value;
    return MovieResult_Success;
  }

  value_t entry = {};
  entry.type = ValueType_Bool;
  entry.int32 = value;
  m_Values.insert(std::make_pair(key, entry));
  return MovieResult_Success;
}

MovieResult Dictionary::GetInt32(int32_t* pOutValue, const char* name) const {
  auto it = m_Values.find(std::hash<std::string>()(name));
  if (it == m_Values.end()) {
    return ResultNotFound;
  }

  if (it->second.type != ValueType_Int32) {
    return ResultTypeMismatch;
  }

  *pOutValue = it->second.int32;
  return MovieResult_Success;
}

MovieResult Dictionary::SetInt32(const char* name, int32_t value) {
  size_t key = HashName(name);
  auto it = m_Values.find(key);
  if (it != m_Values.end()) {
    ClearValue(it->second);
    it->second.int32 = value;
    it->second.type = ValueType_Int32;
    return MovieResult_Success;
  }

  value_t entry = {};
  entry.type = ValueType_Int32;
  entry.int32 = value;
  m_Values.insert(std::make_pair(key, entry));
  return MovieResult_Success;
}

MovieResult Dictionary::GetInt64(long* pOutValue, const char* name) const {
  auto it = m_Values.find(std::hash<std::string>()(name));
  if (it == m_Values.end()) {
    return ResultNotFound;
  }

  if (it->second.type != ValueType_Int64) {
    return ResultTypeMismatch;
  }

  *pOutValue = it->second.int64;
  return MovieResult_Success;
}

MovieResult Dictionary::SetInt64(const char* name, long value) {
  size_t key = HashName(name);
  auto it = m_Values.find(key);
  if (it != m_Values.end()) {
    ClearValue(it->second);
    it->second.int64 = value;
    it->second.type = ValueType_Int64;
    return MovieResult_Success;
  }

  value_t entry = {};
  entry.type = ValueType_Int64;
  entry.int64 = value;
  m_Values.insert(std::make_pair(key, entry));
  return MovieResult_Success;
}

MovieResult Dictionary::GetBuffer(IBuffer** ppOutBuffer,
  const char* name) const {
  auto it = m_Values.find(std::hash<std::string>()(name));
  if (it == m_Values.end()) {
    return ResultNotFound;
  }

  if (it->second.type != ValueType_Buffer) {
    return ResultTypeMismatch;
  }

  it->second.buffer->AddRef();
  *ppOutBuffer = it->second.buffer;
  return MovieResult_Success;
}

MovieResult Dictionary::SetBuffer(const char* name, IBuffer* buffer) {
  size_t key = HashName(name);
  auto it = m_Values.find(key);
  buffer->AddRef();
  if (it != m_Values.end()) {
    ClearValue(it->second);
    it->second.buffer = buffer;
    it->second.type = ValueType_Buffer;
    return MovieResult_Success;
  }

  value_t entry = {};
  entry.type = ValueType_Buffer;
  entry.buffer = buffer;
  m_Values.insert(std::make_pair(key, entry));
  return MovieResult_Success;
}

MovieResult Dictionary::SetBuffer(const char* name, const void* data,
  size_t size) {
  size_t key = HashName(name);
  auto it = m_Values.find(key);
  RefPtr<IBuffer> buffer;
  MovieResult result = CreateMemoryBufferAsCopy(buffer.GetAddress(),
    static_cast<const uint8_t*>(data), size, m_pAllocator);
  if (!IsSucceeded(result)) {
    return result;
  }

  buffer->AddRef();
  if (it != m_Values.end()) {
    ClearValue(it->second);
    it->second.type = ValueType_Buffer;
    it->second.buffer = buffer.Get();
    return MovieResult_Success;
  }

  value_t entry = {};
  entry.type = ValueType_Buffer;
  entry.buffer = buffer.Get();
  m_Values.insert(std::make_pair(key, entry));
  return MovieResult_Success;
}

MovieResult Dictionary::GetDictionary(IDictionary** ppOutDictionary,
  const char* name) const {
  auto it = m_Values.find(std::hash<std::string>()(name));
  if (it == m_Values.end()) {
    return ResultNotFound;
  }

  if (it->second.type != ValueType_Dictionary) {
    return ResultTypeMismatch;
  }

  it->second.dictionary->AddRef();
  *ppOutDictionary = it->second.dictionary;
  return MovieResult_Success;
}

MovieResult Dictionary::SetDictionary(const char* name,
  IDictionary* dictionary) {
  size_t key = HashName(name);
  auto it = m_Values.find(key);
  dictionary->AddRef();
  if (it != m_Values.end()) {
    ClearValue(it->second);
    it->second.dictionary = dictionary;
    it->second.type = ValueType_Dictionary;
    return MovieResult_Success;
  }

  value_t entry = {};
  entry.type = ValueType_Dictionary;
  entry.dictionary = dictionary;
  m_Values.insert(std::make_pair(key, entry));
  return MovieResult_Success;
}

// Shared values are referenced by both dictionaries, and a value whose key
// is already in the clone keeps the reference taken for it.
MovieResult Dictionary::Clone(IDictionary** ppOutDictionary) {
  IAllocator* allocator = m_pAllocator;
  void* storage = allocator->Allocate(sizeof(Dictionary));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  Dictionary* clone = new (storage) Dictionary(allocator);
  clone->AddRef();
  for (auto it = m_Values.begin(); it != m_Values.end(); ++it) {
    if (it->second.type == ValueType_Buffer ||
      it->second.type == ValueType_Dictionary) {
      it->second.buffer->AddRef();
    }

    clone->m_Values.insert(*it);
  }

  *ppOutDictionary = clone;
  return MovieResult_Success;
}

}

namespace movie {

MovieResult CreateDictionary(IDictionary** ppOutDictionary,
  IAllocator* allocator) {
  void* storage = allocator->Allocate(sizeof(detail::Dictionary));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  detail::Dictionary* dictionary = new (storage) detail::Dictionary(allocator);
  dictionary->AddRef();
  *ppOutDictionary = dictionary;
  return MovieResult_Success;
}

}
