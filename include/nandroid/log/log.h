#pragma once

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

// The SDK build keeps no log strings, so every log macro expands to nothing.
// Fatal checks only evaluate their condition.

#ifndef LOG_TAG
#define LOG_TAG NULL
#endif

#define ANDROID_LOG_UNKNOWN 0
#define ANDROID_LOG_DEFAULT 1
#define ANDROID_LOG_VERBOSE 2
#define ANDROID_LOG_DEBUG 3
#define ANDROID_LOG_INFO 4
#define ANDROID_LOG_WARN 5
#define ANDROID_LOG_ERROR 6
#define ANDROID_LOG_FATAL 7
#define ANDROID_LOG_SILENT 8

#define ALOGV(...) ((void)0)
#define ALOGD(...) ((void)0)
#define ALOGI(...) ((void)0)
#define ALOGW(...) ((void)0)
#define ALOGE(...) ((void)0)
#define ALOGV_IF(cond, ...) ((void)0)
#define ALOGD_IF(cond, ...) ((void)0)
#define ALOGI_IF(cond, ...) ((void)0)
#define ALOGW_IF(cond, ...) ((void)0)
#define ALOGE_IF(cond, ...) ((void)0)
#define SLOGV(...) ((void)0)
#define SLOGD(...) ((void)0)
#define SLOGI(...) ((void)0)
#define SLOGW(...) ((void)0)
#define SLOGE(...) ((void)0)
#define ALOG(priority, tag, ...) ((void)0)
#define IF_ALOG(priority, tag) if (false)
#define IF_ALOGV() if (false)
#define IF_ALOGD() if (false)
#define IF_ALOGI() if (false)
#define IF_ALOGW() if (false)
#define IF_ALOGE() if (false)
#define LOG_PRI(priority, tag, ...) ((void)0)
#define LOG_PRI_VA(priority, tag, fmt, args) ((void)0)

#define LOG_ALWAYS_FATAL_IF(cond, ...) ((void)(cond))
#define LOG_ALWAYS_FATAL(...) ((void)0)
#define LOG_FATAL_IF(cond, ...) ((void)0)
#define LOG_FATAL(...) ((void)0)
#define ALOG_ASSERT(cond, ...) ((void)0)

#define android_errorWriteLog(tag, subTag) ((void)0)
#define android_errorWriteWithInfoLog(tag, subTag, uid, data, length) ((void)0)

#ifndef __predict_false
#define __predict_false(exp) __builtin_expect((exp) != 0, 0)
#endif

#ifndef __unused
#define __unused __attribute__((__unused__))
#endif
