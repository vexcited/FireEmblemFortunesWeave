#include <string.h>

#include "nn/movie/movie_media_property.hpp"

namespace nn::movie {

namespace {

// Lengths above the limit are clamped to one less than it.
size_t ClampKeyLength(size_t length) {
  return length <= MediaProperty::KeyLengthMax
    ? length
    : MediaProperty::KeyLengthMax - 1;
}

}

void MediaProperty::SetValue(Entry* entries, int* pCount, const char* key,
  Type type, const void* value, int size) {
  int index = *pCount;
  bool isFound = false;

  for (int i = 0; i < *pCount; i++) {
    Entry& entry = entries[i];

    if (entry.isValid &&
        strncmp(entry.key, key, ClampKeyLength(strlen(key))) == 0 &&
        entry.type == type) {
      index = i;
      isFound = true;
      break;
    }
  }

  if (!isFound && index >= EntryCountMax) {
    return;
  }

  Entry& entry = entries[index];

  switch (type) {
    case Type_Int32:
    case Type_Uint32:
      entry.int32Value = *static_cast<const int32_t*>(value);
      break;
    case Type_Int64:
    case Type_Uint64:
    case Type_Size:
      entry.int64Value = *static_cast<const int64_t*>(value);
      break;
    case Type_Float:
      entry.int32Value = *static_cast<const int32_t*>(value);
      break;
    case Type_Double:
      entry.int64Value = *static_cast<const int64_t*>(value);
      break;
    case Type_String: {
      size_t length = strlen(static_cast<const char*>(value));
      if (length > StringLengthMax) {
        length = StringLengthMax - 1;
      }

      memset(entry.stringValue, 0, sizeof(entry.stringValue));
      memcpy(entry.stringValue, value, length);
      break;
    }
    default: {
      uint32_t dataSize = size;
      if (dataSize >= BinaryDataSizeMax) {
        dataSize = BinaryDataSizeMax;
      }

      memset(entry.binaryValue.data, 0, sizeof(entry.binaryValue.data));
      memcpy(entry.binaryValue.data, value, dataSize);
      entry.binaryValue.size = dataSize;
      break;
    }
  }

  uint32_t keyLength = strlen(key);
  if (keyLength == 0) {
    return;
  }

  if (keyLength > KeyLengthMax) {
    keyLength = KeyLengthMax - 1;
  }

  memset(entry.key, 0, sizeof(entry.key));
  memcpy(entry.key, key, keyLength);
  entry.type = type;
  entry.isValid = true;

  if (!isFound) {
    ++*pCount;
  }
}

MediaProperty::MediaProperty() {
  memset(this, 0, sizeof(*this));
}

void MediaProperty::Clear() {
  m_Count = 0;
}

int MediaProperty::GetPropertyCount() {
  return m_Count;
}

void MediaProperty::SetInt32(const char* key, int32_t value) {
  if (key != nullptr) {
    SetValue(m_Entries, &m_Count, key, Type_Int32, &value, sizeof(value));
  }
}

void MediaProperty::SetUint32(const char* key, uint32_t value) {
  if (key != nullptr) {
    SetValue(m_Entries, &m_Count, key, Type_Uint32, &value, sizeof(value));
  }
}

void MediaProperty::SetInt64(const char* key, int64_t value) {
  if (key != nullptr) {
    SetValue(m_Entries, &m_Count, key, Type_Int64, &value, sizeof(value));
  }
}

void MediaProperty::SetUint64(const char* key, uint64_t value) {
  if (key != nullptr) {
    SetValue(m_Entries, &m_Count, key, Type_Uint64, &value, sizeof(value));
  }
}

void MediaProperty::SetSize(const char* key, size_t value) {
  if (key != nullptr) {
    SetValue(m_Entries, &m_Count, key, Type_Size, &value, sizeof(value));
  }
}

void MediaProperty::SetFloat(const char* key, float value) {
  if (key != nullptr) {
    SetValue(m_Entries, &m_Count, key, Type_Float, &value, sizeof(value));
  }
}

void MediaProperty::SetDouble(const char* key, double value) {
  if (key != nullptr) {
    SetValue(m_Entries, &m_Count, key, Type_Double, &value, sizeof(value));
  }
}

void MediaProperty::SetString(const char* key, const char* value,
  int length) {
  if (key != nullptr && value != nullptr && length > 0) {
    SetValue(m_Entries, &m_Count, key, Type_String, value, length);
  }
}

void MediaProperty::SetBinaryData(const char* key, const void* data,
  size_t size) {
  if (key != nullptr && data != nullptr && size != 0) {
    SetValue(m_Entries, &m_Count, key, Type_BinaryData, data, size);
  }
}

const MediaProperty::Entry* MediaProperty::Find(const char* key,
  Type type) const {
  for (int i = 0; i < m_Count; i++) {
    const Entry& entry = m_Entries[i];

    if (entry.isValid &&
        strncmp(entry.key, key, ClampKeyLength(strlen(key))) == 0 &&
        entry.type == type) {
      return &entry;
    }
  }

  return nullptr;
}

bool MediaProperty::GetInt32(int32_t* pOutValue, const char* key) const {
  if (pOutValue == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_Int32);
  if (entry == nullptr) {
    return false;
  }

  *pOutValue = entry->int32Value;
  return true;
}

bool MediaProperty::GetUint32(uint32_t* pOutValue, const char* key) const {
  if (pOutValue == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_Uint32);
  if (entry == nullptr) {
    return false;
  }

  *pOutValue = entry->uint32Value;
  return true;
}

bool MediaProperty::GetInt64(int64_t* pOutValue, const char* key) const {
  if (pOutValue == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_Int64);
  if (entry == nullptr) {
    return false;
  }

  *pOutValue = entry->int64Value;
  return true;
}

bool MediaProperty::GetUint64(uint64_t* pOutValue, const char* key) const {
  if (pOutValue == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_Uint64);
  if (entry == nullptr) {
    return false;
  }

  *pOutValue = entry->uint64Value;
  return true;
}

bool MediaProperty::GetSize(size_t* pOutValue, const char* key) const {
  if (pOutValue == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_Size);
  if (entry == nullptr) {
    return false;
  }

  *pOutValue = entry->sizeValue;
  return true;
}

bool MediaProperty::GetFloat(float* pOutValue, const char* key) const {
  if (pOutValue == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_Float);
  if (entry == nullptr) {
    return false;
  }

  *pOutValue = entry->floatValue;
  return true;
}

bool MediaProperty::GetDouble(double* pOutValue, const char* key) const {
  if (pOutValue == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_Double);
  if (entry == nullptr) {
    return false;
  }

  *pOutValue = entry->doubleValue;
  return true;
}

bool MediaProperty::GetString(char* pOutValue, int size,
  const char* key) const {
  if (pOutValue == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_String);
  if (entry == nullptr) {
    return false;
  }

  int length = strlen(entry->stringValue);
  if (length >= size - 1) {
    length = size - 1;
  }

  memset(pOutValue, 0, length + 1);
  memcpy(pOutValue, entry->stringValue, length);
  return true;
}

bool MediaProperty::GetBinaryData(void* pOutData, size_t* pOutSize,
  size_t size, const char* key) const {
  if (pOutSize == nullptr || pOutData == nullptr || key == nullptr) {
    return false;
  }

  const Entry* entry = Find(key, Type_BinaryData);
  if (entry == nullptr) {
    return false;
  }

  size_t dataSize = entry->binaryValue.size;
  if (size >= dataSize) {
    memcpy(pOutData, entry->binaryValue.data, dataSize);
    if (size != dataSize) {
      memset(static_cast<uint8_t*>(pOutData) + dataSize, 0, size - dataSize);
    }
  }

  *pOutSize = dataSize;
  return true;
}

int MediaProperty::GetCapacity() {
  return EntryCountMax;
}

void MediaProperty::GetStorage() {
}

bool MediaProperty::ContainsKey(const char* key) const {
  if (key == nullptr || m_Count < 1) {
    return false;
  }

  for (int i = 0; i < EntryCountMax; i++) {
    const Entry& entry = m_Entries[i];

    if (entry.isValid) {
      size_t length = strlen(entry.key);
      if (length != 0 && strncmp(entry.key, key, length) == 0) {
        return true;
      }
    }
  }

  return false;
}

}
