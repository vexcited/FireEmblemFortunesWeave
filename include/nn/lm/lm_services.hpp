#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

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

}
