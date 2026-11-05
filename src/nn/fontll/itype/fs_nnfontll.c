#include "nn/fontll/itype/fs_nnfontll.h"

static struct {
  FsOpenFileFunction open;
  FsCloseFileFunction close;
  FsReadFileFunction read;
  FsSeekFileFunction seek;
  FsTellFileFunction tell;
  FsErrorFileFunction error;
} g_FileFunctions;

int FS_callback_get_target(void) {
  return 0;
}

void* nnfontllFsOpenFile(const char* path, const char* mode) {
  return g_FileFunctions.open(path, mode);
}

int nnfontllFsCloseFile(void* file) {
  return g_FileFunctions.close(file);
}

size_t nnfontllFsReadFile(void* buffer, size_t size, size_t count, void* file) {
  return g_FileFunctions.read(buffer, size, count, file);
}

int nnfontllFsSeekFile(void* file, long offset, int origin) {
  return g_FileFunctions.seek(file, offset, origin);
}

int nnfontllFsTellFile(void* file) {
  return g_FileFunctions.tell(file);
}

int nnfontllFsErrorFile(void* file) {
  return g_FileFunctions.error(file);
}

void nnfontllSetFsFunctions(
  FsOpenFileFunction open, FsCloseFileFunction close,
  FsReadFileFunction read, FsSeekFileFunction seek, FsTellFileFunction tell,
  FsErrorFileFunction error
) {
  g_FileFunctions.open = open;
  g_FileFunctions.close = close;
  g_FileFunctions.read = read;
  g_FileFunctions.seek = seek;
  g_FileFunctions.tell = tell;
  g_FileFunctions.error = error;
}
