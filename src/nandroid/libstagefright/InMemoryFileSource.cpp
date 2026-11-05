#include <nandroid/MovieMemory.h>

#include <string.h>

#include <nandroid/media/stagefright/InMemoryFileSource.h>

namespace nandroid {

InMemoryFileSource::InMemoryFileSource(const void *data, size_t size)
    : mSize(-1),
      mOffset(0) {
    if (data != NULL) {
        mData = data;
        mSize = size;
    }
}

// The file descriptor constructor ignores its arguments.
InMemoryFileSource::InMemoryFileSource(
        int /* fd */, int64_t /* offset */, int64_t /* length */) {
}

InMemoryFileSource::~InMemoryFileSource() {
}

status_t InMemoryFileSource::initCheck() const {
    if (mSize < 0 || mOffset < 0) {
        return NO_INIT;
    }
    return OK;
}

ssize_t InMemoryFileSource::readAt(off64_t offset, void *data, size_t size) {
    if (data == NULL) {
        return BAD_VALUE;
    }

    Mutex::Autolock autoLock(mLock);
    if (offset != mOffset) {
        if (offset < 0 || offset >= mSize) {
            return FAILED_TRANSACTION;
        }
        mOffset = offset;
    }

    size_t length = offset + (off64_t)size >= mSize ? mSize - offset : size;
    memcpy(data, (const uint8_t *)mData + offset, length);
    mOffset += length;
    return length;
}

status_t InMemoryFileSource::getSize(off64_t *size) {
    if (size == NULL) {
        return BAD_VALUE;
    }

    Mutex::Autolock autoLock(mLock);
    *size = mSize;
    return mSize < 0 ? NO_INIT : OK;
}

}  // namespace nandroid
