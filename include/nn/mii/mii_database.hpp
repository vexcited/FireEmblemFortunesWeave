#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/mii/mii_applet.hpp"
#include "nn/mii/visual_accessors.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::mii {

struct Ver3StoreData;

struct CharInfoElement {
  CharInfo info;
  int32_t source;
};

struct StoreDataElement {
  StoreData data;
  int32_t source;
};

struct RandomDesc {
  int32_t age;
  int32_t gender;
  int32_t race;
};

namespace detail {

class IDatabaseService : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result IsUpdated(sf::Out<bool> pOut, int32_t flag) = 0;
  virtual Result IsFullDatabase(sf::Out<bool> pOut) = 0;
  virtual Result GetCount(sf::Out<int32_t> pOut, int32_t flag) = 0;
  virtual Result Get(sf::Out<int32_t> pOutCount,
    const sf::OutArray<CharInfoElement>& elements, int32_t flag) = 0;
  virtual Result Get1(sf::Out<int32_t> pOutCount,
    const sf::OutArray<CharInfo>& infos, int32_t flag) = 0;
  virtual Result UpdateLatest(sf::Out<CharInfo> pOut, const CharInfo& info,
    int32_t flag) = 0;
  virtual Result BuildRandom(sf::Out<CharInfo> pOut, int32_t age,
    int32_t gender, int32_t race) = 0;
  virtual Result BuildDefault(sf::Out<CharInfo> pOut, int32_t index) = 0;
  virtual Result Get2(sf::Out<int32_t> pOutCount,
    const sf::OutArray<StoreDataElement>& elements, int32_t flag) = 0;
  virtual Result Get3(sf::Out<int32_t> pOutCount,
    const sf::OutArray<StoreData>& data, int32_t flag) = 0;
  virtual Result UpdateLatest1(sf::Out<StoreData> pOut,
    const StoreData& data, int32_t flag) = 0;
  virtual Result FindIndex(sf::Out<int32_t> pOut, const CreateId& id,
    bool isEnabledSpecialMii) = 0;
  virtual Result Move(int32_t index, const CreateId& id) = 0;
  virtual Result AddOrReplace(const StoreData& data) = 0;
  virtual Result Delete(const CreateId& id) = 0;
  virtual Result DestroyFile() = 0;
  virtual Result DeleteFile() = 0;
  virtual Result Format() = 0;
  virtual Result Import(const sf::InBuffer& buffer) = 0;
  virtual Result Export(const sf::OutBuffer& buffer) = 0;
  virtual Result IsBrokenDatabaseWithClearFlag(sf::Out<bool> pOut) = 0;
  virtual Result GetIndex(sf::Out<int32_t> pOut, const CharInfo& info) = 0;
  virtual Result SetInterfaceVersion(uint32_t version) = 0;
  virtual Result Convert(sf::Out<CharInfo> pOut,
    const Ver3StoreData& data) = 0;
  virtual void Reserved28() = 0;
  virtual void Reserved29() = 0;
  virtual Result Append(const CharInfo& info) = 0;
};

class ServiceProviderClient {
public:
  Result Initialize();
  Result GetDatabaseServiceSharedPointer(
    sf::SharedPointer<IDatabaseService>* pOut, int keyCode);
};

extern ServiceProviderClient g_ServiceProviderClient;

}

class Database {
public:
  ~Database();

  Result Initialize();
  void Finalize();
  bool IsAvailable() const;
  bool IsUpdated(int flag);
  bool IsFullDatabase() const;
  int GetCount(int flag) const;
  Result GetIndex(int* pOutIndex, const CharInfo& info) const;
  Result Get(int* pOutCount, CharInfoElement* pElements, int count,
    int flag);
  Result Get(int* pOutCount, CharInfo* pInfos, int count, int flag);
  Result UpdateLatest(CharInfo* pInfo, int flag) const;
  Result Convert(CharInfo* pOut, const Ver3StoreData& data);
  void BuildRandom(CharInfo* pOut, const RandomDesc& desc);
  void BuildDefault(CharInfo* pOut, int index) const;
  Result Format();
  Result Import(const void* buffer, size_t size);
  Result Export(void* buffer, size_t size) const;

  const sf::SharedPointer<detail::IDatabaseService>* GetHandle() const;

private:
  sf::SharedPointer<detail::IDatabaseService> service_;
};

class PrivateDatabase {
public:
  ~PrivateDatabase();

  static bool IsBrokenDatabaseWithClearFlag();

  Result Initialize();
  void Finalize();
  bool IsAvailable() const;
  bool IsUpdated(int flag);
  bool IsFullDatabase() const;
  int GetCount(int flag) const;
  Result Get(int* pOutCount, StoreDataElement* pElements, int count,
    int flag);
  Result Get(int* pOutCount, StoreData* pData, int count, int flag);
  Result UpdateLatest(StoreData* pData, int flag) const;
  int FindIndex(const CreateId& id, bool isEnabledSpecialMii) const;
  Result Move(int index, const CreateId& id);
  Result AddOrReplace(const StoreData& data);
  Result Delete(const CreateId& id);
  Result DestroyFile();
  Result DeleteFile();
  Result Format();
  Result Import(const void* buffer, size_t size);
  Result Export(void* buffer, size_t size) const;

private:
  sf::SharedPointer<detail::IDatabaseService> service_;
};

}
