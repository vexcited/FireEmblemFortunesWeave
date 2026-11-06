#ifndef AS_GAME_STRING_H
#define AS_GAME_STRING_H

#include <stddef.h>
#include <string>

namespace as {

// The allocator calls the game heap out of line, without the allocator
// object.
template <class T>
struct allocator {
  typedef T value_type;

  allocator() noexcept {}

  template <class U>
  allocator(const allocator<U> &) noexcept {}

  static T *allocate(size_t n);
  static void deallocate(T *p, size_t n);
};

template <class T, class U>
inline bool operator==(const allocator<T> &, const allocator<U> &) {
  return true;
}

template <class T, class U>
inline bool operator!=(const allocator<T> &, const allocator<U> &) {
  return false;
}

typedef std::basic_string<char, std::char_traits<char>, allocator<char> >
  base_string;

// Every member declared here is defined out of line in as_string.cpp, so
// the add-ons call it. Members of the base string stay inline.
class string : public base_string {
public:
  string();
  string(const char *s);
  string(const string &other);
  string(const char *s, unsigned int length);

  string &operator=(const char *s);
  string &operator=(const string &other) {
    base_string::operator=(other);
    return *this;
  }

  char &operator[](size_t index);
  const char &operator[](size_t index) const;
  const char *c_str() const;
  bool empty() const;
  size_t find(const string &s, size_t start = 0) const;
  size_t rfind(const string &s, size_t start = npos) const;
  size_t length() const;
  size_t size() const;
  void resize(size_t length);
  string substr(size_t start = 0, size_t count = npos) const;
};

}

#endif
