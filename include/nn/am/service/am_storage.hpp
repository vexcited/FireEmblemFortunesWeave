#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/am/interfaces.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am::service {

class IStorageAccessor : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSize(sf::Out<int64_t> pOutSize) = 0;
  virtual Result Write(int64_t offset, const sf::InBuffer& buffer) = 0;
  virtual Result Read(int64_t offset, const sf::OutBuffer& buffer) = 0;
};

class ITransferStorageAccessor : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSize(sf::Out<int64_t> pOutSize) = 0;
  virtual Result GetHandle(sf::Out<sf::NativeHandle> pOutHandle,
    sf::Out<uint64_t> pOutSize) = 0;
};

class IStorage : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Open(
    const sf::Out<sf::SharedPointer<IStorageAccessor>>& pOutAccessor) = 0;
  virtual Result OpenTransferStorage(
    const sf::Out<sf::SharedPointer<ITransferStorageAccessor>>&
      pOutAccessor) = 0;
};

#define NN_AM_RESERVED(index) virtual void Reserved##index() = 0

class ILibraryAppletCreator : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  NN_AM_RESERVED(6); NN_AM_RESERVED(7);
  virtual Result CreateStorage(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage,
    int64_t size) = 0;
  virtual Result CreateTransferMemoryStorage(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage,
    sf::NativeHandle transferMemoryHandle, int64_t size,
    bool isWritable) = 0;
  virtual Result CreateHandleStorage(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage,
    sf::NativeHandle transferMemoryHandle, int64_t size) = 0;
};

#undef NN_AM_RESERVED

inline ILibraryAppletCreator* GetLibraryAppletCreatorObject() {
  return reinterpret_cast<ILibraryAppletCreator*>(GetLibraryAppletCreator());
}

}
