#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __nnmusl_register_tls_dtor(void);
__int64 __cxa_thread_atexit();
__int64 __cxa_thread_atexit() { return __nnmusl_register_tls_dtor(); }

#pragma GCC visibility pop
