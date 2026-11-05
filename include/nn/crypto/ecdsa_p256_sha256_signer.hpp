#pragma once

#include <stddef.h>

namespace nn::crypto {

class EcdsaP256Sha256Signer {
public:
  bool Sign(void* signature, size_t signatureSize, const void* privateKey,
    size_t privateKeySize, const void* message, size_t messageSize,
    const void* random, size_t randomSize);

private:
  bool m_Reserved = false;
};

}
