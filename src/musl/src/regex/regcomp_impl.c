#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void* __tre_mem_alloc_impl(__int64, int, void* this_, unsigned __int64,
                           unsigned __int64);
void* tre_ast_new_iter(__int64 a1, __int64 a2, int a3, int a4, char a5);

void* tre_ast_new_iter(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  void* v10;
  void* v11;
  void* v12;

  v10 = __tre_mem_alloc_impl(a1, 0, nullptr, 1u, 0x18u);
  v11 = __tre_mem_alloc_impl(a1, 0, nullptr, 1u, 0x30u);
  v12 = nullptr;
  if (v10 != nullptr && v11 != nullptr) {
    v12 = v11;
    *(_DWORD*)v11 = 2;
    *((_QWORD*)v11 + 1) = v10;
    *((_QWORD*)v11 + 2) = -1;
    *(_QWORD*)v10 = a2;
    *((_DWORD*)v10 + 2) = a3;
    *((_DWORD*)v10 + 3) = a4;
    *((_BYTE*)v10 + 16) = *((_BYTE*)v10 + 16) & 0xFE | a5;
    *((_DWORD*)v11 + 6) = *(_DWORD*)(a2 + 24);
  }
  return v12;
}

#pragma GCC visibility pop
