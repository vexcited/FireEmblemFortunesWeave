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

#ifndef EXTRACTOR_UTILS_H_

#define EXTRACTOR_UTILS_H_

#include <functional>
#include <memory>

namespace nandroid {

// The SDK allocates from the movie heap and frees through a function deleter.
template <class T>
std::unique_ptr<T[], std::function<void(T*)>> heapbuffer(size_t size) {
    return std::unique_ptr<T[], std::function<void(T*)>>(new T[size],
            [](T* p) { operator delete[](p); });
}

}  // namespace nandroid

#endif  // UTILS_H_
