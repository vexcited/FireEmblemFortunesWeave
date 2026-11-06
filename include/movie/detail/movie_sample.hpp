#pragma once

#include <stdint.h>

#include "movie/detail/movie_ref_base.hpp"
#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/movie_interfaces.hpp"
#include "nn/movie/movie_media_property.hpp"

namespace movie::detail {

class Sample final : public MovieRefBase<ISample> {
public:
  static constexpr int64_t InvalidTime = INT64_MAX;

  explicit Sample(IAllocator* allocator);
  ~Sample() override {
    if (m_pEncryptionProperties != nullptr) {
      m_pAllocator->Free(m_pEncryptionProperties);
      m_pEncryptionProperties = nullptr;
    }
  }

  int GetTrackIndex() const override;
  void SetTrackIndex(int index) override;
  int64_t GetPresentationTime() const override;
  void SetPresentationTime(int64_t time) override;
  int64_t GetDecodeTime() const override;
  void SetDecodeTime(int64_t time) override;
  int64_t GetDuration() const override;
  void SetDuration(int64_t duration) override;
  bool IsSyncSample() const override;
  void SetSyncSample(bool isSyncSample) override;
  bool IsEncrypted() const override;
  void SetEncrypted(bool isEncrypted) override;
  bool IsEOSSample() const override;
  MovieResult GetBuffer(IBuffer** ppOutBuffer) override;
  MovieResult SetBuffer(IBuffer* buffer) override;
  MovieResult GetProperties(
    nn::movie::MediaProperty** ppOutProperties) override;
  MovieResult GetEncryptionProperties(
    EncryptionProperty** ppOutProperties) override;

private:
  int m_TrackIndex;
  int64_t m_PresentationTime;
  int64_t m_DecodeTime;
  int64_t m_Duration;
  bool m_IsSyncSample;
  bool m_IsEncrypted;
  RefPtr<IBuffer> m_pBuffer;
  nn::movie::MediaProperty m_Properties;
  EncryptionProperty* m_pEncryptionProperties;
};

}
