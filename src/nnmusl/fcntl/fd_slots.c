#include <stdint.h>
#include <string.h>
#include <errno.h>

#define HIDDEN __attribute__((visibility("hidden")))

// Each slot packs its kind, a reference count and an open count.
struct nnmusl_slot {
	uint32_t kind : 2;
	uint32_t references : 10;
	uint32_t opens : 10;
	uint32_t reserved : 10;
};

// Each kind stores its states in an array starting at a given slot index.
struct nnmusl_kind_info {
	uint8_t *base;
	int16_t first;
	int16_t reserved;
	int16_t state_size;
	int16_t reserved2;
};

struct nnmusl_slot_reference {
	struct nnmusl_slot *slot;
	void *state;
	uint16_t flags;
	uint16_t reserved[3];
};

void nn_os_SdkMutex_Lock(void *mutex) __asm__("_ZN2nn2os12SdkMutexType4LockEv");
void nn_os_SdkMutex_Unlock(void *mutex)
	__asm__("_ZN2nn2os12SdkMutexType6UnlockEv");

extern HIDDEN uint8_t __nnmusl_slot_mutex[];
extern HIDDEN struct nnmusl_slot __nnmusl_slots[];
extern HIDDEN const struct nnmusl_kind_info __nnmusl_kind_info[4];

HIDDEN uint32_t __nnmusl_fd_lookup(unsigned fd);

// Resolves a descriptor to its slot and state and takes a reference.
HIDDEN struct nnmusl_slot_reference __nnmusl_fd_get(int fd)
{
	struct nnmusl_slot_reference reference;

	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	uint32_t lookup = __nnmusl_fd_lookup(fd);
	if ((uint16_t)lookup - 4u <= -4u) {
		reference = (struct nnmusl_slot_reference){ 0 };
		errno = EBADF;
		nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
		return reference;
	}

	int16_t index = lookup >> 16;
	struct nnmusl_slot *slot = &__nnmusl_slots[index];
	const struct nnmusl_kind_info *info = &__nnmusl_kind_info[slot->kind];
	reference.slot = slot;
	reference.state = info->base +
		(int16_t)(index - info->first) * info->state_size;
	reference.flags = (lookup >> 15) | 1;
	reference.reserved[0] = reference.reserved[1] = reference.reserved[2] = 0;
	slot->references++;
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
	return reference;
}

HIDDEN int __nnmusl_slot_retain(int16_t *out, int16_t index)
{
	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	__nnmusl_slots[index].references++;
	__nnmusl_slots[index].opens++;
	*out = index;
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
	return 0;
}

// The directory table keeps its own copy of the retain routine.
HIDDEN int __nnmusl_slot_retain_directory(int16_t *out, int16_t index)
{
	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	__nnmusl_slots[index].references++;
	__nnmusl_slots[index].opens++;
	*out = index;
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
	return 0;
}

// Dropping the last reference wipes the state and frees the slot.
HIDDEN void __nnmusl_slot_release(struct nnmusl_slot_reference *reference)
{
	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	if (reference->flags & 1) {
		struct nnmusl_slot *slot = reference->slot;
		unsigned references = slot->references;
		slot->references = references - 1;
		if (references <= 1) {
			memset(reference->state, 0,
				__nnmusl_kind_info[reference->slot->kind].state_size);
			*(uint32_t *)reference->slot = 0;
		}
	}
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
}
