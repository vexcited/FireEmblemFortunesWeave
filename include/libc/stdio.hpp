#pragma once

namespace libc {

struct File;

}

extern "C" {

int fflush(libc::File* file);
void flockfile(libc::File* file);
int ftrylockfile(libc::File* file);
void funlockfile(libc::File* file);

}
