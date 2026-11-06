#include "as_string.h"

void *AllocateScriptString(size_t size);
void FreeScriptString(void *p);

namespace as {

// The game defines the allocator in another unit, so nothing inlines it.
template <>
__attribute__((noinline)) char *allocator<char>::allocate(size_t n) {
  return static_cast<char *>(AllocateScriptString(n));
}

template <>
__attribute__((noinline)) void allocator<char>::deallocate(char *p, size_t) {
  FreeScriptString(p);
}

string::string() {}

string::string(const char *s) : base_string(s) {}

string::string(const string &other)
  : base_string(static_cast<const base_string &>(other)) {}

string::string(const base_string &other) : base_string(other) {}

string::string(const char *s, unsigned int length) : base_string(s, length) {}

string &string::operator=(const char *s) {
  if (s) {
    base_string::assign(s);
  }
  else {
    clear();
  }

  return *this;
}

char &string::operator[](size_t index) {
  return base_string::operator[](index);
}

const char &string::operator[](size_t index) const {
  return base_string::operator[](index);
}

const char *string::c_str() const {
  return base_string::c_str();
}

bool string::empty() const {
  return base_string::empty();
}

size_t string::find(const string &s, size_t start) const {
  return base_string::find(s, start);
}

size_t string::rfind(const string &s, size_t start) const {
  return base_string::rfind(s, start);
}

size_t string::length() const {
  return base_string::length();
}

size_t string::size() const {
  return base_string::size();
}

void string::resize(size_t length) {
  base_string::resize(length);
}

string string::substr(size_t start, size_t count) const {
  string result;
  result.assign(*this, start, count);
  return result;
}

}
