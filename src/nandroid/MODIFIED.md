# Modified AOSP sources for the Nintendo SDK nandroid namespace

The sources come from AOSP tag `android-10.0.0_r47`, see `NOTICE`. Sources are under `src/nandroid` with the AOSP project layout, headers are under `include/nandroid`.

Modifications common to every file.

- The `android` namespace is renamed to `nandroid`.
- Includes such as `<utils/String8.h>` become `<nandroid/utils/String8.h>`, and the foundation sources include their headers through `<nandroid/media/stagefright/foundation/...>`.
- `malloc`, `calloc`, `realloc`, `free` and `strdup` call the movie heap functions `MovieMalloc`, `MovieCalloc`, `MovieRealloc`, `MovieFree` and `MovieStrdup` declared in `nandroid/MovieMemory.h`.
- `nandroid/MovieHeap.h` replaces the global `operator new` and `operator delete` with inline versions that allocate from the heap of the current movie thread through `nn::movie::detail::HeapMemoryManager`.
- Binder `Parcel` support is disabled with `#ifdef NANDROID_BINDER`.
- `operator new[]` uses the movie heap allocator without an alignment argument.
- `nandroid/Platform.h` provides the bionic `off64_t`, `__BEGIN_DECLS`, `__END_DECLS`, `__INTRODUCED_IN` and `__ANDROID_API__`, and replaces `<sys/cdefs.h>` in the NDK headers.
- `include/nandroid/media/DataSource.h`, `DataSourceBase.h` and `MediaSource.h` stand for the AOSP symbolic links into `media/stagefright`.
- Relative includes of the mp4 extractor point to `src/nandroid/libstagefright/include` and to the local headers.

Shims.

- `include/nandroid/log/log.h` replaces liblog. Log macros expand to nothing and `LOG_ALWAYS_FATAL_IF` only evaluates its condition.
- `ADebug.h`: `CHECK_OP` only evaluates its operands.
- `utils/Mutex.h` wraps `nn::os::MutexType` instead of a pthread mutex.
- `utils/Condition.h` wraps `nn::os::ConditionVariableType` instead of a pthread condition.
- `media/stagefright/DataSource.h` drops `getIDataSource` and `DrmInitialization`, matching the SDK vtables.
- `media/MediaTrack.h` drops the binder memory includes.
- `mpeg2ts/HlsSampleDecryptor.h` declares `AES_KEY` and `AES_BLOCK_SIZE` instead of including OpenSSL.
- `utils/Unicode.h` and `Unicode.cpp` place the functions in `namespace nandroid` instead of `extern "C"`.

Per file.

- `AString.cpp`: `append` and `insert` fall back to `MovieMalloc`, `memcpy` and `MovieFree` when `MovieRealloc` fails. `AStringPrintf` formats into a zeroed 1024 byte stack buffer with `vsprintf`.
- `ABitReader.cpp`: `getBits` initializes its result to zero, as the SDK build zero initializes locals.
- `AMessage.h` and `AMessage.cpp`: items store their name in a 32 byte inline buffer, so names are never allocated or freed, and a message holds at most 20 items.
- `ByteUtils.cpp`: `ntoh64` byte swaps with `__builtin_bswap32`.
- `ColorUtils.cpp`: the lookup tables are marked `used` so that LLVM keeps them as separate globals.
- `MetaDataBase.cpp`: `MetaDataInternal` holds a `Mutex` taken by `clear`, `remove`, `setData`, `findData`, `hasData`, `toString` and `dumpToLog`.
- `SharedBuffer.cpp`: adds `SharedBuffer::globalSharedBuffer`, which returns the static buffer `gSharedBuffer` used for the empty `String8`.
- `String8.cpp`: the empty string comes from `SharedBuffer::globalSharedBuffer`.
- `RefBase.cpp`: `CallStack` is only used with `NANDROID_CALLSTACK`.
- `ESQueue.cpp`: the unused `DescramblerAPI.h` include is disabled.
