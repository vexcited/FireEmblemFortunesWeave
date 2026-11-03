#include "compression/zstd_decoder_lifecycle.hpp"

extern "C" void free(void* pointer);

namespace fw::compression {
namespace {

void Release(const CustomMemory& memory, void* pointer) {
  if (!pointer) {
    return;
  }
  if (memory.release) {
    memory.release(memory.opaque, pointer);
  }
  else {
    free(pointer);
  }
}

}

size_t ReleaseDecoder(DecoderContext* context) {
  if (!context) {
    return 0;
  }
  if (context->static_size) {
    return size_t(-64);
  }
  const CustomMemory memory = context->memory;
  ReleasePreparedDictionary(context->owned_dictionary);
  context->owned_dictionary = nullptr;
  context->dictionary = nullptr;
  context->dictionary_uses = 0;
  Release(memory, context->input_buffer);
  context->input_buffer = nullptr;
  if (auto* set = context->dictionaries) {
    Release(memory, set->entries);
    Release(memory, set);
    context->dictionaries = nullptr;
  }
  Release(memory, context);
  return 0;
}

size_t DecompressBuffer(void* destination, size_t destination_size,
  const void* source, size_t source_size) {
  auto* context = CreateDecoder();
  if (!context) {
    return size_t(-64);
  }
  const size_t result = DecompressFrames(context, destination, destination_size,
    source, source_size, nullptr, 0, nullptr);
  ReleaseDecoder(context);
  return result;
}

}
