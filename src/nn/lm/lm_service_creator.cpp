#include "nn/lm/lm_services.hpp"

namespace nn::lm {

namespace detail {

// The holders keep a hipc client manager and the opened service object,
// their constructors are template code of the manager.
class LogGetterClientHolder {
public:
  [[gnu::visibility("hidden")]] LogGetterClientHolder();

  ILogGetter* GetObject() const {
    return m_pObject;
  }

private:
  uint8_t m_Manager[0x2c0];
  ILogGetter* m_pObject;
  uint8_t m_Reserved[0x18];
};

class LogServiceClientHolder {
public:
  [[gnu::visibility("hidden")]] LogServiceClientHolder();

  ILogService* GetObject() const {
    return m_pObject;
  }

private:
  uint8_t m_Manager[0x2c0];
  ILogService* m_pObject;
  uint8_t m_Reserved[0x18];
};

}

sf::SharedPointer<ILogGetter> CreateLogGetterByHipc() {
  alignas(16) static detail::LogGetterClientHolder s_Holder;
  return sf::SharedPointer<ILogGetter>(s_Holder.GetObject(), true);
}

sf::SharedPointer<ILogService> CreateLogServiceByHipc() {
  alignas(16) static detail::LogServiceClientHolder s_Holder;
  return sf::SharedPointer<ILogService>(s_Holder.GetObject(), true);
}

}
