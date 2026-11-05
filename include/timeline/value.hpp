#pragma once

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

namespace timeline {

enum ValueType : int32_t {
  kValueNone,
  kValueEnd,
  kValueTrue,
  kValueFalse,
  kValueNull,
  kValueInt,
  kValueUInt,
  kValueInt64,
  kValueUInt64,
  kValueFloat,
  kValueDouble,
};

// Events 2 to 10 carry a scalar, 14 closes the enclosing container.
enum ValueEvent : int32_t {
  kEventFirstScalar = 2,
  kEventLastScalar = 10,
  kEventClose = 14,
};

// The error codes are the errno values EINVAL, EDOM and ERANGE.
template <class T>
struct Converted {
  int32_t error;
  T value;
};

struct Value {
  Converted<int32_t> ToInt() const;
  Converted<uint32_t> ToUInt() const;
  Converted<float> ToFloat() const;
  Converted<double> ToDouble() const;

  int32_t type;
  const char* string;
  union {
    int32_t i32;
    uint32_t u32;
    int64_t i64;
    uint64_t u64;
    float f32;
    double f64;
  } number;
};

struct ParserState {
  int32_t kind;
};

struct Parser {
  uint8_t flags;
  uint8_t unknown01[0xf];
  ParserState* state;
};

int32_t ParseBinary(Parser* parser, int32_t* error, Value* value);
int32_t ParseText(Parser* parser, int32_t* error, Value* value);

class Cursor {
public:
  bool HasNext() const;
  int32_t Next();

  const Value& GetValue() const {
    return value_;
  }

private:
  Parser* parser_;
  int32_t error_;
  Value value_;
};

struct FormatResult;

int32_t FormatV(FormatResult* result, char* buffer, size_t size,
  const char* format, va_list args);

// Prints into a fixed size buffer, the number writers use 32 and 128 bytes.
template <size_t Size>
int32_t Format(FormatResult* result, char (&buffer)[Size], const char* format,
  ...);

class OutputStream {
public:
  bool Write(const void* data, ptrdiff_t size);

private:
  bool WriteSlow(const void* data, ptrdiff_t size);

  uint8_t unknown00_[0x10];
  size_t size_;
  uint8_t* buffer_;
  size_t capacity_;
  int32_t error_;
};

class InputStream {
public:
  int32_t Get();

private:
  void Fill();

  uint8_t unknown00_[0x10];
  size_t position_;
  size_t end_;
  uint8_t unknown20_[0x8];
  const uint8_t* buffer_;
};

struct WriterState {
  int32_t kind;
  uint32_t count;
};

// The first block lives inline, the next ones double in size from 16.
class WriterStateStack {
public:
  [[gnu::noinline]] WriterState& Back();

private:
  uint32_t inline_capacity_;
  uint32_t size_;
  WriterState* inline_;
  WriterState** blocks_;
  uint8_t unknown18_[0x28];
};

class WriterImpl {
public:
  bool IsBinary() const {
    return (flags_ & 2) != 0;
  }

  void Key(const char* key, size_t size);
  bool BeginValue();
  void WriteText(const char* text, size_t size);
  void WriteBinary(const char* text, size_t size);
  [[gnu::always_inline]] void Write(bool value);

private:
  static constexpr int32_t kStateError = 5;

  bool Reserve(size_t size);
  void Fail(int32_t error);

  void Put(uint8_t byte) {
    if (cursor_ + 1 > scratch_ + sizeof(scratch_)) {
      cursor_ = nullptr;
      return;
    }
    *cursor_++ = byte;
  }

  int32_t error_;
  uint8_t flags_;
  OutputStream* stream_;
  WriterStateStack states_;
  uint8_t* cursor_;
  uint8_t scratch_[0x40];
};

class ValueWriter {
public:
  ValueWriter& Key(const char* key, size_t size);

  ValueWriter& Key(const char* key) {
    return Key(key, strlen(key));
  }

  ValueWriter& Write(bool value);
  ValueWriter& Write(int32_t value);
  ValueWriter& Write(float value);
  ValueWriter& Write(const float* values, uint32_t count);
  ValueWriter& String(const char* text, size_t size);

  ValueWriter& String(const char* text) {
    return String(text, strlen(text));
  }

  ValueWriter& BeginArray(size_t count);
  ValueWriter& EndArray();

private:
  WriterImpl* impl_;
};

}
