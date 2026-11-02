#pragma once

#include <stddef.h>

namespace spine {

class SpineObject {
public:
  void* operator new(size_t size, const char* file, int line);
  void operator delete(void* ptr);
  virtual ~SpineObject();
};

}
