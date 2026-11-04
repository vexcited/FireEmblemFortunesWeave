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

- The verification specs compile with `-ftrivial-auto-var-init=zero`, as the SDK zero initializes locals.

Shims.

- `include/nandroid/log/log.h` replaces liblog. Log macros expand to nothing and `LOG_ALWAYS_FATAL_IF` only evaluates its condition.
- `ADebug.h`: `CHECK_OP` only evaluates its operands.
- `utils/Mutex.h` wraps `nn::os::MutexType` instead of a pthread mutex.
- `utils/Condition.h` wraps `nn::os::ConditionVariableType` instead of a pthread condition.
- `media/stagefright/DataSource.h` drops `getIDataSource` and `DrmInitialization`, matching the SDK vtables.
- `media/MediaTrack.h` drops the binder memory includes.
- `mpeg2ts/HlsSampleDecryptor.h` declares `AES_KEY` and `AES_BLOCK_SIZE` instead of including OpenSSL.
- `media/stagefright/MediaBuffer.h` defines `NO_IMEMORY` and drops `mMemory`.
- `media/stagefright/MediaWriter.h` has no `IMediaRecorderClient` listener, so `notify` does nothing.
- `media/stagefright/Utils.h` drops the audio and offload helpers and includes `BufferingSettings.h` and `MetaData.h` directly.
- `media/mediaplayer_common.h` replaces `media/mediaplayer.h` for `media_track_type`.
- The `openmax` headers include each other with quotes.
- `cutils/properties.h` answers every property query with the caller's default, since the SDK has no property service, and `media/mediarecorder.h` holds the recorder event codes and output formats.
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
- `ATSParser.cpp` and `ATSParser.h`: conditional access support is removed with `#ifdef NANDROID_CAS`, so there is no `CasManager`, descrambler or HIDL memory.
  `parseProgramMap` reads a stream CA descriptor with `findCADescriptor` instead of the descriptor loop, `ensureBufferCapacity` allocates the exact size and `flush` drops scrambled payloads.
- `MediaBuffer.cpp`, `MediaBufferGroup.cpp`, `MetaData.cpp` and `libmedia/BufferingSettings.cpp`: binder shared memory and parcels are disabled.
- `Utils.cpp`: the audio, user agent and file descriptor helpers are removed, color aspects go through `ColorUtils`, `uriDebugString` returns the URI unless incognito, and the mapping tables are marked `used`.
- `httplive/M3UParser.cpp` and `M3UParser.h`: the parser takes a fourth constructor argument and has three extra fields of unknown purpose, `MediaGroup` keeps its group ID, and the audio group always selects index 0.
- `extractors/mkv/MatroskaExtractor.cpp`: FLAC metadata support is removed, `BlockIterator::eos` also checks the block entry and `block` returns null at the end, and libwebm is included from `src/libwebm`.
- `libstagefright/MPEG4Writer.cpp`: the property include is added explicitly, the thread names go through `nn::os::SetThreadName` instead of the missing `prctl`, and the track type string carries no audio case.
