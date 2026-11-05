/*
 * Copyright (C) 2018 The Android Open Source Project
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

#ifndef CLEAR_FILE_SOURCE_H_

#define CLEAR_FILE_SOURCE_H_

#include <stdio.h>

#include <nandroid/media/DataSource.h>
#include <nandroid/media/stagefright/MediaErrors.h>
#include <nandroid/utils/threads.h>

#include <nn/fs/detail/fs_file_system_accessor.hpp>

namespace nandroid {

class ClearFileSource : public DataSource {
public:
    ClearFileSource(const char *filename);

    virtual status_t initCheck() const;

    virtual ssize_t readAt(off64_t offset, void *data, size_t size);

    virtual status_t getSize(off64_t *size);

    virtual uint32_t flags() {
        return kIsLocalFileSource;
    }

    virtual String8 toString() {
        return mName;
    }

protected:
    virtual ~ClearFileSource();
    virtual ssize_t readAt_l(off64_t offset, void *data, size_t size);

    nn::fs::FileHandle mFd;
    int64_t mOffset;
    int64_t mLength;
    Mutex mLock;

private:
    String8 mName;

    ClearFileSource(const ClearFileSource &);
    ClearFileSource &operator=(const ClearFileSource &);
};

}  // namespace nandroid

#endif  // CLEAR_FILE_SOURCE_H_

