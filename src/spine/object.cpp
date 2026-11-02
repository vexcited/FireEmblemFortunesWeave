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
