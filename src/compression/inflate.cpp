#include "compression/checksums.hpp"
#include "compression/inflate.hpp"

using fw::compression::CodeType;
using fw::compression::GzipHeader;
using fw::compression::InflateCode;
using fw::compression::InflateState;
using fw::compression::InflateStream;
using AllocateFunction = void *(*)(void *, uint32_t, uint32_t);
using ReleaseFunction = void (*)(void *, void *);

extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *malloc(size_t);
extern "C" void free(void *);
extern "C" void Libz_SigloMiddlewareInfo();

enum Mode : uint32_t {
  HEAD = 16180,
  FLAGS,
  TIME,
  OS,
  EXLEN,
  EXTRA,
  NAME,
  COMMENT,
  HCRC,
  DICTID,
  DICT,
  TYPE,
  TYPEDO,
  STORED,
  COPY_,
  COPY,
  TABLE,
  LENLENS,
  CODELENS,
  LEN_,
  LEN,
  LENEXT,
  DIST,
  DISTEXT,
  MATCH,
  LIT,
  CHECK,
  LENGTH,
  DONE,
  BAD,
  MEM,
  SYNC,
};

constexpr int Z_OK = 0;
constexpr int Z_STREAM_END = 1;
constexpr int Z_NEED_DICT = 2;
constexpr int Z_STREAM_ERROR = -2;
constexpr int Z_DATA_ERROR = -3;
constexpr int Z_MEM_ERROR = -4;
constexpr int Z_BUF_ERROR = -5;
constexpr int Z_VERSION_ERROR = -6;
constexpr int Z_FINISH = 4;
constexpr int Z_BLOCK = 5;
constexpr int Z_TREES = 6;
constexpr int Z_DEFLATED = 8;
constexpr int DEF_WBITS = 15;
constexpr CodeType CODES = CodeType::Codes;
constexpr CodeType LENS = CodeType::Lengths;
constexpr CodeType DISTS = CodeType::Distances;

#define ZALLOC(stream, count, size)                                            \
  (stream)->allocate((stream)->opaque, (count), (size))
#define ZFREE(stream, address) (stream)->release((stream)->opaque, (address))
#define ZSWAP32(value) __builtin_bswap32(static_cast<uint32_t>(value))

static int CheckState(InflateStream *stream) {
  InflateState *state;
  if (stream == nullptr || stream->allocate == (AllocateFunction)0 ||
      stream->release == (ReleaseFunction)0) {
    return 1;
  }
  state = (InflateState *)stream->state;
  if (state == nullptr || state->stream != stream || state->mode < HEAD ||
      state->mode > SYNC) {
    return 1;
  }
  return 0;
}

int nnutilZlib_inflateResetKeep(InflateStream *stream) {
  InflateState *state;

  if (CheckState(stream)) {
    return Z_STREAM_ERROR;
  }
  state = (InflateState *)stream->state;
  stream->total_input = stream->total_output = state->total = 0;
  stream->message = nullptr;
  if (state->wrap) {
    stream->checksum = state->wrap & 1;
  }
  state->mode = HEAD;
  state->last = 0;
  state->has_dictionary = 0;
  state->flags = -1;
  state->maximum_distance = 32768U;
  state->header = nullptr;
  state->hold = 0;
  state->bits = 0;
  state->length_codes = state->distance_codes = state->next = state->codes;
  state->sane = 1;
  state->back = -1;

  return Z_OK;
}

int nnutilZlib_inflateReset(InflateStream *stream) {
  InflateState *state;

  if (CheckState(stream)) {
    return Z_STREAM_ERROR;
  }
  state = (InflateState *)stream->state;
  state->window_size = 0;
  state->window_available = 0;
  state->window_next = 0;
  return nnutilZlib_inflateResetKeep(stream);
}

int nnutilZlib_inflateReset2(InflateStream *stream, int windowBits) {
  int wrap;
  InflateState *state;

  if (CheckState(stream)) {
    return Z_STREAM_ERROR;
  }
  state = (InflateState *)stream->state;

  if (windowBits < 0) {
    if (windowBits < -15) {
      return Z_STREAM_ERROR;
    }
    wrap = 0;
    windowBits = -windowBits;
  }
  else {
    wrap = (windowBits >> 4) + 5;
    if (windowBits < 48) {
      windowBits &= 15;
    }
  }

  if (windowBits && (windowBits < 8 || windowBits > 15)) {
    return Z_STREAM_ERROR;
  }
  if (state->window != nullptr && state->window_bits != (uint32_t)windowBits) {
    ZFREE(stream, state->window);
    state->window = nullptr;
  }

  state->wrap = wrap;
  state->window_bits = (uint32_t)windowBits;
  return nnutilZlib_inflateReset(stream);
}

int nnutilZlib_inflateInit2_(InflateStream *stream, int windowBits,
                             const char *version, int stream_size) {
  int ret;
  InflateState *state;

  if (version == nullptr || version[0] != '1' ||
      stream_size != (int)(sizeof(InflateStream))) {
    return Z_VERSION_ERROR;
  }
  if (stream == nullptr) {
    return Z_STREAM_ERROR;
  }
  stream->message = nullptr;
  if (stream->allocate == (AllocateFunction)0) {
    stream->allocate = nnutilZlib_zcalloc;
    stream->opaque = (void *)0;
  }
  if (stream->release == (ReleaseFunction)0) {
    stream->release = nnutilZlib_zcfree;
  }
  state = (InflateState *)ZALLOC(stream, 1, sizeof(InflateState));
  if (state == nullptr) {
    return Z_MEM_ERROR;
  }

  stream->state = (InflateState *)state;
  state->stream = stream;
  state->window = nullptr;
  state->mode = HEAD;
  ret = nnutilZlib_inflateReset2(stream, windowBits);
  if (ret != Z_OK) {
    ZFREE(stream, state);
    stream->state = nullptr;
  }
  return ret;
}

