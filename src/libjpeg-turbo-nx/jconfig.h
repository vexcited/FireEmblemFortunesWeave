/* The SDK keeps the configuration headers of a libjpeg-turbo 1.5.0 build from
 * July 2016 with the jpeg8 API, and compiles the arithmetic coders without
 * selecting them. The memory manager reads no environment variable.
 */
#ifdef JPEG_NX
#define JPEG_LIB_VERSION 80
#define LIBJPEG_TURBO_VERSION 1.5.0
#define LIBJPEG_TURBO_VERSION_NUMBER 1005000
#define NO_GETENV
#else
#define JPEG_LIB_VERSION 62
#define LIBJPEG_TURBO_VERSION 1.5.3
#define LIBJPEG_TURBO_VERSION_NUMBER 1005003
#define C_ARITH_CODING_SUPPORTED 1
#define D_ARITH_CODING_SUPPORTED 1
#endif
#define MEM_SRCDST_SUPPORTED 1
#define WITH_SIMD 1
#define BITS_IN_JSAMPLE 8
#define HAVE_LOCALE_H 1
#define HAVE_STDDEF_H 1
#define HAVE_STDLIB_H 1
#define NEED_SYS_TYPES_H 1
#define HAVE_UNSIGNED_CHAR 1
#define HAVE_UNSIGNED_SHORT 1
