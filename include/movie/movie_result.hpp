#pragma once

#include <stdint.h>

namespace movie {

// Only the values seen in the library are named, from the way callers use
// them.
enum MovieResult : int32_t {
  MovieResult_Success = 0,
  MovieResult_Unknown = 1,
  MovieResult_OutOfRange = 3,
  MovieResult_NotSupported = 4,
  MovieResult_EndOfStream = 5,
  MovieResult_InvalidAlignment = 10,
  MovieResult_NotAvailable = 12,
  MovieResult_NullPointer = 13,
  MovieResult_OutOfMemory = 17,
  MovieResult_NotInitialized = 18,
  MovieResult_InvalidArgument = 20,
  MovieResult_InvalidOperation = 21,
  MovieResult_MessageNotProcessed = 23,
  MovieResult_AlreadyInitialized = 25,
};

// End of stream is reported through the result but still means success.
inline bool IsSucceeded(MovieResult result) {
  return result == MovieResult_Success || result == MovieResult_EndOfStream;
}

}
