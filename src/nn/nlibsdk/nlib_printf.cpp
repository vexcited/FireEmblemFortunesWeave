#include <errno.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

struct _IO_FILE;

extern "C" {

extern _IO_FILE* const stdout;
extern _IO_FILE* const stderr;

int vfprintf(_IO_FILE* file, const char* format, va_list arguments);
int fprintf(_IO_FILE* file, const char* format, ...);
int vsnprintf(char* buffer, size_t size, const char* format,
  va_list arguments);
int vswprintf(wchar_t* buffer, size_t size, const wchar_t* format,
  va_list arguments);
void* nnmem_nlib_malloc(size_t size);
void nnmem_nlib_free(void* pointer);
int nnmem_nlib_fd_write(size_t* pOutWritten, int fd, const void* buffer,
  size_t size);
int nnmem_nlib_utf32_to_utf8(size_t* pOutLength, char* destination,
  size_t destinationSize, const wchar_t* source);

int nnmem_nlib_vsnprintf(size_t* pOutLength, char* buffer, size_t size,
  const char* format, va_list arguments);
int nnmem_nlib_vsnwprintf(size_t* pOutLength, wchar_t* buffer, size_t size,
  const wchar_t* format, va_list arguments);
int nnmem_nlib_vdprintf(int fd, size_t* pOutLength, const char* format,
  va_list arguments);
int nnmem_nlib_vdwprintf(int fd, size_t* pOutLength, const wchar_t* format,
  va_list arguments);
int nnmem_nlib_vsnwprintf_fallback(size_t* pOutLength, wchar_t* buffer,
  size_t size, const wchar_t* format, va_list arguments);

}

namespace nn::nlibsdk {

// The formatting engines, not reconstructed yet.
int FormatFallback(char* buffer, size_t size, const char* format,
  va_list arguments);
int FormatFallback(wchar_t* buffer, size_t size, const wchar_t* format,
  va_list arguments);

}

namespace {

constexpr int ENoMem = 12;
constexpr int ERange = 34;
constexpr size_t StackBufferSize = 0x2000;
constexpr size_t WideStackBufferSize = 0x1000;
constexpr size_t ConvertedStackBufferSize = 0x200;

bool IsStandardStream(int fd) {
  return static_cast<unsigned int>(fd - 1) <= 1;
}

_IO_FILE* GetStream(int fd) {
  return fd == 1 ? stdout : stderr;
}

// A negative count is an error code, a truncated output also sets errno.
int FinishFallback(size_t* pOutLength,
  size_t size, int count) {
  if (count < 0) {
    return -count;
  }
  if (pOutLength != nullptr) {
    *pOutLength = static_cast<unsigned int>(count);
  }
  if (size > static_cast<unsigned int>(count)) {
    return 0;
  }
  errno = ERange;
  return ERange;
}

}

namespace nn::nlibsdk {

int VsnPrintfFallback(char* buffer, size_t size, const char* format,
  va_list arguments) {
  return FormatFallback(buffer, size, format, arguments);
}

int VsnPrintfFallback(wchar_t* buffer, size_t size, const wchar_t* format,
  va_list arguments) {
  return FormatFallback(buffer, size, format, arguments);
}

}