int nnutilZlib_inflateInit_(InflateStream *stream, const char *version,
                            int stream_size) {
  return nnutilZlib_inflateInit2_(stream, DEF_WBITS, version, stream_size);
}

int nnutilZlib_inflatePrime(InflateStream *stream, int bits, int value) {
  InflateState *state;

  if (CheckState(stream)) {
    return Z_STREAM_ERROR;
  }
  if (bits == 0) {
    return Z_OK;
  }
  state = (InflateState *)stream->state;
  if (bits < 0) {
    state->hold = 0;
    state->bits = 0;
    return Z_OK;
  }
  if (bits > 16 || state->bits + (uint32_t)bits > 32) {
    return Z_STREAM_ERROR;
  }
  value &= (1L << bits) - 1;
  state->hold += (uint32_t)value << state->bits;
  state->bits += (uint32_t)bits;
  return Z_OK;
}

static void SetFixedTables(InflateState *state) {

  static const InflateCode lenfix[512] = {
      {96, 7, 0},   {0, 8, 80},   {0, 8, 16},   {20, 8, 115}, {18, 7, 31},
      {0, 8, 112},  {0, 8, 48},   {0, 9, 192},  {16, 7, 10},  {0, 8, 96},
      {0, 8, 32},   {0, 9, 160},  {0, 8, 0},    {0, 8, 128},  {0, 8, 64},
      {0, 9, 224},  {16, 7, 6},   {0, 8, 88},   {0, 8, 24},   {0, 9, 144},
      {19, 7, 59},  {0, 8, 120},  {0, 8, 56},   {0, 9, 208},  {17, 7, 17},
      {0, 8, 104},  {0, 8, 40},   {0, 9, 176},  {0, 8, 8},    {0, 8, 136},
      {0, 8, 72},   {0, 9, 240},  {16, 7, 4},   {0, 8, 84},   {0, 8, 20},
      {21, 8, 227}, {19, 7, 43},  {0, 8, 116},  {0, 8, 52},   {0, 9, 200},
      {17, 7, 13},  {0, 8, 100},  {0, 8, 36},   {0, 9, 168},  {0, 8, 4},
      {0, 8, 132},  {0, 8, 68},   {0, 9, 232},  {16, 7, 8},   {0, 8, 92},
      {0, 8, 28},   {0, 9, 152},  {20, 7, 83},  {0, 8, 124},  {0, 8, 60},
      {0, 9, 216},  {18, 7, 23},  {0, 8, 108},  {0, 8, 44},   {0, 9, 184},
      {0, 8, 12},   {0, 8, 140},  {0, 8, 76},   {0, 9, 248},  {16, 7, 3},
      {0, 8, 82},   {0, 8, 18},   {21, 8, 163}, {19, 7, 35},  {0, 8, 114},
      {0, 8, 50},   {0, 9, 196},  {17, 7, 11},  {0, 8, 98},   {0, 8, 34},
      {0, 9, 164},  {0, 8, 2},    {0, 8, 130},  {0, 8, 66},   {0, 9, 228},
      {16, 7, 7},   {0, 8, 90},   {0, 8, 26},   {0, 9, 148},  {20, 7, 67},
      {0, 8, 122},  {0, 8, 58},   {0, 9, 212},  {18, 7, 19},  {0, 8, 106},
      {0, 8, 42},   {0, 9, 180},  {0, 8, 10},   {0, 8, 138},  {0, 8, 74},
      {0, 9, 244},  {16, 7, 5},   {0, 8, 86},   {0, 8, 22},   {64, 8, 0},
      {19, 7, 51},  {0, 8, 118},  {0, 8, 54},   {0, 9, 204},  {17, 7, 15},
      {0, 8, 102},  {0, 8, 38},   {0, 9, 172},  {0, 8, 6},    {0, 8, 134},
      {0, 8, 70},   {0, 9, 236},  {16, 7, 9},   {0, 8, 94},   {0, 8, 30},
      {0, 9, 156},  {20, 7, 99},  {0, 8, 126},  {0, 8, 62},   {0, 9, 220},
      {18, 7, 27},  {0, 8, 110},  {0, 8, 46},   {0, 9, 188},  {0, 8, 14},
      {0, 8, 142},  {0, 8, 78},   {0, 9, 252},  {96, 7, 0},   {0, 8, 81},
      {0, 8, 17},   {21, 8, 131}, {18, 7, 31},  {0, 8, 113},  {0, 8, 49},
      {0, 9, 194},  {16, 7, 10},  {0, 8, 97},   {0, 8, 33},   {0, 9, 162},
      {0, 8, 1},    {0, 8, 129},  {0, 8, 65},   {0, 9, 226},  {16, 7, 6},
      {0, 8, 89},   {0, 8, 25},   {0, 9, 146},  {19, 7, 59},  {0, 8, 121},
      {0, 8, 57},   {0, 9, 210},  {17, 7, 17},  {0, 8, 105},  {0, 8, 41},
      {0, 9, 178},  {0, 8, 9},    {0, 8, 137},  {0, 8, 73},   {0, 9, 242},
      {16, 7, 4},   {0, 8, 85},   {0, 8, 21},   {16, 8, 258}, {19, 7, 43},
      {0, 8, 117},  {0, 8, 53},   {0, 9, 202},  {17, 7, 13},  {0, 8, 101},
      {0, 8, 37},   {0, 9, 170},  {0, 8, 5},    {0, 8, 133},  {0, 8, 69},
      {0, 9, 234},  {16, 7, 8},   {0, 8, 93},   {0, 8, 29},   {0, 9, 154},
      {20, 7, 83},  {0, 8, 125},  {0, 8, 61},   {0, 9, 218},  {18, 7, 23},
      {0, 8, 109},  {0, 8, 45},   {0, 9, 186},  {0, 8, 13},   {0, 8, 141},
      {0, 8, 77},   {0, 9, 250},  {16, 7, 3},   {0, 8, 83},   {0, 8, 19},
      {21, 8, 195}, {19, 7, 35},  {0, 8, 115},  {0, 8, 51},   {0, 9, 198},
      {17, 7, 11},  {0, 8, 99},   {0, 8, 35},   {0, 9, 166},  {0, 8, 3},
      {0, 8, 131},  {0, 8, 67},   {0, 9, 230},  {16, 7, 7},   {0, 8, 91},
      {0, 8, 27},   {0, 9, 150},  {20, 7, 67},  {0, 8, 123},  {0, 8, 59},
      {0, 9, 214},  {18, 7, 19},  {0, 8, 107},  {0, 8, 43},   {0, 9, 182},
      {0, 8, 11},   {0, 8, 139},  {0, 8, 75},   {0, 9, 246},  {16, 7, 5},
      {0, 8, 87},   {0, 8, 23},   {64, 8, 0},   {19, 7, 51},  {0, 8, 119},
      {0, 8, 55},   {0, 9, 206},  {17, 7, 15},  {0, 8, 103},  {0, 8, 39},
      {0, 9, 174},  {0, 8, 7},    {0, 8, 135},  {0, 8, 71},   {0, 9, 238},
      {16, 7, 9},   {0, 8, 95},   {0, 8, 31},   {0, 9, 158},  {20, 7, 99},
      {0, 8, 127},  {0, 8, 63},   {0, 9, 222},  {18, 7, 27},  {0, 8, 111},
      {0, 8, 47},   {0, 9, 190},  {0, 8, 15},   {0, 8, 143},  {0, 8, 79},
      {0, 9, 254},  {96, 7, 0},   {0, 8, 80},   {0, 8, 16},   {20, 8, 115},
      {18, 7, 31},  {0, 8, 112},  {0, 8, 48},   {0, 9, 193},  {16, 7, 10},
      {0, 8, 96},   {0, 8, 32},   {0, 9, 161},  {0, 8, 0},    {0, 8, 128},
      {0, 8, 64},   {0, 9, 225},  {16, 7, 6},   {0, 8, 88},   {0, 8, 24},
      {0, 9, 145},  {19, 7, 59},  {0, 8, 120},  {0, 8, 56},   {0, 9, 209},
      {17, 7, 17},  {0, 8, 104},  {0, 8, 40},   {0, 9, 177},  {0, 8, 8},
      {0, 8, 136},  {0, 8, 72},   {0, 9, 241},  {16, 7, 4},   {0, 8, 84},
      {0, 8, 20},   {21, 8, 227}, {19, 7, 43},  {0, 8, 116},  {0, 8, 52},
      {0, 9, 201},  {17, 7, 13},  {0, 8, 100},  {0, 8, 36},   {0, 9, 169},
      {0, 8, 4},    {0, 8, 132},  {0, 8, 68},   {0, 9, 233},  {16, 7, 8},
      {0, 8, 92},   {0, 8, 28},   {0, 9, 153},  {20, 7, 83},  {0, 8, 124},
      {0, 8, 60},   {0, 9, 217},  {18, 7, 23},  {0, 8, 108},  {0, 8, 44},
      {0, 9, 185},  {0, 8, 12},   {0, 8, 140},  {0, 8, 76},   {0, 9, 249},
      {16, 7, 3},   {0, 8, 82},   {0, 8, 18},   {21, 8, 163}, {19, 7, 35},
      {0, 8, 114},  {0, 8, 50},   {0, 9, 197},  {17, 7, 11},  {0, 8, 98},
      {0, 8, 34},   {0, 9, 165},  {0, 8, 2},    {0, 8, 130},  {0, 8, 66},
      {0, 9, 229},  {16, 7, 7},   {0, 8, 90},   {0, 8, 26},   {0, 9, 149},
      {20, 7, 67},  {0, 8, 122},  {0, 8, 58},   {0, 9, 213},  {18, 7, 19},
      {0, 8, 106},  {0, 8, 42},   {0, 9, 181},  {0, 8, 10},   {0, 8, 138},
      {0, 8, 74},   {0, 9, 245},  {16, 7, 5},   {0, 8, 86},   {0, 8, 22},
      {64, 8, 0},   {19, 7, 51},  {0, 8, 118},  {0, 8, 54},   {0, 9, 205},
      {17, 7, 15},  {0, 8, 102},  {0, 8, 38},   {0, 9, 173},  {0, 8, 6},
      {0, 8, 134},  {0, 8, 70},   {0, 9, 237},  {16, 7, 9},   {0, 8, 94},
      {0, 8, 30},   {0, 9, 157},  {20, 7, 99},  {0, 8, 126},  {0, 8, 62},
      {0, 9, 221},  {18, 7, 27},  {0, 8, 110},  {0, 8, 46},   {0, 9, 189},
      {0, 8, 14},   {0, 8, 142},  {0, 8, 78},   {0, 9, 253},  {96, 7, 0},
      {0, 8, 81},   {0, 8, 17},   {21, 8, 131}, {18, 7, 31},  {0, 8, 113},
      {0, 8, 49},   {0, 9, 195},  {16, 7, 10},  {0, 8, 97},   {0, 8, 33},
      {0, 9, 163},  {0, 8, 1},    {0, 8, 129},  {0, 8, 65},   {0, 9, 227},
      {16, 7, 6},   {0, 8, 89},   {0, 8, 25},   {0, 9, 147},  {19, 7, 59},
      {0, 8, 121},  {0, 8, 57},   {0, 9, 211},  {17, 7, 17},  {0, 8, 105},
      {0, 8, 41},   {0, 9, 179},  {0, 8, 9},    {0, 8, 137},  {0, 8, 73},
      {0, 9, 243},  {16, 7, 4},   {0, 8, 85},   {0, 8, 21},   {16, 8, 258},
      {19, 7, 43},  {0, 8, 117},  {0, 8, 53},   {0, 9, 203},  {17, 7, 13},
      {0, 8, 101},  {0, 8, 37},   {0, 9, 171},  {0, 8, 5},    {0, 8, 133},
      {0, 8, 69},   {0, 9, 235},  {16, 7, 8},   {0, 8, 93},   {0, 8, 29},
      {0, 9, 155},  {20, 7, 83},  {0, 8, 125},  {0, 8, 61},   {0, 9, 219},
      {18, 7, 23},  {0, 8, 109},  {0, 8, 45},   {0, 9, 187},  {0, 8, 13},
      {0, 8, 141},  {0, 8, 77},   {0, 9, 251},  {16, 7, 3},   {0, 8, 83},
      {0, 8, 19},   {21, 8, 195}, {19, 7, 35},  {0, 8, 115},  {0, 8, 51},
      {0, 9, 199},  {17, 7, 11},  {0, 8, 99},   {0, 8, 35},   {0, 9, 167},
      {0, 8, 3},    {0, 8, 131},  {0, 8, 67},   {0, 9, 231},  {16, 7, 7},
      {0, 8, 91},   {0, 8, 27},   {0, 9, 151},  {20, 7, 67},  {0, 8, 123},
      {0, 8, 59},   {0, 9, 215},  {18, 7, 19},  {0, 8, 107},  {0, 8, 43},
      {0, 9, 183},  {0, 8, 11},   {0, 8, 139},  {0, 8, 75},   {0, 9, 247},
      {16, 7, 5},   {0, 8, 87},   {0, 8, 23},   {64, 8, 0},   {19, 7, 51},
      {0, 8, 119},  {0, 8, 55},   {0, 9, 207},  {17, 7, 15},  {0, 8, 103},
      {0, 8, 39},   {0, 9, 175},  {0, 8, 7},    {0, 8, 135},  {0, 8, 71},
      {0, 9, 239},  {16, 7, 9},   {0, 8, 95},   {0, 8, 31},   {0, 9, 159},
      {20, 7, 99},  {0, 8, 127},  {0, 8, 63},   {0, 9, 223},  {18, 7, 27},
      {0, 8, 111},  {0, 8, 47},   {0, 9, 191},  {0, 8, 15},   {0, 8, 143},
      {0, 8, 79},   {0, 9, 255}};

  static const InflateCode distfix[32] = {
      {16, 5, 1},  {23, 5, 257},  {19, 5, 17},  {27, 5, 4097},
      {17, 5, 5},  {25, 5, 1025}, {21, 5, 65},  {29, 5, 16385},
      {16, 5, 3},  {24, 5, 513},  {20, 5, 33},  {28, 5, 8193},
      {18, 5, 9},  {26, 5, 2049}, {22, 5, 129}, {64, 5, 0},
      {16, 5, 2},  {23, 5, 385},  {19, 5, 25},  {27, 5, 6145},
      {17, 5, 7},  {25, 5, 1537}, {21, 5, 97},  {29, 5, 24577},
      {16, 5, 4},  {24, 5, 769},  {20, 5, 49},  {28, 5, 12289},
      {18, 5, 13}, {26, 5, 3073}, {22, 5, 193}, {64, 5, 0}};

  state->length_codes = lenfix;
  state->length_bits = 9;
  state->distance_codes = distfix;
  state->distance_bits = 5;
}

