#pragma once

// The linker writes one thunk per imported function. It jumps through its
// slot of the global offset table and keeps every argument register, x8
// included, hence the result returned through memory.
struct PltResult {
  long long words[3];
};

#define PLT_PARAMETERS \
  long long a1, long long a2, long long a3, long long a4, long long a5, \
  long long a6, long long a7, long long a8, double f1, double f2, double f3, \
  double f4, double f5, double f6, double f7, double f8

#define PLT_ARGUMENTS \
  a1, a2, a3, a4, a5, a6, a7, a8, f1, f2, f3, f4, f5, f6, f7, f8

#define PLT_THUNK(symbol) \
  extern struct PltResult (*got_##symbol)(PLT_PARAMETERS); \
  struct PltResult plt_##symbol(PLT_PARAMETERS) { \
    return got_##symbol(PLT_ARGUMENTS); \
  }
