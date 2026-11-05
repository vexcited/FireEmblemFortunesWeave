/*
 * Copyright (C) 2010 The Android Open Source Project
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

#include <nandroid/MovieMemory.h>

#include <nandroid/media/stagefright/foundation/ABuffer.h>
#include <nandroid/media/stagefright/foundation/ADebug.h>
#include <nandroid/media/stagefright/Utils.h>

#include "NuPlayerSource.h"

namespace nandroid {

void Source::onMessageReceived(const sp<AMessage> & /* msg */) {
    TRESPASS();
}

void Source::notifyVideoSizeChanged(const sp<AMessage> &format) {
    sp<AMessage> notify = dupNotify();
    notify->setInt32("what", kWhatVideoSizeChanged);
    notify->setMessage("format", format);
    notify->post();
}

void Source::notifyFlagsChanged(uint32_t flags) {
    sp<AMessage> notify = dupNotify();
    notify->setInt32("what", kWhatFlagsChanged);
    notify->setInt32("flags", flags);
    notify->post();
}

void Source::notifyPrepared(status_t err) {
    sp<AMessage> notify = dupNotify();
    notify->setInt32("what", kWhatPrepared);
    notify->setInt32("err", err);
    notify->post();
}

sp<AMessage> Source::getFormat(bool audio) {
    sp<MetaData> meta = getFormatMeta(audio);

    if (meta == NULL) {
        return NULL;
    }

    sp<AMessage> msg = new AMessage;

    if(convertMetaDataToMessage(meta, &msg) == OK) {
        return msg;
    }
    return NULL;
}

void Source::notifyDrmInfo(const sp<ABuffer> &drmInfoBuffer)
{
    sp<AMessage> notify = dupNotify();
    notify->setInt32("what", kWhatDrmInfo);
    notify->setBuffer("drmInfo", drmInfoBuffer);

    notify->post();
}

}  // namespace nandroid
