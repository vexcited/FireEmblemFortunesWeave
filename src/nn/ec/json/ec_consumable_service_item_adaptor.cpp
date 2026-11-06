#include <string.h>

#include "nn/ec/json/ec_consumable_service_item_adaptor.hpp"
#include "nn/util/string_util.hpp"
#include "nn/util/util_format_string.hpp"

namespace nn::ec::json::adaptor {

namespace {

constexpr Result ResultUnknownRightStatus = {0x25aa4};
constexpr Result ResultTooManyRights = {0x25ca4};

}

void ConsumableServiceItemRightDataAdaptor::MakeRightsPath(char* buffer,
  size_t size, const char* key) {
  util::TSNPrintf(buffer, size, "$.rights[%d].%s", m_Index, key);
}

void ConsumableServiceItemRightDataAdaptor::MakeBeginPath(char* buffer,
  size_t size) {
  util::TSNPrintf(buffer, size, "$");
}

void ConsumableServiceItemRightDataAdaptor::MakeEndPath(char* buffer,
  size_t size) {
  util::TSNPrintf(buffer, size, "$");
}

Result ConsumableServiceItemRightDataAdaptor::UpdateImpl(
  const JsonPathType& path, int64_t value) {
  if (m_Index >= m_Count) {
    return ResultTooManyRights;
  }
  MakeRightsPath(m_pPathBuffer, m_PathBufferSize, "purchased_date_time");
  if (path.Match(m_pPathBuffer)) {
    m_pRights[m_Index].purchasedDateTime = value;
  }
  return Result();
}

Result ConsumableServiceItemRightDataAdaptor::UpdateImpl(
  const JsonPathType& path, const char* value, int) {
  if (m_Index >= m_Count) {
    return ResultTooManyRights;
  }
  MakeRightsPath(m_pPathBuffer, m_PathBufferSize, "status");
  if (path.Match(m_pPathBuffer)) {
    if (strcmp(value, "PURCHASED") == 0) {
      m_pRights[m_Index].isConsumed = false;
    }
    else if (strcmp(value, "CONSUMED") == 0) {
      m_pRights[m_Index].isConsumed = true;
    }
    else {
      return ResultUnknownRightStatus;
    }
    return Result();
  }

  MakeRightsPath(m_pPathBuffer, m_PathBufferSize, "right_id");
  if (path.Match(m_pPathBuffer)) {
    ConsumableServiceItemRightData& right = m_pRights[m_Index];
    util::Strlcpy(right.rightsId, value, sizeof(right.rightsId));
    return Result();
  }

  MakeRightsPath(m_pPathBuffer, m_PathBufferSize, "item_id");
  if (path.Match(m_pPathBuffer)) {
    ConsumableServiceItemRightData& right = m_pRights[m_Index];
    util::Strlcpy(right.itemId.value, value, sizeof(right.itemId.value));
    return Result();
  }

  MakeRightsPath(m_pPathBuffer, m_PathBufferSize, "consumption_request_id");
  if (path.Match(m_pPathBuffer)) {
    ConsumableServiceItemRightData& right = m_pRights[m_Index];
    util::Strlcpy(right.serviceProvidedKey, value,
      sizeof(right.serviceProvidedKey));
  }
  return Result();
}

Result ConsumableServiceItemRightDataAdaptor::NotifyObjectBeginImpl(
  const JsonPathType& path) {
  MakeBeginPath(m_pPathBuffer, m_PathBufferSize);
  if (!path.Match(m_pPathBuffer)) {
    if (m_Index >= m_Count) {
      return ResultTooManyRights;
    }
    m_pRights[m_Index] = {};
  }
  return Result();
}

Result ConsumableServiceItemRightDataAdaptor::NotifyObjectEndImpl(
  const JsonPathType& path) {
  MakeEndPath(m_pPathBuffer, m_PathBufferSize);
  if (path.Match(m_pPathBuffer)) {
    *m_pOutCount = m_Index;
    return Result();
  }
  if (m_Index >= m_Count) {
    return ResultTooManyRights;
  }
  m_Index++;
  return Result();
}

}