static int UpdateWindow(InflateStream *stream, const uint8_t *end,
                        uint32_t copy) {
  InflateState *state;
  uint32_t dist;

  state = (InflateState *)stream->state;

  if (state->window == nullptr) {
    state->window =
        (uint8_t *)ZALLOC(stream, 1U << state->window_bits, sizeof(uint8_t));
    if (state->window == nullptr) {
      return 1;
    }
  }

  if (state->window_size == 0) {
    state->window_size = 1U << state->window_bits;
    state->window_next = 0;
    state->window_available = 0;
  }

  if (copy >= state->window_size) {
    memcpy(state->window, end - state->window_size, state->window_size);
    state->window_next = 0;
    state->window_available = state->window_size;
  }
  else {
    dist = state->window_size - state->window_next;
    if (dist > copy) {
      dist = copy;
    }
    memcpy(state->window + state->window_next, end - copy, dist);
    copy -= dist;
    if (copy) {
      memcpy(state->window, end - copy, copy);
      state->window_next = copy;
      state->window_available = state->window_size;
    }
    else {
      state->window_next += dist;
      if (state->window_next == state->window_size) {
        state->window_next = 0;
      }
      if (state->window_available < state->window_size) {
        state->window_available += dist;
      }
    }
  }
  return 0;
}

