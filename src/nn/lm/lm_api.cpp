#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::diag {

struct LogMetaData;
struct LogBody;

namespace detail {

void ReplaceDefaultLogObserver(void (*observer)(const LogMetaData& metaData,
  const LogBody& body, void* pArgument));

}

}

namespace nn::lm {

class ILogger : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Log(const sf::InAutoSelectBuffer& packet) = 0;
  virtual Result SetDestination(uint32_t destination) = 0;
};

class ILogService : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result OpenLogger(sf::Out<sf::SharedPointer<ILogger>> pOutLogger,
    uint64_t processIdPlaceholder) = 0;
};

class ILogGetter : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result StartLogging() = 0;
  virtual Result StopLogging() = 0;
  virtual Result GetLog(const sf::OutAutoSelectBuffer& buffer,
    sf::Out<int64_t> pOutDropCount, sf::Out<uint32_t> pOutProcessId) = 0;
};

sf::SharedPointer<ILogService> CreateLogServiceByHipc();
sf::SharedPointer<ILogGetter> CreateLogGetterByHipc();

class HashedLogger {
public:
  HashedLogger();
  [[gnu::visibility("hidden")]] ~HashedLogger();

  void Push(const void* pData, uint16_t size);

private:
  uint8_t m_Storage[0x98];
};

namespace detail {

// The default observer that sends every log line to the logger.
[[gnu::visibility("hidden")]] void LogObserver(
  const diag::LogMetaData& metaData, const diag::LogBody& body,
  void* pArgument);

class ShimLibraryGlobal {
public:
  static ShimLibraryGlobal& GetInstance() {
    static ShimLibraryGlobal s_Instance;
    return s_Instance;
  }

  [[gnu::noinline, gnu::visibility("hidden")]] ShimLibraryGlobal();
  [[gnu::visibility("hidden")]] ~ShimLibraryGlobal();

  ILogger* GetLogger() const {
    return m_pLogger;
  }

private:
  sf::SharedPointer<ILogService> m_Service;
  ILogger* m_pLogger;
};

class ShimLibraryForLogGetter {
public:
  static ShimLibraryForLogGetter& GetInstance() {
    static ShimLibraryForLogGetter s_Instance;
    return s_Instance;
  }

  ShimLibraryForLogGetter() : m_pGetter(CreateLogGetterByHipc().Detach()) {}
  [[gnu::visibility("hidden")]] ~ShimLibraryForLogGetter();

  ILogGetter* GetGetter() const {
    return m_pGetter;
  }

private:
  ILogGetter* m_pGetter;
};

ShimLibraryGlobal::ShimLibraryGlobal() {
  sf::SharedPointer<ILogService> service = CreateLogServiceByHipc();
  sf::SharedPointer<ILogger> logger;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->OpenLogger(
    sf::Out<sf::SharedPointer<ILogger>>(&logger), 0));
  m_Service = service;
  m_pLogger = logger.Detach();
}

ShimLibraryGlobal::~ShimLibraryGlobal() {
  m_pLogger->Release();
}

ShimLibraryForLogGetter::~ShimLibraryForLogGetter() {
  m_pGetter->Release();
}

}

void Initialize() {
  detail::ShimLibraryGlobal::GetInstance();
  diag::detail::ReplaceDefaultLogObserver(detail::LogObserver);
}

void SetDestination(uint32_t destination) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ShimLibraryGlobal::GetInstance()
    .GetLogger()->SetDestination(destination));
}

void StartLogging() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ShimLibraryForLogGetter::GetInstance()
    .GetGetter()->StartLogging());
}

void StopLogging() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ShimLibraryForLogGetter::GetInstance()
    .GetGetter()->StopLogging());
}

void GetLog(char* pBuffer, size_t size, int64_t* pOutDropCount,
  uint32_t* pOutProcessId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ShimLibraryForLogGetter::GetInstance()
    .GetGetter()->GetLog(sf::OutAutoSelectBuffer(pBuffer, size),
      sf::Out<int64_t>(pOutDropCount), sf::Out<uint32_t>(pOutProcessId)));
}

namespace detail {

void TransmitHashedLogForSystem(const void* pData, uint32_t size) {
  static HashedLogger s_Logger;
  s_Logger.Push(pData, static_cast<uint16_t>(size));
}

}

}
