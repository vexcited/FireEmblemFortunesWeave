#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>

extern "C" {

struct __nnmusl_position_stream {
  unsigned int flags;
  unsigned char* rpos;
  unsigned char* rend;
  uint8_t reserved18[0x10];
  unsigned char* wpos;
  uint8_t reserved30[0x8];
  unsigned char* wbase;
  uint8_t reserved40[0x10];
  off_t (*seek)(FILE* file, off_t offset, int whence);
  uint8_t reserved58[0x28];
  signed char mode;
  signed char lbf;
  signed char lock;
  uint8_t reserved83[0x45];
  const void* locale;
};

constexpr unsigned int F_APP = 128;

int __fwide_unlocked(FILE* file, int mode);

[[gnu::visibility("hidden")]] int __nnmusl_lockfile(FILE* file);
[[gnu::visibility("hidden")]] void __nnmusl_unlockfile(FILE* file);
[[gnu::visibility("hidden")]] extern const struct __locale_struct
  __nnmusl_utf8_locale;

[[gnu::always_inline]] inline __nnmusl_position_stream* Stream(FILE* file) {
  return reinterpret_cast<__nnmusl_position_stream*>(file);
}

// The buffered data moves the position away from the underlying one.
[[gnu::always_inline]] inline off_t TellUnlocked(FILE* file) {
  __nnmusl_position_stream* stream = Stream(file);
  off_t position = stream->seek(file, 0, (stream->flags & F_APP) != 0 &&
    stream->wpos != stream->wbase ? SEEK_END : SEEK_CUR);
  if (position < 0) {
    return position;
  }

  if (stream->rend != nullptr) {
    position += stream->rpos - stream->rend;
  }
  else if (stream->wbase != nullptr) {
    position += stream->wpos - stream->wbase;
  }

  return position;
}

[[gnu::always_inline]] inline off_t Tell(FILE* file) {
  const int needsUnlock = Stream(file)->lock >= 0 ?
    __nnmusl_lockfile(file) : 0;
  const off_t position = TellUnlocked(file);
  if (needsUnlock != 0) {
    __nnmusl_unlockfile(file);
  }

  return position;
}

off_t ftello(FILE* file) {
  return Tell(file);
}

long ftell(FILE* file) {
  return Tell(file);
}

[[gnu::always_inline]] inline int SetWide(FILE* file, int mode) {
  __nnmusl_position_stream* stream = Stream(file);
  if (mode != 0) {
    if (stream->locale == nullptr) {
      stream->locale = &__nnmusl_utf8_locale;
    }

    if (stream->mode == 0) {
      stream->mode = mode > 0 ? 1 : -1;
    }
  }

  return stream->mode;
}

int __fwide_unlocked(FILE* file, int mode) {
  return SetWide(file, mode);
}

int fwide(FILE* file, int mode) {
  const int needsUnlock = Stream(file)->lock >= 0 ?
    __nnmusl_lockfile(file) : 0;
  const int result = SetWide(file, mode);
  if (needsUnlock != 0) {
    __nnmusl_unlockfile(file);
  }

  return result;
}

}