extern "C" {

int nnmem_nlib_snprintf(size_t* pOutLength, char* buffer, size_t size,
  const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  int result = nnmem_nlib_vsnprintf(pOutLength, buffer, size, format,
    arguments);
  va_end(arguments);
  return result;
}

int nnmem_nlib_vsnprintf(size_t* pOutLength, char* buffer, size_t size,
  const char* format, va_list arguments) {
  int* error = &errno;
  *error = 0;
  int count = vsnprintf(buffer, size, format, arguments);
  if (count < 0) {
    return *error;
  }
  if (pOutLength != nullptr) {
    *pOutLength = static_cast<size_t>(count);
  }
  return size <= static_cast<size_t>(count) ? ERange : 0;
}

int nnmem_nlib_snwprintf(size_t* pOutLength, wchar_t* buffer, size_t size,
  const wchar_t* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  int result = nnmem_nlib_vsnwprintf(pOutLength, buffer, size, format,
    arguments);
  va_end(arguments);
  return result;
}

// The C library fails without an error code when the buffer is too small,
// the length then comes from the fallback.
int nnmem_nlib_vsnwprintf(size_t* pOutLength, wchar_t* buffer, size_t size,
  const wchar_t* format, va_list arguments) {
  va_list saved;
  va_copy(saved, arguments);
  int* error = &errno;
  *error = 0;
  int count = vswprintf(buffer, size, format, arguments);
  if (count < 0) {
    int result = *error;
    if (result == 0) {
      nnmem_nlib_vsnwprintf_fallback(pOutLength, nullptr, 0, format, saved);
      return ERange;
    }
    return result;
  }
  if (pOutLength != nullptr) {
    *pOutLength = static_cast<size_t>(count);
  }
  return size <= static_cast<size_t>(count) ? ERange : 0;
}

int nnmem_nlib_dprintf(int fd, size_t* pOutLength, const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  int result = nnmem_nlib_vdprintf(fd, pOutLength, format, arguments);
  va_end(arguments);
  return result;
}

// The standard streams go to the C library, other descriptors get the
// formatted text through a stack buffer or an allocated one.
int nnmem_nlib_vdprintf(int fd, size_t* pOutLength, const char* format,
  va_list arguments) {
  if (IsStandardStream(fd)) {
    int count = vfprintf(GetStream(fd), format, arguments);
    if (count < 0) {
      return errno;
    }
    if (pOutLength != nullptr) {
      *pOutLength = static_cast<unsigned int>(count);
    }
    return 0;
  }
  char buffer[StackBufferSize];
  size_t length = 0;
  char* allocated = nullptr;
  const char* text = buffer;
  int result = nnmem_nlib_vsnprintf(&length, buffer, sizeof(buffer), format,
    arguments);
  if (result != 0) {
    if (result != ERange) {
      return result;
    }
    size_t size = length + 1;
    allocated = static_cast<char*>(nnmem_nlib_malloc(size));
    if (allocated == nullptr) {
      return ENoMem;
    }
    result = nnmem_nlib_vsnprintf(&length, allocated, size, format,
      arguments);
    if (result != 0) {
      nnmem_nlib_free(allocated);
      return result;
    }
    text = allocated;
  }
  size_t written = 0;
  if (length != 0) {
    size_t done = 0;
    do {
      result = nnmem_nlib_fd_write(&written, fd, text, length - done);
      if (result != 0) {
        if (allocated != nullptr) {
          nnmem_nlib_free(allocated);
        }
        return result;
      }
      text += written;
      done += written;
    } while (done < length);
  }
  if (pOutLength != nullptr) {
    *pOutLength = length;
  }
  if (allocated != nullptr) {
    nnmem_nlib_free(allocated);
  }
  return 0;
}

int nnmem_nlib_printf(const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  int count = vfprintf(stdout, format, arguments);
  va_end(arguments);
  if (count < 0) {
    return -errno;
  }
  return count;
}

int nnmem_nlib_dwprintf(int fd, size_t* pOutLength, const wchar_t* format,
  ...) {
  va_list arguments;
  va_start(arguments, format);
  int result = nnmem_nlib_vdwprintf(fd, pOutLength, format, arguments);
  va_end(arguments);
  return result;
}

// The standard streams get the text converted to UTF-8, sized from the
// incoming value of the length output. Other descriptors get the wide
// characters and report the units written.
int nnmem_nlib_vdwprintf(int fd, size_t* pOutLength, const wchar_t* format,
  va_list arguments) {
  wchar_t buffer[WideStackBufferSize];
  size_t length = 0;
  wchar_t* allocated = nullptr;
  const wchar_t* text = buffer;
  int result = nnmem_nlib_vsnwprintf(&length, buffer, WideStackBufferSize,
    format, arguments);
  if (result != 0) {
    if (result != ERange) {
      return result;
    }
    size_t size = length + 1;
    allocated = static_cast<wchar_t*>(nnmem_nlib_malloc(sizeof(wchar_t) *
      size));
    if (allocated == nullptr) {
      return ENoMem;
    }
    result = nnmem_nlib_vsnwprintf(&length, allocated, size, format,
      arguments);
    if (result != 0) {
      nnmem_nlib_free(allocated);
      return result;
    }
    text = allocated;
  }
  if (IsStandardStream(fd)) {
    char converted[ConvertedStackBufferSize];
    char* output = converted;
    size_t outputSize = 4 * *pOutLength;
    void* heap = nullptr;
    if (outputSize > ConvertedStackBufferSize) {
      heap = nnmem_nlib_malloc(outputSize);
      output = static_cast<char*>(heap);
      if (heap == nullptr) {
        result = ENoMem;
        goto done;
      }
    }
    size_t convertedLength;
    result = nnmem_nlib_utf32_to_utf8(&convertedLength, output, outputSize,
      text);
    if (result == 0) {
      result = fprintf(GetStream(fd), "%s", output) < 0 ? errno : 0;
      *pOutLength = length;
    }
    if (heap != nullptr) {
      nnmem_nlib_free(heap);
    }
  }
  else {
    size_t written = 0;
    size_t done = 0;
    result = 0;
    while (done < length) {
      result = nnmem_nlib_fd_write(&written, fd, text,
        sizeof(wchar_t) * (length - done));
      if (result != 0) {
        break;
      }
      text += written;
      done += written >> 2;
    }
    if (pOutLength != nullptr) {
      *pOutLength = done;
    }
  }

done:
  if (allocated != nullptr) {
    nnmem_nlib_free(allocated);
  }
  return result;
}

int nnmem_nlib_wprintf(const wchar_t* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  size_t length = 0;
  int result = nnmem_nlib_vdwprintf(1, &length, format, arguments);
  va_end(arguments);
  if (result != 0) {
    return -result;
  }
  return static_cast<int>(length);
}

int nnmem_nlib_vsnprintf_fallback(size_t* pOutLength, char* buffer,
  size_t size, const char* format, va_list arguments) {
  int count = nn::nlibsdk::FormatFallback(buffer, size, format, arguments);
  return FinishFallback(pOutLength, size, count);
}

int nnmem_nlib_snprintf_fallback(size_t* pOutLength, char* buffer,
  size_t size, const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  int count = nn::nlibsdk::FormatFallback(buffer, size, format, arguments);
  va_end(arguments);
  return FinishFallback(pOutLength, size, count);
}

int nnmem_nlib_vsnwprintf_fallback(size_t* pOutLength, wchar_t* buffer,
  size_t size, const wchar_t* format, va_list arguments) {
  int count = nn::nlibsdk::FormatFallback(buffer, size, format, arguments);
  return FinishFallback(pOutLength, size, count);
}

int nnmem_nlib_snwprintf_fallback(size_t* pOutLength, wchar_t* buffer,
  size_t size, const wchar_t* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  int count = nn::nlibsdk::FormatFallback(buffer, size, format, arguments);
  va_end(arguments);
  return FinishFallback(pOutLength, size, count);
}

}
