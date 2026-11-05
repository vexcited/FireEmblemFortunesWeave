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
- `mpeg2ts/HlsSampleDecryptor.h` declares `AES_KEY`, `AES_BLOCK_SIZE`, `AES_DECRYPT` and an empty `AES_cbc_encrypt` instead of including OpenSSL.
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
- `MovieHeap.h`: `HeapMemoryManager::SetCurrentHeap` stores the heap of the current movie thread.
- `utils/List.h`: the sentinel node is allocated with the scalar `operator new` instead of `new unsigned char[]`, as the SDK uses the aligned movie heap for it.
- `libstagefright/MPEG4Writer.cpp` and `MPEG4Writer.h`: the writer is built from an `nn::movie::detail::AllocatorInfo`, an `nn::movie::MediaWriter` and a thread manager instance instead of a file descriptor.
  `MediaOpen`, `MediaSeek`, `MediaClose` and `MediaWrite` replace `dup`, `lseek64`, `close` and `write`, `reset` flushes the media writer after the moov box, `setNextFd`, `switchFd` and the looper are gone, and `dump` of the writer is removed.
  The writer and track threads are created through `nn::movie::detail::ThreadManager` with a 32 KiB stack, `setWriterThreadPriority` and `setTrackEncodingThreadPriority` are added, and the thread entries set the heap of the writer.
  `getMpeg4Time` returns 64 bit seconds from `nn::time::StandardUserSystemClock`, and the mvhd and tkhd boxes are written in version 1.
  `addDeviceMeta` is empty, the HEVC codec specific data path is disabled with `NANDROID_HEVC`, and the sample tables use the global allocation functions.
- `libstagefright/DataSourceBase.cpp`: `__unused` parameters are commented out.
- `libstagefright/ClearFileSource.cpp`, `ClearFileSource.h`, `FileSource.cpp` and `FileSource.h`: files are read through `nn::fs::OpenFile`, `GetFileSize` and `ReadFile` with an `nn::fs::FileHandle`, there is no file descriptor constructor, and the DRM support of `FileSource` is removed.
- `libmedia/MediaCodecBuffer.cpp`, `MediaSource.cpp`, `MediaAdapter.cpp` and `DataURISource.cpp` with their headers are unmodified apart from the common changes, and `HTTPBase.cpp` drops the `qtaguid` include.
- `libstagefright/InMemoryFileSource.cpp` and `InMemoryFileSource.h` are Nintendo additions written from the binary.
- `mpeg2ts/HlsSampleDecryptor.cpp`: the AES key setup is compiled out with `NANDROID_OPENSSL`, so the key never becomes valid, and `MediaErrors.h` is included for `ERROR_MALFORMED`.
- `utils/Condition.h`: the condition variable lives in an anonymous union so that its member constructor never runs, and the default constructor initializes it a second time, as the SDK calls `InitializeConditionVariable` twice.
- `foundation/ALooper.h` and `ALooper.cpp`: `start` takes only `runOnCallingThread` and `canCallJava`, the SDK has no priority argument.
- `media/mediarecorder.h`: the output formats use the upstream values, so `OUTPUT_FORMAT_HEIF` is 10 and `OUTPUT_FORMAT_OGG` is 11.
- `include/HTTPBase.h` includes `KeyedVector.h` and `String8.h` itself.
- `libstagefright/NuCachedSource2.cpp` and `NuCachedSource2.h`: `close` also closes the source and stops the looper, deferred reads are reposted after 1 ms, there is no DRM, and three Nintendo fields keep data behind the read position.
  Backward reads grow the kept data to 1.1 times the distance, up to half of the high watermark minus the read padding, the prefetcher releases at most up to that amount, and reads are deferred up to 16 times while the cache is smaller.
  `getBufferedRange`, `flushCache` and `IsCacheFull` are added.
- `httplive/LiveDataSource.cpp` and `LiveDataSource.h` are unmodified apart from the common changes.
- `http/ClearMediaHTTP.cpp`, `media/stagefright/ClearMediaHTTP.h`, `media/MediaHTTPConnection.h` and `media/MediaHTTPService.h`: no user agent is added, as `MakeUserAgent` is missing, and `HTTPBase.h` is included from `src/nandroid/libstagefright/include`.
- `httplive/HTTPDownloader.cpp` and `HTTPDownloader.h`: the downloader keeps the `LiveSession` and a playlist user data passed to `M3UParser`, new download buffers are limited by `LiveSession::getRemainingCacheSize`, and the playlist hash is compiled out with `NANDROID_OPENSSL`.
- `httplive/LiveSession.h` is the upstream header with `setCacheSize` and `getRemainingCacheSize` added and the seek mode of `MediaTrack`, it does not have the SDK member layout yet.
- `libstagefright/MediaMuxer.cpp` and `MediaMuxer.h`: the muxer is built like `MPEG4Writer` from an allocator info, a media writer and a thread manager instance, only MPEG-4, 3GPP and HEIF are supported, the codec buffer flags are local constants, and the thread priority setters forward to the writer.
- `httplive/M3UParser.cpp` and `M3UParser.h`: the two unknown fields are the init segment URI and meta, and `MediaGroup` gains `getTrackInfo` with a base URL, `getTrackType` and `getTrackName`, the parser gains `getInitSegment`, `groupSize`, `groupAt`, `getGroupWithName` and `getGroupNamesAndTypes`.
- `libmediaplayerservice/nuplayer/NuPlayerSource.h` and `NuPlayerSource.cpp`: `NuPlayer::Source` becomes `nandroid::Source`, `prepareAsync` takes a start time, seeking uses the `MediaTrack` seek mode, and the secure decoder notification is removed.
