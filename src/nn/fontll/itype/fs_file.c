#include "nn/fontll/itype/fs_api.h"
#include "nn/fontll/itype/fs_nnfontll.h"

#define ERR_FILE_OPEN 102
#define ERR_FILE_CLOSE 103
#define ERR_FILE_SEEK 104

void* FS_open(FS_STATE* sp, const FILECHAR* path) {
  void* file = nnfontllFsOpenFile(path, "rb");
  if (file == NULL) {
    sp->error = ERR_FILE_OPEN;
  }
  return file;
}

int FS_close(FS_STATE* sp, void* file) {
  int result = nnfontllFsCloseFile(file);
  if (result != 0) {
    sp->error = ERR_FILE_CLOSE;
  }
  return result;
}

FS_LONG FS_seek(FS_STATE* sp, void* file, FS_ULONG offset, FS_ULONG origin) {
  if (nnfontllFsSeekFile(file, offset, origin) != 0) {
    sp->error = ERR_FILE_SEEK;
    return ERR_FILE_SEEK;
  }
  return SUCCESS;
}

FS_ULONG FS_read(FS_STATE* sp, void* file, void* buffer, FS_ULONG size) {
  FS_ULONG count = nnfontllFsReadFile(buffer, 1, size, file);
  if (size != count && nnfontllFsErrorFile(file) != -1) {
    sp->error = ERR_FILE_READ;
  }
  return count;
}
