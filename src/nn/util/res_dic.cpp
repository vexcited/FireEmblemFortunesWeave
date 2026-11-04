#include "nn/util/res_dic.hpp"

namespace nn::util {

bool ResDic::Build() {
  if (_count < 0) {
    return true;
  }

  for (int i = 0; i <= _count; ++i) {
    _entries[i].refBit = -1;
    _entries[i].children[0] = static_cast<uint16_t>(i);
    _entries[i].children[1] = static_cast<uint16_t>(i);
  }

  for (int i = 1; i <= _count; ++i) {
    Entry& entry = _entries[i];
    const string_view key = entry.key->Get();

    const Entry* parent = &_entries[0];
    const Entry* child = &_entries[parent->children[0]];
    while (parent->refBit < child->refBit) {
      parent = child;
      child = &_entries[child->children[ExtractRefBit(key, child->refBit)]];
    }

    int refBit = FindRefBit(key, child->key->Get());
    entry.refBit = refBit;
    if (refBit < 0) {
      return false;
    }

    Entry* insertParent = &_entries[0];
    Entry* insertChild = &_entries[insertParent->children[0]];
    while (insertParent->refBit < insertChild->refBit
      && insertChild->refBit < refBit) {
      insertParent = insertChild;
      insertChild = &_entries[insertChild->children[
        ExtractRefBit(key, insertChild->refBit)]];
    }

    insertParent->children[ExtractRefBit(key, insertParent->refBit)] =
      static_cast<uint16_t>(i);
    entry.children[ExtractRefBit(insertChild->key->Get(), refBit)] =
      static_cast<uint16_t>(insertChild - _entries);
  }

  return true;
}

int ResDic::FindRefBit(const string_view& lhs, const string_view& rhs) {
  size_t length = lhs.length() > rhs.length() ? lhs.length() : rhs.length();
  int bitCount = static_cast<int>(length * 8);
  for (int bit = 0; bit < bitCount; ++bit) {
    if (ExtractRefBit(lhs, bit) != ExtractRefBit(rhs, bit)) {
      return bit;
    }
  }
  return -1;
}

namespace {

uint16_t SwapBytes(uint16_t value) {
  return __builtin_bswap16(value);
}

uint32_t SwapBytes(uint32_t value) {
  return __builtin_bswap32(value);
}

void SwapEntries(ResDic* dic, int count) {
  for (int i = 0; i <= count; ++i) {
    ResDic::Entry& entry = dic->_entries[i];
    entry.refBit = static_cast<int32_t>(
      SwapBytes(static_cast<uint32_t>(entry.refBit)));
    entry.children[0] = SwapBytes(entry.children[0]);
    entry.children[1] = SwapBytes(entry.children[1]);
  }
}

}

void SwapEndian(ResEndian* endian, ResDic* dic) {
  if (endian->IsHostEndian()) {
    SwapEntries(dic, dic->_count);
    dic->_count = static_cast<int32_t>(
      SwapBytes(static_cast<uint32_t>(dic->_count)));
  }
  else {
    dic->_count = static_cast<int32_t>(
      SwapBytes(static_cast<uint32_t>(dic->_count)));
    SwapEntries(dic, dic->_count);
  }
}

// The first string of the pool is the shared empty string and is skipped.
void SwapEndian(ResEndian* endian, StringPool* pool) {
  BinString* first = reinterpret_cast<BinString*>(&pool->_stringCount + 1);
  uint16_t* length = reinterpret_cast<uint16_t*>(
    reinterpret_cast<char*>(first) + (first->_length & ~1) + 4);
  int count = pool->GetStringCount();

  if (endian->IsHostEndian()) {
    for (int i = 0; i < count; ++i) {
      uint16_t value = *length;
      *length = SwapBytes(value);
      length = reinterpret_cast<uint16_t*>(
        reinterpret_cast<char*>(length) + (value & ~1) + 4);
    }
  }
  else {
    for (int i = 0; i < count; ++i) {
      *length = SwapBytes(*length);
      length = reinterpret_cast<uint16_t*>(
        reinterpret_cast<char*>(length) + (*length & ~1) + 4);
    }
  }
}

}
