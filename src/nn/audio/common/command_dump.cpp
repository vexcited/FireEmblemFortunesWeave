#include <stddef.h>

namespace nn::audio::common {

// Release builds compile the command dump helpers to empty functions.
void DumpCommandStructSizeAndAligns() {}

void DumpCommandList(const void* commands, size_t size) {}

}
