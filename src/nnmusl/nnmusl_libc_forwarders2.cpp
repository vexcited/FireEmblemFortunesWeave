#include <fenv.h>
#include <locale.h>
#include <pthread.h>
#include <sched.h>
#include <semaphore.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <threads.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>

extern "C" {

void* __memcpy_aarch64(void* destination, const void* source, size_t size);
int __fesetround(int mode);
int mkostemps(char* path, int suffixLength, int flags);
void qsort_r(void* base, size_t count, size_t size,
  int (*compare)(const void*, const void*, void*), void* argument);
int __flbf(FILE* file);
void* __memcpy_device(void* destination, const void* source, size_t size);
float __strtof_l(const char* text, char** end, locale_t locale);
double __strtod_l(const char* text, char** end, locale_t locale);
size_t __ctype_get_mb_cur_max();
void __rlock(FILE* file);
void __runlock(FILE* file);
int _IO_putc(int c, FILE* file);
int sem_clockwait(sem_t* semaphore, clockid_t clock,
  const struct timespec* timeout);
int pthread_cond_clockwait(pthread_cond_t* condition, pthread_mutex_t* mutex,
  clockid_t clock, const struct timespec* timeout);

[[gnu::visibility("hidden")]] int __nnmusl_getc(FILE* file);
[[gnu::visibility("hidden")]] int __nnmusl_putc(int c, FILE* file);
[[gnu::visibility("hidden")]] int __nnmusl_getchar();
[[gnu::visibility("hidden")]] int __nnmusl_putchar(int c);
[[gnu::visibility("hidden")]] void __nnmusl_rlock(FILE* file);
[[gnu::visibility("hidden")]] void __nnmusl_runlock(FILE* file);
[[gnu::visibility("hidden")]] pid_t __nnmusl_getpid();
[[gnu::visibility("hidden")]] int __nnmusl_sem_clockwait(sem_t* semaphore,
  clockid_t clock, const struct timespec* timeout);
[[gnu::visibility("hidden")]] int __nnmusl_cond_clockwait(
  pthread_cond_t* condition, pthread_mutex_t* mutex, clockid_t clock,
  const struct timespec* timeout);
[[gnu::visibility("hidden"), noreturn]] void __nnmusl_abort();
[[gnu::visibility("hidden")]] extern unsigned short __seed48[7];
[[gnu::visibility("hidden")]] extern unsigned char __libc_secure;

int fgetc(FILE* file) {
  return __nnmusl_getc(file);
}

int getc(FILE* file) {
  return __nnmusl_getc(file);
}

int getchar() {
  return __nnmusl_getchar();
}

int fputc(int c, FILE* file) {
  return __nnmusl_putc(c, file);
}

int _IO_putc(int c, FILE* file) {
  return __nnmusl_putc(c, file);
}

int putchar(int c) {
  return __nnmusl_putchar(c);
}

void __rlock(FILE* file) {
  __nnmusl_rlock(file);
}

void __runlock(FILE* file) {
  __nnmusl_runlock(file);
}

int cnd_broadcast(cnd_t* condition) {
  return pthread_cond_broadcast(reinterpret_cast<pthread_cond_t*>(condition));
}

void cnd_destroy(cnd_t* condition) {
  pthread_cond_destroy(reinterpret_cast<pthread_cond_t*>(condition));
}

int cnd_signal(cnd_t* condition) {
  return pthread_cond_signal(reinterpret_cast<pthread_cond_t*>(condition));
}

void mtx_destroy(mtx_t* mutex) {
  pthread_mutex_destroy(reinterpret_cast<pthread_mutex_t*>(mutex));
}

int mtx_unlock(mtx_t* mutex) {
  if (mutex == nullptr) {
    return thrd_error;
  }

  return pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t*>(mutex));
}

int thrd_detach(thrd_t thread) {
  return pthread_detach(reinterpret_cast<pthread_t>(thread));
}

