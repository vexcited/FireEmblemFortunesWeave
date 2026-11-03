/*
  Adapted from Spine C++ 4.1 for the recovered SDK ABI.
  Copyright 2013-2023 Esoteric Software LLC.
  Original license: https://github.com/EsotericSoftware/spine-runtimes/blob/4.1/LICENSE
  Full license text: include/spine/extension.hpp.
*/

#include "spine/object.hpp"
#include "spine/extension.hpp"

namespace spine {

void* SpineObject::operator new(size_t size, const char* file, int line) {
  return SpineExtension::getInstance()->_calloc(size, file, line);
}

void SpineObject::operator delete(void* ptr) {
  SpineExtension::getInstance()->_free(
    ptr, "/Program/Externals/Spine/src/spine/SpineObject.cpp", 58);
}

SpineObject::~SpineObject() {
  SpineExtension::getInstance()->_beforeFree(this);
}

}
