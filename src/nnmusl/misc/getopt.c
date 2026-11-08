#define _BSD_SOURCE
#include <unistd.h>
#include <wchar.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

extern int __optreset, __optpos;

void __getopt_msg(const char *, const char *, const char *, size_t);

int getopt(int argc, char * const argv[], const char *optstring)
{
  int i;
  wchar_t c, d;
  int k, l;
  char *optchar;

  if (!optind || __optreset) {
    __optreset = 0;
    __optpos = 0;
    optind = 1;
  }

  if (optind >= argc || !argv[optind]) {
    return -1;
  }

  if (argv[optind][0] != '-') {
    if (optstring[0] == '-') {
      optarg = argv[optind++];
      return 1;
    }

    return -1;
  }

  if (!argv[optind][1]) {
    return -1;
  }

  if (argv[optind][1] == '-' && !argv[optind][2]) {
    return optind++, -1;
  }

  if (!__optpos) {
    __optpos++;
  }

  if ((k = mbtowc(&c, argv[optind] + __optpos, MB_LEN_MAX)) < 0) {
    k = 1;
    c = 0xfffd;
  }

  optchar = argv[optind] + __optpos;
  __optpos += k;

  if (!argv[optind][__optpos]) {
    optind++;
    __optpos = 0;
  }

  if (optstring[0] == '-' || optstring[0] == '+') {
    optstring++;
  }

  i = 0;
  d = 0;

  do {
    l = mbtowc(&d, optstring + i, MB_LEN_MAX);

    if (l > 0) {
      i += l;
    }
    else {
      i++;
    }
  } while (l && d != c);

  if (d != c || c == ':') {
    optopt = c;

    if (optstring[0] != ':' && opterr) {
      __getopt_msg(argv[0], ": unrecognized option: ", optchar, k);
    }

    return '?';
  }

  if (optstring[i] == ':') {
    optarg = 0;

    if (optstring[i + 1] != ':' || __optpos) {
      optarg = argv[optind++] + __optpos;
      __optpos = 0;
    }

    if (optind > argc) {
      optopt = c;

      if (optstring[0] == ':') {
        return ':';
      }

      if (opterr) {
        __getopt_msg(argv[0], ": option requires an argument: ", optchar, k);
      }

      return '?';
    }
  }

  return c;
}
