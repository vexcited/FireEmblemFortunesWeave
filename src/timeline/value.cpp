#include <math.h>
#include <string.h>

#include "timeline/value.hpp"

namespace timeline {

namespace {

constexpr int32_t kInvalid = 22;
constexpr int32_t kInexact = 33;
constexpr int32_t kOutOfRange = 34;
constexpr int32_t kWriteFailed = 8;

constexpr uint32_t kBlockStarts[] = {
  0, 0, 16, 48, 112, 240, 496, 1008, 2032, 4080, 8176, 16368, 32752, 65520,
  131056, 262128, 524272, 1048560, 2097136, 4194288, 8388592, 16777200,
  33554416, 67108848, 134217712, 268435440, 536870896, 1073741808,
  2147483632,
};

}

// Conversions from a floating value always report an inexact result.
Converted<int32_t> Value::ToInt() const {
  switch (type) {
    case kValueInt:
      return {0, number.i32};
    case kValueUInt:
      return {number.i32 < 0 ? kOutOfRange : 0, number.i32};
    case kValueInt64: {
      const int32_t value = static_cast<int32_t>(number.i64);
      return {number.i64 != value ? kOutOfRange : 0, value};
    }
    case kValueUInt64:
      return {(number.u64 >> 31) != 0 ? kOutOfRange : 0,
        static_cast<int32_t>(number.u64)};
    case kValueFloat:
      return {fabsf(number.f32) > 2147483648.0f ? kOutOfRange : kInexact,
        static_cast<int32_t>(number.f32)};
    case kValueDouble: {
      const double value = number.f64;
      return {value < -2147483648.0 || value > 2147483647.0 ? kOutOfRange
        : kInexact, static_cast<int32_t>(value)};
    }
    default:
      return {kInvalid, 0};
  }
}

Converted<uint32_t> Value::ToUInt() const {
  switch (type) {
    case kValueInt:
      return {number.i32 < 0 ? kOutOfRange : 0, number.u32};
    case kValueUInt:
      return {0, number.u32};
    case kValueInt64:
    case kValueUInt64:
      return {(number.u64 >> 32) != 0 ? kOutOfRange : 0,
        static_cast<uint32_t>(number.u64)};
    case kValueFloat: {
      const float value = number.f32;
      return {value < 0 || value > 4294967296.0f ? kOutOfRange : kInexact,
        static_cast<uint32_t>(value)};
    }
    case kValueDouble: {
      const double value = number.f64;
      return {value < 0 || value > 4294967295.0 ? kOutOfRange : kInexact,
        static_cast<uint32_t>(value)};
    }
    default:
      return {kInvalid, 0};
  }
}

// Integers convert exactly while they fit the 24 bit mantissa.
Converted<float> Value::ToFloat() const {
  switch (type) {
    case kValueInt: {
      const int32_t value = number.i32;
      return {value >= -0xffffff && value <= 0xffffff ? 0 : kInexact,
        static_cast<float>(value)};
    }
    case kValueUInt:
      return {(number.u32 >> 24) == 0 ? 0 : kInexact,
        static_cast<float>(number.u32)};
    case kValueInt64: {
      const int64_t value = number.i64;
      return {value >= -0xffffff && value <= 0xffffff ? 0 : kInexact,
        static_cast<float>(value)};
    }
    case kValueUInt64:
      return {(number.u64 >> 24) == 0 ? 0 : kInexact,
        static_cast<float>(number.u64)};
    case kValueFloat:
      return {0, number.f32};
    case kValueDouble: {
      const double value = number.f64;
      return {fabs(value) > 3.4028234663852886e38 ? kOutOfRange : kInexact,
        static_cast<float>(value)};
    }
    default:
      return {kInvalid, 0};
  }
}

Converted<double> Value::ToDouble() const {
  switch (type) {
    case kValueInt:
      return {0, static_cast<double>(number.i32)};
    case kValueUInt:
      return {0, static_cast<double>(number.u32)};
    case kValueInt64: {
      const int64_t value = number.i64;
      return {value >= -0x1fffffffffffff && value <= 0x1fffffffffffff ? 0
        : kInexact, static_cast<double>(value)};
    }
    case kValueUInt64:
      return {(number.u64 >> 53) == 0 ? 0 : kInexact,
        static_cast<double>(number.u64)};
    case kValueFloat:
      return {0, number.f32};
    case kValueDouble:
      return {0, number.f64};
    default:
      return {kInvalid, 0};
  }
}

bool Cursor::HasNext() const {
  return error_ == 0 && parser_->state->kind != kValueEnd;
}

int32_t Cursor::Next() {
  if ((parser_->flags & 1) != 0) {
    return ParseBinary(parser_, &error_, &value_);
  }
  return ParseText(parser_, &error_, &value_);
}

bool OutputStream::Write(const void* data, ptrdiff_t size) {
  if (size < 0) {
    if (error_ == 0) {
      error_ = kInvalid;
    }
    return false;
  }
  if (size_ + size > capacity_) {
    return WriteSlow(data, size);
  }
  memcpy(buffer_ + size_, data, size);
  size_ += size;
  return true;
}

int32_t InputStream::Get() {
  if (position_ == end_) {
    Fill();
    if (position_ == end_) {
      return -1;
    }
  }
  return buffer_[position_++];
}

ValueWriter& ValueWriter::Key(const char* key, size_t size) {
  impl_->Key(key, size);
  return *this;
}

ValueWriter& ValueWriter::String(const char* text, size_t size) {
  WriterImpl* impl = impl_;
  if (!impl->BeginValue()) {
    return *this;
  }
  if (!impl->IsBinary()) {
    impl->WriteText(text, size);
  }
  else {
    impl->WriteBinary(text, size);
  }
  return *this;
}

template <size_t Size>
int32_t Format(FormatResult* result, char (&buffer)[Size], const char* format,
  ...) {
  va_list args;
  va_start(args, format);
  const int32_t written = FormatV(result, buffer, Size, format, args);
  va_end(args);
  return written;
}

template int32_t Format(FormatResult* result, char (&buffer)[32],
  const char* format, ...);
template int32_t Format(FormatResult* result, char (&buffer)[128],
  const char* format, ...);

WriterState& WriterStateStack::Back() {
  const uint64_t index = static_cast<uint64_t>(size_) - 1;
  if (index < inline_capacity_) {
    return inline_[index];
  }
  const uint32_t offset = static_cast<uint32_t>(index) - inline_capacity_;
  const uint64_t level = 28 - __builtin_clz(offset + 16);
  return blocks_[level][offset - kBlockStarts[level]];
}

void WriterImpl::Fail(int32_t error) {
  WriterState& state = states_.Back();
  if (error_ == 0) {
    error_ = error;
  }
  state.kind = kStateError;
}

// Flushes the scratch buffer to the stream when the bytes do not fit.
bool WriterImpl::Reserve(size_t size) {
  if (cursor_ + size <= scratch_ + sizeof(scratch_)) {
    return true;
  }
  const ptrdiff_t used = cursor_ - scratch_;
  cursor_ = scratch_;
  if (stream_->Write(scratch_, used)) {
    return true;
  }
  Fail(kWriteFailed);
  return false;
}

inline void WriterImpl::Write(bool value) {
  if (IsBinary()) {
    if (Reserve(1)) {
      Put(value ? 0xc3 : 0xc2);
    }
    return;
  }
  if (value) {
    if (Reserve(4)) {
      memcpy(cursor_, "true", 4);
      cursor_ += 4;
    }
  }
  else if (Reserve(5)) {
    memcpy(cursor_, "false", 5);
    cursor_ += 5;
  }
}

ValueWriter& ValueWriter::Write(bool value) {
  if (impl_->BeginValue()) {
    impl_->Write(value);
  }
  return *this;
}

}
