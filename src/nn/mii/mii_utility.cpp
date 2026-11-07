#include "nn/mii/mii_utility.hpp"

#include "nn/os/time.hpp"
#include "nn/util/uuid.hpp"

namespace nn::mii::detail {

uint32_t UtilityImpl::Next() {
  const uint32_t t = m_X ^ (m_X << 11);
  m_X = m_Y;
  m_Y = m_Z;
  m_Z = m_W;
  m_W = (m_W ^ (m_W >> 19)) ^ (t ^ (t >> 8));
  return m_W;
}

void UtilityImpl::SetSeed(int64_t seed) {
  m_X = 123456789;
  m_Y = 362436069;
  m_Z = static_cast<uint64_t>(seed) >> 32;
  m_W = static_cast<uint32_t>(seed);
}

UtilityImpl::UtilityImpl() : m_X(0), m_Y(0), m_Z(0), m_W(0) {
  SetSeed(GetRandomSeedBySystemTick());
}

UtilityImpl::~UtilityImpl() {}

int64_t UtilityImpl::GetRandomSeedBySystemTick() {
  return os::GetSystemTick().value;
}

void UtilityImpl::MakeCreateId(CreateId* id) {
  const auto value = nn::util::GenerateUuid();
  __builtin_memcpy(id, &value, sizeof(value));
}

void UtilityImpl::MakeInvalidCreateId(CreateId* id) {
  *id = {};
}

int UtilityImpl::GetRandomRange(int minimum, int maximum) {
  return Next() % static_cast<uint32_t>(maximum - minimum + 1) + minimum;
}

int UtilityImpl::GetRandom(int minimum, int end) {
  return Next() % static_cast<uint32_t>(end - minimum) + minimum;
}

uint32_t UtilityImpl::GetRandomUint32(uint32_t end) {
  return Next() % end;
}

int UtilityImpl::GetRandom(int end) {
  return Next() % static_cast<uint32_t>(end);
}

uint8_t UtilityImpl::GetRandomUint8() {
  return Next();
}

uint32_t UtilityImpl::GetRandomUint32() {
  return Next();
}

uint16_t UtilityImpl::GetRandomUint16() {
  return Next();
}

void UtilityImpl::SetRandomSeedForDebug(int64_t seed) {
  SetSeed(seed);
}

}
