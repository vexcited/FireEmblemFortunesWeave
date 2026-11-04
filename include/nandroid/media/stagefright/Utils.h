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

#ifndef UTILS_H_

#define UTILS_H_

#include <nandroid/media/stagefright/foundation/AString.h>
#include <stdint.h>
#include <nandroid/utils/Errors.h>
#include <nandroid/utils/RefBase.h>
#ifdef NANDROID_AUDIO
#include <nandroid/system/audio.h>
#endif
#include <nandroid/media/BufferingSettings.h>
#include <nandroid/media/stagefright/MetaData.h>
#ifdef NANDROID_AUDIO
#include <nandroid/media/MediaPlayerInterface.h>
#endif

namespace nandroid {


struct AMessage;
status_t convertMetaDataToMessage(
        const MetaDataBase *meta, sp<AMessage> *format);
status_t convertMetaDataToMessage(
        const sp<MetaData> &meta, sp<AMessage> *format);
void convertMessageToMetaData(
        const sp<AMessage> &format, sp<MetaData> &meta);

// Returns a pointer to the next NAL start code in buffer of size |length| starting at |data|, or
// a pointer to the end of the buffer if the start code is not found.
// TODO: combine this with avc_utils::getNextNALUnit
const uint8_t *findNextNalStartCode(const uint8_t *data, size_t length);

AString MakeUserAgent();

// Convert a MIME type to a AudioSystem::audio_format
#ifdef NANDROID_AUDIO
status_t mapMimeToAudioFormat(audio_format_t& format, const char* mime);
#endif

// Convert a aac profile to a AudioSystem::audio_format
#ifdef NANDROID_AUDIO
void mapAACProfileToAudioFormat(audio_format_t& format, uint64_t eAacProfile);
#endif

// Send information from MetaData to the HAL via AudioSink
#ifdef NANDROID_AUDIO
status_t sendMetaDataToHal(sp<MediaPlayerBase::AudioSink>& sink, const sp<MetaData>& meta);
#endif

// Return |audio_offload_info_t| filled from given metadata
#ifdef NANDROID_AUDIO
status_t getAudioOffloadInfo(const sp<MetaData>& meta, bool hasVideo,
        bool isStreaming, audio_stream_type_t streamType, audio_offload_info_t *info);
#endif

// Check whether the stream defined by meta can be offloaded to hardware
#ifdef NANDROID_AUDIO
bool canOffloadStream(const sp<MetaData>& meta, bool hasVideo,
                      bool isStreaming, audio_stream_type_t streamType);
#endif

AString uriDebugString(const AString &uri, bool incognito = false);

struct HLSTime {
    int32_t mSeq;
    int64_t mTimeUs;
    sp<AMessage> mMeta;

    explicit HLSTime(const sp<AMessage> &meta = NULL);
    int64_t getSegmentTimeUs() const;
};

bool operator <(const HLSTime &t0, const HLSTime &t1);

// read and write various object to/from AMessage

#ifdef NANDROID_AUDIO
void writeToAMessage(const sp<AMessage> &msg, const AudioPlaybackRate &rate);
#endif
#ifdef NANDROID_AUDIO
void readFromAMessage(const sp<AMessage> &msg, AudioPlaybackRate *rate /* nonnull */);
#endif

#ifdef NANDROID_AUDIO
void writeToAMessage(const sp<AMessage> &msg, const AVSyncSettings &sync, float videoFpsHint);
#endif
#ifdef NANDROID_AUDIO
void readFromAMessage(
        const sp<AMessage> &msg, AVSyncSettings *sync /* nonnull */, float *videoFps /* nonnull */);
#endif

void writeToAMessage(const sp<AMessage> &msg, const BufferingSettings &buffering);
void readFromAMessage(const sp<AMessage> &msg, BufferingSettings *buffering /* nonnull */);

AString nameForFd(int fd);
}  // namespace nandroid

#endif  // UTILS_H_
