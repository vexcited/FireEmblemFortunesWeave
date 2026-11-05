/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//#define LOG_NDEBUG 0
#define LOG_TAG "ClearFileSource"
#include <nandroid/MovieMemory.h>
#include <nandroid/utils/Log.h>

#include <nandroid/media/stagefright/foundation/ADebug.h>
#include <nandroid/media/stagefright/ClearFileSource.h>
#include <nandroid/media/stagefright/Utils.h>

#include <nn/fs/fs_file.hpp>
#include <nn/fs/fs_types.hpp>

namespace nandroid {

ClearFileSource::ClearFileSource(const char *filename)
    : mFd(),
      mOffset(0),
      mLength(-1),
      mName("<null>") {
    mFd.handle = NULL;

    if (filename) {
        mName = String8::format("FileSource(%s)", filename);

        if (nn::fs::OpenFile(&mFd, filename, nn::fs::OpenMode_Read)
                .IsSuccess()) {
            if (nn::fs::GetFileSize(&mLength, mFd).IsFailure()) {
                mLength = 0;
            }
            return;
        }
    }
    ALOGE("Failed to open file '%s'.", filename);
    mFd.handle = NULL;
}

ClearFileSource::~ClearFileSource() {
    if (mFd.handle != NULL) {
        nn::fs::CloseFile(mFd);
        mFd.handle = NULL;
    }
}

status_t ClearFileSource::initCheck() const {
    return mFd.handle != NULL ? OK : NO_INIT;
}

ssize_t ClearFileSource::readAt(off64_t offset, void *data, size_t size) {
    if (mFd.handle == NULL) {
        return NO_INIT;
    }

    Mutex::Autolock autoLock(mLock);
    if (mLength >= 0) {
        if (offset >= mLength) {
            return 0;  // read beyond EOF.
        }
        uint64_t numAvailable = mLength - offset;
        if ((uint64_t)size > numAvailable) {
            size = numAvailable;
        }
    }
    return readAt_l(offset, data, size);
}

ssize_t ClearFileSource::readAt_l(off64_t offset, void *data, size_t size) {
    size_t bytesRead = 0;
    if (data == NULL) {
        return 0;
    }

    if (nn::fs::ReadFile(&bytesRead, mFd, offset, data, size).IsFailure()) {
        return 0;
    }
    return bytesRead;
}

status_t ClearFileSource::getSize(off64_t *size) {
    if (mFd.handle == NULL) {
        return NO_INIT;
    }

    if (size == NULL) {
        return UNEXPECTED_NULL;
    }

    *size = mLength;

    return OK;
}

}  // namespace nandroid
