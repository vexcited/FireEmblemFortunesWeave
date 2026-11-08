#include <errno.h>
#include <stdint.h>

// Maps an nn::fs result to errno, the module sits in the low 9 bits and the
// description in the next 13.
__attribute__((visibility("hidden"))) int __nnmusl_fs_result_errno(uint64_t
	result)
{
	uint32_t value = result;
	uint32_t inner = result & 0x3fffff;
	uint32_t module = value & 0x1ff;
	uint32_t description = (value >> 9) & 0x1fff;

	if (value == 0) return EPERM;
	if (inner == 0x427) return EINVAL;
	if (module == 0x27 && description - 3 < 3) return ENAMETOOLONG;
	if (module == 0x27 && description - 6 < 5) return ENOENT;

	switch (inner) {
	case 0x202: return ENOENT;
	case 0xe02: return EBUSY;
	case 0x1002: return EEXIST;
	case 0x1627: return ERANGE;
	case 0x1827: return EINVAL;
	case 0x1a27: return EBADF;
	case 0x1c27: return ENOTSUP;
	case 0x1e27: return ENOTDIR;
	}

	if (module == 2 && ((value >> 9) & 0x1ffc) - 0xc80 < 0x12c) return ENOMEM;
	if (module == 2 && ((value >> 9) & 0x1ffe) - 0x1e < 0x10) return ENOSPC;
	return inner == 0x24c002 ? EIO : EPERM;
}
