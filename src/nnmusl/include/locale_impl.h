#ifndef _LOCALE_IMPL_H
#define _LOCALE_IMPL_H

#include <locale.h>
#include <stdlib.h>
#include "libc.h"

#define LOCALE_NAME_MAX 23

struct __locale_map {
	const void *map;
	size_t map_size;
	char name[LOCALE_NAME_MAX+1];
	const struct __locale_map *next;
};

extern const struct __locale_map __c_dot_utf8;
extern const struct __locale_struct __c_locale;
extern const struct __locale_struct __c_dot_utf8_locale;

const struct __locale_map *__get_locale(int, const char *);
const char *__mo_lookup(const void *, size_t, const char *);
const char *__lctrans(const char *, const struct __locale_map *);
const char *__lctrans_cur(const char *);

#define LCTRANS(msg, lc, loc) __lctrans(msg, (loc)->cat[(lc)])
// nnmusl never translates its own messages.
#define LCTRANS_CUR(msg) (msg)

#define C_LOCALE ((locale_t)&__c_locale)
#define UTF8_LOCALE ((locale_t)&__c_dot_utf8_locale)

// nnmusl keeps the thread locale behind accessor calls.
locale_t *__getlocale_addr(void);
locale_t __getlocale(void);

#define CURRENT_LOCALE (*__getlocale_addr())

// nnmusl only speaks UTF-8.
#define CURRENT_UTF8 1

#undef MB_CUR_MAX
#define MB_CUR_MAX (CURRENT_UTF8 ? 4 : 1)

#endif