#define UPDATE_CHECK(check, buf, len)                                          \
  (state->flags ? nnutilZlib_crc32(check, buf, len)                            \
                : nnutilZlib_adler32(check, buf, len))

#define CRC2(check, word)                                                      \
  do {                                                                         \
    hbuf[0] = (uint8_t)(word);                                                 \
    hbuf[1] = (uint8_t)((word) >> 8);                                          \
    check = nnutilZlib_crc32(check, hbuf, 2);                                  \
  } while (0)

#define CRC4(check, word)                                                      \
  do {                                                                         \
    hbuf[0] = (uint8_t)(word);                                                 \
    hbuf[1] = (uint8_t)((word) >> 8);                                          \
    hbuf[2] = (uint8_t)((word) >> 16);                                         \
    hbuf[3] = (uint8_t)((word) >> 24);                                         \
    check = nnutilZlib_crc32(check, hbuf, 4);                                  \
  } while (0)

#define LOAD()                                                                 \
  do {                                                                         \
    put = stream->next_output;                                                 \
    left = stream->output_available;                                           \
    next = stream->next_input;                                                 \
    have = stream->input_available;                                            \
    hold = state->hold;                                                        \
    bits = state->bits;                                                        \
  } while (0)

#define RESTORE()                                                              \
  do {                                                                         \
    stream->next_output = put;                                                 \
    stream->output_available = left;                                           \
    stream->next_input = next;                                                 \
    stream->input_available = have;                                            \
    state->hold = hold;                                                        \
    state->bits = bits;                                                        \
  } while (0)

