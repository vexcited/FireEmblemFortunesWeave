#include <errno.h>
#include <limits.h>
#include <stdint.h>
#include <unistd.h>

#define HIDDEN __attribute__((visibility("hidden")))

struct nn_os_memory_info {
	uint64_t total_available;
	uint64_t reserved[6];
};

void nn_os_QueryMemoryInfo(struct nn_os_memory_info *info)
	__asm__("_ZN2nn2os15QueryMemoryInfoEPNS0_10MemoryInfoE");
uint64_t nn_os_GetThreadAvailableCoreMask(void)
	__asm__("_ZN2nn2os26GetThreadAvailableCoreMaskEv");

HIDDEN int __nnmusl_fs_result_errno(uint64_t result);

static inline long __nnmusl_physical_pages(void)
{
	struct nn_os_memory_info info = { 0 };
	nn_os_QueryMemoryInfo(&info);
	return info.total_available >> 12;
}

static inline long __nnmusl_processor_count(void)
{
	return __builtin_popcountll(nn_os_GetThreadAvailableCoreMask());
}

// The limits are fixed for the platform, names nnmusl does not know fail
// with the invalid argument result.
long sysconf(int name)
{
	switch (name) {
	case 0:
		return 0x20000;
	case 1:
		return 25;
	case 2:
		return 100;
	case 3: case 28: case 34: case 35: case 42: case 72: case 87:
	case 245:
		return 32;
	case 4:
		return 2040;
	case 5: case 71:
		return 256;
	case 6: case 27: case 31: case 243: case 244:
		return 8;
	case 7: case 8: case 9: case 10: case 12: case 13: case 14: case 15:
	case 16: case 17: case 18: case 19: case 20: case 22: case 32:
	case 47: case 48: case 49: case 50: case 51: case 52: case 69:
	case 70: case 76: case 80: case 81: case 82: case 88: case 92:
	case 94: case 95: case 97: case 98: case 99: case 100: case 125:
	case 126: case 128: case 129: case 130: case 131: case 132: case 138:
	case 139: case 154: case 157: case 159: case 160: case 161: case 164:
	case 165: case 168: case 169: case 170: case 171: case 172: case 174:
	case 175: case 176: case 177: case 179: case 181: case 182: case 183:
	case 184: case 237: case 238: case 240: case 246: case 247: case 248:
		return -1;
	case 11: case 21: case 29: case 46: case 67: case 68: case 77:
	case 78: case 79: case 133: case 137: case 149: case 153: case 235:
	case 236:
		return 200809;
	case 23: case 40:
		return 2;
	case 24: case 91: case 93: case 127: case 155: case 178: case 239:
		return 1;
	case 25:
		return 0;
	case 26: case 33:
		return INT_MAX;
	case 30: case 43: case 75:
		return 4096;
	case 36: case 38:
		return 99;
	case 37:
		return 2048;
	case 39:
		return 1000;
	case 44: case 180:
		return 255;
	case 60:
		return 1024;
	case 73: case 241:
		return 4;
	case 74:
		return 128;
	case 83: case 84:
		return __nnmusl_processor_count();
	case 85: case 86:
		return __nnmusl_physical_pages();
	case 89: case 90:
		return 700;
	case 109:
		return 20;
	case 173:
		return 40;
	case 242:
		return 30;
	case 249:
		return 6144;
	case 250:
		return 12288;
	default:
		errno = __nnmusl_fs_result_errno(0x1827);
		return -1;
	}
}
