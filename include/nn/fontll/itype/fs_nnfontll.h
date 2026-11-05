#pragma once

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* (*FsOpenFileFunction)(const char* path, const char* mode);
typedef int (*FsCloseFileFunction)(void* file);
typedef size_t (*FsReadFileFunction)(
  void* buffer, size_t size, size_t count, void* file);
typedef int (*FsSeekFileFunction)(void* file, long offset, int origin);
typedef int (*FsTellFileFunction)(void* file);
typedef int (*FsErrorFileFunction)(void* file);

void nnfontllSetFsFunctions(
  FsOpenFileFunction open, FsCloseFileFunction close,
  FsReadFileFunction read, FsSeekFileFunction seek, FsTellFileFunction tell,
  FsErrorFileFunction error);

void* nnfontllFsOpenFile(const char* path, const char* mode);
int nnfontllFsCloseFile(void* file);
size_t nnfontllFsReadFile(void* buffer, size_t size, size_t count, void* file);
int nnfontllFsSeekFile(void* file, long offset, int origin);
int nnfontllFsTellFile(void* file);
int nnfontllFsErrorFile(void* file);

#ifdef __cplusplus
}
#endif
