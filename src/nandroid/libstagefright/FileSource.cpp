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
#define LOG_TAG "FileSource"
#include <nandroid/MovieMemory.h>
#include <nandroid/utils/Log.h>

#include <nandroid/media/stagefright/foundation/ADebug.h>
#include <nandroid/media/stagefright/FileSource.h>
#include <nandroid/media/stagefright/Utils.h>

namespace nandroid {

FileSource::FileSource(const char *filename)
    : ClearFileSource(filename) {
}

FileSource::~FileSource() {
}

ssize_t FileSource::readAt(off64_t offset, void *data, size_t size) {
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

}  // namespace nandroid
