#include "nn/util/sdk_version.hpp"

namespace nn::util {

// These only keep the middleware identification strings linked in.
void SdkVersion() {
  ReferSymbol("SDK MW+Nintendo+NintendoSdk_nnSdk-Generic_22_2_0-Release");
}

void BuildTarget() {
  ReferSymbol("SDK MW+Nintendo+NintendoSdk_BuildTarget-64Bit");
}

}
