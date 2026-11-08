#include "stdio_impl.h"

void __shlim(FILE *, off_t);
int __shgetc(FILE *);

// nnmusl counts from the buffer start and marks exhaustion with shlim -1,
// as musl 1.2 does.
#define shcnt(f) ((f)->shcnt + ((f)->rpos - (f)->buf))
#define shlim(f, lim) __shlim((f), (lim))
#define shgetc(f) (((f)->rpos != (f)->shend) ? *(f)->rpos++ : __shgetc(f))
#define shunget(f) ((f)->shlim>=0 ? (void)(f)->rpos-- : (void)0)
