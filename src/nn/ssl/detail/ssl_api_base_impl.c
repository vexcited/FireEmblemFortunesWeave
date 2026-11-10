#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_e88ec0;
void nn_ssl_detail_SslApiBase_Destroy_SslApiBase(void* this_);

void nn_ssl_detail_SslApiBase_Destroy_SslApiBase(void* this_)
{
  *(_QWORD*)this_ = SdkData_e88ec0 + 16;
}

#pragma GCC visibility pop