#define INITBITS()                                                             \
  do {                                                                         \
    hold = 0;                                                                  \
    bits = 0;                                                                  \
  } while (0)

#define PULLBYTE()                                                             \
  do {                                                                         \
    if (have == 0)                                                             \
      goto inf_leave;                                                          \
    have--;                                                                    \
    hold += (uint64_t)(*next++) << bits;                                       \
    bits += 8;                                                                 \
  } while (0)

#define NEEDBITS(n)                                                            \
  do {                                                                         \
    while (bits < (uint32_t)(n))                                               \
      PULLBYTE();                                                              \
  } while (0)

#define BITS(n) ((uint32_t)hold & ((1U << (n)) - 1))

#define DROPBITS(n)                                                            \
  do {                                                                         \
    hold >>= (n);                                                              \
    bits -= (uint32_t)(n);                                                     \
  } while (0)

#define BYTEBITS()                                                             \
  do {                                                                         \
    hold >>= bits & 7;                                                         \
    bits -= bits & 7;                                                          \
  } while (0)

int nnutilZlib_inflate(InflateStream *stream, int flush) {
  Libz_SigloMiddlewareInfo();
  InflateState *state;
  const uint8_t *next;
  uint8_t *put;
  uint32_t have, left;
  uint64_t hold;
  uint32_t bits;
  uint32_t in, out;
  uint32_t copy;
  uint8_t *from;
  InflateCode here;
  InflateCode last;
  uint32_t len;
  int ret;
  uint8_t hbuf[4];
  static const uint16_t order[19] = {16, 17, 18, 0, 8,  7, 9,  6, 10, 5,
                                     11, 4,  12, 3, 13, 2, 14, 1, 15};

  if (CheckState(stream) || stream->next_output == nullptr ||
      (stream->next_input == nullptr && stream->input_available != 0)) {
    return Z_STREAM_ERROR;
  }

  state = (InflateState *)stream->state;
  if (state->mode == TYPE) {
    state->mode = TYPEDO;
  }
  LOAD();
  in = have;
  out = left;
  ret = Z_OK;
  for (;;) {
    switch (state->mode) {
      case HEAD:
        if (state->wrap == 0) {
          state->mode = TYPEDO;
          break;
        }
        NEEDBITS(16);
        if ((state->wrap & 2) && hold == 0x8b1f) {
          if (state->window_bits == 0) {
            state->window_bits = 15;
          }
          state->check = nnutilZlib_crc32(0L, nullptr, 0);
          CRC2(state->check, hold);
          INITBITS();
          state->mode = FLAGS;
          break;
        }
        if (state->header != nullptr) {
          state->header->done = -1;
        }
        if (!(state->wrap & 1) || ((BITS(8) << 8) + (hold >> 8)) % 31) {
          stream->message = (char *)"incorrect header check";
          state->mode = BAD;
          break;
        }
        if (BITS(4) != Z_DEFLATED) {
          stream->message = (char *)"unknown compression method";
          state->mode = BAD;
          break;
        }
        DROPBITS(4);
        len = BITS(4) + 8;
        if (state->window_bits == 0) {
          state->window_bits = len;
        }
        if (len > 15 || len > state->window_bits) {
          stream->message = (char *)"invalid window size";
          state->mode = BAD;
          break;
        }
        state->maximum_distance = 1U << len;
        state->flags = 0;

        stream->checksum = state->check = nnutilZlib_adler32(0L, nullptr, 0);
        state->mode = hold & 0x200 ? DICTID : TYPE;
        INITBITS();
        break;
      case FLAGS:
        NEEDBITS(16);
        state->flags = (int)(hold);
        if ((state->flags & 0xff) != Z_DEFLATED) {
          stream->message = (char *)"unknown compression method";
          state->mode = BAD;
          break;
        }
        if (state->flags & 0xe000) {
          stream->message = (char *)"unknown header flags set";
          state->mode = BAD;
          break;
        }
        if (state->header != nullptr) {
          state->header->text = (int)((hold >> 8) & 1);
        }
        if ((state->flags & 0x0200) && (state->wrap & 4)) {
          CRC2(state->check, hold);
        }
        INITBITS();
        state->mode = TIME;

      case TIME:
        NEEDBITS(32);
        if (state->header != nullptr) {
          state->header->time = hold;
        }
        if ((state->flags & 0x0200) && (state->wrap & 4)) {
          CRC4(state->check, hold);
        }
        INITBITS();
        state->mode = OS;

      case OS:
        NEEDBITS(16);
        if (state->header != nullptr) {
          state->header->extra_flags = (int)(hold & 0xff);
          state->header->operating_system = (int)(hold >> 8);
        }
        if ((state->flags & 0x0200) && (state->wrap & 4)) {
          CRC2(state->check, hold);
        }
        INITBITS();
        state->mode = EXLEN;

      case EXLEN:
        if (state->flags & 0x0400) {
          NEEDBITS(16);
          state->length = (uint32_t)(hold);
          if (state->header != nullptr) {
            state->header->extra_length = (uint32_t)hold;
          }
          if ((state->flags & 0x0200) && (state->wrap & 4)) {
            CRC2(state->check, hold);
          }
          INITBITS();
        }
        else if (state->header != nullptr) {
          state->header->extra = nullptr;
        }
        state->mode = EXTRA;

      case EXTRA:
        if (state->flags & 0x0400) {
          copy = state->length;
          if (copy > have) {
            copy = have;
          }
          if (copy) {
            if (state->header != nullptr && state->header->extra != nullptr &&
                (len = state->header->extra_length - state->length) <
                    state->header->extra_capacity) {
              memcpy(state->header->extra + len, next,
                     len + copy > state->header->extra_capacity
                         ? state->header->extra_capacity - len
                         : copy);
            }
            if ((state->flags & 0x0200) && (state->wrap & 4)) {
              state->check = nnutilZlib_crc32(state->check, next, copy);
            }
            have -= copy;
            next += copy;
            state->length -= copy;
          }
          if (state->length) {
            goto inf_leave;
          }
        }
        state->length = 0;
        state->mode = NAME;

      case NAME:
        if (state->flags & 0x0800) {
          if (have == 0) {
            goto inf_leave;
          }
          copy = 0;
          do {
            len = (uint32_t)(next[copy++]);
            if (state->header != nullptr && state->header->name != nullptr &&
                state->length < state->header->name_capacity) {
              state->header->name[state->length++] = (uint8_t)len;
            }
          } while (len && copy < have);
          if ((state->flags & 0x0200) && (state->wrap & 4)) {
            state->check = nnutilZlib_crc32(state->check, next, copy);
          }
          have -= copy;
          next += copy;
          if (len) {
            goto inf_leave;
          }
        }
        else if (state->header != nullptr) {
          state->header->name = nullptr;
        }
        state->length = 0;
        state->mode = COMMENT;

      case COMMENT:
        if (state->flags & 0x1000) {
          if (have == 0) {
            goto inf_leave;
          }
          copy = 0;
          do {
            len = (uint32_t)(next[copy++]);
            if (state->header != nullptr && state->header->comment != nullptr &&
                state->length < state->header->comment_capacity) {
              state->header->comment[state->length++] = (uint8_t)len;
            }
          } while (len && copy < have);
          if ((state->flags & 0x0200) && (state->wrap & 4)) {
            state->check = nnutilZlib_crc32(state->check, next, copy);
          }
          have -= copy;
          next += copy;
          if (len) {
            goto inf_leave;
          }
        }
        else if (state->header != nullptr) {
          state->header->comment = nullptr;
        }
        state->mode = HCRC;

      case HCRC:
        if (state->flags & 0x0200) {
          NEEDBITS(16);
          if ((state->wrap & 4) && hold != (state->check & 0xffff)) {
            stream->message = (char *)"header crc mismatch";
            state->mode = BAD;
            break;
          }
          INITBITS();
        }
        if (state->header != nullptr) {
          state->header->header_crc = (int)((state->flags >> 9) & 1);
          state->header->done = 1;
        }
        stream->checksum = state->check = nnutilZlib_crc32(0L, nullptr, 0);
        state->mode = TYPE;
        break;
      case DICTID:
        NEEDBITS(32);
        stream->checksum = state->check = ZSWAP32(hold);
        INITBITS();
        state->mode = DICT;

      case DICT:
        if (state->has_dictionary == 0) {
          RESTORE();
          return Z_NEED_DICT;
        }
        stream->checksum = state->check = nnutilZlib_adler32(0L, nullptr, 0);
        state->mode = TYPE;

      case TYPE:
        if (flush == Z_BLOCK || flush == Z_TREES) {
          goto inf_leave;
        }

      case TYPEDO:
        if (state->last) {
          BYTEBITS();
          state->mode = CHECK;
          break;
        }
        NEEDBITS(3);
        state->last = BITS(1);
        DROPBITS(1);
        switch (BITS(2)) {
          case 0:

            state->mode = STORED;
            break;
          case 1:
            SetFixedTables(state);

            state->mode = LEN_;
            if (flush == Z_TREES) {
              DROPBITS(2);
              goto inf_leave;
            }
            break;
          case 2:

            state->mode = TABLE;
            break;
          case 3:
            stream->message = (char *)"invalid block type";
            state->mode = BAD;
        }
        DROPBITS(2);
        break;
      case STORED:
        BYTEBITS();
        NEEDBITS(32);
        if ((hold & 0xffff) != ((hold >> 16) ^ 0xffff)) {
          stream->message = (char *)"invalid stored block lengths";
          state->mode = BAD;
          break;
        }
        state->length = (uint32_t)hold & 0xffff;

        INITBITS();
        state->mode = COPY_;
        if (flush == Z_TREES) {
          goto inf_leave;
        }

      case COPY_:
        state->mode = COPY;

      case COPY:
        copy = state->length;
        if (copy) {
          if (copy > have) {
            copy = have;
          }
          if (copy > left) {
            copy = left;
          }
          if (copy == 0) {
            goto inf_leave;
          }
          memcpy(put, next, copy);
          have -= copy;
          next += copy;
          left -= copy;
          put += copy;
          state->length -= copy;
          break;
        }

        state->mode = TYPE;
        break;
      case TABLE:
        NEEDBITS(14);
        state->length_count = BITS(5) + 257;
        DROPBITS(5);
        state->distance_count = BITS(5) + 1;
        DROPBITS(5);
        state->code_count = BITS(4) + 4;
        DROPBITS(4);
        if (state->length_count > 286 || state->distance_count > 30) {
          stream->message = (char *)"too many length or distance symbols";
          state->mode = BAD;
          break;
        }

        state->have = 0;
        state->mode = LENLENS;

      case LENLENS:
        while (state->have < state->code_count) {
          NEEDBITS(3);
          state->lengths[order[state->have++]] = (uint16_t)BITS(3);
          DROPBITS(3);
        }
        while (state->have < 19) {
          state->lengths[order[state->have++]] = 0;
        }
        state->next = state->codes;
        state->length_codes = (const InflateCode *)(state->next);
        state->length_bits = 7;
        ret =
            nnutilZlib_inflate_table(CODES, state->lengths, 19, &(state->next),
                                     &(state->length_bits), state->work);
        if (ret) {
          stream->message = (char *)"invalid code lengths set";
          state->mode = BAD;
          break;
        }

        state->have = 0;
        state->mode = CODELENS;

      case CODELENS:
        while (state->have < state->length_count + state->distance_count) {
          for (;;) {
            here = state->length_codes[BITS(state->length_bits)];
            if ((uint32_t)(here.bits) <= bits) {
              break;
            }
            PULLBYTE();
          }
          if (here.value < 16) {
            DROPBITS(here.bits);
            state->lengths[state->have++] = here.value;
          }
          else {
            if (here.value == 16) {
              NEEDBITS(here.bits + 2);
              DROPBITS(here.bits);
              if (state->have == 0) {
                stream->message = (char *)"invalid bit length repeat";
                state->mode = BAD;
                break;
              }
              len = state->lengths[state->have - 1];
              copy = 3 + BITS(2);
              DROPBITS(2);
            }
            else if (here.value == 17) {
              NEEDBITS(here.bits + 3);
              DROPBITS(here.bits);
              len = 0;
              copy = 3 + BITS(3);
              DROPBITS(3);
            }
            else {
              NEEDBITS(here.bits + 7);
              DROPBITS(here.bits);
              len = 0;
              copy = 11 + BITS(7);
              DROPBITS(7);
            }
            if (state->have + copy >
                state->length_count + state->distance_count) {
              stream->message = (char *)"invalid bit length repeat";
              state->mode = BAD;
              break;
            }
            while (copy--) {
              state->lengths[state->have++] = (uint16_t)len;
            }
          }
        }

        if (state->mode == BAD) {
          break;
        }

        if (state->lengths[256] == 0) {
          stream->message = (char *)"invalid code -- missing end-of-block";
          state->mode = BAD;
          break;
        }

        state->next = state->codes;
        state->length_codes = (const InflateCode *)(state->next);
        state->length_bits = 9;
        ret = nnutilZlib_inflate_table(LENS, state->lengths,
                                       state->length_count, &(state->next),
                                       &(state->length_bits), state->work);
        if (ret) {
          stream->message = (char *)"invalid literal/lengths set";
          state->mode = BAD;
          break;
        }
        state->distance_codes = (const InflateCode *)(state->next);
        state->distance_bits = 6;
        ret = nnutilZlib_inflate_table(
            DISTS, state->lengths + state->length_count, state->distance_count,
            &(state->next), &(state->distance_bits), state->work);
        if (ret) {
          stream->message = (char *)"invalid distances set";
          state->mode = BAD;
          break;
        }

        state->mode = LEN_;
        if (flush == Z_TREES) {
          goto inf_leave;
        }

      case LEN_:
        state->mode = LEN;

      case LEN:
        if (have >= 6 && left >= 258) {
          RESTORE();
          nnutilZlib_inflate_fast(stream, out);
          LOAD();
          if (state->mode == TYPE) {
            state->back = -1;
          }
          break;
        }
        state->back = 0;
        for (;;) {
          here = state->length_codes[BITS(state->length_bits)];
          if ((uint32_t)(here.bits) <= bits) {
            break;
          }
          PULLBYTE();
        }
        if (here.operation && (here.operation & 0xf0) == 0) {
          last = here;
          for (;;) {
            here = state->length_codes[last.value +
                                       (BITS(last.bits + last.operation) >>
                                        last.bits)];
            if ((uint32_t)(last.bits + here.bits) <= bits) {
              break;
            }
            PULLBYTE();
          }
          DROPBITS(last.bits);
          state->back += last.bits;
        }
        DROPBITS(here.bits);
        state->back += here.bits;
        state->length = (uint32_t)here.value;
        if ((int)(here.operation) == 0) {

          state->mode = LIT;
          break;
        }
        if (here.operation & 32) {

          state->back = -1;
          state->mode = TYPE;
          break;
        }
        if (here.operation & 64) {
          stream->message = (char *)"invalid literal/length code";
          state->mode = BAD;
          break;
        }
        state->extra = (uint32_t)(here.operation) & 15;
        state->mode = LENEXT;

      case LENEXT:
        if (state->extra) {
          NEEDBITS(state->extra);
          state->length += BITS(state->extra);
          DROPBITS(state->extra);
          state->back += state->extra;
        }

        state->was = state->length;
        state->mode = DIST;

      case DIST:
        for (;;) {
          here = state->distance_codes[BITS(state->distance_bits)];
          if ((uint32_t)(here.bits) <= bits) {
            break;
          }
          PULLBYTE();
        }
        if ((here.operation & 0xf0) == 0) {
          last = here;
          for (;;) {
            here = state->distance_codes[last.value +
                                         (BITS(last.bits + last.operation) >>
                                          last.bits)];
            if ((uint32_t)(last.bits + here.bits) <= bits) {
              break;
            }
            PULLBYTE();
          }
          DROPBITS(last.bits);
          state->back += last.bits;
        }
        DROPBITS(here.bits);
        state->back += here.bits;
        if (here.operation & 64) {
          stream->message = (char *)"invalid distance code";
          state->mode = BAD;
          break;
        }
        state->offset = (uint32_t)here.value;
        state->extra = (uint32_t)(here.operation) & 15;
        state->mode = DISTEXT;

      case DISTEXT:
        if (state->extra) {
          NEEDBITS(state->extra);
          state->offset += BITS(state->extra);
          DROPBITS(state->extra);
          state->back += state->extra;
        }

        state->mode = MATCH;

      case MATCH:
        if (left == 0) {
          goto inf_leave;
        }
        copy = out - left;
        if (state->offset > copy) {
          copy = state->offset - copy;
          if (copy > state->window_available) {
            if (state->sane) {
              stream->message = (char *)"invalid distance too far back";
              state->mode = BAD;
              break;
            }
          }
          if (copy > state->window_next) {
            copy -= state->window_next;
            from = state->window + (state->window_size - copy);
          }
          else {
            from = state->window + (state->window_next - copy);
          }
          if (copy > state->length) {
            copy = state->length;
          }
        }
        else {
          from = put - state->offset;
          copy = state->length;
        }
        if (copy > left) {
          copy = left;
        }
        left -= copy;
        state->length -= copy;
        do {
          *put++ = *from++;
        } while (--copy);
        if (state->length == 0) {
          state->mode = LEN;
        }
        break;
      case LIT:
        if (left == 0) {
          goto inf_leave;
        }
        *put++ = (uint8_t)(state->length);
        left--;
        state->mode = LEN;
        break;
      case CHECK:
        if (state->wrap) {
          NEEDBITS(32);
          out -= left;
          stream->total_output += out;
          state->total += out;
          if ((state->wrap & 4) && out) {
            stream->checksum = state->check =
                UPDATE_CHECK(state->check, put - out, out);
          }
          out = left;
          if ((state->wrap & 4) &&
              (state->flags ? hold : ZSWAP32(hold)) != state->check) {
            stream->message = (char *)"incorrect data check";
            state->mode = BAD;
            break;
          }
          INITBITS();
        }
        state->mode = LENGTH;

      case LENGTH:
        if (state->wrap && state->flags) {
          NEEDBITS(32);
          if ((state->wrap & 4) && hold != (state->total & 0xffffffff)) {
            stream->message = (char *)"incorrect length check";
            state->mode = BAD;
            break;
          }
          INITBITS();
        }
        state->mode = DONE;

      case DONE:
        ret = Z_STREAM_END;
        goto inf_leave;
      case BAD:
        ret = Z_DATA_ERROR;
        goto inf_leave;
      case MEM:
        return Z_MEM_ERROR;
      case SYNC:

      default:
        return Z_STREAM_ERROR;
    }
  }

inf_leave:
  RESTORE();
  if (state->window_size ||
      (out != stream->output_available && state->mode < BAD &&
       (state->mode < CHECK || flush != Z_FINISH))) {
    if (UpdateWindow(stream, stream->next_output,
                     out - stream->output_available)) {
      state->mode = MEM;
      return Z_MEM_ERROR;
    }
  }
  in -= stream->input_available;
  out -= stream->output_available;
  stream->total_input += in;
  stream->total_output += out;
  state->total += out;
  if ((state->wrap & 4) && out) {
    stream->checksum = state->check =
        UPDATE_CHECK(state->check, stream->next_output - out, out);
  }
  stream->data_type = (int)state->bits + (state->last ? 64 : 0) +
                      (state->mode == TYPE ? 128 : 0) +
                      (state->mode == LEN_ || state->mode == COPY_ ? 256 : 0);
  if (((in == 0 && out == 0) || flush == Z_FINISH) && ret == Z_OK) {
    ret = Z_BUF_ERROR;
  }
  return ret;
}

