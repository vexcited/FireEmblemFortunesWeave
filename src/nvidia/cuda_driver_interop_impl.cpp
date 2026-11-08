#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidContext = 201;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotFound = 500;
constexpr CUresult kPeerAccessNotEnabled = 705;
constexpr CUresult kNotPermitted = 801;

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);
[[gnu::visibility("hidden")]] CUresult CudaReleaseThreadState(U64 state);

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_86e90(U64*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_df0b0(U64, U64*,
  U64*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_ea9e0(U64*, U64,
  U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_f2fe0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_f3360(U64, U32, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_102e00(U64);
[[gnu::visibility("hidden")]] void CudaLockPair(U64, U64, U64, U64, U64);
[[gnu::visibility("hidden")]] void CudaUnlockPair(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1092a0(U64*, U64,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_109700(U64, U64,
  U64*, U64*, U64*);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_10e3a0(U64, U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_10e3d0(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1128f0(U64, U64, U64,
  U32, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11a390(U64, U64*,
  U64*, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11a680(U64*, U64*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11acc0(U64,
  const char*, U64, U64, U64*, U64*, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11e860(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11ecb0(U64, U64*, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11edf0(U64, U64*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1b4600(U64**);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1b46b0(U64**, U64,
  U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b46f0(U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b4700(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b4750(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1db1b0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1dba10(U64, U64);

namespace {

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::always_inline]] inline U64 ContextLock(U64 context) {
  return context != 0 ? context + 0x18 : 0;
}

// Binding needs the array context to be the reference one or a peer.
template <typename Bind>
[[gnu::always_inline]] inline CUresult BindArray(U64 referenceContext,
  U64* array, U64 device, Bind bind) {
  CudaLockPair(ContextLock(array[0]), ContextLock(referenceContext), 0, 0,
    0);
  CUresult result;
  if (CudaDriverRoutine_10e3d0(device, At<U64>(referenceContext, 0x40)) ==
    0) {
    result = kNotPermitted;
  }
  else if (referenceContext == array[0] ||
    CudaDriverRoutine_10e3a0(referenceContext, array[0]) != 0) {
    bind();
    result = 0;
  }
  else {
    result = kPeerAccessNotEnabled;
  }

  CudaUnlockPair(ContextLock(array[0]), ContextLock(referenceContext), 0);
  return result;
}

template <typename Bind>
[[gnu::always_inline]] inline CUresult SetTexRefArray(U64 texture,
  U64* array, U32 flags, U64 device, Bind bind) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_11e860(state, &context, texture, 0);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_86e90(array, 0);
  if (result != 0) {
    return result;
  }

  if (flags > 1) {
    return kInvalidValue;
  }

  return BindArray(At<U64>(texture, 8), array, device, bind);
}

}

// Arrays keep their device at 0x50, mipmapped arrays at 0x58.
CUresult cuTexRefSetArray_impl(U64 texture, U64* array, U32 flags) {
  return SetTexRefArray(texture, array, flags, array[10],
    [&]() __attribute__((always_inline)) {
      CudaDriverRoutine_11ecb0(texture, array, flags);
    });
}

CUresult cuTexRefSetMipmappedArray_impl(U64 texture, U64* array,
  U32 flags) {
  return SetTexRefArray(texture, array, flags, array[11],
    [&]() __attribute__((always_inline)) {
      CudaDriverRoutine_11edf0(texture, array, flags);
    });
}

// Only surface capable arrays, flagged at 0x20, can back a surface.
CUresult cuSurfRefSetArray_impl(U64* surface, U64* array, U32 flags) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_11a390(state, &context, surface, 0);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_86e90(array, 0);
  if (result != 0) {
    return result;
  }

  if (flags != 0 || (At<U32>(reinterpret_cast<U64>(array), 0x20) & 2) == 0) {
    return kInvalidValue;
  }

  return BindArray(surface[0], array, array[10],
    [&]() __attribute__((always_inline)) {
      CudaDriverRoutine_11a680(surface, array, 0);
    });
}

CUresult cuMemPoolExportToShareableHandle_impl(U64 pHandle, U64 pool,
  U32 type, U64 flags) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  if (pHandle == 0 || pool == 0 || flags != 0) {
    if (pool == 0) {
      CudaLog("CUDA", 0, "Parameter pool cannot be NULL");
    }

    if (pHandle == 0) {
      CudaLog("CUDA", 0, "Parameter handle_out cannot be NULL");
    }

    if (flags != 0) {
      CudaLog("CUDA", 0, "Parameter flags must be 0");
    }

    return kInvalidValue;
  }

  // The record keeps a destroyed flag at 0x74 and the requested handle
  // types at 0x98.
  const U64 record = At<U64>(pool, 0x60);
  if (record == 0) {
    CudaLog("CUDA", 0, "Only memory pools created with the pool creation "
      "API can be exported");
  }
  else if (At<U8>(record, 0x74) != 0 ||
    CudaDriverRoutine_f2fe0(At<U64>(pool, 0x60)) == 0) {
    CudaLog("CUDA", 0, "Only memory pools created with the pool creation "
      "API and pools that have not been destroyed can be exported");
  }
  else if (__builtin_expect(type <= 8 && ((1 << type) & 0x106) != 0, 1)) {
    if ((At<U32>(record, 0x98) & type) != 0) {
      return CudaDriverRoutine_f3360(record, type, pHandle);
    }

    CudaLog("CUDA", 0, "Handle type was not requested during pool creation");
  }
  else {
    CudaLog("CUDA", 0, "Invalid handletype requested");
  }

  return kInvalidValue;
}

namespace {

// Buffer objects are found in the context table at 0x3e68, green contexts
// and streams of another kind are refused.
template <typename Use>
[[gnu::always_inline]] inline CUresult WithBufferObject(U32 buffer, Use use) {
  U64 stream = 0;
  U64* object = nullptr;
  U64 green = 0;
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_df0b0(state, &context, &green, 0);
  if (result != 0) {
    return result;
  }

  if (green != 0) {
    return kInvalidContext;
  }

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_1128f0(state, context, 0, 2, &stream);
  if (result != 0) {
    return result;
  }

  if (**reinterpret_cast<U32**>(stream + 0x10) == 1) {
    return kInvalidHandle;
  }

  result = CudaDriverRoutine_1b46b0(&object, At<U64>(context, 0x3e68),
    buffer);
  if (object == nullptr) {
    return result;
  }

  const U64 record = *object;
  CudaDriverRoutine_1b4700(record);
  result = use(record, object, stream);
  CudaDriverRoutine_1b4750(record);
  return result;
}

}

CUresult cuGLUnmapBufferObject_impl(U32 buffer) {
  return WithBufferObject(buffer, [&](U64 record, U64*& object, U64 stream)
    __attribute__((always_inline)) {
    using Unmap = CUresult (*)(U64, U32, U64**, U64, U32);
    return At<Unmap>(At<U64>(record, 0x30), 0x18)(record, 1, &object, stream,
      1);
  });
}

CUresult cuGLSetBufferObjectMapFlags_impl(U32 buffer, U32 flags) {
  return WithBufferObject(buffer, [&](U64 record, U64*& object, U64)
    __attribute__((always_inline)) {
    if (flags > 2) {
      return kInvalidValue;
    }

    using SetFlags = CUresult (*)(U64, U64*, U32);
    return At<SetFlags>(At<U64>(record, 0x30), 0x50)(record, object, flags);
  });
}

CUresult cuGLUnregisterBufferObject_impl(U32 buffer) {
  return WithBufferObject(buffer, [&](U64 record, U64*& object, U64)
    __attribute__((always_inline)) {
    const CUresult result = CudaDriverRoutine_1b4600(&object);
    CudaDriverRoutine_1b46f0(At<U64>(At<U64>(record, 0), 0x3e68), buffer);
    return result;
  });
}

// Library globals must resolve to tracked device memory.
CUresult cuLibraryGetGlobal_impl(U64 pPointer, U64 pSize, U64 library,
  const char* name) {
  U64 isTracked = 0;
  if ((pPointer | pSize) == 0) {
    CudaLog("CUDA", 0, "dptr and bytes cannot be NULL\n");
    return kInvalidValue;
  }

  if (name == nullptr) {
    CudaLog("CUDA", 0, "name cannot be NULL\n");
    return kInvalidValue;
  }

  if (*name == '\0') {
    CudaLog("CUDA", 0, "name cannot be empty\n");
    return kInvalidValue;
  }

  if (library == 0) {
    CudaLog("CUDA", 0, "library cannot be NULL\n");
    return kInvalidHandle;
  }

  U64 context;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  U64 module;
  result = CudaDriverRoutine_ea9e0(&module, library, context);
  if (result != 0) {
    return result;
  }

  U64 pointer;
  U64 size;
  result = CudaDriverRoutine_11acc0(module + 0x28, name, 0, 0, &pointer,
    &size, &isTracked);
  if (result != 0) {
    return result;
  }

  CudaDriverRoutine_1dba10(At<U64>(context, 0x50), pointer);
  if (isTracked == 0) {
    CudaLog("CUDA", 0, "Global host symbol (%s) not tracked by CUDA\n",
      name);
    return kInvalidValue;
  }

  if ((CudaDriverRoutine_1db1b0() & 0x7c0000000000000) == 0) {
    return kNotFound;
  }

  if (pPointer != 0) {
    At<U64>(pPointer, 0) = pointer;
  }

  if (pSize != 0) {
    At<U64>(pSize, 0) = size;
  }

  return 0;
}

// Both outputs are cleared on failure.
CUresult cuNVNbufferGetPointer_impl(U64* pPointer, U64 buffer, U32 flags,
  U64* pSize) {
  if (pPointer == nullptr || buffer == 0 || pSize == nullptr) {
    return kInvalidValue;
  }

  U64 context = 0;
  U64 size = 0;
  U64 offset = 0;
  U64 device = 0;
  U64 allocation = 0;
  CUresult result = CudaGetCurrentContext(&context);
  U64 pointer = 0;
  U64 length = 0;
  if (result == 0) {
    if (flags > 2) {
      result = kInvalidValue;
    }
    else {
      U64 current = 0;
      U64 state = 0;
      result = CudaGetThreadState(&state);
      if (result == 0) {
        result = CudaGetThreadContext(state, &current, 0);
      }

      if (result == 0) {
        result = CudaDriverRoutine_1092a0(&device, current, buffer, 2);
      }

      if (result == 0) {
        result = CudaDriverRoutine_109700(device, buffer, &allocation,
          &offset, &size);
      }

      if (result == 0) {
        length = size;
        pointer = offset + CudaDriverRoutine_102e00(allocation);
      }
    }
  }

  *pPointer = pointer;
  *pSize = length;
  return result;
}
