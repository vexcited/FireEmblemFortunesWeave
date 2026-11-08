/*
 * Copyright (C) 2014 The Android Open Source Project
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

#include <nandroid/media/NdkMediaFormat.h>
#include <nandroid/media/stagefright/foundation/AMessage.h>

using namespace nandroid;

// Only the message the format wraps is reached here.
struct AMediaFormat {
    sp<AMessage> mFormat;
};

extern "C" {

void AMediaFormat_clear(AMediaFormat* format) {
    format->mFormat->clear();
}

bool AMediaFormat_getInt32(AMediaFormat* format, const char* name,
        int32_t* out) {
    return format->mFormat->findInt32(name, out);
}

bool AMediaFormat_getInt64(AMediaFormat* format, const char* name,
        int64_t* out) {
    return format->mFormat->findInt64(name, out);
}

bool AMediaFormat_getFloat(AMediaFormat* format, const char* name,
        float* out) {
    return format->mFormat->findFloat(name, out);
}

bool AMediaFormat_getDouble(AMediaFormat* format, const char* name,
        double* out) {
    return format->mFormat->findDouble(name, out);
}

bool AMediaFormat_getSize(AMediaFormat* format, const char* name,
        size_t* out) {
    return format->mFormat->findSize(name, out);
}

bool AMediaFormat_getRect(AMediaFormat* format, const char* name,
        int32_t* left, int32_t* top, int32_t* right, int32_t* bottom) {
    return format->mFormat->findRect(name, left, top, right, bottom);
}

void AMediaFormat_setInt32(AMediaFormat* format, const char* name,
        int32_t value) {
    format->mFormat->setInt32(name, value);
}

void AMediaFormat_setInt64(AMediaFormat* format, const char* name,
        int64_t value) {
    format->mFormat->setInt64(name, value);
}

void AMediaFormat_setFloat(AMediaFormat* format, const char* name,
        float value) {
    format->mFormat->setFloat(name, value);
}

void AMediaFormat_setDouble(AMediaFormat* format, const char* name,
        double value) {
    format->mFormat->setDouble(name, value);
}

void AMediaFormat_setSize(AMediaFormat* format, const char* name,
        size_t value) {
    format->mFormat->setSize(name, value);
}

void AMediaFormat_setRect(AMediaFormat* format, const char* name,
        int32_t left, int32_t top, int32_t right, int32_t bottom) {
    format->mFormat->setRect(name, left, top, right, bottom);
}

}
