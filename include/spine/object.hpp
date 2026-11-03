/*
  Adapted from Spine C++ 4.1 for the recovered SDK ABI.
  Copyright 2013-2023 Esoteric Software LLC.
  Original license: https://github.com/EsotericSoftware/spine-runtimes/blob/4.1/LICENSE
  Full license text: include/spine/extension.hpp.
*/

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
