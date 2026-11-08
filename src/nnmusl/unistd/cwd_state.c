#include <stdint.h>
#include <string.h>

#define HIDDEN __attribute__((visibility("hidden")))

// A path summary, the length sits in the second half word and bit 0 of the
// flags marks a usable path.
struct nnmusl_path_info {
	uint16_t mount_length;
	uint16_t length;
	uint8_t reserved[10];
	uint8_t flags;
	uint8_t reserved2;
};

void nn_os_SdkRecursiveMutex_Lock(void *mutex)
	__asm__("_ZN2nn2os21SdkRecursiveMutexType4LockEv");
void nn_os_SdkRecursiveMutex_Unlock(void *mutex)
	__asm__("_ZN2nn2os21SdkRecursiveMutexType6UnlockEv");
uint32_t nn_fs_GetEntryType(int *type, const char *path)
	__asm__("_ZN2nn2fs12GetEntryTypeEPNS0_18DirectoryEntryTypeEPKc");

HIDDEN struct nnmusl_path_info __nnmusl_path_info(const char *path);
HIDDEN uint32_t __nnmusl_canonicalize_into(char *out, int size,
	const char *path, struct nnmusl_path_info info);
HIDDEN uint32_t __nnmusl_validate_path(const char *path,
	struct nnmusl_path_info info);

extern HIDDEN struct {
	uint8_t mutex[8];
	struct nnmusl_path_info info;
	char path[769];
} __nnmusl_cwd;

HIDDEN uint32_t __nnmusl_copy_cwd(char *buf, size_t size)
{
	uint32_t result;

	nn_os_SdkRecursiveMutex_Lock(__nnmusl_cwd.mutex);
	if (!(__nnmusl_cwd.info.flags & 1))
		result = 0xe27;
	else if (size <= __nnmusl_cwd.info.length)
		result = 0x1627;
	else {
		memcpy(buf, __nnmusl_cwd.path, __nnmusl_cwd.info.length + 1);
		result = 0;
	}
	nn_os_SdkRecursiveMutex_Unlock(__nnmusl_cwd.mutex);
	return result;
}

// The new directory must canonicalize, validate and exist as a directory.
HIDDEN uint32_t __nnmusl_set_cwd(const char *path)
{
	char buffer[769];
	uint32_t result;

	nn_os_SdkRecursiveMutex_Lock(__nnmusl_cwd.mutex);
	result = __nnmusl_canonicalize_into(buffer, sizeof buffer, path,
		__nnmusl_path_info(path));
	if (result) {
		if (result == 0x1627) result = 0x827;
		goto unlock;
	}

	struct nnmusl_path_info info = __nnmusl_path_info(buffer);
	result = __nnmusl_validate_path(buffer, info);
	if (result) goto unlock;

	int type = 0;
	result = nn_fs_GetEntryType(&type, buffer);
	if (result) goto unlock;
	if (type) {
		result = 0x1e27;
		goto unlock;
	}

	__nnmusl_cwd.info = info;
	memcpy(__nnmusl_cwd.path, buffer, info.length + 1);
	result = 0;
unlock:
	nn_os_SdkRecursiveMutex_Unlock(__nnmusl_cwd.mutex);
	return result;
}

// Length of a well formed UTF-8 sequence of two to four bytes, 0 otherwise.
HIDDEN size_t __nnmusl_utf8_sequence_length(const unsigned char *s)
{
	unsigned c = s[0];

	if ((c & 0xe0) == 0xc0) {
		if ((signed char)s[1] > -65) return 0;
		return c & 0x1e ? 2 : 0;
	}
	if ((c & 0xf0) == 0xe0) {
		if ((s[1] & 0xc0) != 0x80 || (signed char)s[2] > -65) return 0;
		unsigned v = (s[1] & 0x3f) | (c & 0xf) << 6;
		if (v < 0x20 || (v << 6) - 0xe000 >= -0x800u) return 0;
		return 3;
	}
	if ((c & 0xf8) == 0xf0) {
		if ((s[1] & 0xc0) != 0x80 || (signed char)s[2] > -65 ||
			(signed char)s[3] > -65)
			return 0;
		unsigned v = (s[1] & 0x3f) | (c & 7) << 6;
		if (v < 0x10 || v >= 0x110) return 0;
		return 4;
	}
	return 0;
}