thrd_t thrd_current() {
  return reinterpret_cast<thrd_t>(pthread_self());
}

void thrd_yield() {
  sched_yield();
}

void* tss_get(tss_t key) {
  return pthread_getspecific(key);
}

void call_once(once_flag* flag, void (*function)()) {
  if (flag != nullptr) {
    pthread_once(reinterpret_cast<pthread_once_t*>(flag), function);
  }
}

pid_t getpid() {
  return __nnmusl_getpid();
}

void* __memcpy_device(void* destination, const void* source, size_t size) {
  return __memcpy_aarch64(destination, source, size);
}

wint_t towupper_l(wint_t c, locale_t) {
  return towupper(c);
}

float __strtof_l(const char* text, char** end, locale_t) {
  return strtof(text, end);
}

double __strtod_l(const char* text, char** end, locale_t) {
  return strtod(text, end);
}

long double strtold_l(const char* text, char** end, locale_t) {
  return strtold(text, end);
}

int fseek(FILE* file, long offset, int whence) {
  return fseeko(file, offset, whence);
}

int fsetpos(FILE* file, const fpos_t* position) {
  return fseeko(file, *reinterpret_cast<const off_t*>(position), SEEK_SET);
}

void* memalign(size_t alignment, size_t size) {
  return aligned_alloc(alignment, size);
}

size_t __ctype_get_mb_cur_max() {
  return 4;
}

int sem_clockwait(sem_t* semaphore, clockid_t clock,
  const struct timespec* timeout) {
  return __nnmusl_sem_clockwait(semaphore, clock, timeout);
}

int sem_timedwait(sem_t* semaphore, const struct timespec* timeout) {
  return __nnmusl_sem_clockwait(semaphore, CLOCK_REALTIME, timeout);
}

int pthread_cond_clockwait(pthread_cond_t* condition, pthread_mutex_t* mutex,
  clockid_t clock, const struct timespec* timeout) {
  return __nnmusl_cond_clockwait(condition, mutex, clock, timeout);
}

int wctob(wint_t c) {
  return c < 0x80 ? static_cast<int>(c) : EOF;
}

int mkstemp(char* path) {
  return mkostemps(path, 0, 0);
}

long double nanl(const char*) {
  return __builtin_nanl("");
}

void __stack_chk_fail() {
  __nnmusl_abort();
}

void abort() {
  __nnmusl_abort();
}

// The line buffering mode is a signed byte, negative when the stream is not
// line buffered.
int __flbf(FILE* file) {
  return reinterpret_cast<const int8_t*>(file)[0x81] >= 0;
}

static int CompareWithoutArgument(const void* left, const void* right,
  void* compare) {
  return reinterpret_cast<int (*)(const void*, const void*)>(compare)(left,
    right);
}

void qsort(void* base, size_t count, size_t size,
  int (*compare)(const void*, const void*)) {
  qsort_r(base, count, size, CompareWithoutArgument,
    reinterpret_cast<void*>(compare));
}

void thrd_exit(int result) {
  pthread_exit(reinterpret_cast<void*>(static_cast<intptr_t>(result)));
}

int fesetround(int mode) {
  if ((mode & ~0x01c00000) != 0) {
    return -1;
  }

  return __fesetround(mode);
}

void lcong48(unsigned short* parameters) {
  memcpy(__seed48, parameters, sizeof(__seed48));
}

int fegetenv(fenv_t* environment) {
  uint64_t control;
  uint64_t status;
  asm volatile("mrs %0, fpcr" : "=r"(control));
  asm volatile("mrs %0, fpsr" : "=r"(status));
  auto* words = reinterpret_cast<uint32_t*>(environment);
  words[0] = static_cast<uint32_t>(control);
  words[1] = static_cast<uint32_t>(status);
  return 0;
}

char* secure_getenv(const char* name) {
  if (__libc_secure != 0) {
    return nullptr;
  }

  return getenv(name);
}

}
