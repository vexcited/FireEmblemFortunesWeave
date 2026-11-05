#pragma once

#include <stdint.h>

#include <string>
#include <string_view>
#include <vector>

#include "nn/util/vector.hpp"
#include "timeline/value.hpp"

namespace timeline {

class KeyReader {
public:
  // Feeds the next scalar to the visitor, a closing event ends the key.
  template <class Visitor>
  void Visit(Visitor&& visitor) {
    if (end_) {
      return;
    }
    while (cursor_->HasNext()) {
      const int32_t event = cursor_->Next();
      if (event >= kEventFirstScalar && event <= kEventLastScalar) {
        visitor(cursor_->GetValue());
        return;
      }
      if (event == kEventClose) {
        end_ = true;
        return;
      }
    }
  }

  void Read(float& value) {
    Visit([&](const Value& scalar) {
      value = static_cast<float>(scalar.ToDouble().value);
    });
  }

  void Read(int32_t& value) {
    Visit([&](const Value& scalar) {
      value = scalar.ToInt().value;
    });
  }

  void Read(bool& value) {
    Visit([&](const Value& scalar) {
      if (scalar.type == kValueTrue) {
        value = true;
      }
      else if (scalar.type == kValueFalse) {
        value = false;
      }
    });
  }

  void Read(std::string& value) {
    Visit([&](const Value& scalar) {
      value = scalar.string;
    });
  }

  float ReadFloat() {
    float value = 0;
    Read(value);
    return value;
  }

  [[gnu::noinline]] void Read(nn::util::Vector2f& value) {
    const float x = ReadFloat();
    const float y = ReadFloat();
    value._v = float32x2_t{x, y};
  }

  [[gnu::noinline]] void Read(nn::util::Vector3f& value) {
    const float x = ReadFloat();
    const float y = ReadFloat();
    const float z = ReadFloat();
    value._v = float32x4_t{x, y, z, 0};
  }

  [[gnu::noinline]] void Read(nn::util::Vector4f& value) {
    const float x = ReadFloat();
    const float y = ReadFloat();
    const float z = ReadFloat();
    const float w = ReadFloat();
    value._v = float32x4_t{x, y, z, w};
  }

  void Read(float* values, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) {
      values[i] = ReadFloat();
    }
  }

  // The size key comes first and gives the element count.
  [[gnu::always_inline]] void Read(std::vector<float>& values,
    int32_t count) {
    values.clear();
    values.resize(count);
    Read(values.data(), values.size());
  }

private:
  uint8_t unknown00_[0x18];
  Cursor* cursor_;
  bool end_;
};

class KeyWriter {
public:
  ValueWriter& Current() const {
    return scope_ != nullptr ? *scope_ : *root_;
  }

  void Write(const char* key, const float& value) {
    Current().Key(key).Write(value);
  }

  void Write(const char* key, const int32_t& value) {
    Current().Key(key).Write(value);
  }

  void Write(const char* key, const bool& value) {
    Current().Key(key).Write(value);
  }

  void Write(const char* key, const std::string& value) {
    Current().Key(key).String(value.c_str());
  }

  void Write(const char* key, const nn::util::Vector2f& value) {
    const float values[] = {value._v[0], value._v[1]};
    Current().Key(key).Write(values, 2);
  }

  void Write(const char* key, const nn::util::Vector3f& value) {
    const float values[] = {value._v[0], value._v[1], value._v[2]};
    Current().Key(key).Write(values, 3);
  }

  void Write(const char* key, const nn::util::Vector4f& value) {
    const float values[] = {
      value._v[0], value._v[1], value._v[2], value._v[3],
    };
    Current().Key(key).Write(values, 4);
  }

  [[gnu::noinline]] void Write(std::string_view key, const float* values,
    uint32_t count) {
    if (count != 0) {
      Current().Key(key.data()).Write(values, count);
    }
    else {
      Current().Key(key.data()).BeginArray(0).EndArray();
    }
  }

private:
  ValueWriter* root_;
  ValueWriter* scope_;
};

// Reads then writes one named field, either side may be absent.
template <class T>
[[gnu::always_inline]] inline void Serialize(KeyReader* reader,
  KeyWriter* writer, const char* key, T& value) {
  if (reader != nullptr) {
    reader->Read(value);
  }
  if (writer != nullptr) {
    writer->Write(key, value);
  }
}

[[gnu::always_inline]] inline void Serialize(KeyReader* reader,
  KeyWriter* writer, const char* key, std::vector<float>& values,
  int32_t count) {
  if (reader != nullptr) {
    reader->Read(values, count);
  }
  if (writer != nullptr) {
    writer->Write(key, values.data(), values.size());
  }
}

}
