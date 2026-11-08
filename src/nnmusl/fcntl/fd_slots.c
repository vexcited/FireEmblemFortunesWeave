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
	int16_t count;
	int16_t state_size;
	int16_t reserved;
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

_Noreturn void nn_detail_UnexpectedDefaultImpl(void)
	__asm__("_ZN2nn6detail21UnexpectedDefaultImplEv");
HIDDEN void __nnmusl_close_file_handle(void *state);
HIDDEN void __nnmusl_close_directory(void *state);
HIDDEN int __nnmusl_fd_install(unsigned kind, unsigned index);

#define SLOT_HANDLE_OPEN (1u << 22)

// The counters are updated without masking, an underflow spills into the
// neighbouring bits like it does in the original.
#define SLOT_WORD(slot) (*(uint32_t *)(slot))
#define SLOT_ADD_REFERENCES(word, n) \
	(((word) & 0xfffff003) | (((word) & 0xffc) + (n)))
#define SLOT_ADD_OPENS(word, n) \
	(((word) & 0xffc00fff) | (((word) & 0x3ff000) + (n)))

// Drops one open of a slot, the last one closes the file system handle and
// the last reference wipes the state.
HIDDEN __attribute__((noinline)) int __nnmusl_slot_close(
	struct nnmusl_slot_reference *reference)
{
	if (!(reference->flags & 1)) return EBADF;

	SLOT_WORD(reference->slot) = SLOT_ADD_REFERENCES(SLOT_WORD(reference->slot),
		-4);
	SLOT_WORD(reference->slot) = SLOT_ADD_OPENS(SLOT_WORD(reference->slot),
		-0x1000);
	struct nnmusl_slot *slot = reference->slot;
	uint32_t bits = SLOT_WORD(slot);
	if (bits & 0x3ff000) {
		if (bits & 0xffc) return 0;
	} else {
		unsigned low = bits & 0xffff;
		if (bits & SLOT_HANDLE_OPEN) {
			switch (low & 3) {
			case 0:
				break;
			case 1:
				__nnmusl_close_file_handle(reference->state);
				break;
			case 2:
				__nnmusl_close_directory(reference->state);
				break;
			default:
				nn_detail_UnexpectedDefaultImpl();
			}
			*(uint32_t *)slot &= ~SLOT_HANDLE_OPEN;
		}
		if (low > 3) return 0;
		bits = *(uint32_t *)reference->slot;
	}

	memset(reference->state, 0, __nnmusl_kind_info[bits & 3].state_size);
	*(uint32_t *)reference->slot = 0;
	return 0;
}

HIDDEN int __nnmusl_slot_close_index(int16_t index)
{
	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	struct nnmusl_slot *slot = &__nnmusl_slots[index];
	const struct nnmusl_kind_info *info = &__nnmusl_kind_info[slot->kind];
	struct nnmusl_slot_reference reference = {
		slot,
		info->base + (int16_t)(index - info->first) * info->state_size,
		(uint16_t)(index << 1 | 1),
	};
	int ret = __nnmusl_slot_close(&reference);
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
	return ret;
}

// The directory table keeps its own copy of the close routine.
HIDDEN int __nnmusl_slot_close_index_directory(
	int16_t index)
{
	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	struct nnmusl_slot *slot = &__nnmusl_slots[index];
	const struct nnmusl_kind_info *info = &__nnmusl_kind_info[slot->kind];
	struct nnmusl_slot_reference reference = {
		slot,
		info->base + (int16_t)(index - info->first) * info->state_size,
		(uint16_t)(index << 1 | 1),
	};
	int ret = __nnmusl_slot_close(&reference);
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
	return ret;
}

// Takes a free slot of the requested kind, copies the state in and installs
// a descriptor for it, undoing everything if the table is full.
HIDDEN int __nnmusl_fd_allocate(const void *state, const uint32_t *flags)
{
	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	uint32_t bits = *flags;
	const struct nnmusl_kind_info *info = &__nnmusl_kind_info[bits & 3];
	// The range word keeps the count above the first index, the search
	// steps the whole word and only looks at its low half.
	int32_t range = *(const int32_t *)&info->first;
	int16_t end = (int16_t)((range + (range << 16)) >> 16);
	int32_t index = range;
	int ret;

	if (end <= (int16_t)range) goto full;
	while (SLOT_WORD(&__nnmusl_slots[(int16_t)index]) & 0xffc) {
		index++;
		if (end <= (int16_t)index) goto full;
	}
	if (index & 0x8000) goto full;

	struct nnmusl_slot *slot = &__nnmusl_slots[(uint16_t)index];
	SLOT_WORD(slot) = bits;
	int16_t offset = index - range;
	uint8_t *target = info->base + offset * info->state_size;
	memcpy(target, state, info->state_size);
	SLOT_WORD(slot) = SLOT_ADD_REFERENCES(SLOT_WORD(slot), 4);
	SLOT_WORD(slot) = SLOT_ADD_OPENS(SLOT_WORD(slot), 0x1000);

	unsigned kind;
	switch (bits & 3) {
	case 0:
		kind = 1;
		break;
	case 1:
		kind = 2;
		break;
	case 2:
		kind = 3;
		break;
	default:
		nn_detail_UnexpectedDefaultImpl();
	}
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);

	ret = __nnmusl_fd_install(kind, index);
	if (ret >= 0) return ret;

	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	struct nnmusl_slot_reference reference = {
		slot, target, (uint16_t)(index << 1 | 1), { 0 }
	};
	__nnmusl_slot_close(&reference);
	goto unlock;

full:
	errno = ENFILE;
	ret = -1;
unlock:
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
	return ret;
}
