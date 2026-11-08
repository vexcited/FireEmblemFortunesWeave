#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

// A descriptor entry points at its packed flags and at the state of the
// object behind it, a file handle with its position or a native socket.
struct nnmusl_fd_state {
	uint64_t handle;
	int64_t position;
	uint64_t context;
	struct { uint64_t low, high; } extra;
};

struct nnmusl_fd_entry {
	const uint8_t *flags;
	struct nnmusl_fd_state *state;
};

HIDDEN void *__nnmusl_fd_state(struct nnmusl_fd_entry *entry)
{
	return entry->state;
}

HIDDEN uint64_t __nnmusl_fd_handle(struct nnmusl_fd_entry *entry)
{
	return entry->state->handle;
}

HIDDEN int64_t __nnmusl_fd_position(struct nnmusl_fd_entry *entry)
{
	return entry->state->position;
}

HIDDEN void __nnmusl_fd_set_position(struct nnmusl_fd_entry *entry,
	int64_t position)
{
	entry->state->position = position;
}

HIDDEN void __nnmusl_fd_advance(struct nnmusl_fd_entry *entry, int64_t count)
{
	entry->state->position += count;
}

HIDDEN uint16_t __nnmusl_fd_native(struct nnmusl_fd_entry *entry)
{
	return *(const uint16_t *)&entry->state->handle;
}

HIDDEN void __nnmusl_fd_set_handle(struct nnmusl_fd_entry *entry,
	uint64_t handle)
{
	entry->state->handle = handle;
}

HIDDEN uint64_t __nnmusl_fd_context(struct nnmusl_fd_entry *entry)
{
	return entry->state->context;
}

HIDDEN struct nnmusl_fd_extra {
	uint64_t low, high;
} __nnmusl_fd_extra(struct nnmusl_fd_entry *entry)
{
	struct nnmusl_fd_extra extra = {
		entry->state->extra.low, entry->state->extra.high
	};
	return extra;
}

HIDDEN unsigned __nnmusl_fd_kind(struct nnmusl_fd_entry *entry)
{
	return *(const uint16_t *)entry->flags & 3;
}

HIDDEN unsigned __nnmusl_fd_append(struct nnmusl_fd_entry *entry)
{
	return entry->flags[2] >> 7;
}

HIDDEN unsigned __nnmusl_fd_nonblock(struct nnmusl_fd_entry *entry)
{
	return entry->flags[3] & 1;
}

// A missing save data mount reads as ENOENT, everything else as success.
HIDDEN int __nnmusl_fs_missing_mount(uint64_t result)
{
	return (result & 0x3fffff) == 0x177a02 ? 2 : 0;
}

// Each clock picks its source once, these flags lock the choice in.
extern HIDDEN uint8_t __nnmusl_clock_source_set[5];

HIDDEN void __nnmusl_lock_clock_sources(void)
{
	__nnmusl_clock_source_set[0] = 1;
	__nnmusl_clock_source_set[4] = 1;
}
