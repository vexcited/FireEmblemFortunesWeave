#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::prepo {

struct Statistics;
struct ThroughputRecord;

namespace detail {

namespace ipc {

class IPrepoService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual void Reserved8() = 0;
  virtual void Reserved9() = 0;
  virtual void Reserved10() = 0;
  virtual void Reserved11() = 0;
  virtual Result RequestImmediateTransmission() = 0;
  virtual Result GetTransmissionStatus(sf::Out<int32_t> pOutStatus) = 0;
  virtual Result GetSystemSessionId(sf::Out<uint64_t> pOutSessionId) = 0;
  virtual void Reserved15() = 0;
  virtual void Reserved16() = 0;
  virtual void Reserved17() = 0;
  virtual void Reserved18() = 0;
  virtual void Reserved19() = 0;
  virtual void Reserved20() = 0;
  virtual Result SetOperationMode(int64_t mode) = 0;
  virtual Result ClearStorage() = 0;
  virtual Result ClearStatistics() = 0;
  virtual Result GetStorageUsage(
    sf::Out<int64_t> pOutUsage, sf::Out<int64_t> pOutCapacity) = 0;
  virtual Result GetStatistics(sf::Out<Statistics> pOutStatistics) = 0;
  virtual Result GetThroughputHistory(sf::Out<int32_t> pOutCount,
    const sf::OutArray<ThroughputRecord>& outRecords) = 0;
  virtual Result GetLastUploadError() = 0;
  virtual Result GetApplicationUploadSummary(
    sf::Out<uint64_t> pOutCount, sf::Out<uint64_t> pOutSize) = 0;
  virtual Result IsUserAgreementCheckEnabled(sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result SetUserAgreementCheckEnabled(bool isEnabled) = 0;
  virtual Result ReadAllApplicationReportFiles(
    sf::Out<uint64_t> pOutSize, const sf::OutBuffer& outBuffer) = 0;
  virtual Result ReadAllReportFiles(
    sf::Out<uint64_t> pOutSize, const sf::OutBuffer& outBuffer) = 0;
};

}

class ShimLibraryGlobal {
 public:
  static ShimLibraryGlobal& GetInstance() {
    static ShimLibraryGlobal s_Instance;
    return s_Instance;
  }

  void Initialize();
  ipc::IPrepoService* GetSession();
};

}

}
