#include <stdint.h>

__attribute__((visibility("hidden"))) int __nnmusl_fs_result_errno(uint64_t result);

__attribute__((visibility("hidden"))) int __nnmusl_result_to_errno(uint32_t result)
{
	return __nnmusl_fs_result_errno(result);
}
