#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/ec/ec_consumable_service_item.hpp"
#include "nn/http/json/http_json_path.hpp"
#include "nn/result.hpp"

namespace nn::ec::json::adaptor {

class ConsumableServiceItemRightDataAdaptor {
 public:
  using JsonPathType = http::json::JsonPath<8, 128, false>;

  Result UpdateImpl(const JsonPathType& path, int64_t value);
  Result UpdateImpl(const JsonPathType& path, const char* value, int length);
  Result NotifyObjectBeginImpl(const JsonPathType& path);
  Result NotifyObjectEndImpl(const JsonPathType& path);
  void MakeRightsPath(char* buffer, size_t size, const char* key);
  void MakeBeginPath(char* buffer, size_t size);
  void MakeEndPath(char* buffer, size_t size);

 private:
  uint8_t m_Base[16];
  ConsumableServiceItemRightData* m_pRights;
  int* m_pOutCount;
  int m_Count;
  int m_Index;
  char* m_pPathBuffer;
  size_t m_PathBufferSize;
};

}
