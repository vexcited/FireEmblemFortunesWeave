#pragma once

#include <sys/types.h>
#include <sys/stat.h>

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

#include <arpa/inet.h>

// The SDK swaps 32 bit network values inline but calls ntohs, htonl and htons.
#undef ntohl
#define ntohl(x) __builtin_bswap32(x)
