#pragma once

#include <stddef.h>
#include <string.h>

#include "nn/audio/audio_stream.hpp"
#include "nn/util/string_util.hpp"

namespace nn::audio::detail {

template <int N>
void SetName(NameStorage<N>* storage, const char* name, size_t length) {
  memcpy(storage->buffer, name, length);
  storage->buffer[length] = '\0';
  storage->data = storage->buffer;
  storage->size = length;
}

// Names are built in a temporary first and then copied, like the SDK does.
template <int N>
void CopyName(NameStorage<N>* storage, const char* name) {
  NameStorage<N> temporary;
  int length = util::Strnlen(name, N + 1);
  SetName(&temporary, name, length >= N ? N : length);
  SetName(storage, temporary.data, temporary.size);
}

template <int N>
void CopyName(NameStorage<N>* storage, const char* name, size_t length) {
  NameStorage<N> temporary;
  if (name != nullptr) {
    SetName(&temporary, name, length);
  }
  else {
    SetName(&temporary, "", 0);
  }
  SetName(storage, temporary.data, temporary.size);
}

template <int N>
void ClearName(NameStorage<N>* storage) {
  storage->buffer[0] = '\0';
  storage->data = storage->buffer;
  storage->size = 0;
}

}
