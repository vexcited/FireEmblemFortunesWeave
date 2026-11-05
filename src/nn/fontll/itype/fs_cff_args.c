#include "nn/fontll/itype/fs_api.h"

#define CFF_ARG_INT 1
#define CFF_ARG_FIXED 2
#define CFF_ARG_FRACT 3

typedef struct CFF_ARGS {
  FS_LONG values[48];
  FS_BYTE types[48];
} CFF_ARGS;

FS_FIXED fix_arg(const CFF_ARGS* args, int index) {
  FS_LONG value = args->values[index];
  switch (args->types[index]) {
    case CFF_ARG_FRACT:
      return value >> 14;
    case CFF_ARG_INT:
      return value << 16;
    default:
      return value;
  }
}

FS_LONG int_arg(const CFF_ARGS* args, int index) {
  FS_LONG value = args->values[index];
  switch (args->types[index]) {
    case CFF_ARG_FRACT:
      return value >> 30;
    case CFF_ARG_FIXED:
      return value >> 16;
    default:
      return value;
  }
}

FS_LONG fract_arg(const CFF_ARGS* args, int index) {
  FS_LONG value = args->values[index];
  switch (args->types[index]) {
    case CFF_ARG_FIXED:
      return value << 14;
    case CFF_ARG_INT:
      return value << 30;
    default:
      return value;
  }
}
