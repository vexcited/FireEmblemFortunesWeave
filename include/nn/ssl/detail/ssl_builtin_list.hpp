#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/ssl/ssl_types.hpp"

namespace nn::ssl::detail {

class BuiltInList {
 public:
  class CertificateAccessor {
   public:
    CertificateAccessor(const BuiltInList& list, uint32_t index);

    Result GetCertificate(BuiltInCertificateInfoBase* pOutInfo);

   private:
    const BuiltInList* m_pList;
    uint32_t m_Index;
  };

  class Iterator {
   public:
    Iterator(const BuiltInList& list, uint32_t index);

    bool operator==(const Iterator& other) const;
    bool operator!=(const Iterator& other) const;
    explicit operator bool() const;
    CertificateAccessor operator*();
    Iterator& operator++();
    Iterator operator++(int);

   private:
    const BuiltInList* m_pList;
    uint32_t m_Index;
  };

  BuiltInList();

  Result Initialize(uint8_t* buffer, uint32_t bufferSize);
  Iterator begin();
  Iterator end();

 private:
  uint8_t* m_pBuffer;
  uint32_t m_BufferSize;
  uint32_t m_Count;
};

}
