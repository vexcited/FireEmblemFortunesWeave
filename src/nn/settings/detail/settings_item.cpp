#include <algorithm>
#include <cstring>

#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"

namespace nn::settings::detail {

namespace {

constexpr Result ResultNullSettingsName = {0x19269};
constexpr Result ResultNullSettingsItemKey = {0x19469};
constexpr Result ResultNullSettingsItemValueBuffer = {0x19669};
constexpr Result ResultNullSettingsItemKeyBuffer = {0x19869};
constexpr Result ResultNullSettingsItemValueOutBuffer = {0x19a69};
constexpr Result ResultNullSettingsItemKeyIterator = {0x19c69};

constexpr size_t TransferBufferSize = 128;

// Copies at most 71 characters and always terminates the string.
template <size_t Size>
void CopyString(char (&destination)[Size], const char* source) {
  size_t index = 0;
  for (; index < Size - 1 && source[index] != '\0'; ++index) {
    destination[index] = source[index];
  }

  destination[index] = '\0';
}

}

void CopySettingsName(SettingsName* pOutValue, const char* name) {
  CopyString(pOutValue->value, name);
}

void CopySettingsItemKey(SettingsItemKey* pOutValue, const char* key) {
  CopyString(pOutValue->value, key);
}

Result GetSettingsItemValueSize(unsigned long* pOutSize, const char* name,
  const char* key) {
  if (name == nullptr) {
    return ResultNullSettingsName;
  }

  if (key == nullptr) {
    return ResultNullSettingsItemKey;
  }

  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  SettingsName settingsName = {};
  CopyString(settingsName.value, name);
  SettingsItemKey settingsItemKey = {};
  CopyString(settingsItemKey.value, key);
  uint64_t size = 0;
  NN_RESULT_DO(proxy->GetSettingsItemValueSize(sf::Out<uint64_t>(&size),
    settingsName, settingsItemKey));
  *pOutSize = size;
  return {};
}

Result GetSettingsItemValue(unsigned long* pOutSize, void* buffer,
  unsigned long size, const char* name, const char* key) {
  if (name == nullptr) {
    return ResultNullSettingsName;
  }

  if (key == nullptr) {
    return ResultNullSettingsItemKey;
  }

  if (buffer == nullptr) {
    return ResultNullSettingsItemValueOutBuffer;
  }

  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  SettingsName settingsName = {};
  CopyString(settingsName.value, name);
  SettingsItemKey settingsItemKey = {};
  CopyString(settingsItemKey.value, key);
  uint64_t valueSize = 0;
  if (size <= TransferBufferSize) {
    char transferBuffer[TransferBufferSize] = {};
    NN_RESULT_DO(proxy->GetSettingsItemValue(sf::Out<uint64_t>(&valueSize),
      sf::OutBuffer(transferBuffer, size), settingsName, settingsItemKey));
    std::memcpy(buffer, transferBuffer, valueSize);
  }
  else {
    NN_RESULT_DO(proxy->GetSettingsItemValueSize(
      sf::Out<uint64_t>(&valueSize), settingsName, settingsItemKey));
    if (valueSize != 0) {
      NN_RESULT_DO(proxy->GetSettingsItemValue(sf::Out<uint64_t>(&valueSize),
        sf::OutBuffer(buffer, std::min<uint64_t>(valueSize, size)),
        settingsName, settingsItemKey));
    }
  }

  *pOutSize = valueSize;
  return {};
}

Result CreateSettingsItemKeyIterator(
  fwdbg::SettingsItemKeyIterator* pOutValue, const char* name) {
  if (name == nullptr) {
    return ResultNullSettingsName;
  }

  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  SettingsName settingsName = {};
  CopyString(settingsName.value, name);
  sf::SharedPointer<ISettingsItemKeyIterator> iterator;
  NN_RESULT_DO(proxy->CreateSettingsItemKeyIterator(
    sf::Out<sf::SharedPointer<ISettingsItemKeyIterator>>(&iterator),
    settingsName));
  pOutValue->_impl = iterator.Detach();
  return {};
}

Result DestroySettingsItemKeyIterator(
  fwdbg::SettingsItemKeyIterator* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullSettingsItemKeyIterator;
  }

  if (pOutValue->_impl != nullptr) {
    pOutValue->_impl->Release();
  }

  return {};
}

Result AdvanceSettingsItemKeyIterator(
  fwdbg::SettingsItemKeyIterator* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullSettingsItemKeyIterator;
  }

  sf::SharedPointer<ISettingsItemKeyIterator> iterator(pOutValue->_impl,
    true);
  return iterator->GoNext();
}

Result GetSettingsItemKeySize(unsigned long* pOutSize,
  const fwdbg::SettingsItemKeyIterator& settingsItemKeyIterator) {
  sf::SharedPointer<ISettingsItemKeyIterator> iterator(
    settingsItemKeyIterator._impl, true);
  uint64_t size = 0;
  NN_RESULT_DO(iterator->GetKeySize(sf::Out<uint64_t>(&size)));
  *pOutSize = size;
  return {};
}

Result GetSettingsItemKey(unsigned long* pOutSize, void* buffer,
  unsigned long size,
  const fwdbg::SettingsItemKeyIterator& settingsItemKeyIterator) {
  if (buffer == nullptr) {
    return ResultNullSettingsItemKeyBuffer;
  }

  sf::SharedPointer<ISettingsItemKeyIterator> iterator(
    settingsItemKeyIterator._impl, true);
  uint64_t keySize = 0;
  if (size <= TransferBufferSize) {
    char transferBuffer[TransferBufferSize] = {};
    NN_RESULT_DO(iterator->GetKey(sf::Out<uint64_t>(&keySize),
      sf::OutBuffer(transferBuffer, size)));
    std::memcpy(buffer, transferBuffer, keySize);
  }
  else {
    NN_RESULT_DO(iterator->GetKeySize(sf::Out<uint64_t>(&keySize)));
    if (keySize != 0) {
      NN_RESULT_DO(iterator->GetKey(sf::Out<uint64_t>(&keySize),
        sf::OutBuffer(buffer, std::min<uint64_t>(keySize, size))));
    }
  }

  *pOutSize = keySize;
  return {};
}

Result SetSettingsItemValue(const char* name, const char* key,
  const void* buffer, unsigned long size) {
  if (name == nullptr) {
    return ResultNullSettingsName;
  }

  if (key == nullptr) {
    return ResultNullSettingsItemKey;
  }

  if (buffer == nullptr) {
    return ResultNullSettingsItemValueBuffer;
  }

  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  SettingsName settingsName = {};
  CopySettingsName(&settingsName, name);
  SettingsItemKey settingsItemKey = {};
  CopySettingsItemKey(&settingsItemKey, key);
  return proxy->SetSettingsItemValue(settingsName, settingsItemKey,
    sf::InBuffer(buffer, size));
}

Result ResetSettingsItemValue(const char* name, const char* key) {
  if (name == nullptr) {
    return ResultNullSettingsName;
  }

  if (key == nullptr) {
    return ResultNullSettingsItemKey;
  }

  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  SettingsName settingsName = {};
  CopySettingsName(&settingsName, name);
  SettingsItemKey settingsItemKey = {};
  CopySettingsItemKey(&settingsItemKey, key);
  return proxy->ResetSettingsItemValue(settingsName, settingsItemKey);
}

}
