#pragma once

#include <stddef.h>

namespace spine {

class String;

class SpineExtension {
public:
  static SpineExtension* getInstance();

  virtual ~SpineExtension();
  virtual void* _alloc(size_t size, const char* file, int line) = 0;
  virtual void* _calloc(size_t size, const char* file, int line) = 0;
  virtual void* _realloc(void* ptr, size_t size, const char* file,
                         int line) = 0;
  virtual void _free(void* ptr, const char* file, int line) = 0;
  virtual char* _readFile(const String& path, int* length) = 0;
  virtual void _beforeFree(void* ptr) = 0;
};

}
