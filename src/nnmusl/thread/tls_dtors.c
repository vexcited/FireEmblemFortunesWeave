#include <stddef.h>
#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

void nn_os_SdkMutex_Lock(void *mutex) __asm__("_ZN2nn2os12SdkMutexType4LockEv");
void nn_os_SdkMutex_Unlock(void *mutex)
	__asm__("_ZN2nn2os12SdkMutexType6UnlockEv");
void nnosFreeMemoryForThreadLocal(void *p, size_t size);

struct nnmusl_tls_dtor {
	void (*func)(void *);
	void *arg;
	void *reserved;
	size_t module;
	struct nnmusl_tls_dtor *next;
	struct nnmusl_tls_dtor *prev;
};

struct nnmusl_tls_module {
	uint8_t reserved[0x30];
	int next_index;
	uint8_t reserved2[0xc];
	uintptr_t begin;
	uint8_t reserved3[0x30];
	uintptr_t end;
	uint8_t reserved4[0x98];
	void *handle;
	size_t pending_dtors;
};

extern HIDDEN int __nnmusl_tls_module_count;
extern HIDDEN struct {
	uint32_t mutex;
	uint32_t modules_mutex;
	uint8_t reserved[8];
	struct nnmusl_tls_module **modules;
} __nnmusl_tls;

// Each thread keeps its pending destructors behind a slot of its thread
// local area.
static inline struct nnmusl_tls_dtor **thread_dtors(void)
{
	uintptr_t tp = __builtin_arm_rsr64("tpidrro_el0");
	return *(struct nnmusl_tls_dtor ***)(tp + 0x1f0);
}

HIDDEN void __nnmusl_run_thread_dtors(void)
{
	struct nnmusl_tls_dtor **head = thread_dtors();

	nn_os_SdkMutex_Lock(&__nnmusl_tls.mutex);
	for (struct nnmusl_tls_dtor *dtor; (dtor = *head); ) {
		*head = dtor->next;
		if (dtor->next) dtor->next->prev = dtor->prev;
		nn_os_SdkMutex_Unlock(&__nnmusl_tls.mutex);
		dtor->func(dtor->arg);
		nn_os_SdkMutex_Lock(&__nnmusl_tls.mutex);

		size_t index = dtor->module;
		nn_os_SdkMutex_Lock(&__nnmusl_tls.modules_mutex);
		struct nnmusl_tls_module *module = __nnmusl_tls.modules[index];
		nn_os_SdkMutex_Unlock(&__nnmusl_tls.modules_mutex);
		if (module) {
			module->pending_dtors--;
			nnosFreeMemoryForThreadLocal(dtor, sizeof *dtor);
		}
		nn_os_SdkMutex_Unlock(&__nnmusl_tls.mutex);
		nn_os_SdkMutex_Lock(&__nnmusl_tls.mutex);
	}
	nn_os_SdkMutex_Unlock(&__nnmusl_tls.mutex);
}

// Counts the destructors still pending for the module that owns an address
// or handle.
size_t __nnmusl_get_number_uncalled_tls_dtors(void *dso)
{
	uintptr_t address = (uintptr_t)dso;
	size_t count = 0;
	int start = 0;

	nn_os_SdkMutex_Lock(&__nnmusl_tls.mutex);
	for (;;) {
		nn_os_SdkMutex_Lock(&__nnmusl_tls.modules_mutex);
		int last = __nnmusl_tls_module_count > start ?
			__nnmusl_tls_module_count : start;
		struct nnmusl_tls_module *module = 0;
		for (long i = start; i < last; i++)
			if ((module = __nnmusl_tls.modules[i + 1])) break;
		if (!module) {
			nn_os_SdkMutex_Unlock(&__nnmusl_tls.modules_mutex);
			break;
		}
		nn_os_SdkMutex_Unlock(&__nnmusl_tls.modules_mutex);

		if (dso != module->handle) {
			start = module->next_index;
			if (module->begin > address || address > module->end)
				continue;
		}
		count = module->pending_dtors;
		break;
	}
	nn_os_SdkMutex_Unlock(&__nnmusl_tls.mutex);
	return count;
}
