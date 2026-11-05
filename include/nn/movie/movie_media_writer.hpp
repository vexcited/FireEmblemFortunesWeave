#pragma once

#include <stddef.h>

namespace nn::movie {

// Output sink of the muxer, the AOSP writers call it instead of a file
// descriptor.
class MediaWriter {
public:
  virtual ~MediaWriter() {}

  virtual int Open() = 0;
  virtual int Close() = 0;
  virtual int Write(int position, const void* data, size_t size) = 0;
  virtual int Flush() = 0;
};

}
