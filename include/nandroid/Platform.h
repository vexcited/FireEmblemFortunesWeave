#pragma once

#include <sys/types.h>

// Bionic types that musl only exposes with _LARGEFILE64_SOURCE.
typedef off_t off64_t;

#ifndef __BEGIN_DECLS
#define __BEGIN_DECLS extern "C" {
#define __END_DECLS }
#endif

#define __INTRODUCED_IN(api_level)

#ifndef __ANDROID_API__
#define __ANDROID_API__ 29
#endif
