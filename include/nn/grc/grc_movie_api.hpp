#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/album/album_types.hpp"
#include "nn/capsrv/capsrv_album_types.hpp"
#include "nn/os/system_event.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::grcsrv {

class IMovieMaker : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result SetShimLibraryVersion(uint64_t version) = 0;
};

class IMovieMakerService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateMovieMaker(
    sf::Out<sf::SharedPointer<IMovieMaker>> pOutMovieMaker) = 0;
  virtual Result GetMovieMakerWorkMemorySize(sf::Out<uint64_t> pOutSize) = 0;
};

class IMovieWriter : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetShimLibraryVersion(uint64_t version) = 0;
};

class IMovieWriterService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateMovieWriter(
    const sf::Out<sf::SharedPointer<IMovieWriter>>& pOutMovieWriter) = 0;
};

}

namespace nn::grc {

class MovieLayer;

struct OffscreenRecordingParameter {
  uint8_t reserved0[0x18];
  int32_t videoWidth;
  int32_t videoHeight;
  uint8_t reserved20[0x60];
};

struct MovieWriterParameter {
  uint8_t reserved0[0x18];
  int32_t videoWidth;
  int32_t videoHeight;
  uint8_t reserved20[0x60];
};

Result InitializeForApplication(sf::SharedPointer<grcsrv::IMovieMaker>&&
  movieMaker);
void FinalizeForApplication();
Result OpenMovieLayer(MovieLayer** pOutLayer, size_t workMemorySize,
  int width, int height);
Result CloseMovieLayer(MovieLayer* pLayer);
Result InitializeFinishMovieFileReadyEvent(os::SystemEventType* pEvent,
  MovieLayer* pLayer);
void FinalizeFinishMovieFileReadyEvent(os::SystemEventType* pEvent,
  MovieLayer* pLayer);
Result InitializeMovieAudioEncodeReadyEvent(os::SystemEventType* pEvent,
  MovieLayer* pLayer);
void FinalizeMovieAudioEncodeReadyEvent(os::SystemEventType* pEvent,
  MovieLayer* pLayer);
Result GetVideoNativeWindow(void** pOutWindow, MovieLayer* pLayer);
Result StartMovieFile(MovieLayer* pLayer,
  const OffscreenRecordingParameter& parameter);
void AbortMovieFile(MovieLayer* pLayer);
Result CheckMovieFileError(MovieLayer* pLayer);
Result EncodeMovieAudioSample(size_t* pOutSize, MovieLayer* pLayer,
  const void* pBuffer, size_t size);
Result RequestFinishMovieFile(MovieLayer* pLayer);
Result CompleteFinishMovieFile(capsrv::ApplicationAlbumEntry* pOutEntry,
  MovieLayer* pLayer, const sf::InBuffer& userData,
  const sf::InBuffer& thumbnail, album::ImageSize thumbnailSize);

Result InitializeForMovieWriter(sf::SharedPointer<grcsrv::IMovieWriter>&&
  movieWriter);
void FinalizeForMovieWriter();
Result StartMovieWriter(const MovieWriterParameter& parameter);
Result WriteMp4Data(size_t offset, const void* pData, size_t size);
Result AbortMovieWriter();
Result CheckMovieWriterError();
Result RequestFinishMovieWriter();
Result CompleteFinishMovieWriter(capsrv::ApplicationAlbumEntry* pOutEntry,
  const sf::InBuffer& userData, const sf::InBuffer& thumbnail,
  album::ImageSize thumbnailSize);

}
