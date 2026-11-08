#pragma once

#include <stdint.h>

#define NNMUSL_HIDDEN __attribute__((visibility("hidden")))

struct nnmusl_slot_reference {
	void *slot;
	void *state;
	uint16_t flags;
	uint16_t reserved[3];
};

#define NNMUSL_REFERENCE_VALID(reference) ((reference).flags & 1)
#define NNMUSL_SLOT_BITS(reference) (*(const uint32_t *)(reference).slot)
#define NNMUSL_SLOT_BYTE(reference, n) (((const uint8_t *)(reference).slot)[n])

NNMUSL_HIDDEN uint32_t __nnmusl_fd_lookup(unsigned fd);
NNMUSL_HIDDEN struct nnmusl_slot_reference __nnmusl_fd_get(int fd);
NNMUSL_HIDDEN void __nnmusl_slot_release(
	struct nnmusl_slot_reference *reference);
NNMUSL_HIDDEN unsigned __nnmusl_fd_kind(struct nnmusl_slot_reference reference);
NNMUSL_HIDDEN uint16_t __nnmusl_fd_native(
	struct nnmusl_slot_reference reference);
NNMUSL_HIDDEN int __nnmusl_fs_result_errno(uint64_t result);

#define NNMUSL_IS_SOCKET(fd) ((uint16_t)__nnmusl_fd_lookup(fd) == 4)