int nnutilZlib_inflateEnd(InflateStream *stream) {
  InflateState *state;
  if (CheckState(stream)) {
    return Z_STREAM_ERROR;
  }
  state = (InflateState *)stream->state;
  if (state->window != nullptr) {
    ZFREE(stream, state->window);
  }
  ZFREE(stream, stream->state);
  stream->state = nullptr;

  return Z_OK;
}

int nnutilZlib_inflateGetDictionary(InflateStream *stream, uint8_t *dictionary,
                                    uint32_t *dictLength) {
  InflateState *state;

  if (CheckState(stream)) {
    return Z_STREAM_ERROR;
  }
  state = (InflateState *)stream->state;

  if (state->window_available && dictionary != nullptr) {
    memcpy(dictionary, state->window + state->window_next,
           state->window_available - state->window_next);
    memcpy(dictionary + state->window_available - state->window_next,
           state->window, state->window_next);
  }
  if (dictLength != nullptr) {
    *dictLength = state->window_available;
  }
  return Z_OK;
}

int nnutilZlib_inflateSetDictionary(InflateStream *stream,
                                    const uint8_t *dictionary,
                                    uint32_t dictLength) {
  InflateState *state;
  uint64_t dictid;
  int ret;

  if (CheckState(stream)) {
    return Z_STREAM_ERROR;
  }
  state = (InflateState *)stream->state;
  if (state->wrap != 0 && state->mode != DICT) {
    return Z_STREAM_ERROR;
  }

  if (state->mode == DICT) {
    dictid = nnutilZlib_adler32(0L, nullptr, 0);
    dictid = nnutilZlib_adler32(dictid, dictionary, dictLength);
    if (dictid != state->check) {
      return Z_DATA_ERROR;
    }
  }

  ret = UpdateWindow(stream, dictionary + dictLength, dictLength);
  if (ret) {
    state->mode = MEM;
    return Z_MEM_ERROR;
  }
  state->has_dictionary = 1;

  return Z_OK;
}

int nnutilZlib_inflateGetHeader(InflateStream *stream, GzipHeader *head) {
  InflateState *state;

  if (CheckState(stream)) {
    return Z_STREAM_ERROR;
  }
  state = (InflateState *)stream->state;
  if ((state->wrap & 2) == 0) {
    return Z_STREAM_ERROR;
  }

  state->header = head;
  head->done = 0;
  return Z_OK;
}

void *nnutilZlib_zcalloc(void *, uint32_t count, uint32_t size) {
  return malloc(static_cast<uint32_t>(count * size));
}

void nnutilZlib_zcfree(void *, void *address) {
  free(address);
}
/*
  Adapted from zlib 1.3.1 inflate.c by Mark Adler.
  This altered reconstruction uses SDK exports, callbacks, and C++ ABI types.
  https://github.com/madler/zlib/blob/v1.3.1/inflate.c

  Copyright (C) 1995-2022 Mark Adler
  Copyright (C) 1995-2024 Jean-loup Gailly and Mark Adler

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.
  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:
  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
  Jean-loup Gailly        Mark Adler
  jloup@gzip.org          madler@alumni.caltech.edu
*/
