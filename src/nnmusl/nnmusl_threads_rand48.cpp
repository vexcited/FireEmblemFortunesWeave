#include <errno.h>
#include <pthread.h>
#include <stdint.h>
#include <stdlib.h>
#include <threads.h>
#include <time.h>

extern "C" {

[[gnu::visibility("hidden")]] extern unsigned short __seed48[7];
[[gnu::visibility("hidden")]] uint64_t __rand48_step(unsigned short* xi,
  unsigned short* lc);
[[gnu::visibility("hidden")]] int __nnmusl_nanosleep(
  const struct timespec* request, struct timespec* remaining);

int cnd_init(cnd_t* condition) {
  const int result = pthread_cond_init(
    reinterpret_cast<pthread_cond_t*>(condition), nullptr);
  if (result == ENOMEM) {
    return thrd_nomem;
  }

  return result == 0 ? thrd_success : thrd_error;
}

int cnd_wait(cnd_t* condition, mtx_t* mutex) {
  return pthread_cond_wait(reinterpret_cast<pthread_cond_t*>(condition),
    reinterpret_cast<pthread_mutex_t*>(mutex)) == 0 ? thrd_success :
    thrd_error;
}

int mtx_lock(mtx_t* mutex) {
  if (mutex == nullptr) {
    return thrd_error;
  }

  return pthread_mutex_lock(reinterpret_cast<pthread_mutex_t*>(mutex)) == 0 ?
    thrd_success : thrd_error;
}

int mtx_trylock(mtx_t* mutex) {
  if (mutex == nullptr) {
    return thrd_error;
  }

  const int result = pthread_mutex_trylock(
    reinterpret_cast<pthread_mutex_t*>(mutex));
  if (result == 0) {
    return thrd_success;
  }

  return result == EBUSY ? thrd_busy : thrd_error;
}

int thrd_create(thrd_t* thread, thrd_start_t function, void* argument) {
  const int result = pthread_create(reinterpret_cast<pthread_t*>(thread),
    nullptr, reinterpret_cast<void* (*)(void*)>(function), argument);
  if (result == 0) {
    return thrd_success;
  }

  return result == EAGAIN ? thrd_nomem : thrd_error;
}

int thrd_sleep(const struct timespec* request, struct timespec* remaining) {
  __nnmusl_nanosleep(request, remaining);
  return 0;
}

int tss_create(tss_t* key, tss_dtor_t destructor) {
  if (key == nullptr) {
    return thrd_error;
  }

  return pthread_key_create(key, destructor) == 0 ? thrd_success :
    thrd_error;
}

int tss_set(tss_t key, void* value) {
  return pthread_setspecific(key, value) == 0 ? thrd_success : thrd_error;
}

double erand48(unsigned short state[3]) {
  union {
    uint64_t u;
    double f;
  } x = {0x3ff0000000000000ull | __rand48_step(state, __seed48 + 3) << 4};
  return x.f - 1.0;
}

double drand48() {
  return erand48(__seed48);
}

long nrand48(unsigned short state[3]) {
  return __rand48_step(state, __seed48 + 3) >> 17;
}

long lrand48() {
  return nrand48(__seed48);
}

long jrand48(unsigned short state[3]) {
  return static_cast<int32_t>(__rand48_step(state, __seed48 + 3) >> 16);
}

long mrand48() {
  return jrand48(__seed48);
}

}
