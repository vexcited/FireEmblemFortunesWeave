#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::movie {

class MediaProperty {
public:
  static constexpr int KeyLengthMax = 24;
  static constexpr int StringLengthMax = 32;
  static constexpr int BinaryDataSizeMax = 24;
  static constexpr int EntryCountMax = 24;

  MediaProperty();

  void Clear();
  int GetPropertyCount();

  void SetInt32(const char* key, int32_t value);
  void SetUint32(const char* key, uint32_t value);
  void SetInt64(const char* key, int64_t value);
  void SetUint64(const char* key, uint64_t value);
  void SetSize(const char* key, size_t value);
  void SetFloat(const char* key, float value);
  void SetDouble(const char* key, double value);
  void SetString(const char* key, const char* value, int length);
  void SetBinaryData(const char* key, const void* data, size_t size);

  bool GetInt32(int32_t* pOutValue, const char* key) const;
  bool GetUint32(uint32_t* pOutValue, const char* key) const;
  bool GetInt64(int64_t* pOutValue, const char* key) const;
  bool GetUint64(uint64_t* pOutValue, const char* key) const;
  bool GetSize(size_t* pOutValue, const char* key) const;
  bool GetFloat(float* pOutValue, const char* key) const;
  bool GetDouble(double* pOutValue, const char* key) const;
  bool GetString(char* pOutValue, int size, const char* key) const;
  bool GetBinaryData(void* pOutData, size_t* pOutSize, size_t size,
    const char* key) const;

  int GetCapacity();
  void GetStorage();
  bool ContainsKey(const char* key) const;

private:
  enum Type : int32_t {
    Type_Int32,
    Type_Uint32,
    Type_Int64,
    Type_Uint64,
    Type_Size,
    Type_Float,
    Type_Double,
    Type_String,
    Type_BinaryData,
  };

  struct Entry {
    union {
      int32_t int32Value;
      uint32_t uint32Value;
      int64_t int64Value;
      uint64_t uint64Value;
      size_t sizeValue;
      float floatValue;
      double doubleValue;
      char stringValue[StringLengthMax];
      struct {
        uint8_t data[BinaryDataSizeMax];
        int32_t size;
      } binaryValue;
    };
    char key[KeyLengthMax];
    Type type;
    bool isValid;
  };

  static void SetValue(Entry* entries, int* pCount, const char* key,
    Type type, const void* value, int size);

  const Entry* Find(const char* key, Type type) const;

  Entry m_Entries[EntryCountMax];
  int m_Count;
};

}
