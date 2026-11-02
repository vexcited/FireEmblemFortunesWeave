#include "nn/codec/transforms.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using FIXP_STB = int16_t;
using FIXP_STP = FIXP_SPK;
using FIXP_WTP = FIXP_SPK;
using INT = int;
using UINT = unsigned;
using LONG = int32_t;

constexpr int16_t fixed_sgl(double v) {
  double value = v * 32768.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 32767 ? 32767 : value <= -32768 ? -32768 : int16_t(value);
}

static int CntLeadingZeros(uint32_t value) {
  return value ? __builtin_clz(value) : 32;
}

static constexpr int16_t roundedCoefficient(uint32_t bits) {
  int32_t value = static_cast<int32_t>(bits);
  int32_t rounded = ((value >> 15) + 1) >> 1;
  return static_cast<int16_t>(rounded > 32767 ? 32767 : rounded);
}

static int fNormz(int32_t value) {
  return CntLeadingZeros(value);
}

static int32_t fMultDiv2(int16_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 16);
}

static int32_t fMultDiv2(int32_t a, int16_t b) {
  return fMultDiv2(b, a);
}

// The SDK negates this product at 64-bit width before narrowing.
static int32_t multiplyNegatedDiv2(int32_t a, int16_t b) {
  return static_cast<int32_t>((-static_cast<int64_t>(a) * b) >> 16);
}

template <typename A, typename B> static int32_t fMult(A a, B b) {
  return static_cast<int32_t>(static_cast<uint32_t>(fMultDiv2(a, b)) << 1);
}

const FIXP_STP SineTable512[] = {
  {{roundedCoefficient(0x7fffffff), roundedCoefficient(0x00000000)}},
  {{roundedCoefficient(0x7fffd886), roundedCoefficient(0x006487e3)}},
  {{roundedCoefficient(0x7fff6216), roundedCoefficient(0x00c90f88)}},
  {{roundedCoefficient(0x7ffe9cb2), roundedCoefficient(0x012d96b1)}},
  {{roundedCoefficient(0x7ffd885a), roundedCoefficient(0x01921d20)}},
  {{roundedCoefficient(0x7ffc250f), roundedCoefficient(0x01f6a297)}},
  {{roundedCoefficient(0x7ffa72d1), roundedCoefficient(0x025b26d7)}},
  {{roundedCoefficient(0x7ff871a2), roundedCoefficient(0x02bfa9a4)}},
  {{roundedCoefficient(0x7ff62182), roundedCoefficient(0x03242abf)}},
  {{roundedCoefficient(0x7ff38274), roundedCoefficient(0x0388a9ea)}},
  {{roundedCoefficient(0x7ff09478), roundedCoefficient(0x03ed26e6)}},
  {{roundedCoefficient(0x7fed5791), roundedCoefficient(0x0451a177)}},
  {{roundedCoefficient(0x7fe9cbc0), roundedCoefficient(0x04b6195d)}},
  {{roundedCoefficient(0x7fe5f108), roundedCoefficient(0x051a8e5c)}},
  {{roundedCoefficient(0x7fe1c76b), roundedCoefficient(0x057f0035)}},
  {{roundedCoefficient(0x7fdd4eec), roundedCoefficient(0x05e36ea9)}},
  {{roundedCoefficient(0x7fd8878e), roundedCoefficient(0x0647d97c)}},
  {{roundedCoefficient(0x7fd37153), roundedCoefficient(0x06ac406f)}},
  {{roundedCoefficient(0x7fce0c3e), roundedCoefficient(0x0710a345)}},
  {{roundedCoefficient(0x7fc85854), roundedCoefficient(0x077501be)}},
  {{roundedCoefficient(0x7fc25596), roundedCoefficient(0x07d95b9e)}},
  {{roundedCoefficient(0x7fbc040a), roundedCoefficient(0x083db0a7)}},
  {{roundedCoefficient(0x7fb563b3), roundedCoefficient(0x08a2009a)}},
  {{roundedCoefficient(0x7fae7495), roundedCoefficient(0x09064b3a)}},
  {{roundedCoefficient(0x7fa736b4), roundedCoefficient(0x096a9049)}},
  {{roundedCoefficient(0x7f9faa15), roundedCoefficient(0x09cecf89)}},
  {{roundedCoefficient(0x7f97cebd), roundedCoefficient(0x0a3308bd)}},
  {{roundedCoefficient(0x7f8fa4b0), roundedCoefficient(0x0a973ba5)}},
  {{roundedCoefficient(0x7f872bf3), roundedCoefficient(0x0afb6805)}},
  {{roundedCoefficient(0x7f7e648c), roundedCoefficient(0x0b5f8d9f)}},
  {{roundedCoefficient(0x7f754e80), roundedCoefficient(0x0bc3ac35)}},
  {{roundedCoefficient(0x7f6be9d4), roundedCoefficient(0x0c27c389)}},
  {{roundedCoefficient(0x7f62368f), roundedCoefficient(0x0c8bd35e)}},
  {{roundedCoefficient(0x7f5834b7), roundedCoefficient(0x0cefdb76)}},
  {{roundedCoefficient(0x7f4de451), roundedCoefficient(0x0d53db92)}},
  {{roundedCoefficient(0x7f434563), roundedCoefficient(0x0db7d376)}},
  {{roundedCoefficient(0x7f3857f6), roundedCoefficient(0x0e1bc2e4)}},
  {{roundedCoefficient(0x7f2d1c0e), roundedCoefficient(0x0e7fa99e)}},
  {{roundedCoefficient(0x7f2191b4), roundedCoefficient(0x0ee38766)}},
  {{roundedCoefficient(0x7f15b8ee), roundedCoefficient(0x0f475bff)}},
  {{roundedCoefficient(0x7f0991c4), roundedCoefficient(0x0fab272b)}},
  {{roundedCoefficient(0x7efd1c3c), roundedCoefficient(0x100ee8ad)}},
  {{roundedCoefficient(0x7ef05860), roundedCoefficient(0x1072a048)}},
  {{roundedCoefficient(0x7ee34636), roundedCoefficient(0x10d64dbd)}},
  {{roundedCoefficient(0x7ed5e5c6), roundedCoefficient(0x1139f0cf)}},
  {{roundedCoefficient(0x7ec8371a), roundedCoefficient(0x119d8941)}},
  {{roundedCoefficient(0x7eba3a39), roundedCoefficient(0x120116d5)}},
  {{roundedCoefficient(0x7eabef2c), roundedCoefficient(0x1264994e)}},
  {{roundedCoefficient(0x7e9d55fc), roundedCoefficient(0x12c8106f)}},
  {{roundedCoefficient(0x7e8e6eb2), roundedCoefficient(0x132b7bf9)}},
  {{roundedCoefficient(0x7e7f3957), roundedCoefficient(0x138edbb1)}},
  {{roundedCoefficient(0x7e6fb5f4), roundedCoefficient(0x13f22f58)}},
  {{roundedCoefficient(0x7e5fe493), roundedCoefficient(0x145576b1)}},
  {{roundedCoefficient(0x7e4fc53e), roundedCoefficient(0x14b8b17f)}},
  {{roundedCoefficient(0x7e3f57ff), roundedCoefficient(0x151bdf86)}},
  {{roundedCoefficient(0x7e2e9cdf), roundedCoefficient(0x157f0086)}},
  {{roundedCoefficient(0x7e1d93ea), roundedCoefficient(0x15e21445)}},
  {{roundedCoefficient(0x7e0c3d29), roundedCoefficient(0x16451a83)}},
  {{roundedCoefficient(0x7dfa98a8), roundedCoefficient(0x16a81305)}},
  {{roundedCoefficient(0x7de8a670), roundedCoefficient(0x170afd8d)}},
  {{roundedCoefficient(0x7dd6668f), roundedCoefficient(0x176dd9de)}},
  {{roundedCoefficient(0x7dc3d90d), roundedCoefficient(0x17d0a7bc)}},
  {{roundedCoefficient(0x7db0fdf8), roundedCoefficient(0x183366e9)}},
  {{roundedCoefficient(0x7d9dd55a), roundedCoefficient(0x18961728)}},
  {{roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x18f8b83c)}},
  {{roundedCoefficient(0x7d769bb5), roundedCoefficient(0x195b49ea)}},
  {{roundedCoefficient(0x7d628ac6), roundedCoefficient(0x19bdcbf3)}},
  {{roundedCoefficient(0x7d4e2c7f), roundedCoefficient(0x1a203e1b)}},
  {{roundedCoefficient(0x7d3980ec), roundedCoefficient(0x1a82a026)}},
  {{roundedCoefficient(0x7d24881b), roundedCoefficient(0x1ae4f1d6)}},
  {{roundedCoefficient(0x7d0f4218), roundedCoefficient(0x1b4732ef)}},
  {{roundedCoefficient(0x7cf9aef0), roundedCoefficient(0x1ba96335)}},
  {{roundedCoefficient(0x7ce3ceb2), roundedCoefficient(0x1c0b826a)}},
  {{roundedCoefficient(0x7ccda169), roundedCoefficient(0x1c6d9053)}},
  {{roundedCoefficient(0x7cb72724), roundedCoefficient(0x1ccf8cb3)}},
  {{roundedCoefficient(0x7ca05ff1), roundedCoefficient(0x1d31774d)}},
  {{roundedCoefficient(0x7c894bde), roundedCoefficient(0x1d934fe5)}},
  {{roundedCoefficient(0x7c71eaf9), roundedCoefficient(0x1df5163f)}},
  {{roundedCoefficient(0x7c5a3d50), roundedCoefficient(0x1e56ca1e)}},
  {{roundedCoefficient(0x7c4242f2), roundedCoefficient(0x1eb86b46)}},
  {{roundedCoefficient(0x7c29fbee), roundedCoefficient(0x1f19f97b)}},
  {{roundedCoefficient(0x7c116853), roundedCoefficient(0x1f7b7481)}},
  {{roundedCoefficient(0x7bf88830), roundedCoefficient(0x1fdcdc1b)}},
  {{roundedCoefficient(0x7bdf5b94), roundedCoefficient(0x203e300d)}},
  {{roundedCoefficient(0x7bc5e290), roundedCoefficient(0x209f701c)}},
  {{roundedCoefficient(0x7bac1d31), roundedCoefficient(0x21009c0c)}},
  {{roundedCoefficient(0x7b920b89), roundedCoefficient(0x2161b3a0)}},
  {{roundedCoefficient(0x7b77ada8), roundedCoefficient(0x21c2b69c)}},
  {{roundedCoefficient(0x7b5d039e), roundedCoefficient(0x2223a4c5)}},
  {{roundedCoefficient(0x7b420d7a), roundedCoefficient(0x22847de0)}},
  {{roundedCoefficient(0x7b26cb4f), roundedCoefficient(0x22e541af)}},
  {{roundedCoefficient(0x7b0b3d2c), roundedCoefficient(0x2345eff8)}},
  {{roundedCoefficient(0x7aef6323), roundedCoefficient(0x23a6887f)}},
  {{roundedCoefficient(0x7ad33d45), roundedCoefficient(0x24070b08)}},
  {{roundedCoefficient(0x7ab6cba4), roundedCoefficient(0x24677758)}},
  {{roundedCoefficient(0x7a9a0e50), roundedCoefficient(0x24c7cd33)}},
  {{roundedCoefficient(0x7a7d055b), roundedCoefficient(0x25280c5e)}},
  {{roundedCoefficient(0x7a5fb0d8), roundedCoefficient(0x2588349d)}},
  {{roundedCoefficient(0x7a4210d8), roundedCoefficient(0x25e845b6)}},
  {{roundedCoefficient(0x7a24256f), roundedCoefficient(0x26483f6c)}},
  {{roundedCoefficient(0x7a05eead), roundedCoefficient(0x26a82186)}},
  {{roundedCoefficient(0x79e76ca7), roundedCoefficient(0x2707ebc7)}},
  {{roundedCoefficient(0x79c89f6e), roundedCoefficient(0x27679df4)}},
  {{roundedCoefficient(0x79a98715), roundedCoefficient(0x27c737d3)}},
  {{roundedCoefficient(0x798a23b1), roundedCoefficient(0x2826b928)}},
  {{roundedCoefficient(0x796a7554), roundedCoefficient(0x288621b9)}},
  {{roundedCoefficient(0x794a7c12), roundedCoefficient(0x28e5714b)}},
  {{roundedCoefficient(0x792a37fe), roundedCoefficient(0x2944a7a2)}},
  {{roundedCoefficient(0x7909a92d), roundedCoefficient(0x29a3c485)}},
  {{roundedCoefficient(0x78e8cfb2), roundedCoefficient(0x2a02c7b8)}},
  {{roundedCoefficient(0x78c7aba2), roundedCoefficient(0x2a61b101)}},
  {{roundedCoefficient(0x78a63d11), roundedCoefficient(0x2ac08026)}},
  {{roundedCoefficient(0x78848414), roundedCoefficient(0x2b1f34eb)}},
  {{roundedCoefficient(0x786280bf), roundedCoefficient(0x2b7dcf17)}},
  {{roundedCoefficient(0x78403329), roundedCoefficient(0x2bdc4e6f)}},
  {{roundedCoefficient(0x781d9b65), roundedCoefficient(0x2c3ab2b9)}},
  {{roundedCoefficient(0x77fab989), roundedCoefficient(0x2c98fbba)}},
  {{roundedCoefficient(0x77d78daa), roundedCoefficient(0x2cf72939)}},
  {{roundedCoefficient(0x77b417df), roundedCoefficient(0x2d553afc)}},
  {{roundedCoefficient(0x7790583e), roundedCoefficient(0x2db330c7)}},
  {{roundedCoefficient(0x776c4edb), roundedCoefficient(0x2e110a62)}},
  {{roundedCoefficient(0x7747fbce), roundedCoefficient(0x2e6ec792)}},
  {{roundedCoefficient(0x77235f2d), roundedCoefficient(0x2ecc681e)}},
  {{roundedCoefficient(0x76fe790e), roundedCoefficient(0x2f29ebcc)}},
  {{roundedCoefficient(0x76d94989), roundedCoefficient(0x2f875262)}},
  {{roundedCoefficient(0x76b3d0b4), roundedCoefficient(0x2fe49ba7)}},
  {{roundedCoefficient(0x768e0ea6), roundedCoefficient(0x3041c761)}},
  {{roundedCoefficient(0x76680376), roundedCoefficient(0x309ed556)}},
  {{roundedCoefficient(0x7641af3d), roundedCoefficient(0x30fbc54d)}},
  {{roundedCoefficient(0x761b1211), roundedCoefficient(0x3158970e)}},
  {{roundedCoefficient(0x75f42c0b), roundedCoefficient(0x31b54a5e)}},
  {{roundedCoefficient(0x75ccfd42), roundedCoefficient(0x3211df04)}},
  {{roundedCoefficient(0x75a585cf), roundedCoefficient(0x326e54c7)}},
  {{roundedCoefficient(0x757dc5ca), roundedCoefficient(0x32caab6f)}},
  {{roundedCoefficient(0x7555bd4c), roundedCoefficient(0x3326e2c3)}},
  {{roundedCoefficient(0x752d6c6c), roundedCoefficient(0x3382fa88)}},
  {{roundedCoefficient(0x7504d345), roundedCoefficient(0x33def287)}},
  {{roundedCoefficient(0x74dbf1ef), roundedCoefficient(0x343aca87)}},
  {{roundedCoefficient(0x74b2c884), roundedCoefficient(0x34968250)}},
  {{roundedCoefficient(0x7489571c), roundedCoefficient(0x34f219a8)}},
  {{roundedCoefficient(0x745f9dd1), roundedCoefficient(0x354d9057)}},
  {{roundedCoefficient(0x74359cbd), roundedCoefficient(0x35a8e625)}},
  {{roundedCoefficient(0x740b53fb), roundedCoefficient(0x36041ad9)}},
  {{roundedCoefficient(0x73e0c3a3), roundedCoefficient(0x365f2e3b)}},
  {{roundedCoefficient(0x73b5ebd1), roundedCoefficient(0x36ba2014)}},
  {{roundedCoefficient(0x738acc9e), roundedCoefficient(0x3714f02a)}},
  {{roundedCoefficient(0x735f6626), roundedCoefficient(0x376f9e46)}},
  {{roundedCoefficient(0x7333b883), roundedCoefficient(0x37ca2a30)}},
  {{roundedCoefficient(0x7307c3d0), roundedCoefficient(0x382493b0)}},
  {{roundedCoefficient(0x72db8828), roundedCoefficient(0x387eda8e)}},
  {{roundedCoefficient(0x72af05a7), roundedCoefficient(0x38d8fe93)}},
  {{roundedCoefficient(0x72823c67), roundedCoefficient(0x3932ff87)}},
  {{roundedCoefficient(0x72552c85), roundedCoefficient(0x398cdd32)}},
  {{roundedCoefficient(0x7227d61c), roundedCoefficient(0x39e6975e)}},
  {{roundedCoefficient(0x71fa3949), roundedCoefficient(0x3a402dd2)}},
  {{roundedCoefficient(0x71cc5626), roundedCoefficient(0x3a99a057)}},
  {{roundedCoefficient(0x719e2cd2), roundedCoefficient(0x3af2eeb7)}},
  {{roundedCoefficient(0x716fbd68), roundedCoefficient(0x3b4c18ba)}},
  {{roundedCoefficient(0x71410805), roundedCoefficient(0x3ba51e29)}},
  {{roundedCoefficient(0x71120cc5), roundedCoefficient(0x3bfdfecd)}},
  {{roundedCoefficient(0x70e2cbc6), roundedCoefficient(0x3c56ba70)}},
  {{roundedCoefficient(0x70b34525), roundedCoefficient(0x3caf50da)}},
  {{roundedCoefficient(0x708378ff), roundedCoefficient(0x3d07c1d6)}},
  {{roundedCoefficient(0x70536771), roundedCoefficient(0x3d600d2c)}},
  {{roundedCoefficient(0x7023109a), roundedCoefficient(0x3db832a6)}},
  {{roundedCoefficient(0x6ff27497), roundedCoefficient(0x3e10320d)}},
  {{roundedCoefficient(0x6fc19385), roundedCoefficient(0x3e680b2c)}},
  {{roundedCoefficient(0x6f906d84), roundedCoefficient(0x3ebfbdcd)}},
  {{roundedCoefficient(0x6f5f02b2), roundedCoefficient(0x3f1749b8)}},
  {{roundedCoefficient(0x6f2d532c), roundedCoefficient(0x3f6eaeb8)}},
  {{roundedCoefficient(0x6efb5f12), roundedCoefficient(0x3fc5ec98)}},
  {{roundedCoefficient(0x6ec92683), roundedCoefficient(0x401d0321)}},
  {{roundedCoefficient(0x6e96a99d), roundedCoefficient(0x4073f21d)}},
  {{roundedCoefficient(0x6e63e87f), roundedCoefficient(0x40cab958)}},
  {{roundedCoefficient(0x6e30e34a), roundedCoefficient(0x4121589b)}},
  {{roundedCoefficient(0x6dfd9a1c), roundedCoefficient(0x4177cfb1)}},
  {{roundedCoefficient(0x6dca0d14), roundedCoefficient(0x41ce1e65)}},
  {{roundedCoefficient(0x6d963c54), roundedCoefficient(0x42244481)}},
  {{roundedCoefficient(0x6d6227fa), roundedCoefficient(0x427a41d0)}},
  {{roundedCoefficient(0x6d2dd027), roundedCoefficient(0x42d0161e)}},
  {{roundedCoefficient(0x6cf934fc), roundedCoefficient(0x4325c135)}},
  {{roundedCoefficient(0x6cc45698), roundedCoefficient(0x437b42e1)}},
  {{roundedCoefficient(0x6c8f351c), roundedCoefficient(0x43d09aed)}},
  {{roundedCoefficient(0x6c59d0a9), roundedCoefficient(0x4425c923)}},
  {{roundedCoefficient(0x6c242960), roundedCoefficient(0x447acd50)}},
  {{roundedCoefficient(0x6bee3f62), roundedCoefficient(0x44cfa740)}},
  {{roundedCoefficient(0x6bb812d1), roundedCoefficient(0x452456bd)}},
  {{roundedCoefficient(0x6b81a3cd), roundedCoefficient(0x4578db93)}},
  {{roundedCoefficient(0x6b4af279), roundedCoefficient(0x45cd358f)}},
  {{roundedCoefficient(0x6b13fef5), roundedCoefficient(0x4621647d)}},
  {{roundedCoefficient(0x6adcc964), roundedCoefficient(0x46756828)}},
  {{roundedCoefficient(0x6aa551e9), roundedCoefficient(0x46c9405c)}},
  {{roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x471cece7)}},
  {{roundedCoefficient(0x6a359db9), roundedCoefficient(0x47706d93)}},
  {{roundedCoefficient(0x69fd614a), roundedCoefficient(0x47c3c22f)}},
  {{roundedCoefficient(0x69c4e37a), roundedCoefficient(0x4816ea86)}},
  {{roundedCoefficient(0x698c246c), roundedCoefficient(0x4869e665)}},
  {{roundedCoefficient(0x69532442), roundedCoefficient(0x48bcb599)}},
  {{roundedCoefficient(0x6919e320), roundedCoefficient(0x490f57ee)}},
  {{roundedCoefficient(0x68e06129), roundedCoefficient(0x4961cd33)}},
  {{roundedCoefficient(0x68a69e81), roundedCoefficient(0x49b41533)}},
  {{roundedCoefficient(0x686c9b4b), roundedCoefficient(0x4a062fbd)}},
  {{roundedCoefficient(0x683257ab), roundedCoefficient(0x4a581c9e)}},
  {{roundedCoefficient(0x67f7d3c5), roundedCoefficient(0x4aa9dba2)}},
  {{roundedCoefficient(0x67bd0fbd), roundedCoefficient(0x4afb6c98)}},
  {{roundedCoefficient(0x67820bb7), roundedCoefficient(0x4b4ccf4d)}},
  {{roundedCoefficient(0x6746c7d8), roundedCoefficient(0x4b9e0390)}},
  {{roundedCoefficient(0x670b4444), roundedCoefficient(0x4bef092d)}},
  {{roundedCoefficient(0x66cf8120), roundedCoefficient(0x4c3fdff4)}},
  {{roundedCoefficient(0x66937e91), roundedCoefficient(0x4c9087b1)}},
  {{roundedCoefficient(0x66573cbb), roundedCoefficient(0x4ce10034)}},
  {{roundedCoefficient(0x661abbc5), roundedCoefficient(0x4d31494b)}},
  {{roundedCoefficient(0x65ddfbd3), roundedCoefficient(0x4d8162c4)}},
  {{roundedCoefficient(0x65a0fd0b), roundedCoefficient(0x4dd14c6e)}},
  {{roundedCoefficient(0x6563bf92), roundedCoefficient(0x4e210617)}},
  {{roundedCoefficient(0x6526438f), roundedCoefficient(0x4e708f8f)}},
  {{roundedCoefficient(0x64e88926), roundedCoefficient(0x4ebfe8a5)}},
  {{roundedCoefficient(0x64aa907f), roundedCoefficient(0x4f0f1126)}},
  {{roundedCoefficient(0x646c59bf), roundedCoefficient(0x4f5e08e3)}},
  {{roundedCoefficient(0x642de50d), roundedCoefficient(0x4faccfab)}},
  {{roundedCoefficient(0x63ef3290), roundedCoefficient(0x4ffb654d)}},
  {{roundedCoefficient(0x63b0426d), roundedCoefficient(0x5049c999)}},
  {{roundedCoefficient(0x637114cc), roundedCoefficient(0x5097fc5e)}},
  {{roundedCoefficient(0x6331a9d4), roundedCoefficient(0x50e5fd6d)}},
  {{roundedCoefficient(0x62f201ac), roundedCoefficient(0x5133cc94)}},
  {{roundedCoefficient(0x62b21c7b), roundedCoefficient(0x518169a5)}},
  {{roundedCoefficient(0x6271fa69), roundedCoefficient(0x51ced46e)}},
  {{roundedCoefficient(0x62319b9d), roundedCoefficient(0x521c0cc2)}},
  {{roundedCoefficient(0x61f1003f), roundedCoefficient(0x5269126e)}},
  {{roundedCoefficient(0x61b02876), roundedCoefficient(0x52b5e546)}},
  {{roundedCoefficient(0x616f146c), roundedCoefficient(0x53028518)}},
  {{roundedCoefficient(0x612dc447), roundedCoefficient(0x534ef1b5)}},
  {{roundedCoefficient(0x60ec3830), roundedCoefficient(0x539b2af0)}},
  {{roundedCoefficient(0x60aa7050), roundedCoefficient(0x53e73097)}},
  {{roundedCoefficient(0x60686ccf), roundedCoefficient(0x5433027d)}},
  {{roundedCoefficient(0x60262dd6), roundedCoefficient(0x547ea073)}},
  {{roundedCoefficient(0x5fe3b38d), roundedCoefficient(0x54ca0a4b)}},
  {{roundedCoefficient(0x5fa0fe1f), roundedCoefficient(0x55153fd4)}},
  {{roundedCoefficient(0x5f5e0db3), roundedCoefficient(0x556040e2)}},
  {{roundedCoefficient(0x5f1ae274), roundedCoefficient(0x55ab0d46)}},
  {{roundedCoefficient(0x5ed77c8a), roundedCoefficient(0x55f5a4d2)}},
  {{roundedCoefficient(0x5e93dc1f), roundedCoefficient(0x56400758)}},
  {{roundedCoefficient(0x5e50015d), roundedCoefficient(0x568a34a9)}},
  {{roundedCoefficient(0x5e0bec6e), roundedCoefficient(0x56d42c99)}},
  {{roundedCoefficient(0x5dc79d7c), roundedCoefficient(0x571deefa)}},
  {{roundedCoefficient(0x5d8314b1), roundedCoefficient(0x57677b9d)}},
  {{roundedCoefficient(0x5d3e5237), roundedCoefficient(0x57b0d256)}},
  {{roundedCoefficient(0x5cf95638), roundedCoefficient(0x57f9f2f8)}},
  {{roundedCoefficient(0x5cb420e0), roundedCoefficient(0x5842dd54)}},
  {{roundedCoefficient(0x5c6eb258), roundedCoefficient(0x588b9140)}},
  {{roundedCoefficient(0x5c290acc), roundedCoefficient(0x58d40e8c)}},
  {{roundedCoefficient(0x5be32a67), roundedCoefficient(0x591c550e)}},
  {{roundedCoefficient(0x5b9d1154), roundedCoefficient(0x59646498)}},
  {{roundedCoefficient(0x5b56bfbd), roundedCoefficient(0x59ac3cfd)}},
  {{roundedCoefficient(0x5b1035cf), roundedCoefficient(0x59f3de12)}},
  {{roundedCoefficient(0x5ac973b5), roundedCoefficient(0x5a3b47ab)}},
  {{roundedCoefficient(0x5a82799a), roundedCoefficient(0x5a82799a)}}};
const FIXP_STP SineTable480[] = {
  {{roundedCoefficient(0x7fffffff), roundedCoefficient(0x00000000)}},
  {{roundedCoefficient(0x7fffd315), roundedCoefficient(0x006b3b9b)}},
  {{roundedCoefficient(0x7fff4c54), roundedCoefficient(0x00d676eb)}},
  {{roundedCoefficient(0x7ffe6bbf), roundedCoefficient(0x0141b1a5)}},
  {{roundedCoefficient(0x7ffd3154), roundedCoefficient(0x01aceb7c)}},
  {{roundedCoefficient(0x7ffb9d15), roundedCoefficient(0x02182427)}},
  {{roundedCoefficient(0x7ff9af04), roundedCoefficient(0x02835b5a)}},
  {{roundedCoefficient(0x7ff76721), roundedCoefficient(0x02ee90c8)}},
  {{roundedCoefficient(0x7ff4c56f), roundedCoefficient(0x0359c428)}},
  {{roundedCoefficient(0x7ff1c9ef), roundedCoefficient(0x03c4f52f)}},
  {{roundedCoefficient(0x7fee74a2), roundedCoefficient(0x0430238f)}},
  {{roundedCoefficient(0x7feac58d), roundedCoefficient(0x049b4f00)}},
  {{roundedCoefficient(0x7fe6bcb0), roundedCoefficient(0x05067734)}},
  {{roundedCoefficient(0x7fe25a0f), roundedCoefficient(0x05719be2)}},
  {{roundedCoefficient(0x7fdd9dad), roundedCoefficient(0x05dcbcbe)}},
  {{roundedCoefficient(0x7fd8878e), roundedCoefficient(0x0647d97c)}},
  {{roundedCoefficient(0x7fd317b4), roundedCoefficient(0x06b2f1d2)}},
  {{roundedCoefficient(0x7fcd4e24), roundedCoefficient(0x071e0575)}},
  {{roundedCoefficient(0x7fc72ae2), roundedCoefficient(0x07891418)}},
  {{roundedCoefficient(0x7fc0adf2), roundedCoefficient(0x07f41d72)}},
  {{roundedCoefficient(0x7fb9d759), roundedCoefficient(0x085f2137)}},
  {{roundedCoefficient(0x7fb2a71b), roundedCoefficient(0x08ca1f1b)}},
  {{roundedCoefficient(0x7fab1d3d), roundedCoefficient(0x093516d4)}},
  {{roundedCoefficient(0x7fa339c5), roundedCoefficient(0x09a00817)}},
  {{roundedCoefficient(0x7f9afcb9), roundedCoefficient(0x0a0af299)}},
  {{roundedCoefficient(0x7f92661d), roundedCoefficient(0x0a75d60e)}},
  {{roundedCoefficient(0x7f8975f9), roundedCoefficient(0x0ae0b22c)}},
  {{roundedCoefficient(0x7f802c52), roundedCoefficient(0x0b4b86a8)}},
  {{roundedCoefficient(0x7f76892f), roundedCoefficient(0x0bb65336)}},
  {{roundedCoefficient(0x7f6c8c96), roundedCoefficient(0x0c21178c)}},
  {{roundedCoefficient(0x7f62368f), roundedCoefficient(0x0c8bd35e)}},
  {{roundedCoefficient(0x7f578721), roundedCoefficient(0x0cf68662)}},
  {{roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x0d61304e)}},
  {{roundedCoefficient(0x7f411c2f), roundedCoefficient(0x0dcbd0d5)}},
  {{roundedCoefficient(0x7f3560b9), roundedCoefficient(0x0e3667ad)}},
  {{roundedCoefficient(0x7f294bfd), roundedCoefficient(0x0ea0f48c)}},
  {{roundedCoefficient(0x7f1cde01), roundedCoefficient(0x0f0b7727)}},
  {{roundedCoefficient(0x7f1016ce), roundedCoefficient(0x0f75ef33)}},
  {{roundedCoefficient(0x7f02f66f), roundedCoefficient(0x0fe05c64)}},
  {{roundedCoefficient(0x7ef57cea), roundedCoefficient(0x104abe71)}},
  {{roundedCoefficient(0x7ee7aa4c), roundedCoefficient(0x10b5150f)}},
  {{roundedCoefficient(0x7ed97e9c), roundedCoefficient(0x111f5ff4)}},
  {{roundedCoefficient(0x7ecaf9e5), roundedCoefficient(0x11899ed3)}},
  {{roundedCoefficient(0x7ebc1c31), roundedCoefficient(0x11f3d164)}},
  {{roundedCoefficient(0x7eace58a), roundedCoefficient(0x125df75b)}},
  {{roundedCoefficient(0x7e9d55fc), roundedCoefficient(0x12c8106f)}},
  {{roundedCoefficient(0x7e8d6d91), roundedCoefficient(0x13321c53)}},
  {{roundedCoefficient(0x7e7d2c54), roundedCoefficient(0x139c1abf)}},
  {{roundedCoefficient(0x7e6c9251), roundedCoefficient(0x14060b68)}},
  {{roundedCoefficient(0x7e5b9f93), roundedCoefficient(0x146fee03)}},
  {{roundedCoefficient(0x7e4a5426), roundedCoefficient(0x14d9c245)}},
  {{roundedCoefficient(0x7e38b017), roundedCoefficient(0x154387e6)}},
  {{roundedCoefficient(0x7e26b371), roundedCoefficient(0x15ad3e9a)}},
  {{roundedCoefficient(0x7e145e42), roundedCoefficient(0x1616e618)}},
  {{roundedCoefficient(0x7e01b096), roundedCoefficient(0x16807e15)}},
  {{roundedCoefficient(0x7deeaa7a), roundedCoefficient(0x16ea0646)}},
  {{roundedCoefficient(0x7ddb4bfc), roundedCoefficient(0x17537e63)}},
  {{roundedCoefficient(0x7dc79529), roundedCoefficient(0x17bce621)}},
  {{roundedCoefficient(0x7db3860f), roundedCoefficient(0x18263d36)}},
  {{roundedCoefficient(0x7d9f1ebd), roundedCoefficient(0x188f8357)}},
  {{roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x18f8b83c)}},
  {{roundedCoefficient(0x7d7547a7), roundedCoefficient(0x1961db9b)}},
  {{roundedCoefficient(0x7d5fd801), roundedCoefficient(0x19caed29)}},
  {{roundedCoefficient(0x7d4a105d), roundedCoefficient(0x1a33ec9c)}},
  {{roundedCoefficient(0x7d33f0ca), roundedCoefficient(0x1a9cd9ac)}},
  {{roundedCoefficient(0x7d1d7958), roundedCoefficient(0x1b05b40f)}},
  {{roundedCoefficient(0x7d06aa16), roundedCoefficient(0x1b6e7b7a)}},
  {{roundedCoefficient(0x7cef8315), roundedCoefficient(0x1bd72fa4)}},
  {{roundedCoefficient(0x7cd80464), roundedCoefficient(0x1c3fd045)}},
  {{roundedCoefficient(0x7cc02e15), roundedCoefficient(0x1ca85d12)}},
  {{roundedCoefficient(0x7ca80038), roundedCoefficient(0x1d10d5c2)}},
  {{roundedCoefficient(0x7c8f7ade), roundedCoefficient(0x1d793a0b)}},
  {{roundedCoefficient(0x7c769e18), roundedCoefficient(0x1de189a6)}},
  {{roundedCoefficient(0x7c5d69f7), roundedCoefficient(0x1e49c447)}},
  {{roundedCoefficient(0x7c43de8e), roundedCoefficient(0x1eb1e9a7)}},
  {{roundedCoefficient(0x7c29fbee), roundedCoefficient(0x1f19f97b)}},
  {{roundedCoefficient(0x7c0fc22a), roundedCoefficient(0x1f81f37c)}},
  {{roundedCoefficient(0x7bf53153), roundedCoefficient(0x1fe9d75f)}},
  {{roundedCoefficient(0x7bda497d), roundedCoefficient(0x2051a4dd)}},
  {{roundedCoefficient(0x7bbf0aba), roundedCoefficient(0x20b95bac)}},
  {{roundedCoefficient(0x7ba3751d), roundedCoefficient(0x2120fb83)}},
  {{roundedCoefficient(0x7b8788ba), roundedCoefficient(0x2188841a)}},
  {{roundedCoefficient(0x7b6b45a5), roundedCoefficient(0x21eff528)}},
  {{roundedCoefficient(0x7b4eabf1), roundedCoefficient(0x22574e65)}},
  {{roundedCoefficient(0x7b31bbb2), roundedCoefficient(0x22be8f87)}},
  {{roundedCoefficient(0x7b1474fd), roundedCoefficient(0x2325b847)}},
  {{roundedCoefficient(0x7af6d7e6), roundedCoefficient(0x238cc85d)}},
  {{roundedCoefficient(0x7ad8e482), roundedCoefficient(0x23f3bf7e)}},
  {{roundedCoefficient(0x7aba9ae6), roundedCoefficient(0x245a9d65)}},
  {{roundedCoefficient(0x7a9bfb27), roundedCoefficient(0x24c161c7)}},
  {{roundedCoefficient(0x7a7d055b), roundedCoefficient(0x25280c5e)}},
  {{roundedCoefficient(0x7a5db997), roundedCoefficient(0x258e9ce0)}},
  {{roundedCoefficient(0x7a3e17f2), roundedCoefficient(0x25f51307)}},
  {{roundedCoefficient(0x7a1e2082), roundedCoefficient(0x265b6e8a)}},
  {{roundedCoefficient(0x79fdd35c), roundedCoefficient(0x26c1af22)}},
  {{roundedCoefficient(0x79dd3098), roundedCoefficient(0x2727d486)}},
  {{roundedCoefficient(0x79bc384d), roundedCoefficient(0x278dde6e)}},
  {{roundedCoefficient(0x799aea92), roundedCoefficient(0x27f3cc94)}},
  {{roundedCoefficient(0x7979477d), roundedCoefficient(0x28599eb0)}},
  {{roundedCoefficient(0x79574f28), roundedCoefficient(0x28bf547b)}},
  {{roundedCoefficient(0x793501a9), roundedCoefficient(0x2924edac)}},
  {{roundedCoefficient(0x79125f19), roundedCoefficient(0x298a69fc)}},
  {{roundedCoefficient(0x78ef678f), roundedCoefficient(0x29efc925)}},
  {{roundedCoefficient(0x78cc1b26), roundedCoefficient(0x2a550adf)}},
  {{roundedCoefficient(0x78a879f4), roundedCoefficient(0x2aba2ee4)}},
  {{roundedCoefficient(0x78848414), roundedCoefficient(0x2b1f34eb)}},
  {{roundedCoefficient(0x7860399e), roundedCoefficient(0x2b841caf)}},
  {{roundedCoefficient(0x783b9aad), roundedCoefficient(0x2be8e5e8)}},
  {{roundedCoefficient(0x7816a759), roundedCoefficient(0x2c4d9050)}},
  {{roundedCoefficient(0x77f15fbc), roundedCoefficient(0x2cb21ba0)}},
  {{roundedCoefficient(0x77cbc3f2), roundedCoefficient(0x2d168792)}},
  {{roundedCoefficient(0x77a5d413), roundedCoefficient(0x2d7ad3de)}},
  {{roundedCoefficient(0x777f903c), roundedCoefficient(0x2ddf0040)}},
  {{roundedCoefficient(0x7758f886), roundedCoefficient(0x2e430c6f)}},
  {{roundedCoefficient(0x77320d0d), roundedCoefficient(0x2ea6f827)}},
  {{roundedCoefficient(0x770acdec), roundedCoefficient(0x2f0ac320)}},
  {{roundedCoefficient(0x76e33b3f), roundedCoefficient(0x2f6e6d16)}},
  {{roundedCoefficient(0x76bb5521), roundedCoefficient(0x2fd1f5c1)}},
  {{roundedCoefficient(0x76931bae), roundedCoefficient(0x30355cdd)}},
  {{roundedCoefficient(0x766a8f04), roundedCoefficient(0x3098a223)}},
  {{roundedCoefficient(0x7641af3d), roundedCoefficient(0x30fbc54d)}},
  {{roundedCoefficient(0x76187c77), roundedCoefficient(0x315ec617)}},
  {{roundedCoefficient(0x75eef6ce), roundedCoefficient(0x31c1a43b)}},
  {{roundedCoefficient(0x75c51e61), roundedCoefficient(0x32245f72)}},
  {{roundedCoefficient(0x759af34c), roundedCoefficient(0x3286f779)}},
  {{roundedCoefficient(0x757075ac), roundedCoefficient(0x32e96c09)}},
  {{roundedCoefficient(0x7545a5a0), roundedCoefficient(0x334bbcde)}},
  {{roundedCoefficient(0x751a8346), roundedCoefficient(0x33ade9b3)}},
  {{roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x340ff242)}},
  {{roundedCoefficient(0x74c34820), roundedCoefficient(0x3471d647)}},
  {{roundedCoefficient(0x74972f92), roundedCoefficient(0x34d3957e)}},
  {{roundedCoefficient(0x746ac52f), roundedCoefficient(0x35352fa1)}},
  {{roundedCoefficient(0x743e0918), roundedCoefficient(0x3596a46c)}},
  {{roundedCoefficient(0x7410fb6b), roundedCoefficient(0x35f7f39c)}},
  {{roundedCoefficient(0x73e39c49), roundedCoefficient(0x36591cea)}},
  {{roundedCoefficient(0x73b5ebd1), roundedCoefficient(0x36ba2014)}},
  {{roundedCoefficient(0x7387ea23), roundedCoefficient(0x371afcd5)}},
  {{roundedCoefficient(0x73599760), roundedCoefficient(0x377bb2e9)}},
  {{roundedCoefficient(0x732af3a7), roundedCoefficient(0x37dc420c)}},
  {{roundedCoefficient(0x72fbff1b), roundedCoefficient(0x383ca9fb)}},
  {{roundedCoefficient(0x72ccb9db), roundedCoefficient(0x389cea72)}},
  {{roundedCoefficient(0x729d2409), roundedCoefficient(0x38fd032d)}},
  {{roundedCoefficient(0x726d3dc6), roundedCoefficient(0x395cf3e9)}},
  {{roundedCoefficient(0x723d0734), roundedCoefficient(0x39bcbc63)}},
  {{roundedCoefficient(0x720c8075), roundedCoefficient(0x3a1c5c57)}},
  {{roundedCoefficient(0x71dba9ab), roundedCoefficient(0x3a7bd382)}},
  {{roundedCoefficient(0x71aa82f7), roundedCoefficient(0x3adb21a1)}},
  {{roundedCoefficient(0x71790c7e), roundedCoefficient(0x3b3a4672)}},
  {{roundedCoefficient(0x71474660), roundedCoefficient(0x3b9941b1)}},
  {{roundedCoefficient(0x711530c2), roundedCoefficient(0x3bf8131c)}},
  {{roundedCoefficient(0x70e2cbc6), roundedCoefficient(0x3c56ba70)}},
  {{roundedCoefficient(0x70b01790), roundedCoefficient(0x3cb5376b)}},
  {{roundedCoefficient(0x707d1443), roundedCoefficient(0x3d1389cb)}},
  {{roundedCoefficient(0x7049c203), roundedCoefficient(0x3d71b14d)}},
  {{roundedCoefficient(0x701620f5), roundedCoefficient(0x3dcfadb0)}},
  {{roundedCoefficient(0x6fe2313c), roundedCoefficient(0x3e2d7eb1)}},
  {{roundedCoefficient(0x6fadf2fc), roundedCoefficient(0x3e8b240e)}},
  {{roundedCoefficient(0x6f79665b), roundedCoefficient(0x3ee89d86)}},
  {{roundedCoefficient(0x6f448b7e), roundedCoefficient(0x3f45ead8)}},
  {{roundedCoefficient(0x6f0f6289), roundedCoefficient(0x3fa30bc1)}},
  {{roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x40000000)}},
  {{roundedCoefficient(0x6ea426ed), roundedCoefficient(0x405cc754)}},
  {{roundedCoefficient(0x6e6e1492), roundedCoefficient(0x40b9617d)}},
  {{roundedCoefficient(0x6e37b4b6), roundedCoefficient(0x4115ce38)}},
  {{roundedCoefficient(0x6e010780), roundedCoefficient(0x41720d46)}},
  {{roundedCoefficient(0x6dca0d14), roundedCoefficient(0x41ce1e65)}},
  {{roundedCoefficient(0x6d92c59b), roundedCoefficient(0x422a0154)}},
  {{roundedCoefficient(0x6d5b313b), roundedCoefficient(0x4285b5d4)}},
  {{roundedCoefficient(0x6d23501b), roundedCoefficient(0x42e13ba4)}},
  {{roundedCoefficient(0x6ceb2261), roundedCoefficient(0x433c9283)}},
  {{roundedCoefficient(0x6cb2a837), roundedCoefficient(0x4397ba32)}},
  {{roundedCoefficient(0x6c79e1c2), roundedCoefficient(0x43f2b271)}},
  {{roundedCoefficient(0x6c40cf2c), roundedCoefficient(0x444d7aff)}},
  {{roundedCoefficient(0x6c07709b), roundedCoefficient(0x44a8139e)}},
  {{roundedCoefficient(0x6bcdc639), roundedCoefficient(0x45027c0c)}},
  {{roundedCoefficient(0x6b93d02e), roundedCoefficient(0x455cb40c)}},
  {{roundedCoefficient(0x6b598ea3), roundedCoefficient(0x45b6bb5e)}},
  {{roundedCoefficient(0x6b1f01c0), roundedCoefficient(0x461091c2)}},
  {{roundedCoefficient(0x6ae429ae), roundedCoefficient(0x466a36f9)}},
  {{roundedCoefficient(0x6aa90697), roundedCoefficient(0x46c3aac5)}},
  {{roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x471cece7)}},
  {{roundedCoefficient(0x6a31e000), roundedCoefficient(0x4775fd1f)}},
  {{roundedCoefficient(0x69f5dcd3), roundedCoefficient(0x47cedb31)}},
  {{roundedCoefficient(0x69b98f48), roundedCoefficient(0x482786dc)}},
  {{roundedCoefficient(0x697cf78a), roundedCoefficient(0x487fffe4)}},
  {{roundedCoefficient(0x694015c3), roundedCoefficient(0x48d84609)}},
  {{roundedCoefficient(0x6902ea1d), roundedCoefficient(0x4930590f)}},
  {{roundedCoefficient(0x68c574c4), roundedCoefficient(0x498838b6)}},
  {{roundedCoefficient(0x6887b5e2), roundedCoefficient(0x49dfe4c2)}},
  {{roundedCoefficient(0x6849ada3), roundedCoefficient(0x4a375cf5)}},
  {{roundedCoefficient(0x680b5c33), roundedCoefficient(0x4a8ea111)}},
  {{roundedCoefficient(0x67ccc1be), roundedCoefficient(0x4ae5b0da)}},
  {{roundedCoefficient(0x678dde6e), roundedCoefficient(0x4b3c8c12)}},
  {{roundedCoefficient(0x674eb271), roundedCoefficient(0x4b93327c)}},
  {{roundedCoefficient(0x670f3df3), roundedCoefficient(0x4be9a3db)}},
  {{roundedCoefficient(0x66cf8120), roundedCoefficient(0x4c3fdff4)}},
  {{roundedCoefficient(0x668f7c25), roundedCoefficient(0x4c95e688)}},
  {{roundedCoefficient(0x664f2f2e), roundedCoefficient(0x4cebb75c)}},
  {{roundedCoefficient(0x660e9a6a), roundedCoefficient(0x4d415234)}},
  {{roundedCoefficient(0x65cdbe05), roundedCoefficient(0x4d96b6d3)}},
  {{roundedCoefficient(0x658c9a2d), roundedCoefficient(0x4debe4fe)}},
  {{roundedCoefficient(0x654b2f10), roundedCoefficient(0x4e40dc79)}},
  {{roundedCoefficient(0x65097cdb), roundedCoefficient(0x4e959d08)}},
  {{roundedCoefficient(0x64c783bd), roundedCoefficient(0x4eea2670)}},
  {{roundedCoefficient(0x648543e4), roundedCoefficient(0x4f3e7875)}},
  {{roundedCoefficient(0x6442bd7e), roundedCoefficient(0x4f9292dc)}},
  {{roundedCoefficient(0x63fff0ba), roundedCoefficient(0x4fe6756a)}},
  {{roundedCoefficient(0x63bcddc7), roundedCoefficient(0x503a1fe5)}},
  {{roundedCoefficient(0x637984d4), roundedCoefficient(0x508d9211)}},
  {{roundedCoefficient(0x6335e611), roundedCoefficient(0x50e0cbb4)}},
  {{roundedCoefficient(0x62f201ac), roundedCoefficient(0x5133cc94)}},
  {{roundedCoefficient(0x62add7d6), roundedCoefficient(0x51869476)}},
  {{roundedCoefficient(0x626968be), roundedCoefficient(0x51d92321)}},
  {{roundedCoefficient(0x6224b495), roundedCoefficient(0x522b7859)}},
  {{roundedCoefficient(0x61dfbb8a), roundedCoefficient(0x527d93e6)}},
  {{roundedCoefficient(0x619a7dce), roundedCoefficient(0x52cf758f)}},
  {{roundedCoefficient(0x6154fb91), roundedCoefficient(0x53211d18)}},
  {{roundedCoefficient(0x610f3505), roundedCoefficient(0x53728a4a)}},
  {{roundedCoefficient(0x60c92a5a), roundedCoefficient(0x53c3bcea)}},
  {{roundedCoefficient(0x6082dbc1), roundedCoefficient(0x5414b4c1)}},
  {{roundedCoefficient(0x603c496c), roundedCoefficient(0x54657194)}},
  {{roundedCoefficient(0x5ff5738d), roundedCoefficient(0x54b5f32c)}},
  {{roundedCoefficient(0x5fae5a55), roundedCoefficient(0x55063951)}},
  {{roundedCoefficient(0x5f66fdf5), roundedCoefficient(0x555643c8)}},
  {{roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x55a6125c)}},
  {{roundedCoefficient(0x5ed77c8a), roundedCoefficient(0x55f5a4d2)}},
  {{roundedCoefficient(0x5e8f57e2), roundedCoefficient(0x5644faf4)}},
  {{roundedCoefficient(0x5e46f0dd), roundedCoefficient(0x5694148b)}},
  {{roundedCoefficient(0x5dfe47ad), roundedCoefficient(0x56e2f15d)}},
  {{roundedCoefficient(0x5db55c86), roundedCoefficient(0x57319135)}},
  {{roundedCoefficient(0x5d6c2f99), roundedCoefficient(0x577ff3da)}},
  {{roundedCoefficient(0x5d22c11c), roundedCoefficient(0x57ce1917)}},
  {{roundedCoefficient(0x5cd91140), roundedCoefficient(0x581c00b3)}},
  {{roundedCoefficient(0x5c8f203b), roundedCoefficient(0x5869aa79)}},
  {{roundedCoefficient(0x5c44ee40), roundedCoefficient(0x58b71632)}},
  {{roundedCoefficient(0x5bfa7b82), roundedCoefficient(0x590443a7)}},
  {{roundedCoefficient(0x5bafc837), roundedCoefficient(0x595132a2)}},
  {{roundedCoefficient(0x5b64d492), roundedCoefficient(0x599de2ee)}},
  {{roundedCoefficient(0x5b19a0c8), roundedCoefficient(0x59ea5454)}},
  {{roundedCoefficient(0x5ace2d0f), roundedCoefficient(0x5a36869f)}},
  {{roundedCoefficient(0x5a82799a), roundedCoefficient(0x5a82799a)}}};
const FIXP_WTP sin_twiddle_L64[] = {
  {{roundedCoefficient(0x7fffffff), roundedCoefficient(0x00000000)}},
  {{roundedCoefficient(0x7ff62182), roundedCoefficient(0x03242abf)}},
  {{roundedCoefficient(0x7fd8878e), roundedCoefficient(0x0647d97c)}},
  {{roundedCoefficient(0x7fa736b4), roundedCoefficient(0x096a9049)}},
  {{roundedCoefficient(0x7f62368f), roundedCoefficient(0x0c8bd35e)}},
  {{roundedCoefficient(0x7f0991c4), roundedCoefficient(0x0fab272b)}},
  {{roundedCoefficient(0x7e9d55fc), roundedCoefficient(0x12c8106f)}},
  {{roundedCoefficient(0x7e1d93ea), roundedCoefficient(0x15e21445)}},
  {{roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x18f8b83c)}},
  {{roundedCoefficient(0x7ce3ceb2), roundedCoefficient(0x1c0b826a)}},
  {{roundedCoefficient(0x7c29fbee), roundedCoefficient(0x1f19f97b)}},
  {{roundedCoefficient(0x7b5d039e), roundedCoefficient(0x2223a4c5)}},
  {{roundedCoefficient(0x7a7d055b), roundedCoefficient(0x25280c5e)}},
  {{roundedCoefficient(0x798a23b1), roundedCoefficient(0x2826b928)}},
  {{roundedCoefficient(0x78848414), roundedCoefficient(0x2b1f34eb)}},
  {{roundedCoefficient(0x776c4edb), roundedCoefficient(0x2e110a62)}},
  {{roundedCoefficient(0x7641af3d), roundedCoefficient(0x30fbc54d)}},
  {{roundedCoefficient(0x7504d345), roundedCoefficient(0x33def287)}},
  {{roundedCoefficient(0x73b5ebd1), roundedCoefficient(0x36ba2014)}},
  {{roundedCoefficient(0x72552c85), roundedCoefficient(0x398cdd32)}},
  {{roundedCoefficient(0x70e2cbc6), roundedCoefficient(0x3c56ba70)}},
  {{roundedCoefficient(0x6f5f02b2), roundedCoefficient(0x3f1749b8)}},
  {{roundedCoefficient(0x6dca0d14), roundedCoefficient(0x41ce1e65)}},
  {{roundedCoefficient(0x6c242960), roundedCoefficient(0x447acd50)}},
  {{roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x471cece7)}},
  {{roundedCoefficient(0x68a69e81), roundedCoefficient(0x49b41533)}},
  {{roundedCoefficient(0x66cf8120), roundedCoefficient(0x4c3fdff4)}},
  {{roundedCoefficient(0x64e88926), roundedCoefficient(0x4ebfe8a5)}},
  {{roundedCoefficient(0x62f201ac), roundedCoefficient(0x5133cc94)}},
  {{roundedCoefficient(0x60ec3830), roundedCoefficient(0x539b2af0)}},
  {{roundedCoefficient(0x5ed77c8a), roundedCoefficient(0x55f5a4d2)}},
  {{roundedCoefficient(0x5cb420e0), roundedCoefficient(0x5842dd54)}},
  {{roundedCoefficient(0x5a82799a), roundedCoefficient(0x5a82799a)}},
  {{roundedCoefficient(0x5842dd54), roundedCoefficient(0x5cb420e0)}},
  {{roundedCoefficient(0x55f5a4d2), roundedCoefficient(0x5ed77c8a)}},
  {{roundedCoefficient(0x539b2af0), roundedCoefficient(0x60ec3830)}},
  {{roundedCoefficient(0x5133cc94), roundedCoefficient(0x62f201ac)}},
  {{roundedCoefficient(0x4ebfe8a5), roundedCoefficient(0x64e88926)}},
  {{roundedCoefficient(0x4c3fdff4), roundedCoefficient(0x66cf8120)}},
  {{roundedCoefficient(0x49b41533), roundedCoefficient(0x68a69e81)}},
  {{roundedCoefficient(0x471cece7), roundedCoefficient(0x6a6d98a4)}},
  {{roundedCoefficient(0x447acd50), roundedCoefficient(0x6c242960)}},
  {{roundedCoefficient(0x41ce1e65), roundedCoefficient(0x6dca0d14)}},
  {{roundedCoefficient(0x3f1749b8), roundedCoefficient(0x6f5f02b2)}},
  {{roundedCoefficient(0x3c56ba70), roundedCoefficient(0x70e2cbc6)}},
  {{roundedCoefficient(0x398cdd32), roundedCoefficient(0x72552c85)}},
  {{roundedCoefficient(0x36ba2014), roundedCoefficient(0x73b5ebd1)}},
  {{roundedCoefficient(0x33def287), roundedCoefficient(0x7504d345)}},
  {{roundedCoefficient(0x30fbc54d), roundedCoefficient(0x7641af3d)}},
  {{roundedCoefficient(0x2e110a62), roundedCoefficient(0x776c4edb)}},
  {{roundedCoefficient(0x2b1f34eb), roundedCoefficient(0x78848414)}},
  {{roundedCoefficient(0x2826b928), roundedCoefficient(0x798a23b1)}},
  {{roundedCoefficient(0x25280c5e), roundedCoefficient(0x7a7d055b)}},
  {{roundedCoefficient(0x2223a4c5), roundedCoefficient(0x7b5d039e)}},
  {{roundedCoefficient(0x1f19f97b), roundedCoefficient(0x7c29fbee)}},
  {{roundedCoefficient(0x1c0b826a), roundedCoefficient(0x7ce3ceb2)}},
  {{roundedCoefficient(0x18f8b83c), roundedCoefficient(0x7d8a5f40)}},
  {{roundedCoefficient(0x15e21445), roundedCoefficient(0x7e1d93ea)}},
  {{roundedCoefficient(0x12c8106f), roundedCoefficient(0x7e9d55fc)}},
  {{roundedCoefficient(0x0fab272b), roundedCoefficient(0x7f0991c4)}},
  {{roundedCoefficient(0x0c8bd35e), roundedCoefficient(0x7f62368f)}},
  {{roundedCoefficient(0x096a9049), roundedCoefficient(0x7fa736b4)}},
  {{roundedCoefficient(0x0647d97c), roundedCoefficient(0x7fd8878e)}},
  {{roundedCoefficient(0x03242abf), roundedCoefficient(0x7ff62182)}}};
const FIXP_STB RotVectorReal60[] = {
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x74ef0ebc),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x40000000),
  roundedCoefficient(0x00000000), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0xd8722191),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0x55a6125c),
  roundedCoefficient(0xf29ecfb1), roundedCoefficient(0x98722191),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0xd8722191),
  roundedCoefficient(0x8643c7b2), roundedCoefficient(0x40000000),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0x80000000),
  roundedCoefficient(0x340ff242), roundedCoefficient(0xaa59eda3),
  roundedCoefficient(0x8643c7b2), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x98722191), roundedCoefficient(0x98722191),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x8b10f143),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0x82cc0f35), roundedCoefficient(0xd8722191),
};
const FIXP_STB RotVectorImag60[] = {
  roundedCoefficient(0x0d61304e), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x40000000), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x7fffffff), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x00000000),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0xd8722191), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0xb4c373ed),
  roundedCoefficient(0x7d33f0ca), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x98722191), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x8643c7b2),
};
const FIXP_STB RotVectorReal240[] = {
  roundedCoefficient(0x7ff4c56f), roundedCoefficient(0x7fd317b4),
  roundedCoefficient(0x7f9afcb9), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x7ee7aa4c), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7ddb4bfc), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x7c769e18), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7aba9ae6), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x78a879f4), roundedCoefficient(0x777f903c),
  roundedCoefficient(0x7641af3d), roundedCoefficient(0x7fd317b4),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7d33f0ca), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x777f903c),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x6b598ea3),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x637984d4),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x7f9afcb9), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7c769e18), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x7641af3d), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x6d23501b), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x6154fb91), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x53211d18), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x42e13ba4), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x30fbc54d), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x7d33f0ca), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x40000000), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0x0d61304e), roundedCoefficient(0x00000000),
  roundedCoefficient(0x7ee7aa4c), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7641af3d), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x658c9a2d), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x4debe4fe), roundedCoefficient(0x40000000),
  roundedCoefficient(0x30fbc54d), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x10b5150f), roundedCoefficient(0x00000000),
  roundedCoefficient(0xef4aeaf0), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xcf043ab2), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x00000000), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xc5e3a3a8),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0x7ddb4bfc), roundedCoefficient(0x777f903c),
  roundedCoefficient(0x6d23501b), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0x4debe4fe), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x245a9d65), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0xf5f50d66), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xc8e5032a), roundedCoefficient(0xb4c373ed),
  roundedCoefficient(0xa326eebf), roundedCoefficient(0x94a6715c),
  roundedCoefficient(0x89be50c2), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x40000000),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0xf29ecfb1), roundedCoefficient(0xd8722191),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0xaa59eda3),
  roundedCoefficient(0x98722191), roundedCoefficient(0x8b10f143),
  roundedCoefficient(0x82cc0f35), roundedCoefficient(0x80000000),
  roundedCoefficient(0x7c769e18), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x6154fb91), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x30fbc54d), roundedCoefficient(0x14060b68),
  roundedCoefficient(0xf5f50d66), roundedCoefficient(0xd8722191),
  roundedCoefficient(0xbd1ec45b), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0x92dcafe4), roundedCoefficient(0x8643c7b2),
  roundedCoefficient(0x80650346), roundedCoefficient(0x81936dae),
  roundedCoefficient(0x89be50c2), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x40000000), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x00000000), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0x9126145e), roundedCoefficient(0x845c8ae2),
  roundedCoefficient(0x80000000), roundedCoefficient(0x845c8ae2),
  roundedCoefficient(0x9126145e), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0x7aba9ae6), roundedCoefficient(0x6b598ea3),
  roundedCoefficient(0x53211d18), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x10b5150f), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xc8e5032a), roundedCoefficient(0xaa59eda3),
  roundedCoefficient(0x92dcafe4), roundedCoefficient(0x845c8ae2),
  roundedCoefficient(0x800b3a90), roundedCoefficient(0x8643c7b2),
  roundedCoefficient(0x96830875), roundedCoefficient(0xaf726dee),
  roundedCoefficient(0xcf043ab2), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x00000000),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xb4c373ed),
  roundedCoefficient(0x98722191), roundedCoefficient(0x8643c7b2),
  roundedCoefficient(0x80000000), roundedCoefficient(0x8643c7b2),
  roundedCoefficient(0x98722191), roundedCoefficient(0xb4c373ed),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xffffffff),
  roundedCoefficient(0x78a879f4), roundedCoefficient(0x637984d4),
  roundedCoefficient(0x42e13ba4), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0xef4aeaf0), roundedCoefficient(0xc5e3a3a8),
  roundedCoefficient(0xa326eebf), roundedCoefficient(0x8b10f143),
  roundedCoefficient(0x80650346), roundedCoefficient(0x845c8ae2),
  roundedCoefficient(0x96830875), roundedCoefficient(0xb4c373ed),
  roundedCoefficient(0xdba5629a), roundedCoefficient(0x06b2f1d2),
  roundedCoefficient(0x30fbc54d), roundedCoefficient(0x777f903c),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x0d61304e), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0x94a6715c),
  roundedCoefficient(0x82cc0f35), roundedCoefficient(0x81936dae),
  roundedCoefficient(0x9126145e), roundedCoefficient(0xaf726dee),
  roundedCoefficient(0xd8722191), roundedCoefficient(0x06b2f1d2),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x5a82799a),
};
const FIXP_STB RotVectorImag240[] = {
  roundedCoefficient(0x0359c428), roundedCoefficient(0x06b2f1d2),
  roundedCoefficient(0x0a0af299), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0x10b5150f), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x17537e63), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0x1de189a6), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x245a9d65), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x2aba2ee4), roundedCoefficient(0x2ddf0040),
  roundedCoefficient(0x30fbc54d), roundedCoefficient(0x06b2f1d2),
  roundedCoefficient(0x0d61304e), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x2ddf0040),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x40000000), roundedCoefficient(0x45b6bb5e),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x508d9211),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x0a0af299), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x1de189a6), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x30fbc54d), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x42e13ba4), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x53211d18), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x6154fb91), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x6d23501b), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x7641af3d), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x40000000),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x55a6125c),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x74ef0ebc),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7fffffff),
  roundedCoefficient(0x10b5150f), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x30fbc54d), roundedCoefficient(0x40000000),
  roundedCoefficient(0x4debe4fe), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x658c9a2d), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x7641af3d), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7ee7aa4c), roundedCoefficient(0x7fffffff),
  roundedCoefficient(0x7ee7aa4c), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7641af3d), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7fffffff), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x17537e63), roundedCoefficient(0x2ddf0040),
  roundedCoefficient(0x42e13ba4), roundedCoefficient(0x55a6125c),
  roundedCoefficient(0x658c9a2d), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x7aba9ae6), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x7f9afcb9), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7387ea23), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x581c00b3), roundedCoefficient(0x45b6bb5e),
  roundedCoefficient(0x30fbc54d), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x00000000),
  roundedCoefficient(0x1de189a6), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x53211d18), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x7641af3d), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7f9afcb9), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x6d23501b), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x42e13ba4), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x0a0af299), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xcf043ab2), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x40000000), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7fffffff), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x40000000), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x00000000), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0x245a9d65), roundedCoefficient(0x45b6bb5e),
  roundedCoefficient(0x6154fb91), roundedCoefficient(0x74ef0ebc),
  roundedCoefficient(0x7ee7aa4c), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7387ea23), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0x42e13ba4), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0xfca63bd7), roundedCoefficient(0xd8722191),
  roundedCoefficient(0xb780001b), roundedCoefficient(0x9c867b2b),
  roundedCoefficient(0x89be50c2), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7fffffff),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x00000000), roundedCoefficient(0xd8722191),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0x98722191),
  roundedCoefficient(0x8643c7b2), roundedCoefficient(0x80000000),
  roundedCoefficient(0x2aba2ee4), roundedCoefficient(0x508d9211),
  roundedCoefficient(0x6d23501b), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x7ee7aa4c), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x581c00b3), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x0a0af299), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xb780001b), roundedCoefficient(0x98722191),
  roundedCoefficient(0x85456519), roundedCoefficient(0x802ce84b),
  roundedCoefficient(0x89be50c2), roundedCoefficient(0x2ddf0040),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x45b6bb5e),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0x9c867b2b),
  roundedCoefficient(0x8643c7b2), roundedCoefficient(0x802ce84b),
  roundedCoefficient(0x8b10f143), roundedCoefficient(0xa57d8665),
};
const FIXP_STB RotVectorReal480[] = {
  roundedCoefficient(0x7ffd3154), roundedCoefficient(0x7ff4c56f),
  roundedCoefficient(0x7fe6bcb0), roundedCoefficient(0x7fd317b4),
  roundedCoefficient(0x7fb9d759), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7f76892f), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x7f1cde01), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7eace58a), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7e26b371), roundedCoefficient(0x7ddb4bfc),
  roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x7cd80464), roundedCoefficient(0x7c769e18),
  roundedCoefficient(0x7c0fc22a), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7b31bbb2), roundedCoefficient(0x7aba9ae6),
  roundedCoefficient(0x7a3e17f2), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x793501a9), roundedCoefficient(0x78a879f4),
  roundedCoefficient(0x7816a759), roundedCoefficient(0x777f903c),
  roundedCoefficient(0x76e33b3f), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x759af34c), roundedCoefficient(0x7ff4c56f),
  roundedCoefficient(0x7fd317b4), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7e6c9251), roundedCoefficient(0x7ddb4bfc),
  roundedCoefficient(0x7d33f0ca), roundedCoefficient(0x7c769e18),
  roundedCoefficient(0x7ba3751d), roundedCoefficient(0x7aba9ae6),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x78a879f4),
  roundedCoefficient(0x777f903c), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x7387ea23),
  roundedCoefficient(0x720c8075), roundedCoefficient(0x707d1443),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x6b598ea3), roundedCoefficient(0x697cf78a),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x658c9a2d),
  roundedCoefficient(0x637984d4), roundedCoefficient(0x6154fb91),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x5cd91140),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x581c00b3),
  roundedCoefficient(0x7fe6bcb0), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7f1cde01), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x7c769e18),
  roundedCoefficient(0x7b31bbb2), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x7816a759), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x743e0918), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x6fadf2fc), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x648543e4), roundedCoefficient(0x6154fb91),
  roundedCoefficient(0x5dfe47ad), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x56e2f15d), roundedCoefficient(0x53211d18),
  roundedCoefficient(0x4f3e7875), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x471cece7), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x3e8b240e), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x3596a46c), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x2c4d9050), roundedCoefficient(0x7fd317b4),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7d33f0ca), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x777f903c),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x6b598ea3),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x637984d4),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x508d9211),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x45b6bb5e),
  roundedCoefficient(0x40000000), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x2ddf0040),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x0d61304e), roundedCoefficient(0x06b2f1d2),
  roundedCoefficient(0x00000000), roundedCoefficient(0xf94d0e2d),
  roundedCoefficient(0x7fb9d759), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x793501a9), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x72ccb9db), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x658c9a2d),
  roundedCoefficient(0x603c496c), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x54657194), roundedCoefficient(0x4debe4fe),
  roundedCoefficient(0x471cece7), roundedCoefficient(0x40000000),
  roundedCoefficient(0x389cea72), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x2924edac), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x18f8b83c), roundedCoefficient(0x10b5150f),
  roundedCoefficient(0x085f2137), roundedCoefficient(0x00000000),
  roundedCoefficient(0xf7a0dec8), roundedCoefficient(0xef4aeaf0),
  roundedCoefficient(0xe70747c3), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xd6db1253), roundedCoefficient(0xcf043ab2),
  roundedCoefficient(0xc763158d), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7e6c9251), roundedCoefficient(0x7c769e18),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x720c8075), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x6154fb91),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x53211d18),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x3a1c5c57), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x1de189a6),
  roundedCoefficient(0x14060b68), roundedCoefficient(0x0a0af299),
  roundedCoefficient(0x00000000), roundedCoefficient(0xf5f50d66),
  roundedCoefficient(0xebf9f497), roundedCoefficient(0xe21e7659),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xcf043ab2),
  roundedCoefficient(0xc5e3a3a8), roundedCoefficient(0xbd1ec45b),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0xacdee2e7),
  roundedCoefficient(0xa57d8665), roundedCoefficient(0x9eab046e),
  roundedCoefficient(0x7f76892f), roundedCoefficient(0x7ddb4bfc),
  roundedCoefficient(0x7b31bbb2), roundedCoefficient(0x777f903c),
  roundedCoefficient(0x72ccb9db), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x668f7c25), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0x56e2f15d), roundedCoefficient(0x4debe4fe),
  roundedCoefficient(0x444d7aff), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x2f6e6d16), roundedCoefficient(0x245a9d65),
  roundedCoefficient(0x18f8b83c), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0x01aceb7c), roundedCoefficient(0xf5f50d66),
  roundedCoefficient(0xea52c165), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xd3b26faf), roundedCoefficient(0xc8e5032a),
  roundedCoefficient(0xbe8df2b9), roundedCoefficient(0xb4c373ed),
  roundedCoefficient(0xab9a8e6b), roundedCoefficient(0xa326eebf),
  roundedCoefficient(0x9b7abc1b), roundedCoefficient(0x94a6715c),
  roundedCoefficient(0x8eb8b99f), roundedCoefficient(0x89be50c2),
  roundedCoefficient(0x85c1e80d), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x7d33f0ca), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x40000000), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0x0d61304e), roundedCoefficient(0x00000000),
  roundedCoefficient(0xf29ecfb1), roundedCoefficient(0xe5632653),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xcbf00dbd),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0xb4c373ed),
  roundedCoefficient(0xaa59eda3), roundedCoefficient(0xa0e0a15e),
  roundedCoefficient(0x98722191), roundedCoefficient(0x9126145e),
  roundedCoefficient(0x8b10f143), roundedCoefficient(0x8643c7b2),
  roundedCoefficient(0x82cc0f35), roundedCoefficient(0x80b381ab),
  roundedCoefficient(0x80000000), roundedCoefficient(0x80b381ab),
  roundedCoefficient(0x7f1cde01), roundedCoefficient(0x7c769e18),
  roundedCoefficient(0x7816a759), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x6154fb91),
  roundedCoefficient(0x56e2f15d), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x3e8b240e), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x22be8f87), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x05067734), roundedCoefficient(0xf5f50d66),
  roundedCoefficient(0xe70747c3), roundedCoefficient(0xd8722191),
  roundedCoefficient(0xca695b93), roundedCoefficient(0xbd1ec45b),
  roundedCoefficient(0xb0c1878a), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0x9b7abc1b), roundedCoefficient(0x92dcafe4),
  roundedCoefficient(0x8bc1f6e7), roundedCoefficient(0x8643c7b2),
  roundedCoefficient(0x8275a0bf), roundedCoefficient(0x80650346),
  roundedCoefficient(0x8019434f), roundedCoefficient(0x81936dae),
  roundedCoefficient(0x84ce444d), roundedCoefficient(0x89be50c2),
  roundedCoefficient(0x90520d03), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7ba3751d), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x658c9a2d),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x4debe4fe),
  roundedCoefficient(0x40000000), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x2120fb83), roundedCoefficient(0x10b5150f),
  roundedCoefficient(0x00000000), roundedCoefficient(0xef4aeaf0),
  roundedCoefficient(0xdedf047c), roundedCoefficient(0xcf043ab2),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0xb2141b01),
  roundedCoefficient(0xa57d8665), roundedCoefficient(0x9a7365d2),
  roundedCoefficient(0x9126145e), roundedCoefficient(0x89be50c2),
  roundedCoefficient(0x845c8ae2), roundedCoefficient(0x811855b3),
  roundedCoefficient(0x80000000), roundedCoefficient(0x811855b3),
  roundedCoefficient(0x845c8ae2), roundedCoefficient(0x89be50c2),
  roundedCoefficient(0x9126145e), roundedCoefficient(0x9a7365d2),
  roundedCoefficient(0xa57d8665), roundedCoefficient(0xb2141b01),
  roundedCoefficient(0x7eace58a), roundedCoefficient(0x7aba9ae6),
  roundedCoefficient(0x743e0918), roundedCoefficient(0x6b598ea3),
  roundedCoefficient(0x603c496c), roundedCoefficient(0x53211d18),
  roundedCoefficient(0x444d7aff), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x22be8f87), roundedCoefficient(0x10b5150f),
  roundedCoefficient(0xfe531483), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xda0aecf8), roundedCoefficient(0xc8e5032a),
  roundedCoefficient(0xb8e31318), roundedCoefficient(0xaa59eda3),
  roundedCoefficient(0x9d969741), roundedCoefficient(0x92dcafe4),
  roundedCoefficient(0x8a650cb3), roundedCoefficient(0x845c8ae2),
  roundedCoefficient(0x80e321fe), roundedCoefficient(0x800b3a90),
  roundedCoefficient(0x81d94c8e), roundedCoefficient(0x8643c7b2),
  roundedCoefficient(0x8d334624), roundedCoefficient(0x96830875),
  roundedCoefficient(0xa201b852), roundedCoefficient(0xaf726dee),
  roundedCoefficient(0xbe8df2b9), roundedCoefficient(0xcf043ab2),
  roundedCoefficient(0xe07e0c83), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x00000000), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xc5e3a3a8),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0x98722191), roundedCoefficient(0x8df37f8a),
  roundedCoefficient(0x8643c7b2), roundedCoefficient(0x81936dae),
  roundedCoefficient(0x80000000), roundedCoefficient(0x81936dae),
  roundedCoefficient(0x8643c7b2), roundedCoefficient(0x8df37f8a),
  roundedCoefficient(0x98722191), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0xc5e3a3a8),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xffffffff), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x7e26b371), roundedCoefficient(0x78a879f4),
  roundedCoefficient(0x6fadf2fc), roundedCoefficient(0x637984d4),
  roundedCoefficient(0x54657194), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x2f6e6d16), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0x05067734), roundedCoefficient(0xef4aeaf0),
  roundedCoefficient(0xda0aecf8), roundedCoefficient(0xc5e3a3a8),
  roundedCoefficient(0xb36a1977), roundedCoefficient(0xa326eebf),
  roundedCoefficient(0x9592675b), roundedCoefficient(0x8b10f143),
  roundedCoefficient(0x83f03dd5), roundedCoefficient(0x80650346),
  roundedCoefficient(0x808976d0), roundedCoefficient(0x845c8ae2),
  roundedCoefficient(0x8bc1f6e7), roundedCoefficient(0x96830875),
  roundedCoefficient(0xa45037c8), roundedCoefficient(0xb4c373ed),
  roundedCoefficient(0xc763158d), roundedCoefficient(0xdba5629a),
  roundedCoefficient(0xf0f488d8), roundedCoefficient(0x06b2f1d2),
  roundedCoefficient(0x1c3fd045), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x444d7aff), roundedCoefficient(0x7ddb4bfc),
  roundedCoefficient(0x777f903c), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x4debe4fe),
  roundedCoefficient(0x3a1c5c57), roundedCoefficient(0x245a9d65),
  roundedCoefficient(0x0d61304e), roundedCoefficient(0xf5f50d66),
  roundedCoefficient(0xdedf047c), roundedCoefficient(0xc8e5032a),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0xa326eebf),
  roundedCoefficient(0x94a6715c), roundedCoefficient(0x89be50c2),
  roundedCoefficient(0x82cc0f35), roundedCoefficient(0x800b3a90),
  roundedCoefficient(0x81936dae), roundedCoefficient(0x8757860b),
  roundedCoefficient(0x9126145e), roundedCoefficient(0x9eab046e),
  roundedCoefficient(0xaf726dee), roundedCoefficient(0xc2ec7634),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xef4aeaf0),
  roundedCoefficient(0x06b2f1d2), roundedCoefficient(0x1de189a6),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x487fffe4),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x697cf78a),
};
const FIXP_STB RotVectorImag480[] = {
  roundedCoefficient(0x01aceb7c), roundedCoefficient(0x0359c428),
  roundedCoefficient(0x05067734), roundedCoefficient(0x06b2f1d2),
  roundedCoefficient(0x085f2137), roundedCoefficient(0x0a0af299),
  roundedCoefficient(0x0bb65336), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0x0f0b7727), roundedCoefficient(0x10b5150f),
  roundedCoefficient(0x125df75b), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x15ad3e9a), roundedCoefficient(0x17537e63),
  roundedCoefficient(0x18f8b83c), roundedCoefficient(0x1a9cd9ac),
  roundedCoefficient(0x1c3fd045), roundedCoefficient(0x1de189a6),
  roundedCoefficient(0x1f81f37c), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x22be8f87), roundedCoefficient(0x245a9d65),
  roundedCoefficient(0x25f51307), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x2924edac), roundedCoefficient(0x2aba2ee4),
  roundedCoefficient(0x2c4d9050), roundedCoefficient(0x2ddf0040),
  roundedCoefficient(0x2f6e6d16), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x3286f779), roundedCoefficient(0x0359c428),
  roundedCoefficient(0x06b2f1d2), roundedCoefficient(0x0a0af299),
  roundedCoefficient(0x0d61304e), roundedCoefficient(0x10b5150f),
  roundedCoefficient(0x14060b68), roundedCoefficient(0x17537e63),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x1de189a6),
  roundedCoefficient(0x2120fb83), roundedCoefficient(0x245a9d65),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x2aba2ee4),
  roundedCoefficient(0x2ddf0040), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x371afcd5),
  roundedCoefficient(0x3a1c5c57), roundedCoefficient(0x3d1389cb),
  roundedCoefficient(0x40000000), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x45b6bb5e), roundedCoefficient(0x487fffe4),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x4debe4fe),
  roundedCoefficient(0x508d9211), roundedCoefficient(0x53211d18),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x581c00b3),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x5cd91140),
  roundedCoefficient(0x05067734), roundedCoefficient(0x0a0af299),
  roundedCoefficient(0x0f0b7727), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x18f8b83c), roundedCoefficient(0x1de189a6),
  roundedCoefficient(0x22be8f87), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x2c4d9050), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x3596a46c), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x3e8b240e), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x471cece7), roundedCoefficient(0x4b3c8c12),
  roundedCoefficient(0x4f3e7875), roundedCoefficient(0x53211d18),
  roundedCoefficient(0x56e2f15d), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x5dfe47ad), roundedCoefficient(0x6154fb91),
  roundedCoefficient(0x648543e4), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x6fadf2fc), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x743e0918), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x7816a759), roundedCoefficient(0x06b2f1d2),
  roundedCoefficient(0x0d61304e), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x2ddf0040),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x40000000), roundedCoefficient(0x45b6bb5e),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x508d9211),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x637984d4),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x6b598ea3),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x74ef0ebc), roundedCoefficient(0x777f903c),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7d33f0ca), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7fd317b4),
  roundedCoefficient(0x7fffffff), roundedCoefficient(0x7fd317b4),
  roundedCoefficient(0x085f2137), roundedCoefficient(0x10b5150f),
  roundedCoefficient(0x18f8b83c), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x2924edac), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x389cea72), roundedCoefficient(0x40000000),
  roundedCoefficient(0x471cece7), roundedCoefficient(0x4debe4fe),
  roundedCoefficient(0x54657194), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x603c496c), roundedCoefficient(0x658c9a2d),
  roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x6ed9eba1),
  roundedCoefficient(0x72ccb9db), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x793501a9), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7fb9d759), roundedCoefficient(0x7fffffff),
  roundedCoefficient(0x7fb9d759), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x793501a9), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x72ccb9db), roundedCoefficient(0x0a0af299),
  roundedCoefficient(0x14060b68), roundedCoefficient(0x1de189a6),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x3a1c5c57), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x53211d18),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x6154fb91),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x720c8075), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7c769e18),
  roundedCoefficient(0x7e6c9251), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7fffffff), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7e6c9251), roundedCoefficient(0x7c769e18),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x720c8075), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x6154fb91),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x53211d18),
  roundedCoefficient(0x0bb65336), roundedCoefficient(0x17537e63),
  roundedCoefficient(0x22be8f87), roundedCoefficient(0x2ddf0040),
  roundedCoefficient(0x389cea72), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x4c95e688), roundedCoefficient(0x55a6125c),
  roundedCoefficient(0x5dfe47ad), roundedCoefficient(0x658c9a2d),
  roundedCoefficient(0x6c40cf2c), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x76e33b3f), roundedCoefficient(0x7aba9ae6),
  roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x7f4c7e54),
  roundedCoefficient(0x7ffd3154), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7e26b371), roundedCoefficient(0x7ba3751d),
  roundedCoefficient(0x7816a759), roundedCoefficient(0x7387ea23),
  roundedCoefficient(0x6e010780), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x603c496c), roundedCoefficient(0x581c00b3),
  roundedCoefficient(0x4f3e7875), roundedCoefficient(0x45b6bb5e),
  roundedCoefficient(0x3b9941b1), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x25f51307), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x40000000),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x55a6125c),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x74ef0ebc),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7fffffff),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x74ef0ebc),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x5f1f5ea1), roundedCoefficient(0x55a6125c),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x40000000),
  roundedCoefficient(0x340ff242), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x0d61304e),
  roundedCoefficient(0x00000000), roundedCoefficient(0xf29ecfb1),
  roundedCoefficient(0x0f0b7727), roundedCoefficient(0x1de189a6),
  roundedCoefficient(0x2c4d9050), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x471cece7), roundedCoefficient(0x53211d18),
  roundedCoefficient(0x5dfe47ad), roundedCoefficient(0x678dde6e),
  roundedCoefficient(0x6fadf2fc), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x7b31bbb2), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7fe6bcb0), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x79bc384d),
  roundedCoefficient(0x743e0918), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x648543e4), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x4f3e7875), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x3596a46c), roundedCoefficient(0x278dde6e),
  roundedCoefficient(0x18f8b83c), roundedCoefficient(0x0a0af299),
  roundedCoefficient(0xfaf988cb), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xdd417078), roundedCoefficient(0xcf043ab2),
  roundedCoefficient(0xc174dbf1), roundedCoefficient(0x10b5150f),
  roundedCoefficient(0x2120fb83), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x40000000), roundedCoefficient(0x4debe4fe),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x658c9a2d),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x7ba3751d), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7fffffff), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7ba3751d), roundedCoefficient(0x7641af3d),
  roundedCoefficient(0x6ed9eba1), roundedCoefficient(0x658c9a2d),
  roundedCoefficient(0x5a82799a), roundedCoefficient(0x4debe4fe),
  roundedCoefficient(0x40000000), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x2120fb83), roundedCoefficient(0x10b5150f),
  roundedCoefficient(0x00000000), roundedCoefficient(0xef4aeaf0),
  roundedCoefficient(0xdedf047c), roundedCoefficient(0xcf043ab2),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0xb2141b01),
  roundedCoefficient(0xa57d8665), roundedCoefficient(0x9a7365d2),
  roundedCoefficient(0x125df75b), roundedCoefficient(0x245a9d65),
  roundedCoefficient(0x3596a46c), roundedCoefficient(0x45b6bb5e),
  roundedCoefficient(0x54657194), roundedCoefficient(0x6154fb91),
  roundedCoefficient(0x6c40cf2c), roundedCoefficient(0x74ef0ebc),
  roundedCoefficient(0x7b31bbb2), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7ffd3154), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7a3e17f2), roundedCoefficient(0x7387ea23),
  roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x5f1f5ea1),
  roundedCoefficient(0x51d92321), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x3286f779), roundedCoefficient(0x2120fb83),
  roundedCoefficient(0x0f0b7727), roundedCoefficient(0xfca63bd7),
  roundedCoefficient(0xea52c165), roundedCoefficient(0xd8722191),
  roundedCoefficient(0xc763158d), roundedCoefficient(0xb780001b),
  roundedCoefficient(0xa91d0ea2), roundedCoefficient(0x9c867b2b),
  roundedCoefficient(0x91fef87f), roundedCoefficient(0x89be50c2),
  roundedCoefficient(0x83f03dd5), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x7fffffff), roundedCoefficient(0x7e6c9251),
  roundedCoefficient(0x79bc384d), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x5a82799a),
  roundedCoefficient(0x4b3c8c12), roundedCoefficient(0x3a1c5c57),
  roundedCoefficient(0x278dde6e), roundedCoefficient(0x14060b68),
  roundedCoefficient(0x00000000), roundedCoefficient(0xebf9f497),
  roundedCoefficient(0xd8722191), roundedCoefficient(0xc5e3a3a8),
  roundedCoefficient(0xb4c373ed), roundedCoefficient(0xa57d8665),
  roundedCoefficient(0x98722191), roundedCoefficient(0x8df37f8a),
  roundedCoefficient(0x8643c7b2), roundedCoefficient(0x81936dae),
  roundedCoefficient(0x80000000), roundedCoefficient(0x81936dae),
  roundedCoefficient(0x15ad3e9a), roundedCoefficient(0x2aba2ee4),
  roundedCoefficient(0x3e8b240e), roundedCoefficient(0x508d9211),
  roundedCoefficient(0x603c496c), roundedCoefficient(0x6d23501b),
  roundedCoefficient(0x76e33b3f), roundedCoefficient(0x7d33f0ca),
  roundedCoefficient(0x7fe6bcb0), roundedCoefficient(0x7ee7aa4c),
  roundedCoefficient(0x7a3e17f2), roundedCoefficient(0x720c8075),
  roundedCoefficient(0x668f7c25), roundedCoefficient(0x581c00b3),
  roundedCoefficient(0x471cece7), roundedCoefficient(0x340ff242),
  roundedCoefficient(0x1f81f37c), roundedCoefficient(0x0a0af299),
  roundedCoefficient(0xf449acc9), roundedCoefficient(0xdedf047c),
  roundedCoefficient(0xca695b93), roundedCoefficient(0xb780001b),
  roundedCoefficient(0xa6aecd5d), roundedCoefficient(0x98722191),
  roundedCoefficient(0x8d334624), roundedCoefficient(0x85456519),
  roundedCoefficient(0x80e321fe), roundedCoefficient(0x802ce84b),
  roundedCoefficient(0x8327fb9b), roundedCoefficient(0x89be50c2),
  roundedCoefficient(0x93bf30d3), roundedCoefficient(0x17537e63),
  roundedCoefficient(0x2ddf0040), roundedCoefficient(0x42e13ba4),
  roundedCoefficient(0x55a6125c), roundedCoefficient(0x658c9a2d),
  roundedCoefficient(0x720c8075), roundedCoefficient(0x7aba9ae6),
  roundedCoefficient(0x7f4c7e54), roundedCoefficient(0x7f9afcb9),
  roundedCoefficient(0x7ba3751d), roundedCoefficient(0x7387ea23),
  roundedCoefficient(0x678dde6e), roundedCoefficient(0x581c00b3),
  roundedCoefficient(0x45b6bb5e), roundedCoefficient(0x30fbc54d),
  roundedCoefficient(0x1a9cd9ac), roundedCoefficient(0x0359c428),
  roundedCoefficient(0xebf9f497), roundedCoefficient(0xd545d11b),
  roundedCoefficient(0xbfffffff), roundedCoefficient(0xacdee2e7),
  roundedCoefficient(0x9c867b2b), roundedCoefficient(0x8f82ebbc),
  roundedCoefficient(0x8643c7b2), roundedCoefficient(0x811855b3),
  roundedCoefficient(0x802ce84b), roundedCoefficient(0x838961e7),
  roundedCoefficient(0x8b10f143), roundedCoefficient(0x96830875),
  roundedCoefficient(0xa57d8665), roundedCoefficient(0xb780001b),
};
const FIXP_WTP SineWindow32[] = {
  {{roundedCoefficient(0x7ff62182), roundedCoefficient(0x03242abf)}},
  {{roundedCoefficient(0x7fa736b4), roundedCoefficient(0x096a9049)}},
  {{roundedCoefficient(0x7f0991c4), roundedCoefficient(0x0fab272b)}},
  {{roundedCoefficient(0x7e1d93ea), roundedCoefficient(0x15e21445)}},
  {{roundedCoefficient(0x7ce3ceb2), roundedCoefficient(0x1c0b826a)}},
  {{roundedCoefficient(0x7b5d039e), roundedCoefficient(0x2223a4c5)}},
  {{roundedCoefficient(0x798a23b1), roundedCoefficient(0x2826b928)}},
  {{roundedCoefficient(0x776c4edb), roundedCoefficient(0x2e110a62)}},
  {{roundedCoefficient(0x7504d345), roundedCoefficient(0x33def287)}},
  {{roundedCoefficient(0x72552c85), roundedCoefficient(0x398cdd32)}},
  {{roundedCoefficient(0x6f5f02b2), roundedCoefficient(0x3f1749b8)}},
  {{roundedCoefficient(0x6c242960), roundedCoefficient(0x447acd50)}},
  {{roundedCoefficient(0x68a69e81), roundedCoefficient(0x49b41533)}},
  {{roundedCoefficient(0x64e88926), roundedCoefficient(0x4ebfe8a5)}},
  {{roundedCoefficient(0x60ec3830), roundedCoefficient(0x539b2af0)}},
  {{roundedCoefficient(0x5cb420e0), roundedCoefficient(0x5842dd54)}},
};
const FIXP_WTP SineWindow64[] = {
  {{roundedCoefficient(0x7ffd885a), roundedCoefficient(0x01921d20)}},
  {{roundedCoefficient(0x7fe9cbc0), roundedCoefficient(0x04b6195d)}},
  {{roundedCoefficient(0x7fc25596), roundedCoefficient(0x07d95b9e)}},
  {{roundedCoefficient(0x7f872bf3), roundedCoefficient(0x0afb6805)}},
  {{roundedCoefficient(0x7f3857f6), roundedCoefficient(0x0e1bc2e4)}},
  {{roundedCoefficient(0x7ed5e5c6), roundedCoefficient(0x1139f0cf)}},
  {{roundedCoefficient(0x7e5fe493), roundedCoefficient(0x145576b1)}},
  {{roundedCoefficient(0x7dd6668f), roundedCoefficient(0x176dd9de)}},
  {{roundedCoefficient(0x7d3980ec), roundedCoefficient(0x1a82a026)}},
  {{roundedCoefficient(0x7c894bde), roundedCoefficient(0x1d934fe5)}},
  {{roundedCoefficient(0x7bc5e290), roundedCoefficient(0x209f701c)}},
  {{roundedCoefficient(0x7aef6323), roundedCoefficient(0x23a6887f)}},
  {{roundedCoefficient(0x7a05eead), roundedCoefficient(0x26a82186)}},
  {{roundedCoefficient(0x7909a92d), roundedCoefficient(0x29a3c485)}},
  {{roundedCoefficient(0x77fab989), roundedCoefficient(0x2c98fbba)}},
  {{roundedCoefficient(0x76d94989), roundedCoefficient(0x2f875262)}},
  {{roundedCoefficient(0x75a585cf), roundedCoefficient(0x326e54c7)}},
  {{roundedCoefficient(0x745f9dd1), roundedCoefficient(0x354d9057)}},
  {{roundedCoefficient(0x7307c3d0), roundedCoefficient(0x382493b0)}},
  {{roundedCoefficient(0x719e2cd2), roundedCoefficient(0x3af2eeb7)}},
  {{roundedCoefficient(0x7023109a), roundedCoefficient(0x3db832a6)}},
  {{roundedCoefficient(0x6e96a99d), roundedCoefficient(0x4073f21d)}},
  {{roundedCoefficient(0x6cf934fc), roundedCoefficient(0x4325c135)}},
  {{roundedCoefficient(0x6b4af279), roundedCoefficient(0x45cd358f)}},
  {{roundedCoefficient(0x698c246c), roundedCoefficient(0x4869e665)}},
  {{roundedCoefficient(0x67bd0fbd), roundedCoefficient(0x4afb6c98)}},
  {{roundedCoefficient(0x65ddfbd3), roundedCoefficient(0x4d8162c4)}},
  {{roundedCoefficient(0x63ef3290), roundedCoefficient(0x4ffb654d)}},
  {{roundedCoefficient(0x61f1003f), roundedCoefficient(0x5269126e)}},
  {{roundedCoefficient(0x5fe3b38d), roundedCoefficient(0x54ca0a4b)}},
  {{roundedCoefficient(0x5dc79d7c), roundedCoefficient(0x571deefa)}},
  {{roundedCoefficient(0x5b9d1154), roundedCoefficient(0x59646498)}},
};
const FIXP_WTP SineWindow120[] = {
  {{roundedCoefficient(0x7fff4c54), roundedCoefficient(0x00d676eb)}},
  {{roundedCoefficient(0x7ff9af04), roundedCoefficient(0x02835b5a)}},
  {{roundedCoefficient(0x7fee74a2), roundedCoefficient(0x0430238f)}},
  {{roundedCoefficient(0x7fdd9dad), roundedCoefficient(0x05dcbcbe)}},
  {{roundedCoefficient(0x7fc72ae2), roundedCoefficient(0x07891418)}},
  {{roundedCoefficient(0x7fab1d3d), roundedCoefficient(0x093516d4)}},
  {{roundedCoefficient(0x7f8975f9), roundedCoefficient(0x0ae0b22c)}},
  {{roundedCoefficient(0x7f62368f), roundedCoefficient(0x0c8bd35e)}},
  {{roundedCoefficient(0x7f3560b9), roundedCoefficient(0x0e3667ad)}},
  {{roundedCoefficient(0x7f02f66f), roundedCoefficient(0x0fe05c64)}},
  {{roundedCoefficient(0x7ecaf9e5), roundedCoefficient(0x11899ed3)}},
  {{roundedCoefficient(0x7e8d6d91), roundedCoefficient(0x13321c53)}},
  {{roundedCoefficient(0x7e4a5426), roundedCoefficient(0x14d9c245)}},
  {{roundedCoefficient(0x7e01b096), roundedCoefficient(0x16807e15)}},
  {{roundedCoefficient(0x7db3860f), roundedCoefficient(0x18263d36)}},
  {{roundedCoefficient(0x7d5fd801), roundedCoefficient(0x19caed29)}},
  {{roundedCoefficient(0x7d06aa16), roundedCoefficient(0x1b6e7b7a)}},
  {{roundedCoefficient(0x7ca80038), roundedCoefficient(0x1d10d5c2)}},
  {{roundedCoefficient(0x7c43de8e), roundedCoefficient(0x1eb1e9a7)}},
  {{roundedCoefficient(0x7bda497d), roundedCoefficient(0x2051a4dd)}},
  {{roundedCoefficient(0x7b6b45a5), roundedCoefficient(0x21eff528)}},
  {{roundedCoefficient(0x7af6d7e6), roundedCoefficient(0x238cc85d)}},
  {{roundedCoefficient(0x7a7d055b), roundedCoefficient(0x25280c5e)}},
  {{roundedCoefficient(0x79fdd35c), roundedCoefficient(0x26c1af22)}},
  {{roundedCoefficient(0x7979477d), roundedCoefficient(0x28599eb0)}},
  {{roundedCoefficient(0x78ef678f), roundedCoefficient(0x29efc925)}},
  {{roundedCoefficient(0x7860399e), roundedCoefficient(0x2b841caf)}},
  {{roundedCoefficient(0x77cbc3f2), roundedCoefficient(0x2d168792)}},
  {{roundedCoefficient(0x77320d0d), roundedCoefficient(0x2ea6f827)}},
  {{roundedCoefficient(0x76931bae), roundedCoefficient(0x30355cdd)}},
  {{roundedCoefficient(0x75eef6ce), roundedCoefficient(0x31c1a43b)}},
  {{roundedCoefficient(0x7545a5a0), roundedCoefficient(0x334bbcde)}},
  {{roundedCoefficient(0x74972f92), roundedCoefficient(0x34d3957e)}},
  {{roundedCoefficient(0x73e39c49), roundedCoefficient(0x36591cea)}},
  {{roundedCoefficient(0x732af3a7), roundedCoefficient(0x37dc420c)}},
  {{roundedCoefficient(0x726d3dc6), roundedCoefficient(0x395cf3e9)}},
  {{roundedCoefficient(0x71aa82f7), roundedCoefficient(0x3adb21a1)}},
  {{roundedCoefficient(0x70e2cbc6), roundedCoefficient(0x3c56ba70)}},
  {{roundedCoefficient(0x701620f5), roundedCoefficient(0x3dcfadb0)}},
  {{roundedCoefficient(0x6f448b7e), roundedCoefficient(0x3f45ead8)}},
  {{roundedCoefficient(0x6e6e1492), roundedCoefficient(0x40b9617d)}},
  {{roundedCoefficient(0x6d92c59b), roundedCoefficient(0x422a0154)}},
  {{roundedCoefficient(0x6cb2a837), roundedCoefficient(0x4397ba32)}},
  {{roundedCoefficient(0x6bcdc639), roundedCoefficient(0x45027c0c)}},
  {{roundedCoefficient(0x6ae429ae), roundedCoefficient(0x466a36f9)}},
  {{roundedCoefficient(0x69f5dcd3), roundedCoefficient(0x47cedb31)}},
  {{roundedCoefficient(0x6902ea1d), roundedCoefficient(0x4930590f)}},
  {{roundedCoefficient(0x680b5c33), roundedCoefficient(0x4a8ea111)}},
  {{roundedCoefficient(0x670f3df3), roundedCoefficient(0x4be9a3db)}},
  {{roundedCoefficient(0x660e9a6a), roundedCoefficient(0x4d415234)}},
  {{roundedCoefficient(0x65097cdb), roundedCoefficient(0x4e959d08)}},
  {{roundedCoefficient(0x63fff0ba), roundedCoefficient(0x4fe6756a)}},
  {{roundedCoefficient(0x62f201ac), roundedCoefficient(0x5133cc94)}},
  {{roundedCoefficient(0x61dfbb8a), roundedCoefficient(0x527d93e6)}},
  {{roundedCoefficient(0x60c92a5a), roundedCoefficient(0x53c3bcea)}},
  {{roundedCoefficient(0x5fae5a55), roundedCoefficient(0x55063951)}},
  {{roundedCoefficient(0x5e8f57e2), roundedCoefficient(0x5644faf4)}},
  {{roundedCoefficient(0x5d6c2f99), roundedCoefficient(0x577ff3da)}},
  {{roundedCoefficient(0x5c44ee40), roundedCoefficient(0x58b71632)}},
  {{roundedCoefficient(0x5b19a0c8), roundedCoefficient(0x59ea5454)}},
};
const FIXP_WTP SineWindow128[] = {
  {{roundedCoefficient(0x7fff6216), roundedCoefficient(0x00c90f88)}},
  {{roundedCoefficient(0x7ffa72d1), roundedCoefficient(0x025b26d7)}},
  {{roundedCoefficient(0x7ff09478), roundedCoefficient(0x03ed26e6)}},
  {{roundedCoefficient(0x7fe1c76b), roundedCoefficient(0x057f0035)}},
  {{roundedCoefficient(0x7fce0c3e), roundedCoefficient(0x0710a345)}},
  {{roundedCoefficient(0x7fb563b3), roundedCoefficient(0x08a2009a)}},
  {{roundedCoefficient(0x7f97cebd), roundedCoefficient(0x0a3308bd)}},
  {{roundedCoefficient(0x7f754e80), roundedCoefficient(0x0bc3ac35)}},
  {{roundedCoefficient(0x7f4de451), roundedCoefficient(0x0d53db92)}},
  {{roundedCoefficient(0x7f2191b4), roundedCoefficient(0x0ee38766)}},
  {{roundedCoefficient(0x7ef05860), roundedCoefficient(0x1072a048)}},
  {{roundedCoefficient(0x7eba3a39), roundedCoefficient(0x120116d5)}},
  {{roundedCoefficient(0x7e7f3957), roundedCoefficient(0x138edbb1)}},
  {{roundedCoefficient(0x7e3f57ff), roundedCoefficient(0x151bdf86)}},
  {{roundedCoefficient(0x7dfa98a8), roundedCoefficient(0x16a81305)}},
  {{roundedCoefficient(0x7db0fdf8), roundedCoefficient(0x183366e9)}},
  {{roundedCoefficient(0x7d628ac6), roundedCoefficient(0x19bdcbf3)}},
  {{roundedCoefficient(0x7d0f4218), roundedCoefficient(0x1b4732ef)}},
  {{roundedCoefficient(0x7cb72724), roundedCoefficient(0x1ccf8cb3)}},
  {{roundedCoefficient(0x7c5a3d50), roundedCoefficient(0x1e56ca1e)}},
  {{roundedCoefficient(0x7bf88830), roundedCoefficient(0x1fdcdc1b)}},
  {{roundedCoefficient(0x7b920b89), roundedCoefficient(0x2161b3a0)}},
  {{roundedCoefficient(0x7b26cb4f), roundedCoefficient(0x22e541af)}},
  {{roundedCoefficient(0x7ab6cba4), roundedCoefficient(0x24677758)}},
  {{roundedCoefficient(0x7a4210d8), roundedCoefficient(0x25e845b6)}},
  {{roundedCoefficient(0x79c89f6e), roundedCoefficient(0x27679df4)}},
  {{roundedCoefficient(0x794a7c12), roundedCoefficient(0x28e5714b)}},
  {{roundedCoefficient(0x78c7aba2), roundedCoefficient(0x2a61b101)}},
  {{roundedCoefficient(0x78403329), roundedCoefficient(0x2bdc4e6f)}},
  {{roundedCoefficient(0x77b417df), roundedCoefficient(0x2d553afc)}},
  {{roundedCoefficient(0x77235f2d), roundedCoefficient(0x2ecc681e)}},
  {{roundedCoefficient(0x768e0ea6), roundedCoefficient(0x3041c761)}},
  {{roundedCoefficient(0x75f42c0b), roundedCoefficient(0x31b54a5e)}},
  {{roundedCoefficient(0x7555bd4c), roundedCoefficient(0x3326e2c3)}},
  {{roundedCoefficient(0x74b2c884), roundedCoefficient(0x34968250)}},
  {{roundedCoefficient(0x740b53fb), roundedCoefficient(0x36041ad9)}},
  {{roundedCoefficient(0x735f6626), roundedCoefficient(0x376f9e46)}},
  {{roundedCoefficient(0x72af05a7), roundedCoefficient(0x38d8fe93)}},
  {{roundedCoefficient(0x71fa3949), roundedCoefficient(0x3a402dd2)}},
  {{roundedCoefficient(0x71410805), roundedCoefficient(0x3ba51e29)}},
  {{roundedCoefficient(0x708378ff), roundedCoefficient(0x3d07c1d6)}},
  {{roundedCoefficient(0x6fc19385), roundedCoefficient(0x3e680b2c)}},
  {{roundedCoefficient(0x6efb5f12), roundedCoefficient(0x3fc5ec98)}},
  {{roundedCoefficient(0x6e30e34a), roundedCoefficient(0x4121589b)}},
  {{roundedCoefficient(0x6d6227fa), roundedCoefficient(0x427a41d0)}},
  {{roundedCoefficient(0x6c8f351c), roundedCoefficient(0x43d09aed)}},
  {{roundedCoefficient(0x6bb812d1), roundedCoefficient(0x452456bd)}},
  {{roundedCoefficient(0x6adcc964), roundedCoefficient(0x46756828)}},
  {{roundedCoefficient(0x69fd614a), roundedCoefficient(0x47c3c22f)}},
  {{roundedCoefficient(0x6919e320), roundedCoefficient(0x490f57ee)}},
  {{roundedCoefficient(0x683257ab), roundedCoefficient(0x4a581c9e)}},
  {{roundedCoefficient(0x6746c7d8), roundedCoefficient(0x4b9e0390)}},
  {{roundedCoefficient(0x66573cbb), roundedCoefficient(0x4ce10034)}},
  {{roundedCoefficient(0x6563bf92), roundedCoefficient(0x4e210617)}},
  {{roundedCoefficient(0x646c59bf), roundedCoefficient(0x4f5e08e3)}},
  {{roundedCoefficient(0x637114cc), roundedCoefficient(0x5097fc5e)}},
  {{roundedCoefficient(0x6271fa69), roundedCoefficient(0x51ced46e)}},
  {{roundedCoefficient(0x616f146c), roundedCoefficient(0x53028518)}},
  {{roundedCoefficient(0x60686ccf), roundedCoefficient(0x5433027d)}},
  {{roundedCoefficient(0x5f5e0db3), roundedCoefficient(0x556040e2)}},
  {{roundedCoefficient(0x5e50015d), roundedCoefficient(0x568a34a9)}},
  {{roundedCoefficient(0x5d3e5237), roundedCoefficient(0x57b0d256)}},
  {{roundedCoefficient(0x5c290acc), roundedCoefficient(0x58d40e8c)}},
  {{roundedCoefficient(0x5b1035cf), roundedCoefficient(0x59f3de12)}},
};
const FIXP_WTP SineWindow480[480] = {
  {{roundedCoefficient(0x7ffff4c5), roundedCoefficient(0x00359dd2)}},
  {{roundedCoefficient(0x7fff9aef), roundedCoefficient(0x00a0d951)}},
  {{roundedCoefficient(0x7ffee744), roundedCoefficient(0x010c1460)}},
  {{roundedCoefficient(0x7ffdd9c4), roundedCoefficient(0x01774eb2)}},
  {{roundedCoefficient(0x7ffc726f), roundedCoefficient(0x01e287fc)}},
  {{roundedCoefficient(0x7ffab147), roundedCoefficient(0x024dbff4)}},
  {{roundedCoefficient(0x7ff8964d), roundedCoefficient(0x02b8f64e)}},
  {{roundedCoefficient(0x7ff62182), roundedCoefficient(0x03242abf)}},
  {{roundedCoefficient(0x7ff352e8), roundedCoefficient(0x038f5cfb)}},
  {{roundedCoefficient(0x7ff02a82), roundedCoefficient(0x03fa8cb8)}},
  {{roundedCoefficient(0x7feca851), roundedCoefficient(0x0465b9aa)}},
  {{roundedCoefficient(0x7fe8cc57), roundedCoefficient(0x04d0e386)}},
  {{roundedCoefficient(0x7fe49698), roundedCoefficient(0x053c0a01)}},
  {{roundedCoefficient(0x7fe00716), roundedCoefficient(0x05a72ccf)}},
  {{roundedCoefficient(0x7fdb1dd5), roundedCoefficient(0x06124ba5)}},
  {{roundedCoefficient(0x7fd5dad8), roundedCoefficient(0x067d6639)}},
  {{roundedCoefficient(0x7fd03e23), roundedCoefficient(0x06e87c3f)}},
  {{roundedCoefficient(0x7fca47b9), roundedCoefficient(0x07538d6b)}},
  {{roundedCoefficient(0x7fc3f7a0), roundedCoefficient(0x07be9973)}},
  {{roundedCoefficient(0x7fbd4dda), roundedCoefficient(0x0829a00c)}},
  {{roundedCoefficient(0x7fb64a6e), roundedCoefficient(0x0894a0ea)}},
  {{roundedCoefficient(0x7faeed5f), roundedCoefficient(0x08ff9bc2)}},
  {{roundedCoefficient(0x7fa736b4), roundedCoefficient(0x096a9049)}},
  {{roundedCoefficient(0x7f9f2671), roundedCoefficient(0x09d57e35)}},
  {{roundedCoefficient(0x7f96bc9c), roundedCoefficient(0x0a40653a)}},
  {{roundedCoefficient(0x7f8df93c), roundedCoefficient(0x0aab450d)}},
  {{roundedCoefficient(0x7f84dc55), roundedCoefficient(0x0b161d63)}},
  {{roundedCoefficient(0x7f7b65ef), roundedCoefficient(0x0b80edf1)}},
  {{roundedCoefficient(0x7f719611), roundedCoefficient(0x0bebb66c)}},
  {{roundedCoefficient(0x7f676cc0), roundedCoefficient(0x0c56768a)}},
  {{roundedCoefficient(0x7f5cea05), roundedCoefficient(0x0cc12dff)}},
  {{roundedCoefficient(0x7f520de6), roundedCoefficient(0x0d2bdc80)}},
  {{roundedCoefficient(0x7f46d86c), roundedCoefficient(0x0d9681c2)}},
  {{roundedCoefficient(0x7f3b499d), roundedCoefficient(0x0e011d7c)}},
  {{roundedCoefficient(0x7f2f6183), roundedCoefficient(0x0e6baf61)}},
  {{roundedCoefficient(0x7f232026), roundedCoefficient(0x0ed63727)}},
  {{roundedCoefficient(0x7f16858e), roundedCoefficient(0x0f40b483)}},
  {{roundedCoefficient(0x7f0991c4), roundedCoefficient(0x0fab272b)}},
  {{roundedCoefficient(0x7efc44d0), roundedCoefficient(0x10158ed4)}},
  {{roundedCoefficient(0x7eee9ebe), roundedCoefficient(0x107feb33)}},
  {{roundedCoefficient(0x7ee09f95), roundedCoefficient(0x10ea3bfd)}},
  {{roundedCoefficient(0x7ed24761), roundedCoefficient(0x115480e9)}},
  {{roundedCoefficient(0x7ec3962a), roundedCoefficient(0x11beb9aa)}},
  {{roundedCoefficient(0x7eb48bfb), roundedCoefficient(0x1228e5f8)}},
  {{roundedCoefficient(0x7ea528e0), roundedCoefficient(0x12930586)}},
  {{roundedCoefficient(0x7e956ce1), roundedCoefficient(0x12fd180b)}},
  {{roundedCoefficient(0x7e85580c), roundedCoefficient(0x13671d3d)}},
  {{roundedCoefficient(0x7e74ea6a), roundedCoefficient(0x13d114d0)}},
  {{roundedCoefficient(0x7e642408), roundedCoefficient(0x143afe7b)}},
  {{roundedCoefficient(0x7e5304f2), roundedCoefficient(0x14a4d9f4)}},
  {{roundedCoefficient(0x7e418d32), roundedCoefficient(0x150ea6ef)}},
  {{roundedCoefficient(0x7e2fbcd6), roundedCoefficient(0x15786522)}},
  {{roundedCoefficient(0x7e1d93ea), roundedCoefficient(0x15e21445)}},
  {{roundedCoefficient(0x7e0b127a), roundedCoefficient(0x164bb40b)}},
  {{roundedCoefficient(0x7df83895), roundedCoefficient(0x16b5442b)}},
  {{roundedCoefficient(0x7de50646), roundedCoefficient(0x171ec45c)}},
  {{roundedCoefficient(0x7dd17b9c), roundedCoefficient(0x17883452)}},
  {{roundedCoefficient(0x7dbd98a4), roundedCoefficient(0x17f193c5)}},
  {{roundedCoefficient(0x7da95d6c), roundedCoefficient(0x185ae269)}},
  {{roundedCoefficient(0x7d94ca03), roundedCoefficient(0x18c41ff6)}},
  {{roundedCoefficient(0x7d7fde76), roundedCoefficient(0x192d4c21)}},
  {{roundedCoefficient(0x7d6a9ad5), roundedCoefficient(0x199666a0)}},
  {{roundedCoefficient(0x7d54ff2e), roundedCoefficient(0x19ff6f2a)}},
  {{roundedCoefficient(0x7d3f0b90), roundedCoefficient(0x1a686575)}},
  {{roundedCoefficient(0x7d28c00c), roundedCoefficient(0x1ad14938)}},
  {{roundedCoefficient(0x7d121cb0), roundedCoefficient(0x1b3a1a28)}},
  {{roundedCoefficient(0x7cfb218c), roundedCoefficient(0x1ba2d7fc)}},
  {{roundedCoefficient(0x7ce3ceb2), roundedCoefficient(0x1c0b826a)}},
  {{roundedCoefficient(0x7ccc2430), roundedCoefficient(0x1c74192a)}},
  {{roundedCoefficient(0x7cb42217), roundedCoefficient(0x1cdc9bf2)}},
  {{roundedCoefficient(0x7c9bc87a), roundedCoefficient(0x1d450a78)}},
  {{roundedCoefficient(0x7c831767), roundedCoefficient(0x1dad6473)}},
  {{roundedCoefficient(0x7c6a0ef2), roundedCoefficient(0x1e15a99a)}},
  {{roundedCoefficient(0x7c50af2b), roundedCoefficient(0x1e7dd9a4)}},
  {{roundedCoefficient(0x7c36f824), roundedCoefficient(0x1ee5f447)}},
  {{roundedCoefficient(0x7c1ce9ef), roundedCoefficient(0x1f4df93a)}},
  {{roundedCoefficient(0x7c02849f), roundedCoefficient(0x1fb5e836)}},
  {{roundedCoefficient(0x7be7c847), roundedCoefficient(0x201dc0ef)}},
  {{roundedCoefficient(0x7bccb4f8), roundedCoefficient(0x2085831f)}},
  {{roundedCoefficient(0x7bb14ac5), roundedCoefficient(0x20ed2e7b)}},
  {{roundedCoefficient(0x7b9589c3), roundedCoefficient(0x2154c2bb)}},
  {{roundedCoefficient(0x7b797205), roundedCoefficient(0x21bc3f97)}},
  {{roundedCoefficient(0x7b5d039e), roundedCoefficient(0x2223a4c5)}},
  {{roundedCoefficient(0x7b403ea2), roundedCoefficient(0x228af1fe)}},
  {{roundedCoefficient(0x7b232325), roundedCoefficient(0x22f226f8)}},
  {{roundedCoefficient(0x7b05b13d), roundedCoefficient(0x2359436c)}},
  {{roundedCoefficient(0x7ae7e8fc), roundedCoefficient(0x23c04710)}},
  {{roundedCoefficient(0x7ac9ca7a), roundedCoefficient(0x2427319d)}},
  {{roundedCoefficient(0x7aab55ca), roundedCoefficient(0x248e02cb)}},
  {{roundedCoefficient(0x7a8c8b01), roundedCoefficient(0x24f4ba50)}},
  {{roundedCoefficient(0x7a6d6a37), roundedCoefficient(0x255b57e6)}},
  {{roundedCoefficient(0x7a4df380), roundedCoefficient(0x25c1db44)}},
  {{roundedCoefficient(0x7a2e26f2), roundedCoefficient(0x26284422)}},
  {{roundedCoefficient(0x7a0e04a4), roundedCoefficient(0x268e9238)}},
  {{roundedCoefficient(0x79ed8cad), roundedCoefficient(0x26f4c53e)}},
  {{roundedCoefficient(0x79ccbf22), roundedCoefficient(0x275adcee)}},
  {{roundedCoefficient(0x79ab9c1c), roundedCoefficient(0x27c0d8fe)}},
  {{roundedCoefficient(0x798a23b1), roundedCoefficient(0x2826b928)}},
  {{roundedCoefficient(0x796855f9), roundedCoefficient(0x288c7d24)}},
  {{roundedCoefficient(0x7946330c), roundedCoefficient(0x28f224ab)}},
  {{roundedCoefficient(0x7923bb01), roundedCoefficient(0x2957af74)}},
  {{roundedCoefficient(0x7900edf2), roundedCoefficient(0x29bd1d3a)}},
  {{roundedCoefficient(0x78ddcbf5), roundedCoefficient(0x2a226db5)}},
  {{roundedCoefficient(0x78ba5524), roundedCoefficient(0x2a87a09d)}},
  {{roundedCoefficient(0x78968998), roundedCoefficient(0x2aecb5ac)}},
  {{roundedCoefficient(0x7872696a), roundedCoefficient(0x2b51ac9a)}},
  {{roundedCoefficient(0x784df4b3), roundedCoefficient(0x2bb68522)}},
  {{roundedCoefficient(0x78292b8d), roundedCoefficient(0x2c1b3efb)}},
  {{roundedCoefficient(0x78040e12), roundedCoefficient(0x2c7fd9e0)}},
  {{roundedCoefficient(0x77de9c5b), roundedCoefficient(0x2ce45589)}},
  {{roundedCoefficient(0x77b8d683), roundedCoefficient(0x2d48b1b1)}},
  {{roundedCoefficient(0x7792bca5), roundedCoefficient(0x2dacee11)}},
  {{roundedCoefficient(0x776c4edb), roundedCoefficient(0x2e110a62)}},
  {{roundedCoefficient(0x77458d40), roundedCoefficient(0x2e75065e)}},
  {{roundedCoefficient(0x771e77f0), roundedCoefficient(0x2ed8e1c0)}},
  {{roundedCoefficient(0x76f70f05), roundedCoefficient(0x2f3c9c40)}},
  {{roundedCoefficient(0x76cf529c), roundedCoefficient(0x2fa03599)}},
  {{roundedCoefficient(0x76a742d1), roundedCoefficient(0x3003ad85)}},
  {{roundedCoefficient(0x767edfbe), roundedCoefficient(0x306703bf)}},
  {{roundedCoefficient(0x76562982), roundedCoefficient(0x30ca3800)}},
  {{roundedCoefficient(0x762d2038), roundedCoefficient(0x312d4a03)}},
  {{roundedCoefficient(0x7603c3fd), roundedCoefficient(0x31903982)}},
  {{roundedCoefficient(0x75da14ef), roundedCoefficient(0x31f30638)}},
  {{roundedCoefficient(0x75b01329), roundedCoefficient(0x3255afe0)}},
  {{roundedCoefficient(0x7585becb), roundedCoefficient(0x32b83634)}},
  {{roundedCoefficient(0x755b17f2), roundedCoefficient(0x331a98ef)}},
  {{roundedCoefficient(0x75301ebb), roundedCoefficient(0x337cd7cd)}},
  {{roundedCoefficient(0x7504d345), roundedCoefficient(0x33def287)}},
  {{roundedCoefficient(0x74d935ae), roundedCoefficient(0x3440e8da)}},
  {{roundedCoefficient(0x74ad4615), roundedCoefficient(0x34a2ba81)}},
  {{roundedCoefficient(0x74810499), roundedCoefficient(0x35046736)}},
  {{roundedCoefficient(0x74547158), roundedCoefficient(0x3565eeb6)}},
  {{roundedCoefficient(0x74278c72), roundedCoefficient(0x35c750bc)}},
  {{roundedCoefficient(0x73fa5607), roundedCoefficient(0x36288d03)}},
  {{roundedCoefficient(0x73ccce36), roundedCoefficient(0x3689a348)}},
  {{roundedCoefficient(0x739ef51f), roundedCoefficient(0x36ea9346)}},
  {{roundedCoefficient(0x7370cae2), roundedCoefficient(0x374b5cb9)}},
  {{roundedCoefficient(0x73424fa0), roundedCoefficient(0x37abff5d)}},
  {{roundedCoefficient(0x73138379), roundedCoefficient(0x380c7aee)}},
  {{roundedCoefficient(0x72e4668f), roundedCoefficient(0x386ccf2a)}},
  {{roundedCoefficient(0x72b4f902), roundedCoefficient(0x38ccfbcb)}},
  {{roundedCoefficient(0x72853af3), roundedCoefficient(0x392d008f)}},
  {{roundedCoefficient(0x72552c85), roundedCoefficient(0x398cdd32)}},
  {{roundedCoefficient(0x7224cdd8), roundedCoefficient(0x39ec9172)}},
  {{roundedCoefficient(0x71f41f0f), roundedCoefficient(0x3a4c1d09)}},
  {{roundedCoefficient(0x71c3204c), roundedCoefficient(0x3aab7fb7)}},
  {{roundedCoefficient(0x7191d1b1), roundedCoefficient(0x3b0ab937)}},
  {{roundedCoefficient(0x71603361), roundedCoefficient(0x3b69c947)}},
  {{roundedCoefficient(0x712e457f), roundedCoefficient(0x3bc8afa5)}},
  {{roundedCoefficient(0x70fc082d), roundedCoefficient(0x3c276c0d)}},
  {{roundedCoefficient(0x70c97b90), roundedCoefficient(0x3c85fe3d)}},
  {{roundedCoefficient(0x70969fca), roundedCoefficient(0x3ce465f3)}},
  {{roundedCoefficient(0x706374ff), roundedCoefficient(0x3d42a2ec)}},
  {{roundedCoefficient(0x702ffb54), roundedCoefficient(0x3da0b4e7)}},
  {{roundedCoefficient(0x6ffc32eb), roundedCoefficient(0x3dfe9ba1)}},
  {{roundedCoefficient(0x6fc81bea), roundedCoefficient(0x3e5c56d8)}},
  {{roundedCoefficient(0x6f93b676), roundedCoefficient(0x3eb9e64b)}},
  {{roundedCoefficient(0x6f5f02b2), roundedCoefficient(0x3f1749b8)}},
  {{roundedCoefficient(0x6f2a00c4), roundedCoefficient(0x3f7480dd)}},
  {{roundedCoefficient(0x6ef4b0d1), roundedCoefficient(0x3fd18b7a)}},
  {{roundedCoefficient(0x6ebf12ff), roundedCoefficient(0x402e694c)}},
  {{roundedCoefficient(0x6e892772), roundedCoefficient(0x408b1a12)}},
  {{roundedCoefficient(0x6e52ee52), roundedCoefficient(0x40e79d8c)}},
  {{roundedCoefficient(0x6e1c67c4), roundedCoefficient(0x4143f379)}},
  {{roundedCoefficient(0x6de593ee), roundedCoefficient(0x41a01b97)}},
  {{roundedCoefficient(0x6dae72f7), roundedCoefficient(0x41fc15a6)}},
  {{roundedCoefficient(0x6d770506), roundedCoefficient(0x4257e166)}},
  {{roundedCoefficient(0x6d3f4a40), roundedCoefficient(0x42b37e96)}},
  {{roundedCoefficient(0x6d0742cf), roundedCoefficient(0x430eecf6)}},
  {{roundedCoefficient(0x6cceeed8), roundedCoefficient(0x436a2c45)}},
  {{roundedCoefficient(0x6c964e83), roundedCoefficient(0x43c53c44)}},
  {{roundedCoefficient(0x6c5d61f9), roundedCoefficient(0x44201cb2)}},
  {{roundedCoefficient(0x6c242960), roundedCoefficient(0x447acd50)}},
  {{roundedCoefficient(0x6beaa4e2), roundedCoefficient(0x44d54ddf)}},
  {{roundedCoefficient(0x6bb0d4a7), roundedCoefficient(0x452f9e1e)}},
  {{roundedCoefficient(0x6b76b8d6), roundedCoefficient(0x4589bdcf)}},
  {{roundedCoefficient(0x6b3c519a), roundedCoefficient(0x45e3acb1)}},
  {{roundedCoefficient(0x6b019f1a), roundedCoefficient(0x463d6a87)}},
  {{roundedCoefficient(0x6ac6a180), roundedCoefficient(0x4696f710)}},
  {{roundedCoefficient(0x6a8b58f6), roundedCoefficient(0x46f0520f)}},
  {{roundedCoefficient(0x6a4fc5a6), roundedCoefficient(0x47497b44)}},
  {{roundedCoefficient(0x6a13e7b8), roundedCoefficient(0x47a27271)}},
  {{roundedCoefficient(0x69d7bf57), roundedCoefficient(0x47fb3757)}},
  {{roundedCoefficient(0x699b4cad), roundedCoefficient(0x4853c9b9)}},
  {{roundedCoefficient(0x695e8fe5), roundedCoefficient(0x48ac2957)}},
  {{roundedCoefficient(0x69218929), roundedCoefficient(0x490455f4)}},
  {{roundedCoefficient(0x68e438a4), roundedCoefficient(0x495c4f52)}},
  {{roundedCoefficient(0x68a69e81), roundedCoefficient(0x49b41533)}},
  {{roundedCoefficient(0x6868baec), roundedCoefficient(0x4a0ba75b)}},
  {{roundedCoefficient(0x682a8e0f), roundedCoefficient(0x4a63058a)}},
  {{roundedCoefficient(0x67ec1817), roundedCoefficient(0x4aba2f84)}},
  {{roundedCoefficient(0x67ad592f), roundedCoefficient(0x4b11250c)}},
  {{roundedCoefficient(0x676e5183), roundedCoefficient(0x4b67e5e4)}},
  {{roundedCoefficient(0x672f013f), roundedCoefficient(0x4bbe71d1)}},
  {{roundedCoefficient(0x66ef6891), roundedCoefficient(0x4c14c894)}},
  {{roundedCoefficient(0x66af87a4), roundedCoefficient(0x4c6ae9f2)}},
  {{roundedCoefficient(0x666f5ea6), roundedCoefficient(0x4cc0d5ae)}},
  {{roundedCoefficient(0x662eedc3), roundedCoefficient(0x4d168b8b)}},
  {{roundedCoefficient(0x65ee3529), roundedCoefficient(0x4d6c0b4e)}},
  {{roundedCoefficient(0x65ad3505), roundedCoefficient(0x4dc154bb)}},
  {{roundedCoefficient(0x656bed84), roundedCoefficient(0x4e166795)}},
  {{roundedCoefficient(0x652a5ed6), roundedCoefficient(0x4e6b43a2)}},
  {{roundedCoefficient(0x64e88926), roundedCoefficient(0x4ebfe8a5)}},
  {{roundedCoefficient(0x64a66ca5), roundedCoefficient(0x4f145662)}},
  {{roundedCoefficient(0x6464097f), roundedCoefficient(0x4f688ca0)}},
  {{roundedCoefficient(0x64215fe5), roundedCoefficient(0x4fbc8b22)}},
  {{roundedCoefficient(0x63de7003), roundedCoefficient(0x501051ae)}},
  {{roundedCoefficient(0x639b3a0b), roundedCoefficient(0x5063e008)}},
  {{roundedCoefficient(0x6357be2a), roundedCoefficient(0x50b735f8)}},
  {{roundedCoefficient(0x6313fc90), roundedCoefficient(0x510a5340)}},
  {{roundedCoefficient(0x62cff56c), roundedCoefficient(0x515d37a9)}},
  {{roundedCoefficient(0x628ba8ef), roundedCoefficient(0x51afe2f6)}},
  {{roundedCoefficient(0x62471749), roundedCoefficient(0x520254ef)}},
  {{roundedCoefficient(0x620240a8), roundedCoefficient(0x52548d59)}},
  {{roundedCoefficient(0x61bd253f), roundedCoefficient(0x52a68bfb)}},
  {{roundedCoefficient(0x6177c53c), roundedCoefficient(0x52f8509b)}},
  {{roundedCoefficient(0x613220d2), roundedCoefficient(0x5349daff)}},
  {{roundedCoefficient(0x60ec3830), roundedCoefficient(0x539b2af0)}},
  {{roundedCoefficient(0x60a60b88), roundedCoefficient(0x53ec4032)}},
  {{roundedCoefficient(0x605f9b0b), roundedCoefficient(0x543d1a8e)}},
  {{roundedCoefficient(0x6018e6eb), roundedCoefficient(0x548db9cb)}},
  {{roundedCoefficient(0x5fd1ef59), roundedCoefficient(0x54de1db1)}},
  {{roundedCoefficient(0x5f8ab487), roundedCoefficient(0x552e4605)}},
  {{roundedCoefficient(0x5f4336a7), roundedCoefficient(0x557e3292)}},
  {{roundedCoefficient(0x5efb75ea), roundedCoefficient(0x55cde31e)}},
  {{roundedCoefficient(0x5eb37285), roundedCoefficient(0x561d5771)}},
  {{roundedCoefficient(0x5e6b2ca8), roundedCoefficient(0x566c8f55)}},
  {{roundedCoefficient(0x5e22a487), roundedCoefficient(0x56bb8a90)}},
  {{roundedCoefficient(0x5dd9da55), roundedCoefficient(0x570a48ec)}},
  {{roundedCoefficient(0x5d90ce45), roundedCoefficient(0x5758ca31)}},
  {{roundedCoefficient(0x5d47808a), roundedCoefficient(0x57a70e29)}},
  {{roundedCoefficient(0x5cfdf157), roundedCoefficient(0x57f5149d)}},
  {{roundedCoefficient(0x5cb420e0), roundedCoefficient(0x5842dd54)}},
  {{roundedCoefficient(0x5c6a0f59), roundedCoefficient(0x5890681a)}},
  {{roundedCoefficient(0x5c1fbcf6), roundedCoefficient(0x58ddb4b8)}},
  {{roundedCoefficient(0x5bd529eb), roundedCoefficient(0x592ac2f7)}},
  {{roundedCoefficient(0x5b8a566c), roundedCoefficient(0x597792a1)}},
  {{roundedCoefficient(0x5b3f42ae), roundedCoefficient(0x59c42381)}},
  {{roundedCoefficient(0x5af3eee6), roundedCoefficient(0x5a107561)}},
  {{roundedCoefficient(0x5aa85b48), roundedCoefficient(0x5a5c880a)}},
};
const FIXP_WTP SineWindow512[] = {
  {{roundedCoefficient(0x7ffff621), roundedCoefficient(0x003243f5)}},
  {{roundedCoefficient(0x7fffa72c), roundedCoefficient(0x0096cbc1)}},
  {{roundedCoefficient(0x7fff0943), roundedCoefficient(0x00fb5330)}},
  {{roundedCoefficient(0x7ffe1c65), roundedCoefficient(0x015fda03)}},
  {{roundedCoefficient(0x7ffce093), roundedCoefficient(0x01c45ffe)}},
  {{roundedCoefficient(0x7ffb55ce), roundedCoefficient(0x0228e4e2)}},
  {{roundedCoefficient(0x7ff97c18), roundedCoefficient(0x028d6870)}},
  {{roundedCoefficient(0x7ff75370), roundedCoefficient(0x02f1ea6c)}},
  {{roundedCoefficient(0x7ff4dbd9), roundedCoefficient(0x03566a96)}},
  {{roundedCoefficient(0x7ff21553), roundedCoefficient(0x03bae8b2)}},
  {{roundedCoefficient(0x7feeffe1), roundedCoefficient(0x041f6480)}},
  {{roundedCoefficient(0x7feb9b85), roundedCoefficient(0x0483ddc3)}},
  {{roundedCoefficient(0x7fe7e841), roundedCoefficient(0x04e8543e)}},
  {{roundedCoefficient(0x7fe3e616), roundedCoefficient(0x054cc7b1)}},
  {{roundedCoefficient(0x7fdf9508), roundedCoefficient(0x05b137df)}},
  {{roundedCoefficient(0x7fdaf519), roundedCoefficient(0x0615a48b)}},
  {{roundedCoefficient(0x7fd6064c), roundedCoefficient(0x067a0d76)}},
  {{roundedCoefficient(0x7fd0c8a3), roundedCoefficient(0x06de7262)}},
  {{roundedCoefficient(0x7fcb3c23), roundedCoefficient(0x0742d311)}},
  {{roundedCoefficient(0x7fc560cf), roundedCoefficient(0x07a72f45)}},
  {{roundedCoefficient(0x7fbf36aa), roundedCoefficient(0x080b86c2)}},
  {{roundedCoefficient(0x7fb8bdb8), roundedCoefficient(0x086fd947)}},
  {{roundedCoefficient(0x7fb1f5fc), roundedCoefficient(0x08d42699)}},
  {{roundedCoefficient(0x7faadf7c), roundedCoefficient(0x09386e78)}},
  {{roundedCoefficient(0x7fa37a3c), roundedCoefficient(0x099cb0a7)}},
  {{roundedCoefficient(0x7f9bc640), roundedCoefficient(0x0a00ece8)}},
  {{roundedCoefficient(0x7f93c38c), roundedCoefficient(0x0a6522fe)}},
  {{roundedCoefficient(0x7f8b7227), roundedCoefficient(0x0ac952aa)}},
  {{roundedCoefficient(0x7f82d214), roundedCoefficient(0x0b2d7baf)}},
  {{roundedCoefficient(0x7f79e35a), roundedCoefficient(0x0b919dcf)}},
  {{roundedCoefficient(0x7f70a5fe), roundedCoefficient(0x0bf5b8cb)}},
  {{roundedCoefficient(0x7f671a05), roundedCoefficient(0x0c59cc68)}},
  {{roundedCoefficient(0x7f5d3f75), roundedCoefficient(0x0cbdd865)}},
  {{roundedCoefficient(0x7f531655), roundedCoefficient(0x0d21dc87)}},
  {{roundedCoefficient(0x7f489eaa), roundedCoefficient(0x0d85d88f)}},
  {{roundedCoefficient(0x7f3dd87c), roundedCoefficient(0x0de9cc40)}},
  {{roundedCoefficient(0x7f32c3d1), roundedCoefficient(0x0e4db75b)}},
  {{roundedCoefficient(0x7f2760af), roundedCoefficient(0x0eb199a4)}},
  {{roundedCoefficient(0x7f1baf1e), roundedCoefficient(0x0f1572dc)}},
  {{roundedCoefficient(0x7f0faf25), roundedCoefficient(0x0f7942c7)}},
  {{roundedCoefficient(0x7f0360cb), roundedCoefficient(0x0fdd0926)}},
  {{roundedCoefficient(0x7ef6c418), roundedCoefficient(0x1040c5bb)}},
  {{roundedCoefficient(0x7ee9d914), roundedCoefficient(0x10a4784b)}},
  {{roundedCoefficient(0x7edc9fc6), roundedCoefficient(0x11082096)}},
  {{roundedCoefficient(0x7ecf1837), roundedCoefficient(0x116bbe60)}},
  {{roundedCoefficient(0x7ec14270), roundedCoefficient(0x11cf516a)}},
  {{roundedCoefficient(0x7eb31e78), roundedCoefficient(0x1232d979)}},
  {{roundedCoefficient(0x7ea4ac58), roundedCoefficient(0x1296564d)}},
  {{roundedCoefficient(0x7e95ec1a), roundedCoefficient(0x12f9c7aa)}},
  {{roundedCoefficient(0x7e86ddc6), roundedCoefficient(0x135d2d53)}},
  {{roundedCoefficient(0x7e778166), roundedCoefficient(0x13c0870a)}},
  {{roundedCoefficient(0x7e67d703), roundedCoefficient(0x1423d492)}},
  {{roundedCoefficient(0x7e57dea7), roundedCoefficient(0x148715ae)}},
  {{roundedCoefficient(0x7e47985b), roundedCoefficient(0x14ea4a1f)}},
  {{roundedCoefficient(0x7e37042a), roundedCoefficient(0x154d71aa)}},
  {{roundedCoefficient(0x7e26221f), roundedCoefficient(0x15b08c12)}},
  {{roundedCoefficient(0x7e14f242), roundedCoefficient(0x16139918)}},
  {{roundedCoefficient(0x7e0374a0), roundedCoefficient(0x1676987f)}},
  {{roundedCoefficient(0x7df1a942), roundedCoefficient(0x16d98a0c)}},
  {{roundedCoefficient(0x7ddf9034), roundedCoefficient(0x173c6d80)}},
  {{roundedCoefficient(0x7dcd2981), roundedCoefficient(0x179f429f)}},
  {{roundedCoefficient(0x7dba7534), roundedCoefficient(0x1802092c)}},
  {{roundedCoefficient(0x7da77359), roundedCoefficient(0x1864c0ea)}},
  {{roundedCoefficient(0x7d9423fc), roundedCoefficient(0x18c7699b)}},
  {{roundedCoefficient(0x7d808728), roundedCoefficient(0x192a0304)}},
  {{roundedCoefficient(0x7d6c9ce9), roundedCoefficient(0x198c8ce7)}},
  {{roundedCoefficient(0x7d58654d), roundedCoefficient(0x19ef0707)}},
  {{roundedCoefficient(0x7d43e05e), roundedCoefficient(0x1a517128)}},
  {{roundedCoefficient(0x7d2f0e2b), roundedCoefficient(0x1ab3cb0d)}},
  {{roundedCoefficient(0x7d19eebf), roundedCoefficient(0x1b161479)}},
  {{roundedCoefficient(0x7d048228), roundedCoefficient(0x1b784d30)}},
  {{roundedCoefficient(0x7ceec873), roundedCoefficient(0x1bda74f6)}},
  {{roundedCoefficient(0x7cd8c1ae), roundedCoefficient(0x1c3c8b8c)}},
  {{roundedCoefficient(0x7cc26de5), roundedCoefficient(0x1c9e90b8)}},
  {{roundedCoefficient(0x7cabcd28), roundedCoefficient(0x1d00843d)}},
  {{roundedCoefficient(0x7c94df83), roundedCoefficient(0x1d6265dd)}},
  {{roundedCoefficient(0x7c7da505), roundedCoefficient(0x1dc4355e)}},
  {{roundedCoefficient(0x7c661dbc), roundedCoefficient(0x1e25f282)}},
  {{roundedCoefficient(0x7c4e49b7), roundedCoefficient(0x1e879d0d)}},
  {{roundedCoefficient(0x7c362904), roundedCoefficient(0x1ee934c3)}},
  {{roundedCoefficient(0x7c1dbbb3), roundedCoefficient(0x1f4ab968)}},
  {{roundedCoefficient(0x7c0501d2), roundedCoefficient(0x1fac2abf)}},
  {{roundedCoefficient(0x7bebfb70), roundedCoefficient(0x200d888d)}},
  {{roundedCoefficient(0x7bd2a89e), roundedCoefficient(0x206ed295)}},
  {{roundedCoefficient(0x7bb9096b), roundedCoefficient(0x20d0089c)}},
  {{roundedCoefficient(0x7b9f1de6), roundedCoefficient(0x21312a65)}},
  {{roundedCoefficient(0x7b84e61f), roundedCoefficient(0x219237b5)}},
  {{roundedCoefficient(0x7b6a6227), roundedCoefficient(0x21f3304f)}},
  {{roundedCoefficient(0x7b4f920e), roundedCoefficient(0x225413f8)}},
  {{roundedCoefficient(0x7b3475e5), roundedCoefficient(0x22b4e274)}},
  {{roundedCoefficient(0x7b190dbc), roundedCoefficient(0x23159b88)}},
  {{roundedCoefficient(0x7afd59a4), roundedCoefficient(0x23763ef7)}},
  {{roundedCoefficient(0x7ae159ae), roundedCoefficient(0x23d6cc87)}},
  {{roundedCoefficient(0x7ac50dec), roundedCoefficient(0x243743fa)}},
  {{roundedCoefficient(0x7aa8766f), roundedCoefficient(0x2497a517)}},
  {{roundedCoefficient(0x7a8b9348), roundedCoefficient(0x24f7efa2)}},
  {{roundedCoefficient(0x7a6e648a), roundedCoefficient(0x2558235f)}},
  {{roundedCoefficient(0x7a50ea47), roundedCoefficient(0x25b84012)}},
  {{roundedCoefficient(0x7a332490), roundedCoefficient(0x26184581)}},
  {{roundedCoefficient(0x7a151378), roundedCoefficient(0x26783370)}},
  {{roundedCoefficient(0x79f6b711), roundedCoefficient(0x26d809a5)}},
  {{roundedCoefficient(0x79d80f6f), roundedCoefficient(0x2737c7e3)}},
  {{roundedCoefficient(0x79b91ca4), roundedCoefficient(0x27976df1)}},
  {{roundedCoefficient(0x7999dec4), roundedCoefficient(0x27f6fb92)}},
  {{roundedCoefficient(0x797a55e0), roundedCoefficient(0x2856708d)}},
  {{roundedCoefficient(0x795a820e), roundedCoefficient(0x28b5cca5)}},
  {{roundedCoefficient(0x793a6361), roundedCoefficient(0x29150fa1)}},
  {{roundedCoefficient(0x7919f9ec), roundedCoefficient(0x29743946)}},
  {{roundedCoefficient(0x78f945c3), roundedCoefficient(0x29d34958)}},
  {{roundedCoefficient(0x78d846fb), roundedCoefficient(0x2a323f9e)}},
  {{roundedCoefficient(0x78b6fda8), roundedCoefficient(0x2a911bdc)}},
  {{roundedCoefficient(0x789569df), roundedCoefficient(0x2aefddd8)}},
  {{roundedCoefficient(0x78738bb3), roundedCoefficient(0x2b4e8558)}},
  {{roundedCoefficient(0x7851633b), roundedCoefficient(0x2bad1221)}},
  {{roundedCoefficient(0x782ef08b), roundedCoefficient(0x2c0b83fa)}},
  {{roundedCoefficient(0x780c33b8), roundedCoefficient(0x2c69daa6)}},
  {{roundedCoefficient(0x77e92cd9), roundedCoefficient(0x2cc815ee)}},
  {{roundedCoefficient(0x77c5dc01), roundedCoefficient(0x2d263596)}},
  {{roundedCoefficient(0x77a24148), roundedCoefficient(0x2d843964)}},
  {{roundedCoefficient(0x777e5cc3), roundedCoefficient(0x2de2211e)}},
  {{roundedCoefficient(0x775a2e89), roundedCoefficient(0x2e3fec8b)}},
  {{roundedCoefficient(0x7735b6af), roundedCoefficient(0x2e9d9b70)}},
  {{roundedCoefficient(0x7710f54c), roundedCoefficient(0x2efb2d95)}},
  {{roundedCoefficient(0x76ebea77), roundedCoefficient(0x2f58a2be)}},
  {{roundedCoefficient(0x76c69647), roundedCoefficient(0x2fb5fab2)}},
  {{roundedCoefficient(0x76a0f8d2), roundedCoefficient(0x30133539)}},
  {{roundedCoefficient(0x767b1231), roundedCoefficient(0x30705217)}},
  {{roundedCoefficient(0x7654e279), roundedCoefficient(0x30cd5115)}},
  {{roundedCoefficient(0x762e69c4), roundedCoefficient(0x312a31f8)}},
  {{roundedCoefficient(0x7607a828), roundedCoefficient(0x3186f487)}},
  {{roundedCoefficient(0x75e09dbd), roundedCoefficient(0x31e39889)}},
  {{roundedCoefficient(0x75b94a9c), roundedCoefficient(0x32401dc6)}},
  {{roundedCoefficient(0x7591aedd), roundedCoefficient(0x329c8402)}},
  {{roundedCoefficient(0x7569ca99), roundedCoefficient(0x32f8cb07)}},
  {{roundedCoefficient(0x75419de7), roundedCoefficient(0x3354f29b)}},
  {{roundedCoefficient(0x751928e0), roundedCoefficient(0x33b0fa84)}},
  {{roundedCoefficient(0x74f06b9e), roundedCoefficient(0x340ce28b)}},
  {{roundedCoefficient(0x74c7663a), roundedCoefficient(0x3468aa76)}},
  {{roundedCoefficient(0x749e18cd), roundedCoefficient(0x34c4520d)}},
  {{roundedCoefficient(0x74748371), roundedCoefficient(0x351fd918)}},
  {{roundedCoefficient(0x744aa63f), roundedCoefficient(0x357b3f5d)}},
  {{roundedCoefficient(0x74208150), roundedCoefficient(0x35d684a6)}},
  {{roundedCoefficient(0x73f614c0), roundedCoefficient(0x3631a8b8)}},
  {{roundedCoefficient(0x73cb60a8), roundedCoefficient(0x368cab5c)}},
  {{roundedCoefficient(0x73a06522), roundedCoefficient(0x36e78c5b)}},
  {{roundedCoefficient(0x73752249), roundedCoefficient(0x37424b7b)}},
  {{roundedCoefficient(0x73499838), roundedCoefficient(0x379ce885)}},
  {{roundedCoefficient(0x731dc70a), roundedCoefficient(0x37f76341)}},
  {{roundedCoefficient(0x72f1aed9), roundedCoefficient(0x3851bb77)}},
  {{roundedCoefficient(0x72c54fc1), roundedCoefficient(0x38abf0ef)}},
  {{roundedCoefficient(0x7298a9dd), roundedCoefficient(0x39060373)}},
  {{roundedCoefficient(0x726bbd48), roundedCoefficient(0x395ff2c9)}},
  {{roundedCoefficient(0x723e8a20), roundedCoefficient(0x39b9bebc)}},
  {{roundedCoefficient(0x7211107e), roundedCoefficient(0x3a136712)}},
  {{roundedCoefficient(0x71e35080), roundedCoefficient(0x3a6ceb96)}},
  {{roundedCoefficient(0x71b54a41), roundedCoefficient(0x3ac64c0f)}},
  {{roundedCoefficient(0x7186fdde), roundedCoefficient(0x3b1f8848)}},
  {{roundedCoefficient(0x71586b74), roundedCoefficient(0x3b78a007)}},
  {{roundedCoefficient(0x7129931f), roundedCoefficient(0x3bd19318)}},
  {{roundedCoefficient(0x70fa74fc), roundedCoefficient(0x3c2a6142)}},
  {{roundedCoefficient(0x70cb1128), roundedCoefficient(0x3c830a50)}},
  {{roundedCoefficient(0x709b67c0), roundedCoefficient(0x3cdb8e09)}},
  {{roundedCoefficient(0x706b78e3), roundedCoefficient(0x3d33ec39)}},
  {{roundedCoefficient(0x703b44ad), roundedCoefficient(0x3d8c24a8)}},
  {{roundedCoefficient(0x700acb3c), roundedCoefficient(0x3de4371f)}},
  {{roundedCoefficient(0x6fda0cae), roundedCoefficient(0x3e3c2369)}},
  {{roundedCoefficient(0x6fa90921), roundedCoefficient(0x3e93e950)}},
  {{roundedCoefficient(0x6f77c0b3), roundedCoefficient(0x3eeb889c)}},
  {{roundedCoefficient(0x6f463383), roundedCoefficient(0x3f430119)}},
  {{roundedCoefficient(0x6f1461b0), roundedCoefficient(0x3f9a5290)}},
  {{roundedCoefficient(0x6ee24b57), roundedCoefficient(0x3ff17cca)}},
  {{roundedCoefficient(0x6eaff099), roundedCoefficient(0x40487f94)}},
  {{roundedCoefficient(0x6e7d5193), roundedCoefficient(0x409f5ab6)}},
  {{roundedCoefficient(0x6e4a6e66), roundedCoefficient(0x40f60dfb)}},
  {{roundedCoefficient(0x6e174730), roundedCoefficient(0x414c992f)}},
  {{roundedCoefficient(0x6de3dc11), roundedCoefficient(0x41a2fc1a)}},
  {{roundedCoefficient(0x6db02d29), roundedCoefficient(0x41f93689)}},
  {{roundedCoefficient(0x6d7c3a98), roundedCoefficient(0x424f4845)}},
  {{roundedCoefficient(0x6d48047e), roundedCoefficient(0x42a5311b)}},
  {{roundedCoefficient(0x6d138afb), roundedCoefficient(0x42faf0d4)}},
  {{roundedCoefficient(0x6cdece2f), roundedCoefficient(0x4350873c)}},
  {{roundedCoefficient(0x6ca9ce3b), roundedCoefficient(0x43a5f41e)}},
  {{roundedCoefficient(0x6c748b3f), roundedCoefficient(0x43fb3746)}},
  {{roundedCoefficient(0x6c3f055d), roundedCoefficient(0x4450507e)}},
  {{roundedCoefficient(0x6c093cb6), roundedCoefficient(0x44a53f93)}},
  {{roundedCoefficient(0x6bd3316a), roundedCoefficient(0x44fa0450)}},
  {{roundedCoefficient(0x6b9ce39b), roundedCoefficient(0x454e9e80)}},
  {{roundedCoefficient(0x6b66536b), roundedCoefficient(0x45a30df0)}},
  {{roundedCoefficient(0x6b2f80fb), roundedCoefficient(0x45f7526b)}},
  {{roundedCoefficient(0x6af86c6c), roundedCoefficient(0x464b6bbe)}},
  {{roundedCoefficient(0x6ac115e2), roundedCoefficient(0x469f59b4)}},
  {{roundedCoefficient(0x6a897d7d), roundedCoefficient(0x46f31c1a)}},
  {{roundedCoefficient(0x6a51a361), roundedCoefficient(0x4746b2bc)}},
  {{roundedCoefficient(0x6a1987b0), roundedCoefficient(0x479a1d67)}},
  {{roundedCoefficient(0x69e12a8c), roundedCoefficient(0x47ed5be6)}},
  {{roundedCoefficient(0x69a88c19), roundedCoefficient(0x48406e08)}},
  {{roundedCoefficient(0x696fac78), roundedCoefficient(0x48935397)}},
  {{roundedCoefficient(0x69368bce), roundedCoefficient(0x48e60c62)}},
  {{roundedCoefficient(0x68fd2a3d), roundedCoefficient(0x49389836)}},
  {{roundedCoefficient(0x68c387e9), roundedCoefficient(0x498af6df)}},
  {{roundedCoefficient(0x6889a4f6), roundedCoefficient(0x49dd282a)}},
  {{roundedCoefficient(0x684f8186), roundedCoefficient(0x4a2f2be6)}},
  {{roundedCoefficient(0x68151dbe), roundedCoefficient(0x4a8101de)}},
  {{roundedCoefficient(0x67da79c3), roundedCoefficient(0x4ad2a9e2)}},
  {{roundedCoefficient(0x679f95b7), roundedCoefficient(0x4b2423be)}},
  {{roundedCoefficient(0x676471c0), roundedCoefficient(0x4b756f40)}},
  {{roundedCoefficient(0x67290e02), roundedCoefficient(0x4bc68c36)}},
  {{roundedCoefficient(0x66ed6aa1), roundedCoefficient(0x4c177a6e)}},
  {{roundedCoefficient(0x66b187c3), roundedCoefficient(0x4c6839b7)}},
  {{roundedCoefficient(0x6675658c), roundedCoefficient(0x4cb8c9dd)}},
  {{roundedCoefficient(0x66390422), roundedCoefficient(0x4d092ab0)}},
  {{roundedCoefficient(0x65fc63a9), roundedCoefficient(0x4d595bfe)}},
  {{roundedCoefficient(0x65bf8447), roundedCoefficient(0x4da95d96)}},
  {{roundedCoefficient(0x65826622), roundedCoefficient(0x4df92f46)}},
  {{roundedCoefficient(0x6545095f), roundedCoefficient(0x4e48d0dd)}},
  {{roundedCoefficient(0x65076e25), roundedCoefficient(0x4e984229)}},
  {{roundedCoefficient(0x64c99498), roundedCoefficient(0x4ee782fb)}},
  {{roundedCoefficient(0x648b7ce0), roundedCoefficient(0x4f369320)}},
  {{roundedCoefficient(0x644d2722), roundedCoefficient(0x4f857269)}},
  {{roundedCoefficient(0x640e9386), roundedCoefficient(0x4fd420a4)}},
  {{roundedCoefficient(0x63cfc231), roundedCoefficient(0x50229da1)}},
  {{roundedCoefficient(0x6390b34a), roundedCoefficient(0x5070e92f)}},
  {{roundedCoefficient(0x635166f9), roundedCoefficient(0x50bf031f)}},
  {{roundedCoefficient(0x6311dd64), roundedCoefficient(0x510ceb40)}},
  {{roundedCoefficient(0x62d216b3), roundedCoefficient(0x515aa162)}},
  {{roundedCoefficient(0x6292130c), roundedCoefficient(0x51a82555)}},
  {{roundedCoefficient(0x6251d298), roundedCoefficient(0x51f576ea)}},
  {{roundedCoefficient(0x6211557e), roundedCoefficient(0x524295f0)}},
  {{roundedCoefficient(0x61d09be5), roundedCoefficient(0x528f8238)}},
  {{roundedCoefficient(0x618fa5f7), roundedCoefficient(0x52dc3b92)}},
  {{roundedCoefficient(0x614e73da), roundedCoefficient(0x5328c1d0)}},
  {{roundedCoefficient(0x610d05b7), roundedCoefficient(0x537514c2)}},
  {{roundedCoefficient(0x60cb5bb7), roundedCoefficient(0x53c13439)}},
  {{roundedCoefficient(0x60897601), roundedCoefficient(0x540d2005)}},
  {{roundedCoefficient(0x604754bf), roundedCoefficient(0x5458d7f9)}},
  {{roundedCoefficient(0x6004f819), roundedCoefficient(0x54a45be6)}},
  {{roundedCoefficient(0x5fc26038), roundedCoefficient(0x54efab9c)}},
  {{roundedCoefficient(0x5f7f8d46), roundedCoefficient(0x553ac6ee)}},
  {{roundedCoefficient(0x5f3c7f6b), roundedCoefficient(0x5585adad)}},
  {{roundedCoefficient(0x5ef936d1), roundedCoefficient(0x55d05faa)}},
  {{roundedCoefficient(0x5eb5b3a2), roundedCoefficient(0x561adcb9)}},
  {{roundedCoefficient(0x5e71f606), roundedCoefficient(0x566524aa)}},
  {{roundedCoefficient(0x5e2dfe29), roundedCoefficient(0x56af3750)}},
  {{roundedCoefficient(0x5de9cc33), roundedCoefficient(0x56f9147e)}},
  {{roundedCoefficient(0x5da5604f), roundedCoefficient(0x5742bc06)}},
  {{roundedCoefficient(0x5d60baa7), roundedCoefficient(0x578c2dba)}},
  {{roundedCoefficient(0x5d1bdb65), roundedCoefficient(0x57d5696d)}},
  {{roundedCoefficient(0x5cd6c2b5), roundedCoefficient(0x581e6ef1)}},
  {{roundedCoefficient(0x5c9170bf), roundedCoefficient(0x58673e1b)}},
  {{roundedCoefficient(0x5c4be5b0), roundedCoefficient(0x58afd6bd)}},
  {{roundedCoefficient(0x5c0621b2), roundedCoefficient(0x58f838a9)}},
  {{roundedCoefficient(0x5bc024f0), roundedCoefficient(0x594063b5)}},
  {{roundedCoefficient(0x5b79ef96), roundedCoefficient(0x598857b2)}},
  {{roundedCoefficient(0x5b3381ce), roundedCoefficient(0x59d01475)}},
  {{roundedCoefficient(0x5aecdbc5), roundedCoefficient(0x5a1799d1)}},
  {{roundedCoefficient(0x5aa5fda5), roundedCoefficient(0x5a5ee79a)}},
};
const FIXP_WTP SineWindow960[] = {
  {{roundedCoefficient(0x7ffffd31), roundedCoefficient(0x001aceea)}},
  {{roundedCoefficient(0x7fffe6bc), roundedCoefficient(0x00506cb9)}},
  {{roundedCoefficient(0x7fffb9d1), roundedCoefficient(0x00860a79)}},
  {{roundedCoefficient(0x7fff7671), roundedCoefficient(0x00bba822)}},
  {{roundedCoefficient(0x7fff1c9b), roundedCoefficient(0x00f145ab)}},
  {{roundedCoefficient(0x7ffeac50), roundedCoefficient(0x0126e309)}},
  {{roundedCoefficient(0x7ffe2590), roundedCoefficient(0x015c8033)}},
  {{roundedCoefficient(0x7ffd885a), roundedCoefficient(0x01921d20)}},
  {{roundedCoefficient(0x7ffcd4b0), roundedCoefficient(0x01c7b9c6)}},
  {{roundedCoefficient(0x7ffc0a91), roundedCoefficient(0x01fd561d)}},
  {{roundedCoefficient(0x7ffb29fd), roundedCoefficient(0x0232f21a)}},
  {{roundedCoefficient(0x7ffa32f4), roundedCoefficient(0x02688db4)}},
  {{roundedCoefficient(0x7ff92577), roundedCoefficient(0x029e28e2)}},
  {{roundedCoefficient(0x7ff80186), roundedCoefficient(0x02d3c39b)}},
  {{roundedCoefficient(0x7ff6c720), roundedCoefficient(0x03095dd5)}},
  {{roundedCoefficient(0x7ff57647), roundedCoefficient(0x033ef786)}},
  {{roundedCoefficient(0x7ff40efa), roundedCoefficient(0x037490a5)}},
  {{roundedCoefficient(0x7ff2913a), roundedCoefficient(0x03aa292a)}},
  {{roundedCoefficient(0x7ff0fd07), roundedCoefficient(0x03dfc109)}},
  {{roundedCoefficient(0x7fef5260), roundedCoefficient(0x0415583b)}},
  {{roundedCoefficient(0x7fed9148), roundedCoefficient(0x044aeeb5)}},
  {{roundedCoefficient(0x7febb9bd), roundedCoefficient(0x0480846e)}},
  {{roundedCoefficient(0x7fe9cbc0), roundedCoefficient(0x04b6195d)}},
  {{roundedCoefficient(0x7fe7c752), roundedCoefficient(0x04ebad79)}},
  {{roundedCoefficient(0x7fe5ac72), roundedCoefficient(0x052140b7)}},
  {{roundedCoefficient(0x7fe37b22), roundedCoefficient(0x0556d30f)}},
  {{roundedCoefficient(0x7fe13361), roundedCoefficient(0x058c6478)}},
  {{roundedCoefficient(0x7fded530), roundedCoefficient(0x05c1f4e7)}},
  {{roundedCoefficient(0x7fdc608f), roundedCoefficient(0x05f78453)}},
  {{roundedCoefficient(0x7fd9d57f), roundedCoefficient(0x062d12b4)}},
  {{roundedCoefficient(0x7fd73401), roundedCoefficient(0x06629ffe)}},
  {{roundedCoefficient(0x7fd47c14), roundedCoefficient(0x06982c2b)}},
  {{roundedCoefficient(0x7fd1adb9), roundedCoefficient(0x06cdb72f)}},
  {{roundedCoefficient(0x7fcec8f1), roundedCoefficient(0x07034101)}},
  {{roundedCoefficient(0x7fcbcdbc), roundedCoefficient(0x0738c998)}},
  {{roundedCoefficient(0x7fc8bc1b), roundedCoefficient(0x076e50eb)}},
  {{roundedCoefficient(0x7fc5940e), roundedCoefficient(0x07a3d6f0)}},
  {{roundedCoefficient(0x7fc25596), roundedCoefficient(0x07d95b9e)}},
  {{roundedCoefficient(0x7fbf00b3), roundedCoefficient(0x080edeec)}},
  {{roundedCoefficient(0x7fbb9567), roundedCoefficient(0x084460cf)}},
  {{roundedCoefficient(0x7fb813b0), roundedCoefficient(0x0879e140)}},
  {{roundedCoefficient(0x7fb47b91), roundedCoefficient(0x08af6033)}},
  {{roundedCoefficient(0x7fb0cd0a), roundedCoefficient(0x08e4dda0)}},
  {{roundedCoefficient(0x7fad081b), roundedCoefficient(0x091a597e)}},
  {{roundedCoefficient(0x7fa92cc5), roundedCoefficient(0x094fd3c3)}},
  {{roundedCoefficient(0x7fa53b09), roundedCoefficient(0x09854c66)}},
  {{roundedCoefficient(0x7fa132e8), roundedCoefficient(0x09bac35d)}},
  {{roundedCoefficient(0x7f9d1461), roundedCoefficient(0x09f0389f)}},
  {{roundedCoefficient(0x7f98df77), roundedCoefficient(0x0a25ac23)}},
  {{roundedCoefficient(0x7f949429), roundedCoefficient(0x0a5b1dde)}},
  {{roundedCoefficient(0x7f903279), roundedCoefficient(0x0a908dc9)}},
  {{roundedCoefficient(0x7f8bba66), roundedCoefficient(0x0ac5fbd9)}},
  {{roundedCoefficient(0x7f872bf3), roundedCoefficient(0x0afb6805)}},
  {{roundedCoefficient(0x7f82871f), roundedCoefficient(0x0b30d244)}},
  {{roundedCoefficient(0x7f7dcbec), roundedCoefficient(0x0b663a8c)}},
  {{roundedCoefficient(0x7f78fa5b), roundedCoefficient(0x0b9ba0d5)}},
  {{roundedCoefficient(0x7f74126b), roundedCoefficient(0x0bd10513)}},
  {{roundedCoefficient(0x7f6f141f), roundedCoefficient(0x0c066740)}},
  {{roundedCoefficient(0x7f69ff76), roundedCoefficient(0x0c3bc74f)}},
  {{roundedCoefficient(0x7f64d473), roundedCoefficient(0x0c71253a)}},
  {{roundedCoefficient(0x7f5f9315), roundedCoefficient(0x0ca680f5)}},
  {{roundedCoefficient(0x7f5a3b5e), roundedCoefficient(0x0cdbda79)}},
  {{roundedCoefficient(0x7f54cd4f), roundedCoefficient(0x0d1131ba)}},
  {{roundedCoefficient(0x7f4f48e8), roundedCoefficient(0x0d4686b1)}},
  {{roundedCoefficient(0x7f49ae2a), roundedCoefficient(0x0d7bd954)}},
  {{roundedCoefficient(0x7f43fd18), roundedCoefficient(0x0db12999)}},
  {{roundedCoefficient(0x7f3e35b0), roundedCoefficient(0x0de67776)}},
  {{roundedCoefficient(0x7f3857f6), roundedCoefficient(0x0e1bc2e4)}},
  {{roundedCoefficient(0x7f3263e9), roundedCoefficient(0x0e510bd8)}},
  {{roundedCoefficient(0x7f2c598a), roundedCoefficient(0x0e865248)}},
  {{roundedCoefficient(0x7f2638db), roundedCoefficient(0x0ebb962c)}},
  {{roundedCoefficient(0x7f2001dd), roundedCoefficient(0x0ef0d77b)}},
  {{roundedCoefficient(0x7f19b491), roundedCoefficient(0x0f26162a)}},
  {{roundedCoefficient(0x7f1350f8), roundedCoefficient(0x0f5b5231)}},
  {{roundedCoefficient(0x7f0cd712), roundedCoefficient(0x0f908b86)}},
  {{roundedCoefficient(0x7f0646e2), roundedCoefficient(0x0fc5c220)}},
  {{roundedCoefficient(0x7effa069), roundedCoefficient(0x0ffaf5f6)}},
  {{roundedCoefficient(0x7ef8e3a6), roundedCoefficient(0x103026fe)}},
  {{roundedCoefficient(0x7ef2109d), roundedCoefficient(0x1065552e)}},
  {{roundedCoefficient(0x7eeb274d), roundedCoefficient(0x109a807e)}},
  {{roundedCoefficient(0x7ee427b9), roundedCoefficient(0x10cfa8e5)}},
  {{roundedCoefficient(0x7edd11e1), roundedCoefficient(0x1104ce58)}},
  {{roundedCoefficient(0x7ed5e5c6), roundedCoefficient(0x1139f0cf)}},
  {{roundedCoefficient(0x7ecea36b), roundedCoefficient(0x116f1040)}},
  {{roundedCoefficient(0x7ec74acf), roundedCoefficient(0x11a42ca2)}},
  {{roundedCoefficient(0x7ebfdbf5), roundedCoefficient(0x11d945eb)}},
  {{roundedCoefficient(0x7eb856de), roundedCoefficient(0x120e5c13)}},
  {{roundedCoefficient(0x7eb0bb8a), roundedCoefficient(0x12436f10)}},
  {{roundedCoefficient(0x7ea909fc), roundedCoefficient(0x12787ed8)}},
  {{roundedCoefficient(0x7ea14235), roundedCoefficient(0x12ad8b63)}},
  {{roundedCoefficient(0x7e996436), roundedCoefficient(0x12e294a7)}},
  {{roundedCoefficient(0x7e917000), roundedCoefficient(0x13179a9b)}},
  {{roundedCoefficient(0x7e896595), roundedCoefficient(0x134c9d34)}},
  {{roundedCoefficient(0x7e8144f6), roundedCoefficient(0x13819c6c)}},
  {{roundedCoefficient(0x7e790e25), roundedCoefficient(0x13b69836)}},
  {{roundedCoefficient(0x7e70c124), roundedCoefficient(0x13eb908c)}},
  {{roundedCoefficient(0x7e685df2), roundedCoefficient(0x14208563)}},
  {{roundedCoefficient(0x7e5fe493), roundedCoefficient(0x145576b1)}},
  {{roundedCoefficient(0x7e575508), roundedCoefficient(0x148a646e)}},
  {{roundedCoefficient(0x7e4eaf51), roundedCoefficient(0x14bf4e91)}},
  {{roundedCoefficient(0x7e45f371), roundedCoefficient(0x14f43510)}},
  {{roundedCoefficient(0x7e3d2169), roundedCoefficient(0x152917e1)}},
  {{roundedCoefficient(0x7e34393b), roundedCoefficient(0x155df6fc)}},
  {{roundedCoefficient(0x7e2b3ae8), roundedCoefficient(0x1592d257)}},
  {{roundedCoefficient(0x7e222672), roundedCoefficient(0x15c7a9ea)}},
  {{roundedCoefficient(0x7e18fbda), roundedCoefficient(0x15fc7daa)}},
  {{roundedCoefficient(0x7e0fbb22), roundedCoefficient(0x16314d8e)}},
  {{roundedCoefficient(0x7e06644c), roundedCoefficient(0x1666198d)}},
  {{roundedCoefficient(0x7dfcf759), roundedCoefficient(0x169ae19f)}},
  {{roundedCoefficient(0x7df3744b), roundedCoefficient(0x16cfa5b9)}},
  {{roundedCoefficient(0x7de9db23), roundedCoefficient(0x170465d2)}},
  {{roundedCoefficient(0x7de02be4), roundedCoefficient(0x173921e2)}},
  {{roundedCoefficient(0x7dd6668f), roundedCoefficient(0x176dd9de)}},
  {{roundedCoefficient(0x7dcc8b25), roundedCoefficient(0x17a28dbe)}},
  {{roundedCoefficient(0x7dc299a9), roundedCoefficient(0x17d73d79)}},
  {{roundedCoefficient(0x7db8921c), roundedCoefficient(0x180be904)}},
  {{roundedCoefficient(0x7dae747f), roundedCoefficient(0x18409058)}},
  {{roundedCoefficient(0x7da440d6), roundedCoefficient(0x1875336a)}},
  {{roundedCoefficient(0x7d99f721), roundedCoefficient(0x18a9d231)}},
  {{roundedCoefficient(0x7d8f9762), roundedCoefficient(0x18de6ca5)}},
  {{roundedCoefficient(0x7d85219c), roundedCoefficient(0x191302bc)}},
  {{roundedCoefficient(0x7d7a95cf), roundedCoefficient(0x1947946c)}},
  {{roundedCoefficient(0x7d6ff3fe), roundedCoefficient(0x197c21ad)}},
  {{roundedCoefficient(0x7d653c2b), roundedCoefficient(0x19b0aa75)}},
  {{roundedCoefficient(0x7d5a6e57), roundedCoefficient(0x19e52ebb)}},
  {{roundedCoefficient(0x7d4f8a85), roundedCoefficient(0x1a19ae76)}},
  {{roundedCoefficient(0x7d4490b6), roundedCoefficient(0x1a4e299d)}},
  {{roundedCoefficient(0x7d3980ec), roundedCoefficient(0x1a82a026)}},
  {{roundedCoefficient(0x7d2e5b2a), roundedCoefficient(0x1ab71208)}},
  {{roundedCoefficient(0x7d231f70), roundedCoefficient(0x1aeb7f3a)}},
  {{roundedCoefficient(0x7d17cdc2), roundedCoefficient(0x1b1fe7b3)}},
  {{roundedCoefficient(0x7d0c6621), roundedCoefficient(0x1b544b6a)}},
  {{roundedCoefficient(0x7d00e88f), roundedCoefficient(0x1b88aa55)}},
  {{roundedCoefficient(0x7cf5550e), roundedCoefficient(0x1bbd046c)}},
  {{roundedCoefficient(0x7ce9aba1), roundedCoefficient(0x1bf159a4)}},
  {{roundedCoefficient(0x7cddec48), roundedCoefficient(0x1c25a9f6)}},
  {{roundedCoefficient(0x7cd21707), roundedCoefficient(0x1c59f557)}},
  {{roundedCoefficient(0x7cc62bdf), roundedCoefficient(0x1c8e3bbe)}},
  {{roundedCoefficient(0x7cba2ad3), roundedCoefficient(0x1cc27d23)}},
  {{roundedCoefficient(0x7cae13e4), roundedCoefficient(0x1cf6b97c)}},
  {{roundedCoefficient(0x7ca1e715), roundedCoefficient(0x1d2af0c1)}},
  {{roundedCoefficient(0x7c95a467), roundedCoefficient(0x1d5f22e7)}},
  {{roundedCoefficient(0x7c894bde), roundedCoefficient(0x1d934fe5)}},
  {{roundedCoefficient(0x7c7cdd7b), roundedCoefficient(0x1dc777b3)}},
  {{roundedCoefficient(0x7c705940), roundedCoefficient(0x1dfb9a48)}},
  {{roundedCoefficient(0x7c63bf2f), roundedCoefficient(0x1e2fb79a)}},
  {{roundedCoefficient(0x7c570f4b), roundedCoefficient(0x1e63cfa0)}},
  {{roundedCoefficient(0x7c4a4996), roundedCoefficient(0x1e97e251)}},
  {{roundedCoefficient(0x7c3d6e13), roundedCoefficient(0x1ecbefa4)}},
  {{roundedCoefficient(0x7c307cc2), roundedCoefficient(0x1efff78f)}},
  {{roundedCoefficient(0x7c2375a8), roundedCoefficient(0x1f33fa0a)}},
  {{roundedCoefficient(0x7c1658c5), roundedCoefficient(0x1f67f70b)}},
  {{roundedCoefficient(0x7c09261d), roundedCoefficient(0x1f9bee8a)}},
  {{roundedCoefficient(0x7bfbddb1), roundedCoefficient(0x1fcfe07d)}},
  {{roundedCoefficient(0x7bee7f85), roundedCoefficient(0x2003ccdb)}},
  {{roundedCoefficient(0x7be10b99), roundedCoefficient(0x2037b39b)}},
  {{roundedCoefficient(0x7bd381f1), roundedCoefficient(0x206b94b4)}},
  {{roundedCoefficient(0x7bc5e290), roundedCoefficient(0x209f701c)}},
  {{roundedCoefficient(0x7bb82d76), roundedCoefficient(0x20d345cc)}},
  {{roundedCoefficient(0x7baa62a8), roundedCoefficient(0x210715b8)}},
  {{roundedCoefficient(0x7b9c8226), roundedCoefficient(0x213adfda)}},
  {{roundedCoefficient(0x7b8e8bf5), roundedCoefficient(0x216ea426)}},
  {{roundedCoefficient(0x7b808015), roundedCoefficient(0x21a26295)}},
  {{roundedCoefficient(0x7b725e8a), roundedCoefficient(0x21d61b1e)}},
  {{roundedCoefficient(0x7b642756), roundedCoefficient(0x2209cdb6)}},
  {{roundedCoefficient(0x7b55da7c), roundedCoefficient(0x223d7a55)}},
  {{roundedCoefficient(0x7b4777fe), roundedCoefficient(0x227120f3)}},
  {{roundedCoefficient(0x7b38ffde), roundedCoefficient(0x22a4c185)}},
  {{roundedCoefficient(0x7b2a721f), roundedCoefficient(0x22d85c04)}},
  {{roundedCoefficient(0x7b1bcec4), roundedCoefficient(0x230bf065)}},
  {{roundedCoefficient(0x7b0d15d0), roundedCoefficient(0x233f7ea0)}},
  {{roundedCoefficient(0x7afe4744), roundedCoefficient(0x237306ab)}},
  {{roundedCoefficient(0x7aef6323), roundedCoefficient(0x23a6887f)}},
  {{roundedCoefficient(0x7ae06971), roundedCoefficient(0x23da0411)}},
  {{roundedCoefficient(0x7ad15a2f), roundedCoefficient(0x240d7958)}},
  {{roundedCoefficient(0x7ac23561), roundedCoefficient(0x2440e84d)}},
  {{roundedCoefficient(0x7ab2fb09), roundedCoefficient(0x247450e4)}},
  {{roundedCoefficient(0x7aa3ab29), roundedCoefficient(0x24a7b317)}},
  {{roundedCoefficient(0x7a9445c5), roundedCoefficient(0x24db0edb)}},
  {{roundedCoefficient(0x7a84cade), roundedCoefficient(0x250e6427)}},
  {{roundedCoefficient(0x7a753a79), roundedCoefficient(0x2541b2f3)}},
  {{roundedCoefficient(0x7a659496), roundedCoefficient(0x2574fb36)}},
  {{roundedCoefficient(0x7a55d93a), roundedCoefficient(0x25a83ce6)}},
  {{roundedCoefficient(0x7a460867), roundedCoefficient(0x25db77fa)}},
  {{roundedCoefficient(0x7a362220), roundedCoefficient(0x260eac6a)}},
  {{roundedCoefficient(0x7a262668), roundedCoefficient(0x2641da2d)}},
  {{roundedCoefficient(0x7a161540), roundedCoefficient(0x26750139)}},
  {{roundedCoefficient(0x7a05eead), roundedCoefficient(0x26a82186)}},
  {{roundedCoefficient(0x79f5b2b1), roundedCoefficient(0x26db3b0a)}},
  {{roundedCoefficient(0x79e5614f), roundedCoefficient(0x270e4dbd)}},
  {{roundedCoefficient(0x79d4fa89), roundedCoefficient(0x27415996)}},
  {{roundedCoefficient(0x79c47e63), roundedCoefficient(0x27745e8c)}},
  {{roundedCoefficient(0x79b3ece0), roundedCoefficient(0x27a75c95)}},
  {{roundedCoefficient(0x79a34602), roundedCoefficient(0x27da53a9)}},
  {{roundedCoefficient(0x799289cc), roundedCoefficient(0x280d43bf)}},
  {{roundedCoefficient(0x7981b841), roundedCoefficient(0x28402cce)}},
  {{roundedCoefficient(0x7970d165), roundedCoefficient(0x28730ecd)}},
  {{roundedCoefficient(0x795fd53a), roundedCoefficient(0x28a5e9b4)}},
  {{roundedCoefficient(0x794ec3c3), roundedCoefficient(0x28d8bd78)}},
  {{roundedCoefficient(0x793d9d03), roundedCoefficient(0x290b8a12)}},
  {{roundedCoefficient(0x792c60fe), roundedCoefficient(0x293e4f78)}},
  {{roundedCoefficient(0x791b0fb5), roundedCoefficient(0x29710da1)}},
  {{roundedCoefficient(0x7909a92d), roundedCoefficient(0x29a3c485)}},
  {{roundedCoefficient(0x78f82d68), roundedCoefficient(0x29d6741b)}},
  {{roundedCoefficient(0x78e69c69), roundedCoefficient(0x2a091c59)}},
  {{roundedCoefficient(0x78d4f634), roundedCoefficient(0x2a3bbd37)}},
  {{roundedCoefficient(0x78c33acb), roundedCoefficient(0x2a6e56ac)}},
  {{roundedCoefficient(0x78b16a32), roundedCoefficient(0x2aa0e8b0)}},
  {{roundedCoefficient(0x789f846b), roundedCoefficient(0x2ad37338)}},
  {{roundedCoefficient(0x788d897b), roundedCoefficient(0x2b05f63d)}},
  {{roundedCoefficient(0x787b7963), roundedCoefficient(0x2b3871b5)}},
  {{roundedCoefficient(0x78695428), roundedCoefficient(0x2b6ae598)}},
  {{roundedCoefficient(0x785719cc), roundedCoefficient(0x2b9d51dd)}},
  {{roundedCoefficient(0x7844ca53), roundedCoefficient(0x2bcfb67b)}},
  {{roundedCoefficient(0x783265c0), roundedCoefficient(0x2c021369)}},
  {{roundedCoefficient(0x781fec15), roundedCoefficient(0x2c34689e)}},
  {{roundedCoefficient(0x780d5d57), roundedCoefficient(0x2c66b611)}},
  {{roundedCoefficient(0x77fab989), roundedCoefficient(0x2c98fbba)}},
  {{roundedCoefficient(0x77e800ad), roundedCoefficient(0x2ccb3990)}},
  {{roundedCoefficient(0x77d532c7), roundedCoefficient(0x2cfd6f8a)}},
  {{roundedCoefficient(0x77c24fdb), roundedCoefficient(0x2d2f9d9f)}},
  {{roundedCoefficient(0x77af57eb), roundedCoefficient(0x2d61c3c7)}},
  {{roundedCoefficient(0x779c4afc), roundedCoefficient(0x2d93e1f8)}},
  {{roundedCoefficient(0x77892910), roundedCoefficient(0x2dc5f829)}},
  {{roundedCoefficient(0x7775f22a), roundedCoefficient(0x2df80653)}},
  {{roundedCoefficient(0x7762a64f), roundedCoefficient(0x2e2a0c6c)}},
  {{roundedCoefficient(0x774f4581), roundedCoefficient(0x2e5c0a6b)}},
  {{roundedCoefficient(0x773bcfc4), roundedCoefficient(0x2e8e0048)}},
  {{roundedCoefficient(0x7728451c), roundedCoefficient(0x2ebfedfa)}},
  {{roundedCoefficient(0x7714a58b), roundedCoefficient(0x2ef1d377)}},
  {{roundedCoefficient(0x7700f115), roundedCoefficient(0x2f23b0b9)}},
  {{roundedCoefficient(0x76ed27be), roundedCoefficient(0x2f5585b5)}},
  {{roundedCoefficient(0x76d94989), roundedCoefficient(0x2f875262)}},
  {{roundedCoefficient(0x76c55679), roundedCoefficient(0x2fb916b9)}},
  {{roundedCoefficient(0x76b14e93), roundedCoefficient(0x2fead2b0)}},
  {{roundedCoefficient(0x769d31d9), roundedCoefficient(0x301c863f)}},
  {{roundedCoefficient(0x76890050), roundedCoefficient(0x304e315d)}},
  {{roundedCoefficient(0x7674b9fa), roundedCoefficient(0x307fd401)}},
  {{roundedCoefficient(0x76605edb), roundedCoefficient(0x30b16e23)}},
  {{roundedCoefficient(0x764beef8), roundedCoefficient(0x30e2ffb9)}},
  {{roundedCoefficient(0x76376a52), roundedCoefficient(0x311488bc)}},
  {{roundedCoefficient(0x7622d0ef), roundedCoefficient(0x31460922)}},
  {{roundedCoefficient(0x760e22d1), roundedCoefficient(0x317780e2)}},
  {{roundedCoefficient(0x75f95ffc), roundedCoefficient(0x31a8eff5)}},
  {{roundedCoefficient(0x75e48874), roundedCoefficient(0x31da5651)}},
  {{roundedCoefficient(0x75cf9c3d), roundedCoefficient(0x320bb3ee)}},
  {{roundedCoefficient(0x75ba9b5a), roundedCoefficient(0x323d08c3)}},
  {{roundedCoefficient(0x75a585cf), roundedCoefficient(0x326e54c7)}},
  {{roundedCoefficient(0x75905ba0), roundedCoefficient(0x329f97f3)}},
  {{roundedCoefficient(0x757b1ccf), roundedCoefficient(0x32d0d23c)}},
  {{roundedCoefficient(0x7565c962), roundedCoefficient(0x3302039b)}},
  {{roundedCoefficient(0x7550615c), roundedCoefficient(0x33332c06)}},
  {{roundedCoefficient(0x753ae4c0), roundedCoefficient(0x33644b76)}},
  {{roundedCoefficient(0x75255392), roundedCoefficient(0x339561e1)}},
  {{roundedCoefficient(0x750fadd7), roundedCoefficient(0x33c66f40)}},
  {{roundedCoefficient(0x74f9f391), roundedCoefficient(0x33f77388)}},
  {{roundedCoefficient(0x74e424c5), roundedCoefficient(0x34286eb3)}},
  {{roundedCoefficient(0x74ce4177), roundedCoefficient(0x345960b7)}},
  {{roundedCoefficient(0x74b849aa), roundedCoefficient(0x348a498b)}},
  {{roundedCoefficient(0x74a23d62), roundedCoefficient(0x34bb2927)}},
  {{roundedCoefficient(0x748c1ca4), roundedCoefficient(0x34ebff83)}},
  {{roundedCoefficient(0x7475e772), roundedCoefficient(0x351ccc96)}},
  {{roundedCoefficient(0x745f9dd1), roundedCoefficient(0x354d9057)}},
  {{roundedCoefficient(0x74493fc5), roundedCoefficient(0x357e4abe)}},
  {{roundedCoefficient(0x7432cd51), roundedCoefficient(0x35aefbc2)}},
  {{roundedCoefficient(0x741c467b), roundedCoefficient(0x35dfa35a)}},
  {{roundedCoefficient(0x7405ab45), roundedCoefficient(0x3610417f)}},
  {{roundedCoefficient(0x73eefbb3), roundedCoefficient(0x3640d627)}},
  {{roundedCoefficient(0x73d837ca), roundedCoefficient(0x3671614b)}},
  {{roundedCoefficient(0x73c15f8d), roundedCoefficient(0x36a1e2e0)}},
  {{roundedCoefficient(0x73aa7301), roundedCoefficient(0x36d25ae0)}},
  {{roundedCoefficient(0x7393722a), roundedCoefficient(0x3702c942)}},
  {{roundedCoefficient(0x737c5d0b), roundedCoefficient(0x37332dfd)}},
  {{roundedCoefficient(0x736533a9), roundedCoefficient(0x37638908)}},
  {{roundedCoefficient(0x734df607), roundedCoefficient(0x3793da5b)}},
  {{roundedCoefficient(0x7336a42b), roundedCoefficient(0x37c421ee)}},
  {{roundedCoefficient(0x731f3e17), roundedCoefficient(0x37f45fb7)}},
  {{roundedCoefficient(0x7307c3d0), roundedCoefficient(0x382493b0)}},
  {{roundedCoefficient(0x72f0355a), roundedCoefficient(0x3854bdcf)}},
  {{roundedCoefficient(0x72d892ba), roundedCoefficient(0x3884de0b)}},
  {{roundedCoefficient(0x72c0dbf3), roundedCoefficient(0x38b4f45d)}},
  {{roundedCoefficient(0x72a91109), roundedCoefficient(0x38e500bc)}},
  {{roundedCoefficient(0x72913201), roundedCoefficient(0x3915031f)}},
  {{roundedCoefficient(0x72793edf), roundedCoefficient(0x3944fb7e)}},
  {{roundedCoefficient(0x726137a8), roundedCoefficient(0x3974e9d0)}},
  {{roundedCoefficient(0x72491c5e), roundedCoefficient(0x39a4ce0e)}},
  {{roundedCoefficient(0x7230ed07), roundedCoefficient(0x39d4a82f)}},
  {{roundedCoefficient(0x7218a9a7), roundedCoefficient(0x3a04782a)}},
  {{roundedCoefficient(0x72005242), roundedCoefficient(0x3a343df7)}},
  {{roundedCoefficient(0x71e7e6dc), roundedCoefficient(0x3a63f98d)}},
  {{roundedCoefficient(0x71cf677a), roundedCoefficient(0x3a93aae5)}},
  {{roundedCoefficient(0x71b6d420), roundedCoefficient(0x3ac351f6)}},
  {{roundedCoefficient(0x719e2cd2), roundedCoefficient(0x3af2eeb7)}},
  {{roundedCoefficient(0x71857195), roundedCoefficient(0x3b228120)}},
  {{roundedCoefficient(0x716ca26c), roundedCoefficient(0x3b52092a)}},
  {{roundedCoefficient(0x7153bf5d), roundedCoefficient(0x3b8186ca)}},
  {{roundedCoefficient(0x713ac86b), roundedCoefficient(0x3bb0f9fa)}},
  {{roundedCoefficient(0x7121bd9c), roundedCoefficient(0x3be062b0)}},
  {{roundedCoefficient(0x71089ef2), roundedCoefficient(0x3c0fc0e6)}},
  {{roundedCoefficient(0x70ef6c74), roundedCoefficient(0x3c3f1491)}},
  {{roundedCoefficient(0x70d62625), roundedCoefficient(0x3c6e5daa)}},
  {{roundedCoefficient(0x70bccc09), roundedCoefficient(0x3c9d9c28)}},
  {{roundedCoefficient(0x70a35e25), roundedCoefficient(0x3cccd004)}},
  {{roundedCoefficient(0x7089dc7e), roundedCoefficient(0x3cfbf935)}},
  {{roundedCoefficient(0x70704718), roundedCoefficient(0x3d2b17b3)}},
  {{roundedCoefficient(0x70569df8), roundedCoefficient(0x3d5a2b75)}},
  {{roundedCoefficient(0x703ce122), roundedCoefficient(0x3d893474)}},
  {{roundedCoefficient(0x7023109a), roundedCoefficient(0x3db832a6)}},
  {{roundedCoefficient(0x70092c65), roundedCoefficient(0x3de72604)}},
  {{roundedCoefficient(0x6fef3488), roundedCoefficient(0x3e160e85)}},
  {{roundedCoefficient(0x6fd52907), roundedCoefficient(0x3e44ec22)}},
  {{roundedCoefficient(0x6fbb09e7), roundedCoefficient(0x3e73bed2)}},
  {{roundedCoefficient(0x6fa0d72c), roundedCoefficient(0x3ea2868c)}},
  {{roundedCoefficient(0x6f8690db), roundedCoefficient(0x3ed14349)}},
  {{roundedCoefficient(0x6f6c36f8), roundedCoefficient(0x3efff501)}},
  {{roundedCoefficient(0x6f51c989), roundedCoefficient(0x3f2e9bab)}},
  {{roundedCoefficient(0x6f374891), roundedCoefficient(0x3f5d373e)}},
  {{roundedCoefficient(0x6f1cb416), roundedCoefficient(0x3f8bc7b4)}},
  {{roundedCoefficient(0x6f020c1c), roundedCoefficient(0x3fba4d03)}},
  {{roundedCoefficient(0x6ee750a8), roundedCoefficient(0x3fe8c724)}},
  {{roundedCoefficient(0x6ecc81be), roundedCoefficient(0x4017360e)}},
  {{roundedCoefficient(0x6eb19f64), roundedCoefficient(0x404599b9)}},
  {{roundedCoefficient(0x6e96a99d), roundedCoefficient(0x4073f21d)}},
  {{roundedCoefficient(0x6e7ba06f), roundedCoefficient(0x40a23f32)}},
  {{roundedCoefficient(0x6e6083de), roundedCoefficient(0x40d080f0)}},
  {{roundedCoefficient(0x6e4553ef), roundedCoefficient(0x40feb74f)}},
  {{roundedCoefficient(0x6e2a10a8), roundedCoefficient(0x412ce246)}},
  {{roundedCoefficient(0x6e0eba0c), roundedCoefficient(0x415b01ce)}},
  {{roundedCoefficient(0x6df35020), roundedCoefficient(0x418915de)}},
  {{roundedCoefficient(0x6dd7d2ea), roundedCoefficient(0x41b71e6f)}},
  {{roundedCoefficient(0x6dbc426e), roundedCoefficient(0x41e51b77)}},
  {{roundedCoefficient(0x6da09eb1), roundedCoefficient(0x42130cf0)}},
  {{roundedCoefficient(0x6d84e7b7), roundedCoefficient(0x4240f2d1)}},
  {{roundedCoefficient(0x6d691d87), roundedCoefficient(0x426ecd12)}},
  {{roundedCoefficient(0x6d4d4023), roundedCoefficient(0x429c9bab)}},
  {{roundedCoefficient(0x6d314f93), roundedCoefficient(0x42ca5e94)}},
  {{roundedCoefficient(0x6d154bd9), roundedCoefficient(0x42f815c5)}},
  {{roundedCoefficient(0x6cf934fc), roundedCoefficient(0x4325c135)}},
  {{roundedCoefficient(0x6cdd0b00), roundedCoefficient(0x435360de)}},
  {{roundedCoefficient(0x6cc0cdea), roundedCoefficient(0x4380f4b7)}},
  {{roundedCoefficient(0x6ca47dbf), roundedCoefficient(0x43ae7cb7)}},
  {{roundedCoefficient(0x6c881a84), roundedCoefficient(0x43dbf8d7)}},
  {{roundedCoefficient(0x6c6ba43e), roundedCoefficient(0x44096910)}},
  {{roundedCoefficient(0x6c4f1af2), roundedCoefficient(0x4436cd58)}},
  {{roundedCoefficient(0x6c327ea6), roundedCoefficient(0x446425a8)}},
  {{roundedCoefficient(0x6c15cf5d), roundedCoefficient(0x449171f8)}},
  {{roundedCoefficient(0x6bf90d1d), roundedCoefficient(0x44beb240)}},
  {{roundedCoefficient(0x6bdc37eb), roundedCoefficient(0x44ebe679)}},
  {{roundedCoefficient(0x6bbf4fcd), roundedCoefficient(0x45190e99)}},
  {{roundedCoefficient(0x6ba254c7), roundedCoefficient(0x45462a9a)}},
  {{roundedCoefficient(0x6b8546de), roundedCoefficient(0x45733a73)}},
  {{roundedCoefficient(0x6b682617), roundedCoefficient(0x45a03e1d)}},
  {{roundedCoefficient(0x6b4af279), roundedCoefficient(0x45cd358f)}},
  {{roundedCoefficient(0x6b2dac06), roundedCoefficient(0x45fa20c2)}},
  {{roundedCoefficient(0x6b1052c6), roundedCoefficient(0x4626ffae)}},
  {{roundedCoefficient(0x6af2e6bc), roundedCoefficient(0x4653d24b)}},
  {{roundedCoefficient(0x6ad567ef), roundedCoefficient(0x46809891)}},
  {{roundedCoefficient(0x6ab7d663), roundedCoefficient(0x46ad5278)}},
  {{roundedCoefficient(0x6a9a321d), roundedCoefficient(0x46d9fff8)}},
  {{roundedCoefficient(0x6a7c7b23), roundedCoefficient(0x4706a10a)}},
  {{roundedCoefficient(0x6a5eb17a), roundedCoefficient(0x473335a5)}},
  {{roundedCoefficient(0x6a40d527), roundedCoefficient(0x475fbdc3)}},
  {{roundedCoefficient(0x6a22e630), roundedCoefficient(0x478c395a)}},
  {{roundedCoefficient(0x6a04e499), roundedCoefficient(0x47b8a864)}},
  {{roundedCoefficient(0x69e6d067), roundedCoefficient(0x47e50ad8)}},
  {{roundedCoefficient(0x69c8a9a1), roundedCoefficient(0x481160ae)}},
  {{roundedCoefficient(0x69aa704c), roundedCoefficient(0x483da9e0)}},
  {{roundedCoefficient(0x698c246c), roundedCoefficient(0x4869e665)}},
  {{roundedCoefficient(0x696dc607), roundedCoefficient(0x48961635)}},
  {{roundedCoefficient(0x694f5523), roundedCoefficient(0x48c23949)}},
  {{roundedCoefficient(0x6930d1c4), roundedCoefficient(0x48ee4f98)}},
  {{roundedCoefficient(0x69123bf1), roundedCoefficient(0x491a591c)}},
  {{roundedCoefficient(0x68f393ae), roundedCoefficient(0x494655cc)}},
  {{roundedCoefficient(0x68d4d900), roundedCoefficient(0x497245a1)}},
  {{roundedCoefficient(0x68b60bee), roundedCoefficient(0x499e2892)}},
  {{roundedCoefficient(0x68972c7d), roundedCoefficient(0x49c9fe99)}},
  {{roundedCoefficient(0x68783ab1), roundedCoefficient(0x49f5c7ae)}},
  {{roundedCoefficient(0x68593691), roundedCoefficient(0x4a2183c8)}},
  {{roundedCoefficient(0x683a2022), roundedCoefficient(0x4a4d32e1)}},
  {{roundedCoefficient(0x681af76a), roundedCoefficient(0x4a78d4f0)}},
  {{roundedCoefficient(0x67fbbc6d), roundedCoefficient(0x4aa469ee)}},
  {{roundedCoefficient(0x67dc6f31), roundedCoefficient(0x4acff1d3)}},
  {{roundedCoefficient(0x67bd0fbd), roundedCoefficient(0x4afb6c98)}},
  {{roundedCoefficient(0x679d9e14), roundedCoefficient(0x4b26da35)}},
  {{roundedCoefficient(0x677e1a3e), roundedCoefficient(0x4b523aa2)}},
  {{roundedCoefficient(0x675e843e), roundedCoefficient(0x4b7d8dd8)}},
  {{roundedCoefficient(0x673edc1c), roundedCoefficient(0x4ba8d3cf)}},
  {{roundedCoefficient(0x671f21dc), roundedCoefficient(0x4bd40c80)}},
  {{roundedCoefficient(0x66ff5584), roundedCoefficient(0x4bff37e2)}},
  {{roundedCoefficient(0x66df771a), roundedCoefficient(0x4c2a55ef)}},
  {{roundedCoefficient(0x66bf86a3), roundedCoefficient(0x4c55669f)}},
  {{roundedCoefficient(0x669f8425), roundedCoefficient(0x4c8069ea)}},
  {{roundedCoefficient(0x667f6fa5), roundedCoefficient(0x4cab5fc9)}},
  {{roundedCoefficient(0x665f4929), roundedCoefficient(0x4cd64834)}},
  {{roundedCoefficient(0x663f10b7), roundedCoefficient(0x4d012324)}},
  {{roundedCoefficient(0x661ec654), roundedCoefficient(0x4d2bf091)}},
  {{roundedCoefficient(0x65fe6a06), roundedCoefficient(0x4d56b073)}},
  {{roundedCoefficient(0x65ddfbd3), roundedCoefficient(0x4d8162c4)}},
  {{roundedCoefficient(0x65bd7bc0), roundedCoefficient(0x4dac077b)}},
  {{roundedCoefficient(0x659ce9d4), roundedCoefficient(0x4dd69e92)}},
  {{roundedCoefficient(0x657c4613), roundedCoefficient(0x4e012800)}},
  {{roundedCoefficient(0x655b9083), roundedCoefficient(0x4e2ba3be)}},
  {{roundedCoefficient(0x653ac92b), roundedCoefficient(0x4e5611c5)}},
  {{roundedCoefficient(0x6519f010), roundedCoefficient(0x4e80720e)}},
  {{roundedCoefficient(0x64f90538), roundedCoefficient(0x4eaac490)}},
  {{roundedCoefficient(0x64d808a8), roundedCoefficient(0x4ed50945)}},
  {{roundedCoefficient(0x64b6fa66), roundedCoefficient(0x4eff4025)}},
  {{roundedCoefficient(0x6495da79), roundedCoefficient(0x4f296928)}},
  {{roundedCoefficient(0x6474a8e5), roundedCoefficient(0x4f538448)}},
  {{roundedCoefficient(0x645365b2), roundedCoefficient(0x4f7d917c)}},
  {{roundedCoefficient(0x643210e4), roundedCoefficient(0x4fa790be)}},
  {{roundedCoefficient(0x6410aa81), roundedCoefficient(0x4fd18206)}},
  {{roundedCoefficient(0x63ef3290), roundedCoefficient(0x4ffb654d)}},
  {{roundedCoefficient(0x63cda916), roundedCoefficient(0x50253a8b)}},
  {{roundedCoefficient(0x63ac0e19), roundedCoefficient(0x504f01ba)}},
  {{roundedCoefficient(0x638a619e), roundedCoefficient(0x5078bad1)}},
  {{roundedCoefficient(0x6368a3ad), roundedCoefficient(0x50a265c9)}},
  {{roundedCoefficient(0x6346d44b), roundedCoefficient(0x50cc029c)}},
  {{roundedCoefficient(0x6324f37d), roundedCoefficient(0x50f59141)}},
  {{roundedCoefficient(0x6303014a), roundedCoefficient(0x511f11b2)}},
  {{roundedCoefficient(0x62e0fdb8), roundedCoefficient(0x514883e7)}},
  {{roundedCoefficient(0x62bee8cc), roundedCoefficient(0x5171e7d9)}},
  {{roundedCoefficient(0x629cc28c), roundedCoefficient(0x519b3d80)}},
  {{roundedCoefficient(0x627a8b00), roundedCoefficient(0x51c484d6)}},
  {{roundedCoefficient(0x6258422c), roundedCoefficient(0x51edbdd4)}},
  {{roundedCoefficient(0x6235e816), roundedCoefficient(0x5216e871)}},
  {{roundedCoefficient(0x62137cc5), roundedCoefficient(0x524004a7)}},
  {{roundedCoefficient(0x61f1003f), roundedCoefficient(0x5269126e)}},
  {{roundedCoefficient(0x61ce7289), roundedCoefficient(0x529211c0)}},
  {{roundedCoefficient(0x61abd3ab), roundedCoefficient(0x52bb0295)}},
  {{roundedCoefficient(0x618923a9), roundedCoefficient(0x52e3e4e6)}},
  {{roundedCoefficient(0x61666289), roundedCoefficient(0x530cb8ac)}},
  {{roundedCoefficient(0x61439053), roundedCoefficient(0x53357ddf)}},
  {{roundedCoefficient(0x6120ad0d), roundedCoefficient(0x535e3479)}},
  {{roundedCoefficient(0x60fdb8bb), roundedCoefficient(0x5386dc72)}},
  {{roundedCoefficient(0x60dab365), roundedCoefficient(0x53af75c3)}},
  {{roundedCoefficient(0x60b79d10), roundedCoefficient(0x53d80065)}},
  {{roundedCoefficient(0x609475c3), roundedCoefficient(0x54007c51)}},
  {{roundedCoefficient(0x60713d84), roundedCoefficient(0x5428e980)}},
  {{roundedCoefficient(0x604df459), roundedCoefficient(0x545147eb)}},
  {{roundedCoefficient(0x602a9a48), roundedCoefficient(0x5479978a)}},
  {{roundedCoefficient(0x60072f57), roundedCoefficient(0x54a1d857)}},
  {{roundedCoefficient(0x5fe3b38d), roundedCoefficient(0x54ca0a4b)}},
  {{roundedCoefficient(0x5fc026f0), roundedCoefficient(0x54f22d5d)}},
  {{roundedCoefficient(0x5f9c8987), roundedCoefficient(0x551a4189)}},
  {{roundedCoefficient(0x5f78db56), roundedCoefficient(0x554246c6)}},
  {{roundedCoefficient(0x5f551c65), roundedCoefficient(0x556a3d0d)}},
  {{roundedCoefficient(0x5f314cba), roundedCoefficient(0x55922457)}},
  {{roundedCoefficient(0x5f0d6c5b), roundedCoefficient(0x55b9fc9e)}},
  {{roundedCoefficient(0x5ee97b4f), roundedCoefficient(0x55e1c5da)}},
  {{roundedCoefficient(0x5ec5799b), roundedCoefficient(0x56098005)}},
  {{roundedCoefficient(0x5ea16747), roundedCoefficient(0x56312b17)}},
  {{roundedCoefficient(0x5e7d4458), roundedCoefficient(0x5658c709)}},
  {{roundedCoefficient(0x5e5910d4), roundedCoefficient(0x568053d5)}},
  {{roundedCoefficient(0x5e34ccc3), roundedCoefficient(0x56a7d174)}},
  {{roundedCoefficient(0x5e10782b), roundedCoefficient(0x56cf3fde)}},
  {{roundedCoefficient(0x5dec1311), roundedCoefficient(0x56f69f0d)}},
  {{roundedCoefficient(0x5dc79d7c), roundedCoefficient(0x571deefa)}},
  {{roundedCoefficient(0x5da31773), roundedCoefficient(0x57452f9d)}},
  {{roundedCoefficient(0x5d7e80fc), roundedCoefficient(0x576c60f1)}},
  {{roundedCoefficient(0x5d59da1e), roundedCoefficient(0x579382ee)}},
  {{roundedCoefficient(0x5d3522de), roundedCoefficient(0x57ba958d)}},
  {{roundedCoefficient(0x5d105b44), roundedCoefficient(0x57e198c7)}},
  {{roundedCoefficient(0x5ceb8355), roundedCoefficient(0x58088c96)}},
  {{roundedCoefficient(0x5cc69b19), roundedCoefficient(0x582f70f3)}},
  {{roundedCoefficient(0x5ca1a295), roundedCoefficient(0x585645d7)}},
  {{roundedCoefficient(0x5c7c99d1), roundedCoefficient(0x587d0b3b)}},
  {{roundedCoefficient(0x5c5780d3), roundedCoefficient(0x58a3c118)}},
  {{roundedCoefficient(0x5c3257a0), roundedCoefficient(0x58ca6767)}},
  {{roundedCoefficient(0x5c0d1e41), roundedCoefficient(0x58f0fe23)}},
  {{roundedCoefficient(0x5be7d4ba), roundedCoefficient(0x59178543)}},
  {{roundedCoefficient(0x5bc27b14), roundedCoefficient(0x593dfcc2)}},
  {{roundedCoefficient(0x5b9d1154), roundedCoefficient(0x59646498)}},
  {{roundedCoefficient(0x5b779780), roundedCoefficient(0x598abcbe)}},
  {{roundedCoefficient(0x5b520da1), roundedCoefficient(0x59b1052f)}},
  {{roundedCoefficient(0x5b2c73bb), roundedCoefficient(0x59d73de3)}},
  {{roundedCoefficient(0x5b06c9d6), roundedCoefficient(0x59fd66d4)}},
  {{roundedCoefficient(0x5ae10ff9), roundedCoefficient(0x5a237ffa)}},
  {{roundedCoefficient(0x5abb4629), roundedCoefficient(0x5a498950)}},
  {{roundedCoefficient(0x5a956c6e), roundedCoefficient(0x5a6f82ce)}},
};
const FIXP_WTP SineWindow1024[] = {
  {{roundedCoefficient(0x7ffffd88), roundedCoefficient(0x001921fb)}},
  {{roundedCoefficient(0x7fffe9cb), roundedCoefficient(0x004b65ee)}},
  {{roundedCoefficient(0x7fffc251), roundedCoefficient(0x007da9d4)}},
  {{roundedCoefficient(0x7fff8719), roundedCoefficient(0x00afeda8)}},
  {{roundedCoefficient(0x7fff3824), roundedCoefficient(0x00e23160)}},
  {{roundedCoefficient(0x7ffed572), roundedCoefficient(0x011474f6)}},
  {{roundedCoefficient(0x7ffe5f03), roundedCoefficient(0x0146b860)}},
  {{roundedCoefficient(0x7ffdd4d7), roundedCoefficient(0x0178fb99)}},
  {{roundedCoefficient(0x7ffd36ee), roundedCoefficient(0x01ab3e97)}},
  {{roundedCoefficient(0x7ffc8549), roundedCoefficient(0x01dd8154)}},
  {{roundedCoefficient(0x7ffbbfe6), roundedCoefficient(0x020fc3c6)}},
  {{roundedCoefficient(0x7ffae6c7), roundedCoefficient(0x024205e8)}},
  {{roundedCoefficient(0x7ff9f9ec), roundedCoefficient(0x027447b0)}},
  {{roundedCoefficient(0x7ff8f954), roundedCoefficient(0x02a68917)}},
  {{roundedCoefficient(0x7ff7e500), roundedCoefficient(0x02d8ca16)}},
  {{roundedCoefficient(0x7ff6bcf0), roundedCoefficient(0x030b0aa4)}},
  {{roundedCoefficient(0x7ff58125), roundedCoefficient(0x033d4abb)}},
  {{roundedCoefficient(0x7ff4319d), roundedCoefficient(0x036f8a51)}},
  {{roundedCoefficient(0x7ff2ce5b), roundedCoefficient(0x03a1c960)}},
  {{roundedCoefficient(0x7ff1575d), roundedCoefficient(0x03d407df)}},
  {{roundedCoefficient(0x7fefcca4), roundedCoefficient(0x040645c7)}},
  {{roundedCoefficient(0x7fee2e30), roundedCoefficient(0x04388310)}},
  {{roundedCoefficient(0x7fec7c02), roundedCoefficient(0x046abfb3)}},
  {{roundedCoefficient(0x7feab61a), roundedCoefficient(0x049cfba7)}},
  {{roundedCoefficient(0x7fe8dc78), roundedCoefficient(0x04cf36e5)}},
  {{roundedCoefficient(0x7fe6ef1c), roundedCoefficient(0x05017165)}},
  {{roundedCoefficient(0x7fe4ee06), roundedCoefficient(0x0533ab20)}},
  {{roundedCoefficient(0x7fe2d938), roundedCoefficient(0x0565e40d)}},
  {{roundedCoefficient(0x7fe0b0b1), roundedCoefficient(0x05981c26)}},
  {{roundedCoefficient(0x7fde7471), roundedCoefficient(0x05ca5361)}},
  {{roundedCoefficient(0x7fdc247a), roundedCoefficient(0x05fc89b8)}},
  {{roundedCoefficient(0x7fd9c0ca), roundedCoefficient(0x062ebf22)}},
  {{roundedCoefficient(0x7fd74964), roundedCoefficient(0x0660f398)}},
  {{roundedCoefficient(0x7fd4be46), roundedCoefficient(0x06932713)}},
  {{roundedCoefficient(0x7fd21f72), roundedCoefficient(0x06c5598a)}},
  {{roundedCoefficient(0x7fcf6ce8), roundedCoefficient(0x06f78af6)}},
  {{roundedCoefficient(0x7fcca6a7), roundedCoefficient(0x0729bb4e)}},
  {{roundedCoefficient(0x7fc9ccb2), roundedCoefficient(0x075bea8c)}},
  {{roundedCoefficient(0x7fc6df08), roundedCoefficient(0x078e18a7)}},
  {{roundedCoefficient(0x7fc3dda9), roundedCoefficient(0x07c04598)}},
  {{roundedCoefficient(0x7fc0c896), roundedCoefficient(0x07f27157)}},
  {{roundedCoefficient(0x7fbd9fd0), roundedCoefficient(0x08249bdd)}},
  {{roundedCoefficient(0x7fba6357), roundedCoefficient(0x0856c520)}},
  {{roundedCoefficient(0x7fb7132b), roundedCoefficient(0x0888ed1b)}},
  {{roundedCoefficient(0x7fb3af4e), roundedCoefficient(0x08bb13c5)}},
  {{roundedCoefficient(0x7fb037bf), roundedCoefficient(0x08ed3916)}},
  {{roundedCoefficient(0x7facac7f), roundedCoefficient(0x091f5d06)}},
  {{roundedCoefficient(0x7fa90d8e), roundedCoefficient(0x09517f8f)}},
  {{roundedCoefficient(0x7fa55aee), roundedCoefficient(0x0983a0a7)}},
  {{roundedCoefficient(0x7fa1949e), roundedCoefficient(0x09b5c048)}},
  {{roundedCoefficient(0x7f9dbaa0), roundedCoefficient(0x09e7de6a)}},
  {{roundedCoefficient(0x7f99ccf4), roundedCoefficient(0x0a19fb04)}},
  {{roundedCoefficient(0x7f95cb9a), roundedCoefficient(0x0a4c1610)}},
  {{roundedCoefficient(0x7f91b694), roundedCoefficient(0x0a7e2f85)}},
  {{roundedCoefficient(0x7f8d8de1), roundedCoefficient(0x0ab0475c)}},
  {{roundedCoefficient(0x7f895182), roundedCoefficient(0x0ae25d8d)}},
  {{roundedCoefficient(0x7f850179), roundedCoefficient(0x0b147211)}},
  {{roundedCoefficient(0x7f809dc5), roundedCoefficient(0x0b4684df)}},
  {{roundedCoefficient(0x7f7c2668), roundedCoefficient(0x0b7895f0)}},
  {{roundedCoefficient(0x7f779b62), roundedCoefficient(0x0baaa53b)}},
  {{roundedCoefficient(0x7f72fcb4), roundedCoefficient(0x0bdcb2bb)}},
  {{roundedCoefficient(0x7f6e4a5e), roundedCoefficient(0x0c0ebe66)}},
  {{roundedCoefficient(0x7f698461), roundedCoefficient(0x0c40c835)}},
  {{roundedCoefficient(0x7f64aabf), roundedCoefficient(0x0c72d020)}},
  {{roundedCoefficient(0x7f5fbd77), roundedCoefficient(0x0ca4d620)}},
  {{roundedCoefficient(0x7f5abc8a), roundedCoefficient(0x0cd6da2d)}},
  {{roundedCoefficient(0x7f55a7fa), roundedCoefficient(0x0d08dc3f)}},
  {{roundedCoefficient(0x7f507fc7), roundedCoefficient(0x0d3adc4e)}},
  {{roundedCoefficient(0x7f4b43f2), roundedCoefficient(0x0d6cda53)}},
  {{roundedCoefficient(0x7f45f47b), roundedCoefficient(0x0d9ed646)}},
  {{roundedCoefficient(0x7f409164), roundedCoefficient(0x0dd0d01f)}},
  {{roundedCoefficient(0x7f3b1aad), roundedCoefficient(0x0e02c7d7)}},
  {{roundedCoefficient(0x7f359057), roundedCoefficient(0x0e34bd66)}},
  {{roundedCoefficient(0x7f2ff263), roundedCoefficient(0x0e66b0c3)}},
  {{roundedCoefficient(0x7f2a40d2), roundedCoefficient(0x0e98a1e9)}},
  {{roundedCoefficient(0x7f247ba5), roundedCoefficient(0x0eca90ce)}},
  {{roundedCoefficient(0x7f1ea2dc), roundedCoefficient(0x0efc7d6b)}},
  {{roundedCoefficient(0x7f18b679), roundedCoefficient(0x0f2e67b8)}},
  {{roundedCoefficient(0x7f12b67c), roundedCoefficient(0x0f604faf)}},
  {{roundedCoefficient(0x7f0ca2e7), roundedCoefficient(0x0f923546)}},
  {{roundedCoefficient(0x7f067bba), roundedCoefficient(0x0fc41876)}},
  {{roundedCoefficient(0x7f0040f6), roundedCoefficient(0x0ff5f938)}},
  {{roundedCoefficient(0x7ef9f29d), roundedCoefficient(0x1027d784)}},
  {{roundedCoefficient(0x7ef390ae), roundedCoefficient(0x1059b352)}},
  {{roundedCoefficient(0x7eed1b2c), roundedCoefficient(0x108b8c9b)}},
  {{roundedCoefficient(0x7ee69217), roundedCoefficient(0x10bd6356)}},
  {{roundedCoefficient(0x7edff570), roundedCoefficient(0x10ef377d)}},
  {{roundedCoefficient(0x7ed94538), roundedCoefficient(0x11210907)}},
  {{roundedCoefficient(0x7ed28171), roundedCoefficient(0x1152d7ed)}},
  {{roundedCoefficient(0x7ecbaa1a), roundedCoefficient(0x1184a427)}},
  {{roundedCoefficient(0x7ec4bf36), roundedCoefficient(0x11b66dad)}},
  {{roundedCoefficient(0x7ebdc0c6), roundedCoefficient(0x11e83478)}},
  {{roundedCoefficient(0x7eb6aeca), roundedCoefficient(0x1219f880)}},
  {{roundedCoefficient(0x7eaf8943), roundedCoefficient(0x124bb9be)}},
  {{roundedCoefficient(0x7ea85033), roundedCoefficient(0x127d7829)}},
  {{roundedCoefficient(0x7ea1039b), roundedCoefficient(0x12af33ba)}},
  {{roundedCoefficient(0x7e99a37c), roundedCoefficient(0x12e0ec6a)}},
  {{roundedCoefficient(0x7e922fd6), roundedCoefficient(0x1312a230)}},
  {{roundedCoefficient(0x7e8aa8ac), roundedCoefficient(0x13445505)}},
  {{roundedCoefficient(0x7e830dff), roundedCoefficient(0x137604e2)}},
  {{roundedCoefficient(0x7e7b5fce), roundedCoefficient(0x13a7b1bf)}},
  {{roundedCoefficient(0x7e739e1d), roundedCoefficient(0x13d95b93)}},
  {{roundedCoefficient(0x7e6bc8eb), roundedCoefficient(0x140b0258)}},
  {{roundedCoefficient(0x7e63e03b), roundedCoefficient(0x143ca605)}},
  {{roundedCoefficient(0x7e5be40c), roundedCoefficient(0x146e4694)}},
  {{roundedCoefficient(0x7e53d462), roundedCoefficient(0x149fe3fc)}},
  {{roundedCoefficient(0x7e4bb13c), roundedCoefficient(0x14d17e36)}},
  {{roundedCoefficient(0x7e437a9c), roundedCoefficient(0x1503153a)}},
  {{roundedCoefficient(0x7e3b3083), roundedCoefficient(0x1534a901)}},
  {{roundedCoefficient(0x7e32d2f4), roundedCoefficient(0x15663982)}},
  {{roundedCoefficient(0x7e2a61ed), roundedCoefficient(0x1597c6b7)}},
  {{roundedCoefficient(0x7e21dd73), roundedCoefficient(0x15c95097)}},
  {{roundedCoefficient(0x7e194584), roundedCoefficient(0x15fad71b)}},
  {{roundedCoefficient(0x7e109a24), roundedCoefficient(0x162c5a3b)}},
  {{roundedCoefficient(0x7e07db52), roundedCoefficient(0x165dd9f0)}},
  {{roundedCoefficient(0x7dff0911), roundedCoefficient(0x168f5632)}},
  {{roundedCoefficient(0x7df62362), roundedCoefficient(0x16c0cef9)}},
  {{roundedCoefficient(0x7ded2a47), roundedCoefficient(0x16f2443e)}},
  {{roundedCoefficient(0x7de41dc0), roundedCoefficient(0x1723b5f9)}},
  {{roundedCoefficient(0x7ddafdce), roundedCoefficient(0x17552422)}},
  {{roundedCoefficient(0x7dd1ca75), roundedCoefficient(0x17868eb3)}},
  {{roundedCoefficient(0x7dc883b4), roundedCoefficient(0x17b7f5a3)}},
  {{roundedCoefficient(0x7dbf298d), roundedCoefficient(0x17e958ea)}},
  {{roundedCoefficient(0x7db5bc02), roundedCoefficient(0x181ab881)}},
  {{roundedCoefficient(0x7dac3b15), roundedCoefficient(0x184c1461)}},
  {{roundedCoefficient(0x7da2a6c6), roundedCoefficient(0x187d6c82)}},
  {{roundedCoefficient(0x7d98ff17), roundedCoefficient(0x18aec0db)}},
  {{roundedCoefficient(0x7d8f4409), roundedCoefficient(0x18e01167)}},
  {{roundedCoefficient(0x7d85759f), roundedCoefficient(0x19115e1c)}},
  {{roundedCoefficient(0x7d7b93da), roundedCoefficient(0x1942a6f3)}},
  {{roundedCoefficient(0x7d719eba), roundedCoefficient(0x1973ebe6)}},
  {{roundedCoefficient(0x7d679642), roundedCoefficient(0x19a52ceb)}},
  {{roundedCoefficient(0x7d5d7a74), roundedCoefficient(0x19d669fc)}},
  {{roundedCoefficient(0x7d534b50), roundedCoefficient(0x1a07a311)}},
  {{roundedCoefficient(0x7d4908d9), roundedCoefficient(0x1a38d823)}},
  {{roundedCoefficient(0x7d3eb30f), roundedCoefficient(0x1a6a0929)}},
  {{roundedCoefficient(0x7d3449f5), roundedCoefficient(0x1a9b361d)}},
  {{roundedCoefficient(0x7d29cd8c), roundedCoefficient(0x1acc5ef6)}},
  {{roundedCoefficient(0x7d1f3dd6), roundedCoefficient(0x1afd83ad)}},
  {{roundedCoefficient(0x7d149ad5), roundedCoefficient(0x1b2ea43a)}},
  {{roundedCoefficient(0x7d09e489), roundedCoefficient(0x1b5fc097)}},
  {{roundedCoefficient(0x7cff1af5), roundedCoefficient(0x1b90d8bb)}},
  {{roundedCoefficient(0x7cf43e1a), roundedCoefficient(0x1bc1ec9e)}},
  {{roundedCoefficient(0x7ce94dfb), roundedCoefficient(0x1bf2fc3a)}},
  {{roundedCoefficient(0x7cde4a98), roundedCoefficient(0x1c240786)}},
  {{roundedCoefficient(0x7cd333f3), roundedCoefficient(0x1c550e7c)}},
  {{roundedCoefficient(0x7cc80a0f), roundedCoefficient(0x1c861113)}},
  {{roundedCoefficient(0x7cbcccec), roundedCoefficient(0x1cb70f43)}},
  {{roundedCoefficient(0x7cb17c8d), roundedCoefficient(0x1ce80906)}},
  {{roundedCoefficient(0x7ca618f3), roundedCoefficient(0x1d18fe54)}},
  {{roundedCoefficient(0x7c9aa221), roundedCoefficient(0x1d49ef26)}},
  {{roundedCoefficient(0x7c8f1817), roundedCoefficient(0x1d7adb73)}},
  {{roundedCoefficient(0x7c837ad8), roundedCoefficient(0x1dabc334)}},
  {{roundedCoefficient(0x7c77ca65), roundedCoefficient(0x1ddca662)}},
  {{roundedCoefficient(0x7c6c06c0), roundedCoefficient(0x1e0d84f5)}},
  {{roundedCoefficient(0x7c602fec), roundedCoefficient(0x1e3e5ee5)}},
  {{roundedCoefficient(0x7c5445e9), roundedCoefficient(0x1e6f342c)}},
  {{roundedCoefficient(0x7c4848ba), roundedCoefficient(0x1ea004c1)}},
  {{roundedCoefficient(0x7c3c3860), roundedCoefficient(0x1ed0d09d)}},
  {{roundedCoefficient(0x7c3014de), roundedCoefficient(0x1f0197b8)}},
  {{roundedCoefficient(0x7c23de35), roundedCoefficient(0x1f325a0b)}},
  {{roundedCoefficient(0x7c179467), roundedCoefficient(0x1f63178f)}},
  {{roundedCoefficient(0x7c0b3777), roundedCoefficient(0x1f93d03c)}},
  {{roundedCoefficient(0x7bfec765), roundedCoefficient(0x1fc4840a)}},
  {{roundedCoefficient(0x7bf24434), roundedCoefficient(0x1ff532f2)}},
  {{roundedCoefficient(0x7be5ade6), roundedCoefficient(0x2025dcec)}},
  {{roundedCoefficient(0x7bd9047c), roundedCoefficient(0x205681f1)}},
  {{roundedCoefficient(0x7bcc47fa), roundedCoefficient(0x208721f9)}},
  {{roundedCoefficient(0x7bbf7860), roundedCoefficient(0x20b7bcfe)}},
  {{roundedCoefficient(0x7bb295b0), roundedCoefficient(0x20e852f6)}},
  {{roundedCoefficient(0x7ba59fee), roundedCoefficient(0x2118e3dc)}},
  {{roundedCoefficient(0x7b989719), roundedCoefficient(0x21496fa7)}},
  {{roundedCoefficient(0x7b8b7b36), roundedCoefficient(0x2179f64f)}},
  {{roundedCoefficient(0x7b7e4c45), roundedCoefficient(0x21aa77cf)}},
  {{roundedCoefficient(0x7b710a49), roundedCoefficient(0x21daf41d)}},
  {{roundedCoefficient(0x7b63b543), roundedCoefficient(0x220b6b32)}},
  {{roundedCoefficient(0x7b564d36), roundedCoefficient(0x223bdd08)}},
  {{roundedCoefficient(0x7b48d225), roundedCoefficient(0x226c4996)}},
  {{roundedCoefficient(0x7b3b4410), roundedCoefficient(0x229cb0d5)}},
  {{roundedCoefficient(0x7b2da2fa), roundedCoefficient(0x22cd12bd)}},
  {{roundedCoefficient(0x7b1feee5), roundedCoefficient(0x22fd6f48)}},
  {{roundedCoefficient(0x7b1227d3), roundedCoefficient(0x232dc66d)}},
  {{roundedCoefficient(0x7b044dc7), roundedCoefficient(0x235e1826)}},
  {{roundedCoefficient(0x7af660c2), roundedCoefficient(0x238e646a)}},
  {{roundedCoefficient(0x7ae860c7), roundedCoefficient(0x23beab33)}},
  {{roundedCoefficient(0x7ada4dd8), roundedCoefficient(0x23eeec78)}},
  {{roundedCoefficient(0x7acc27f7), roundedCoefficient(0x241f2833)}},
  {{roundedCoefficient(0x7abdef25), roundedCoefficient(0x244f5e5c)}},
  {{roundedCoefficient(0x7aafa367), roundedCoefficient(0x247f8eec)}},
  {{roundedCoefficient(0x7aa144bc), roundedCoefficient(0x24afb9da)}},
  {{roundedCoefficient(0x7a92d329), roundedCoefficient(0x24dfdf20)}},
  {{roundedCoefficient(0x7a844eae), roundedCoefficient(0x250ffeb7)}},
  {{roundedCoefficient(0x7a75b74f), roundedCoefficient(0x25401896)}},
  {{roundedCoefficient(0x7a670d0d), roundedCoefficient(0x25702cb7)}},
  {{roundedCoefficient(0x7a584feb), roundedCoefficient(0x25a03b11)}},
  {{roundedCoefficient(0x7a497feb), roundedCoefficient(0x25d0439f)}},
  {{roundedCoefficient(0x7a3a9d0f), roundedCoefficient(0x26004657)}},
  {{roundedCoefficient(0x7a2ba75a), roundedCoefficient(0x26304333)}},
  {{roundedCoefficient(0x7a1c9ece), roundedCoefficient(0x26603a2c)}},
  {{roundedCoefficient(0x7a0d836d), roundedCoefficient(0x26902b39)}},
  {{roundedCoefficient(0x79fe5539), roundedCoefficient(0x26c01655)}},
  {{roundedCoefficient(0x79ef1436), roundedCoefficient(0x26effb76)}},
  {{roundedCoefficient(0x79dfc064), roundedCoefficient(0x271fda96)}},
  {{roundedCoefficient(0x79d059c8), roundedCoefficient(0x274fb3ae)}},
  {{roundedCoefficient(0x79c0e062), roundedCoefficient(0x277f86b5)}},
  {{roundedCoefficient(0x79b15435), roundedCoefficient(0x27af53a6)}},
  {{roundedCoefficient(0x79a1b545), roundedCoefficient(0x27df1a77)}},
  {{roundedCoefficient(0x79920392), roundedCoefficient(0x280edb23)}},
  {{roundedCoefficient(0x79823f20), roundedCoefficient(0x283e95a1)}},
  {{roundedCoefficient(0x797267f2), roundedCoefficient(0x286e49ea)}},
  {{roundedCoefficient(0x79627e08), roundedCoefficient(0x289df7f8)}},
  {{roundedCoefficient(0x79528167), roundedCoefficient(0x28cd9fc1)}},
  {{roundedCoefficient(0x79427210), roundedCoefficient(0x28fd4140)}},
  {{roundedCoefficient(0x79325006), roundedCoefficient(0x292cdc6d)}},
  {{roundedCoefficient(0x79221b4b), roundedCoefficient(0x295c7140)}},
  {{roundedCoefficient(0x7911d3e2), roundedCoefficient(0x298bffb2)}},
  {{roundedCoefficient(0x790179cd), roundedCoefficient(0x29bb87bc)}},
  {{roundedCoefficient(0x78f10d0f), roundedCoefficient(0x29eb0957)}},
  {{roundedCoefficient(0x78e08dab), roundedCoefficient(0x2a1a847b)}},
  {{roundedCoefficient(0x78cffba3), roundedCoefficient(0x2a49f920)}},
  {{roundedCoefficient(0x78bf56f9), roundedCoefficient(0x2a796740)}},
  {{roundedCoefficient(0x78ae9fb0), roundedCoefficient(0x2aa8ced3)}},
  {{roundedCoefficient(0x789dd5cb), roundedCoefficient(0x2ad82fd2)}},
  {{roundedCoefficient(0x788cf94c), roundedCoefficient(0x2b078a36)}},
  {{roundedCoefficient(0x787c0a36), roundedCoefficient(0x2b36ddf7)}},
  {{roundedCoefficient(0x786b088c), roundedCoefficient(0x2b662b0e)}},
  {{roundedCoefficient(0x7859f44f), roundedCoefficient(0x2b957173)}},
  {{roundedCoefficient(0x7848cd83), roundedCoefficient(0x2bc4b120)}},
  {{roundedCoefficient(0x7837942b), roundedCoefficient(0x2bf3ea0d)}},
  {{roundedCoefficient(0x78264849), roundedCoefficient(0x2c231c33)}},
  {{roundedCoefficient(0x7814e9df), roundedCoefficient(0x2c52478a)}},
  {{roundedCoefficient(0x780378f1), roundedCoefficient(0x2c816c0c)}},
  {{roundedCoefficient(0x77f1f581), roundedCoefficient(0x2cb089b1)}},
  {{roundedCoefficient(0x77e05f91), roundedCoefficient(0x2cdfa071)}},
  {{roundedCoefficient(0x77ceb725), roundedCoefficient(0x2d0eb046)}},
  {{roundedCoefficient(0x77bcfc3f), roundedCoefficient(0x2d3db928)}},
  {{roundedCoefficient(0x77ab2ee2), roundedCoefficient(0x2d6cbb10)}},
  {{roundedCoefficient(0x77994f11), roundedCoefficient(0x2d9bb5f6)}},
  {{roundedCoefficient(0x77875cce), roundedCoefficient(0x2dcaa9d5)}},
  {{roundedCoefficient(0x7775581d), roundedCoefficient(0x2df996a3)}},
  {{roundedCoefficient(0x776340ff), roundedCoefficient(0x2e287c5a)}},
  {{roundedCoefficient(0x77511778), roundedCoefficient(0x2e575af3)}},
  {{roundedCoefficient(0x773edb8b), roundedCoefficient(0x2e863267)}},
  {{roundedCoefficient(0x772c8d3a), roundedCoefficient(0x2eb502ae)}},
  {{roundedCoefficient(0x771a2c88), roundedCoefficient(0x2ee3cbc1)}},
  {{roundedCoefficient(0x7707b979), roundedCoefficient(0x2f128d99)}},
  {{roundedCoefficient(0x76f5340e), roundedCoefficient(0x2f41482e)}},
  {{roundedCoefficient(0x76e29c4b), roundedCoefficient(0x2f6ffb7a)}},
  {{roundedCoefficient(0x76cff232), roundedCoefficient(0x2f9ea775)}},
  {{roundedCoefficient(0x76bd35c7), roundedCoefficient(0x2fcd4c19)}},
  {{roundedCoefficient(0x76aa670d), roundedCoefficient(0x2ffbe95d)}},
  {{roundedCoefficient(0x76978605), roundedCoefficient(0x302a7f3a)}},
  {{roundedCoefficient(0x768492b4), roundedCoefficient(0x30590dab)}},
  {{roundedCoefficient(0x76718d1c), roundedCoefficient(0x308794a6)}},
  {{roundedCoefficient(0x765e7540), roundedCoefficient(0x30b61426)}},
  {{roundedCoefficient(0x764b4b23), roundedCoefficient(0x30e48c22)}},
  {{roundedCoefficient(0x76380ec8), roundedCoefficient(0x3112fc95)}},
  {{roundedCoefficient(0x7624c031), roundedCoefficient(0x31416576)}},
  {{roundedCoefficient(0x76115f63), roundedCoefficient(0x316fc6be)}},
  {{roundedCoefficient(0x75fdec60), roundedCoefficient(0x319e2067)}},
  {{roundedCoefficient(0x75ea672a), roundedCoefficient(0x31cc7269)}},
  {{roundedCoefficient(0x75d6cfc5), roundedCoefficient(0x31fabcbd)}},
  {{roundedCoefficient(0x75c32634), roundedCoefficient(0x3228ff5c)}},
  {{roundedCoefficient(0x75af6a7b), roundedCoefficient(0x32573a3f)}},
  {{roundedCoefficient(0x759b9c9b), roundedCoefficient(0x32856d5e)}},
  {{roundedCoefficient(0x7587bc98), roundedCoefficient(0x32b398b3)}},
  {{roundedCoefficient(0x7573ca75), roundedCoefficient(0x32e1bc36)}},
  {{roundedCoefficient(0x755fc635), roundedCoefficient(0x330fd7e1)}},
  {{roundedCoefficient(0x754bafdc), roundedCoefficient(0x333debab)}},
  {{roundedCoefficient(0x7537876c), roundedCoefficient(0x336bf78f)}},
  {{roundedCoefficient(0x75234ce8), roundedCoefficient(0x3399fb85)}},
  {{roundedCoefficient(0x750f0054), roundedCoefficient(0x33c7f785)}},
  {{roundedCoefficient(0x74faa1b3), roundedCoefficient(0x33f5eb89)}},
  {{roundedCoefficient(0x74e63108), roundedCoefficient(0x3423d78a)}},
  {{roundedCoefficient(0x74d1ae55), roundedCoefficient(0x3451bb81)}},
  {{roundedCoefficient(0x74bd199f), roundedCoefficient(0x347f9766)}},
  {{roundedCoefficient(0x74a872e8), roundedCoefficient(0x34ad6b32)}},
  {{roundedCoefficient(0x7493ba34), roundedCoefficient(0x34db36df)}},
  {{roundedCoefficient(0x747eef85), roundedCoefficient(0x3508fa66)}},
  {{roundedCoefficient(0x746a12df), roundedCoefficient(0x3536b5be)}},
  {{roundedCoefficient(0x74552446), roundedCoefficient(0x356468e2)}},
  {{roundedCoefficient(0x744023bc), roundedCoefficient(0x359213c9)}},
  {{roundedCoefficient(0x742b1144), roundedCoefficient(0x35bfb66e)}},
  {{roundedCoefficient(0x7415ece2), roundedCoefficient(0x35ed50c9)}},
  {{roundedCoefficient(0x7400b69a), roundedCoefficient(0x361ae2d3)}},
  {{roundedCoefficient(0x73eb6e6e), roundedCoefficient(0x36486c86)}},
  {{roundedCoefficient(0x73d61461), roundedCoefficient(0x3675edd9)}},
  {{roundedCoefficient(0x73c0a878), roundedCoefficient(0x36a366c6)}},
  {{roundedCoefficient(0x73ab2ab4), roundedCoefficient(0x36d0d746)}},
  {{roundedCoefficient(0x73959b1b), roundedCoefficient(0x36fe3f52)}},
  {{roundedCoefficient(0x737ff9ae), roundedCoefficient(0x372b9ee3)}},
  {{roundedCoefficient(0x736a4671), roundedCoefficient(0x3758f5f2)}},
  {{roundedCoefficient(0x73548168), roundedCoefficient(0x37864477)}},
  {{roundedCoefficient(0x733eaa96), roundedCoefficient(0x37b38a6d)}},
  {{roundedCoefficient(0x7328c1ff), roundedCoefficient(0x37e0c7cc)}},
  {{roundedCoefficient(0x7312c7a5), roundedCoefficient(0x380dfc8d)}},
  {{roundedCoefficient(0x72fcbb8c), roundedCoefficient(0x383b28a9)}},
  {{roundedCoefficient(0x72e69db7), roundedCoefficient(0x38684c19)}},
  {{roundedCoefficient(0x72d06e2b), roundedCoefficient(0x389566d6)}},
  {{roundedCoefficient(0x72ba2cea), roundedCoefficient(0x38c278d9)}},
  {{roundedCoefficient(0x72a3d9f7), roundedCoefficient(0x38ef821c)}},
  {{roundedCoefficient(0x728d7557), roundedCoefficient(0x391c8297)}},
  {{roundedCoefficient(0x7276ff0d), roundedCoefficient(0x39497a43)}},
  {{roundedCoefficient(0x7260771b), roundedCoefficient(0x39766919)}},
  {{roundedCoefficient(0x7249dd86), roundedCoefficient(0x39a34f13)}},
  {{roundedCoefficient(0x72333251), roundedCoefficient(0x39d02c2a)}},
  {{roundedCoefficient(0x721c7580), roundedCoefficient(0x39fd0056)}},
  {{roundedCoefficient(0x7205a716), roundedCoefficient(0x3a29cb91)}},
  {{roundedCoefficient(0x71eec716), roundedCoefficient(0x3a568dd4)}},
  {{roundedCoefficient(0x71d7d585), roundedCoefficient(0x3a834717)}},
  {{roundedCoefficient(0x71c0d265), roundedCoefficient(0x3aaff755)}},
  {{roundedCoefficient(0x71a9bdba), roundedCoefficient(0x3adc9e86)}},
  {{roundedCoefficient(0x71929789), roundedCoefficient(0x3b093ca3)}},
  {{roundedCoefficient(0x717b5fd3), roundedCoefficient(0x3b35d1a5)}},
  {{roundedCoefficient(0x7164169d), roundedCoefficient(0x3b625d86)}},
  {{roundedCoefficient(0x714cbbeb), roundedCoefficient(0x3b8ee03e)}},
  {{roundedCoefficient(0x71354fc0), roundedCoefficient(0x3bbb59c7)}},
  {{roundedCoefficient(0x711dd220), roundedCoefficient(0x3be7ca1a)}},
  {{roundedCoefficient(0x7106430e), roundedCoefficient(0x3c143130)}},
  {{roundedCoefficient(0x70eea28e), roundedCoefficient(0x3c408f03)}},
  {{roundedCoefficient(0x70d6f0a4), roundedCoefficient(0x3c6ce38a)}},
  {{roundedCoefficient(0x70bf2d53), roundedCoefficient(0x3c992ec0)}},
  {{roundedCoefficient(0x70a7589f), roundedCoefficient(0x3cc5709e)}},
  {{roundedCoefficient(0x708f728b), roundedCoefficient(0x3cf1a91c)}},
  {{roundedCoefficient(0x70777b1c), roundedCoefficient(0x3d1dd835)}},
  {{roundedCoefficient(0x705f7255), roundedCoefficient(0x3d49fde1)}},
  {{roundedCoefficient(0x70475839), roundedCoefficient(0x3d761a19)}},
  {{roundedCoefficient(0x702f2ccd), roundedCoefficient(0x3da22cd7)}},
  {{roundedCoefficient(0x7016f014), roundedCoefficient(0x3dce3614)}},
  {{roundedCoefficient(0x6ffea212), roundedCoefficient(0x3dfa35c8)}},
  {{roundedCoefficient(0x6fe642ca), roundedCoefficient(0x3e262bee)}},
  {{roundedCoefficient(0x6fcdd241), roundedCoefficient(0x3e52187f)}},
  {{roundedCoefficient(0x6fb5507a), roundedCoefficient(0x3e7dfb73)}},
  {{roundedCoefficient(0x6f9cbd79), roundedCoefficient(0x3ea9d4c3)}},
  {{roundedCoefficient(0x6f841942), roundedCoefficient(0x3ed5a46b)}},
  {{roundedCoefficient(0x6f6b63d8), roundedCoefficient(0x3f016a61)}},
  {{roundedCoefficient(0x6f529d40), roundedCoefficient(0x3f2d26a0)}},
  {{roundedCoefficient(0x6f39c57d), roundedCoefficient(0x3f58d921)}},
  {{roundedCoefficient(0x6f20dc92), roundedCoefficient(0x3f8481dd)}},
  {{roundedCoefficient(0x6f07e285), roundedCoefficient(0x3fb020ce)}},
  {{roundedCoefficient(0x6eeed758), roundedCoefficient(0x3fdbb5ec)}},
  {{roundedCoefficient(0x6ed5bb10), roundedCoefficient(0x40074132)}},
  {{roundedCoefficient(0x6ebc8db0), roundedCoefficient(0x4032c297)}},
  {{roundedCoefficient(0x6ea34f3d), roundedCoefficient(0x405e3a16)}},
  {{roundedCoefficient(0x6e89ffb9), roundedCoefficient(0x4089a7a8)}},
  {{roundedCoefficient(0x6e709f2a), roundedCoefficient(0x40b50b46)}},
  {{roundedCoefficient(0x6e572d93), roundedCoefficient(0x40e064ea)}},
  {{roundedCoefficient(0x6e3daaf8), roundedCoefficient(0x410bb48c)}},
  {{roundedCoefficient(0x6e24175c), roundedCoefficient(0x4136fa27)}},
  {{roundedCoefficient(0x6e0a72c5), roundedCoefficient(0x416235b2)}},
  {{roundedCoefficient(0x6df0bd35), roundedCoefficient(0x418d6729)}},
  {{roundedCoefficient(0x6dd6f6b1), roundedCoefficient(0x41b88e84)}},
  {{roundedCoefficient(0x6dbd1f3c), roundedCoefficient(0x41e3abbc)}},
  {{roundedCoefficient(0x6da336dc), roundedCoefficient(0x420ebecb)}},
  {{roundedCoefficient(0x6d893d93), roundedCoefficient(0x4239c7aa)}},
  {{roundedCoefficient(0x6d6f3365), roundedCoefficient(0x4264c653)}},
  {{roundedCoefficient(0x6d551858), roundedCoefficient(0x428fbabe)}},
  {{roundedCoefficient(0x6d3aec6e), roundedCoefficient(0x42baa4e6)}},
  {{roundedCoefficient(0x6d20afac), roundedCoefficient(0x42e584c3)}},
  {{roundedCoefficient(0x6d066215), roundedCoefficient(0x43105a50)}},
  {{roundedCoefficient(0x6cec03af), roundedCoefficient(0x433b2585)}},
  {{roundedCoefficient(0x6cd1947c), roundedCoefficient(0x4365e65b)}},
  {{roundedCoefficient(0x6cb71482), roundedCoefficient(0x43909ccd)}},
  {{roundedCoefficient(0x6c9c83c3), roundedCoefficient(0x43bb48d4)}},
  {{roundedCoefficient(0x6c81e245), roundedCoefficient(0x43e5ea68)}},
  {{roundedCoefficient(0x6c67300b), roundedCoefficient(0x44108184)}},
  {{roundedCoefficient(0x6c4c6d1a), roundedCoefficient(0x443b0e21)}},
  {{roundedCoefficient(0x6c319975), roundedCoefficient(0x44659039)}},
  {{roundedCoefficient(0x6c16b521), roundedCoefficient(0x449007c4)}},
  {{roundedCoefficient(0x6bfbc021), roundedCoefficient(0x44ba74bd)}},
  {{roundedCoefficient(0x6be0ba7b), roundedCoefficient(0x44e4d71c)}},
  {{roundedCoefficient(0x6bc5a431), roundedCoefficient(0x450f2edb)}},
  {{roundedCoefficient(0x6baa7d49), roundedCoefficient(0x45397bf4)}},
  {{roundedCoefficient(0x6b8f45c7), roundedCoefficient(0x4563be60)}},
  {{roundedCoefficient(0x6b73fdae), roundedCoefficient(0x458df619)}},
  {{roundedCoefficient(0x6b58a503), roundedCoefficient(0x45b82318)}},
  {{roundedCoefficient(0x6b3d3bcb), roundedCoefficient(0x45e24556)}},
  {{roundedCoefficient(0x6b21c208), roundedCoefficient(0x460c5cce)}},
  {{roundedCoefficient(0x6b0637c1), roundedCoefficient(0x46366978)}},
  {{roundedCoefficient(0x6aea9cf8), roundedCoefficient(0x46606b4e)}},
  {{roundedCoefficient(0x6acef1b2), roundedCoefficient(0x468a624a)}},
  {{roundedCoefficient(0x6ab335f4), roundedCoefficient(0x46b44e65)}},
  {{roundedCoefficient(0x6a9769c1), roundedCoefficient(0x46de2f99)}},
  {{roundedCoefficient(0x6a7b8d1e), roundedCoefficient(0x470805df)}},
  {{roundedCoefficient(0x6a5fa010), roundedCoefficient(0x4731d131)}},
  {{roundedCoefficient(0x6a43a29a), roundedCoefficient(0x475b9188)}},
  {{roundedCoefficient(0x6a2794c1), roundedCoefficient(0x478546de)}},
  {{roundedCoefficient(0x6a0b7689), roundedCoefficient(0x47aef12c)}},
  {{roundedCoefficient(0x69ef47f6), roundedCoefficient(0x47d8906d)}},
  {{roundedCoefficient(0x69d3090e), roundedCoefficient(0x48022499)}},
  {{roundedCoefficient(0x69b6b9d3), roundedCoefficient(0x482badab)}},
  {{roundedCoefficient(0x699a5a4c), roundedCoefficient(0x48552b9b)}},
  {{roundedCoefficient(0x697dea7b), roundedCoefficient(0x487e9e64)}},
  {{roundedCoefficient(0x69616a65), roundedCoefficient(0x48a805ff)}},
  {{roundedCoefficient(0x6944da10), roundedCoefficient(0x48d16265)}},
  {{roundedCoefficient(0x6928397e), roundedCoefficient(0x48fab391)}},
  {{roundedCoefficient(0x690b88b5), roundedCoefficient(0x4923f97b)}},
  {{roundedCoefficient(0x68eec7b9), roundedCoefficient(0x494d341e)}},
  {{roundedCoefficient(0x68d1f68f), roundedCoefficient(0x49766373)}},
  {{roundedCoefficient(0x68b5153a), roundedCoefficient(0x499f8774)}},
  {{roundedCoefficient(0x689823bf), roundedCoefficient(0x49c8a01b)}},
  {{roundedCoefficient(0x687b2224), roundedCoefficient(0x49f1ad61)}},
  {{roundedCoefficient(0x685e106c), roundedCoefficient(0x4a1aaf3f)}},
  {{roundedCoefficient(0x6840ee9b), roundedCoefficient(0x4a43a5b0)}},
  {{roundedCoefficient(0x6823bcb7), roundedCoefficient(0x4a6c90ad)}},
  {{roundedCoefficient(0x68067ac3), roundedCoefficient(0x4a957030)}},
  {{roundedCoefficient(0x67e928c5), roundedCoefficient(0x4abe4433)}},
  {{roundedCoefficient(0x67cbc6c0), roundedCoefficient(0x4ae70caf)}},
  {{roundedCoefficient(0x67ae54ba), roundedCoefficient(0x4b0fc99d)}},
  {{roundedCoefficient(0x6790d2b6), roundedCoefficient(0x4b387af9)}},
  {{roundedCoefficient(0x677340ba), roundedCoefficient(0x4b6120bb)}},
  {{roundedCoefficient(0x67559eca), roundedCoefficient(0x4b89badd)}},
  {{roundedCoefficient(0x6737ecea), roundedCoefficient(0x4bb24958)}},
  {{roundedCoefficient(0x671a2b20), roundedCoefficient(0x4bdacc28)}},
  {{roundedCoefficient(0x66fc596f), roundedCoefficient(0x4c034345)}},
  {{roundedCoefficient(0x66de77dc), roundedCoefficient(0x4c2baea9)}},
  {{roundedCoefficient(0x66c0866d), roundedCoefficient(0x4c540e4e)}},
  {{roundedCoefficient(0x66a28524), roundedCoefficient(0x4c7c622d)}},
  {{roundedCoefficient(0x66847408), roundedCoefficient(0x4ca4aa41)}},
  {{roundedCoefficient(0x6666531d), roundedCoefficient(0x4ccce684)}},
  {{roundedCoefficient(0x66482267), roundedCoefficient(0x4cf516ee)}},
  {{roundedCoefficient(0x6629e1ec), roundedCoefficient(0x4d1d3b7a)}},
  {{roundedCoefficient(0x660b91af), roundedCoefficient(0x4d455422)}},
  {{roundedCoefficient(0x65ed31b5), roundedCoefficient(0x4d6d60df)}},
  {{roundedCoefficient(0x65cec204), roundedCoefficient(0x4d9561ac)}},
  {{roundedCoefficient(0x65b0429f), roundedCoefficient(0x4dbd5682)}},
  {{roundedCoefficient(0x6591b38c), roundedCoefficient(0x4de53f5a)}},
  {{roundedCoefficient(0x657314cf), roundedCoefficient(0x4e0d1c30)}},
  {{roundedCoefficient(0x6554666d), roundedCoefficient(0x4e34ecfc)}},
  {{roundedCoefficient(0x6535a86b), roundedCoefficient(0x4e5cb1b9)}},
  {{roundedCoefficient(0x6516dacd), roundedCoefficient(0x4e846a60)}},
  {{roundedCoefficient(0x64f7fd98), roundedCoefficient(0x4eac16eb)}},
  {{roundedCoefficient(0x64d910d1), roundedCoefficient(0x4ed3b755)}},
  {{roundedCoefficient(0x64ba147d), roundedCoefficient(0x4efb4b96)}},
  {{roundedCoefficient(0x649b08a0), roundedCoefficient(0x4f22d3aa)}},
  {{roundedCoefficient(0x647bed3f), roundedCoefficient(0x4f4a4f89)}},
  {{roundedCoefficient(0x645cc260), roundedCoefficient(0x4f71bf2e)}},
  {{roundedCoefficient(0x643d8806), roundedCoefficient(0x4f992293)}},
  {{roundedCoefficient(0x641e3e38), roundedCoefficient(0x4fc079b1)}},
  {{roundedCoefficient(0x63fee4f8), roundedCoefficient(0x4fe7c483)}},
  {{roundedCoefficient(0x63df7c4d), roundedCoefficient(0x500f0302)}},
  {{roundedCoefficient(0x63c0043b), roundedCoefficient(0x50363529)}},
  {{roundedCoefficient(0x63a07cc7), roundedCoefficient(0x505d5af1)}},
  {{roundedCoefficient(0x6380e5f6), roundedCoefficient(0x50847454)}},
  {{roundedCoefficient(0x63613fcd), roundedCoefficient(0x50ab814d)}},
  {{roundedCoefficient(0x63418a50), roundedCoefficient(0x50d281d5)}},
  {{roundedCoefficient(0x6321c585), roundedCoefficient(0x50f975e6)}},
  {{roundedCoefficient(0x6301f171), roundedCoefficient(0x51205d7b)}},
  {{roundedCoefficient(0x62e20e17), roundedCoefficient(0x5147388c)}},
  {{roundedCoefficient(0x62c21b7e), roundedCoefficient(0x516e0715)}},
  {{roundedCoefficient(0x62a219aa), roundedCoefficient(0x5194c910)}},
  {{roundedCoefficient(0x628208a1), roundedCoefficient(0x51bb7e75)}},
  {{roundedCoefficient(0x6261e866), roundedCoefficient(0x51e22740)}},
  {{roundedCoefficient(0x6241b8ff), roundedCoefficient(0x5208c36a)}},
  {{roundedCoefficient(0x62217a72), roundedCoefficient(0x522f52ee)}},
  {{roundedCoefficient(0x62012cc2), roundedCoefficient(0x5255d5c5)}},
  {{roundedCoefficient(0x61e0cff5), roundedCoefficient(0x527c4bea)}},
  {{roundedCoefficient(0x61c06410), roundedCoefficient(0x52a2b556)}},
  {{roundedCoefficient(0x619fe918), roundedCoefficient(0x52c91204)}},
  {{roundedCoefficient(0x617f5f12), roundedCoefficient(0x52ef61ee)}},
  {{roundedCoefficient(0x615ec603), roundedCoefficient(0x5315a50e)}},
  {{roundedCoefficient(0x613e1df0), roundedCoefficient(0x533bdb5d)}},
  {{roundedCoefficient(0x611d66de), roundedCoefficient(0x536204d7)}},
  {{roundedCoefficient(0x60fca0d2), roundedCoefficient(0x53882175)}},
  {{roundedCoefficient(0x60dbcbd1), roundedCoefficient(0x53ae3131)}},
  {{roundedCoefficient(0x60bae7e1), roundedCoefficient(0x53d43406)}},
  {{roundedCoefficient(0x6099f505), roundedCoefficient(0x53fa29ed)}},
  {{roundedCoefficient(0x6078f344), roundedCoefficient(0x542012e1)}},
  {{roundedCoefficient(0x6057e2a2), roundedCoefficient(0x5445eedb)}},
  {{roundedCoefficient(0x6036c325), roundedCoefficient(0x546bbdd7)}},
  {{roundedCoefficient(0x601594d1), roundedCoefficient(0x54917fce)}},
  {{roundedCoefficient(0x5ff457ad), roundedCoefficient(0x54b734ba)}},
  {{roundedCoefficient(0x5fd30bbc), roundedCoefficient(0x54dcdc96)}},
  {{roundedCoefficient(0x5fb1b104), roundedCoefficient(0x5502775c)}},
  {{roundedCoefficient(0x5f90478a), roundedCoefficient(0x55280505)}},
  {{roundedCoefficient(0x5f6ecf53), roundedCoefficient(0x554d858d)}},
  {{roundedCoefficient(0x5f4d4865), roundedCoefficient(0x5572f8ed)}},
  {{roundedCoefficient(0x5f2bb2c5), roundedCoefficient(0x55985f20)}},
  {{roundedCoefficient(0x5f0a0e77), roundedCoefficient(0x55bdb81f)}},
  {{roundedCoefficient(0x5ee85b82), roundedCoefficient(0x55e303e6)}},
  {{roundedCoefficient(0x5ec699e9), roundedCoefficient(0x5608426e)}},
  {{roundedCoefficient(0x5ea4c9b3), roundedCoefficient(0x562d73b2)}},
  {{roundedCoefficient(0x5e82eae5), roundedCoefficient(0x565297ab)}},
  {{roundedCoefficient(0x5e60fd84), roundedCoefficient(0x5677ae54)}},
  {{roundedCoefficient(0x5e3f0194), roundedCoefficient(0x569cb7a8)}},
  {{roundedCoefficient(0x5e1cf71c), roundedCoefficient(0x56c1b3a1)}},
  {{roundedCoefficient(0x5dfade20), roundedCoefficient(0x56e6a239)}},
  {{roundedCoefficient(0x5dd8b6a7), roundedCoefficient(0x570b8369)}},
  {{roundedCoefficient(0x5db680b4), roundedCoefficient(0x5730572e)}},
  {{roundedCoefficient(0x5d943c4e), roundedCoefficient(0x57551d80)}},
  {{roundedCoefficient(0x5d71e979), roundedCoefficient(0x5779d65b)}},
  {{roundedCoefficient(0x5d4f883b), roundedCoefficient(0x579e81b8)}},
  {{roundedCoefficient(0x5d2d189a), roundedCoefficient(0x57c31f92)}},
  {{roundedCoefficient(0x5d0a9a9a), roundedCoefficient(0x57e7afe4)}},
  {{roundedCoefficient(0x5ce80e41), roundedCoefficient(0x580c32a7)}},
  {{roundedCoefficient(0x5cc57394), roundedCoefficient(0x5830a7d6)}},
  {{roundedCoefficient(0x5ca2ca99), roundedCoefficient(0x58550f6c)}},
  {{roundedCoefficient(0x5c801354), roundedCoefficient(0x58796962)}},
  {{roundedCoefficient(0x5c5d4dcc), roundedCoefficient(0x589db5b3)}},
  {{roundedCoefficient(0x5c3a7a05), roundedCoefficient(0x58c1f45b)}},
  {{roundedCoefficient(0x5c179806), roundedCoefficient(0x58e62552)}},
  {{roundedCoefficient(0x5bf4a7d2), roundedCoefficient(0x590a4893)}},
  {{roundedCoefficient(0x5bd1a971), roundedCoefficient(0x592e5e19)}},
  {{roundedCoefficient(0x5bae9ce7), roundedCoefficient(0x595265df)}},
  {{roundedCoefficient(0x5b8b8239), roundedCoefficient(0x59765fde)}},
  {{roundedCoefficient(0x5b68596d), roundedCoefficient(0x599a4c12)}},
  {{roundedCoefficient(0x5b452288), roundedCoefficient(0x59be2a74)}},
  {{roundedCoefficient(0x5b21dd90), roundedCoefficient(0x59e1faff)}},
  {{roundedCoefficient(0x5afe8a8b), roundedCoefficient(0x5a05bdae)}},
  {{roundedCoefficient(0x5adb297d), roundedCoefficient(0x5a29727b)}},
  {{roundedCoefficient(0x5ab7ba6c), roundedCoefficient(0x5a4d1960)}},
  {{roundedCoefficient(0x5a943d5e), roundedCoefficient(0x5a70b258)}},
};
static const FIXP_WTP* const sineWindows[2][9] = {
  {nullptr, nullptr, nullptr, SineWindow32, SineWindow64, SineWindow128,
   nullptr, SineWindow512, SineWindow1024},
  {nullptr, nullptr, nullptr, nullptr, nullptr, SineWindow120, nullptr,
   SineWindow480, SineWindow960}};
inline void cplxMultDiv2(FIXP_DBL* c_Re, FIXP_DBL* c_Im, const FIXP_DBL a_Re,
                         const FIXP_DBL a_Im, const FIXP_SGL b_Re,
                         const FIXP_SGL b_Im) {
  *c_Re = fMultDiv2(a_Re, b_Re) - fMultDiv2(a_Im, b_Im);
  *c_Im = fMultDiv2(a_Re, b_Im) + fMultDiv2(a_Im, b_Re);
}

inline void cplxMultDiv2(FIXP_DBL* c_Re, FIXP_DBL* c_Im, const FIXP_DBL a_Re,
                         const FIXP_DBL a_Im, const FIXP_SPK w) {
  cplxMultDiv2(c_Re, c_Im, a_Re, a_Im, w.v.re, w.v.im);
}

inline void cplxMult(FIXP_DBL* c_Re, FIXP_DBL* c_Im, const FIXP_DBL a_Re,
                     const FIXP_DBL a_Im, const FIXP_SGL b_Re,
                     const FIXP_SGL b_Im) {
  *c_Re = fMult(a_Re, b_Re) - fMult(a_Im, b_Im);
  *c_Im = fMult(a_Re, b_Im) + fMult(a_Im, b_Re);
}

inline void cplxMult(FIXP_DBL* c_Re, FIXP_DBL* c_Im, const FIXP_DBL a_Re,
                     const FIXP_DBL a_Im, const FIXP_SPK w) {
  cplxMult(c_Re, c_Im, a_Re, a_Im, w.v.re, w.v.im);
}

inline void scramble(FIXP_DBL* x, INT n) {
  INT m, k, j;
  for (m = 1, j = 0; m < n - 1; m++) {
    {
      for (k = n >> 1; (!((j ^= k) & k)); k >>= 1) {
      }
    }
    if (j > m) {
      FIXP_DBL tmp;
      tmp = x[2 * m];
      x[2 * m] = x[2 * j];
      x[2 * j] = tmp;
      tmp = x[2 * m + 1];
      x[2 * m + 1] = x[2 * j + 1];
      x[2 * j + 1] = tmp;
    }
  }
}

void fft(int length, FIXP_DBL* pInput, INT* scalefactor);

static void inline fft_4(FIXP_DBL* x) {
  FIXP_DBL a00, a10, a20, a30, tmp0, tmp1;
  a00 = (x[0] + x[4]) >> 1;
  a10 = (x[2] + x[6]) >> 1;
  a20 = (x[1] + x[5]) >> 1;
  a30 = (x[3] + x[7]) >> 1;
  x[0] = a00 + a10;
  x[1] = a20 + a30;
  tmp0 = a00 - x[4];
  tmp1 = a20 - x[5];
  x[4] = a00 - a10;
  x[5] = a20 - a30;
  a10 = a10 - x[6];
  a30 = a30 - x[7];
  x[2] = tmp0 + a30;
  x[6] = tmp0 - a30;
  x[3] = tmp1 - a10;
  x[7] = tmp1 + a10;
}

static void inline fft_8(FIXP_DBL* x) {
  FIXP_DBL a00, a10, a20, a30;
  FIXP_DBL y[16];
  a00 = (x[0] + x[8]) >> 1;
  a10 = x[4] + x[12];
  a20 = (x[1] + x[9]) >> 1;
  a30 = x[5] + x[13];
  y[0] = a00 + (a10 >> 1);
  y[4] = a00 - (a10 >> 1);
  y[1] = a20 + (a30 >> 1);
  y[5] = a20 - (a30 >> 1);
  a00 = a00 - x[8];
  a10 = (a10 >> 1) - x[12];
  a20 = a20 - x[9];
  a30 = (a30 >> 1) - x[13];
  y[2] = a00 + a30;
  y[6] = a00 - a30;
  y[3] = a20 - a10;
  y[7] = a20 + a10;
  a00 = (x[2] + x[10]) >> 1;
  a10 = x[6] + x[14];
  a20 = (x[3] + x[11]) >> 1;
  a30 = x[7] + x[15];
  y[8] = a00 + (a10 >> 1);
  y[12] = a00 - (a10 >> 1);
  y[9] = a20 + (a30 >> 1);
  y[13] = a20 - (a30 >> 1);
  a00 = a00 - x[10];
  a10 = (a10 >> 1) - x[14];
  a20 = a20 - x[11];
  a30 = (a30 >> 1) - x[15];
  y[10] = a00 + a30;
  y[14] = a00 - a30;
  y[11] = a20 - a10;
  y[15] = a20 + a10;
  FIXP_DBL vr, vi, ur, ui;
  ur = y[0] >> 1;
  ui = y[1] >> 1;
  vr = y[8];
  vi = y[9];
  x[0] = ur + (vr >> 1);
  x[1] = ui + (vi >> 1);
  x[8] = ur - (vr >> 1);
  x[9] = ui - (vi >> 1);
  ur = y[4] >> 1;
  ui = y[5] >> 1;
  vi = y[12];
  vr = y[13];
  x[4] = ur + (vr >> 1);
  x[5] = ui - (vi >> 1);
  x[12] = ur - (vr >> 1);
  x[13] = ui + (vi >> 1);
  ur = y[10];
  ui = y[11];
  vr = fMultDiv2(ui + ur, roundedCoefficient(0x5a82799a));
  vi = fMultDiv2(ui - ur, roundedCoefficient(0x5a82799a));
  ur = y[2];
  ui = y[3];
  x[2] = (ur >> 1) + vr;
  x[3] = (ui >> 1) + vi;
  x[10] = (ur >> 1) - vr;
  x[11] = (ui >> 1) - vi;
  ur = y[14];
  ui = y[15];
  vr = fMultDiv2(ui - ur, roundedCoefficient(0x5a82799a));
  vi = fMultDiv2(ui + ur, roundedCoefficient(0x5a82799a));
  ur = y[6];
  ui = y[7];
  x[6] = (ur >> 1) + vr;
  x[7] = (ui >> 1) - vi;
  x[14] = (ur >> 1) - vr;
  x[15] = (ui >> 1) + vi;
}

inline void fft_16(FIXP_DBL* x);
inline void fft_32(FIXP_DBL* x);
void dit_fft(FIXP_DBL* x, const INT ldn, const FIXP_STP* trigdata,
             const INT trigDataSize) {
  const INT n = 1 << ldn;
  INT trigstep, i, ldm;
  scramble(x, n);
  for (i = 0; i < n * 2; i += 8) {
    FIXP_DBL a00, a10, a20, a30;
    a00 = (x[i + 0] + x[i + 2]) >> 1;
    a10 = (x[i + 4] + x[i + 6]) >> 1;
    a20 = (x[i + 1] + x[i + 3]) >> 1;
    a30 = (x[i + 5] + x[i + 7]) >> 1;
    x[i + 0] = a00 + a10;
    x[i + 4] = a00 - a10;
    x[i + 1] = a20 + a30;
    x[i + 5] = a20 - a30;
    a00 = a00 - x[i + 2];
    a10 = a10 - x[i + 6];
    a20 = a20 - x[i + 3];
    a30 = a30 - x[i + 7];
    x[i + 2] = a00 + a30;
    x[i + 6] = a00 - a30;
    x[i + 3] = a20 - a10;
    x[i + 7] = a20 + a10;
  }
  for (ldm = 3; ldm <= ldn; ++ldm) {
    INT m = (1 << ldm);
    INT mh = (m >> 1);
    INT j, r;
    trigstep = ((trigDataSize << 2) >> ldm);
    {
      j = 0;
      for (r = 0; r < n; r += m) {
        INT t1 = (r + j) << 1;
        INT t2 = t1 + (mh << 1);
        FIXP_DBL vr, vi, ur, ui;
        vi = x[t2 + 1] >> 1;
        vr = x[t2] >> 1;
        ur = x[t1] >> 1;
        ui = x[t1 + 1] >> 1;
        x[t1] = ur + vr;
        x[t1 + 1] = ui + vi;
        x[t2] = ur - vr;
        x[t2 + 1] = ui - vi;
        t1 += mh;
        t2 = t1 + (mh << 1);
        vr = x[t2 + 1] >> 1;
        vi = x[t2] >> 1;
        ur = x[t1] >> 1;
        ui = x[t1 + 1] >> 1;
        x[t1] = ur + vr;
        x[t1 + 1] = ui - vi;
        x[t2] = ur - vr;
        x[t2 + 1] = ui + vi;
      }
    }
    for (j = 1; j < mh / 4; ++j) {
      FIXP_STP cs;
      cs = trigdata[j * trigstep];
      for (r = 0; r < n; r += m) {
        INT t1 = (r + j) << 1;
        INT t2 = t1 + (mh << 1);
        FIXP_DBL vr, vi, ur, ui;
        cplxMultDiv2(&vi, &vr, x[t2 + 1], x[t2], cs);
        ur = x[t1] >> 1;
        ui = x[t1 + 1] >> 1;
        x[t1] = ur + vr;
        x[t1 + 1] = ui + vi;
        x[t2] = ur - vr;
        x[t2 + 1] = ui - vi;
        t1 += mh;
        t2 = t1 + (mh << 1);
        cplxMultDiv2(&vr, &vi, x[t2 + 1], x[t2], cs);
        ur = x[t1] >> 1;
        ui = x[t1 + 1] >> 1;
        x[t1] = ur + vr;
        x[t1 + 1] = ui - vi;
        x[t2] = ur - vr;
        x[t2 + 1] = ui + vi;
        t1 = (r + mh / 2 - j) << 1;
        t2 = t1 + (mh << 1);
        cplxMultDiv2(&vi, &vr, x[t2], x[t2 + 1], cs);
        ur = x[t1] >> 1;
        ui = x[t1 + 1] >> 1;
        x[t1] = ur + vr;
        x[t1 + 1] = ui - vi;
        x[t2] = ur - vr;
        x[t2 + 1] = ui + vi;
        t1 += mh;
        t2 = t1 + (mh << 1);
        cplxMultDiv2(&vr, &vi, x[t2], x[t2 + 1], cs);
        ur = x[t1] >> 1;
        ui = x[t1 + 1] >> 1;
        x[t1] = ur - vr;
        x[t1 + 1] = ui - vi;
        x[t2] = ur + vr;
        x[t2 + 1] = ui + vi;
      }
    }
    {
      j = mh / 4;
      for (r = 0; r < n; r += m) {
        INT t1 = (r + j) << 1;
        INT t2 = t1 + (mh << 1);
        FIXP_DBL vr, vi, ur, ui;
        cplxMultDiv2(&vi, &vr, x[t2 + 1], x[t2], roundedCoefficient(0x5a82799a),
                     roundedCoefficient(0x5a82799a));
        ur = x[t1] >> 1;
        ui = x[t1 + 1] >> 1;
        x[t1] = ur + vr;
        x[t1 + 1] = ui + vi;
        x[t2] = ur - vr;
        x[t2 + 1] = ui - vi;
        t1 += mh;
        t2 = t1 + (mh << 1);
        cplxMultDiv2(&vr, &vi, x[t2 + 1], x[t2], roundedCoefficient(0x5a82799a),
                     roundedCoefficient(0x5a82799a));
        ur = x[t1] >> 1;
        ui = x[t1 + 1] >> 1;
        x[t1] = ur + vr;
        x[t1 + 1] = ui - vi;
        x[t2] = ur - vr;
        x[t2 + 1] = ui + vi;
      }
    }
  }
}

static inline void fft3(FIXP_DBL* __restrict pDat) {
  FIXP_DBL r1, r2;
  FIXP_DBL s1, s2;
  r1 = pDat[2] + pDat[4];
  r2 = fMult((pDat[2] - pDat[4]), (roundedCoefficient(0x91261468)));
  pDat[0] = pDat[0] + r1;
  r1 = pDat[0] - r1 - (r1 >> 1);
  s1 = pDat[3] + pDat[5];
  s2 = fMult((pDat[3] - pDat[5]), (roundedCoefficient(0x91261468)));
  pDat[1] = pDat[1] + s1;
  s1 = pDat[1] - s1 - (s1 >> 1);
  pDat[2] = r1 - s2;
  pDat[4] = r1 + s2;
  pDat[3] = s1 + r2;
  pDat[5] = s1 - r2;
}

static inline void fft5(FIXP_DBL* __restrict pDat) {
  FIXP_DBL r1, r2, r3, r4;
  FIXP_DBL s1, s2, s3, s4;
  FIXP_DBL t;
  r1 = pDat[2] + pDat[8];
  r4 = pDat[2] - pDat[8];
  r3 = pDat[4] + pDat[6];
  r2 = pDat[4] - pDat[6];
  t = fMult((r1 - r3), (roundedCoefficient(0x478dde64)));
  r1 = r1 + r3;
  pDat[0] = pDat[0] + r1;
  r1 = pDat[0] + (fMultDiv2(r1, (roundedCoefficient(0xb0000001))) << (2));
  r3 = r1 - t;
  r1 = r1 + t;
  t = fMult((r4 + r2), (roundedCoefficient(0x79bc3854)));
  r4 = t + (fMultDiv2(r4, (roundedCoefficient(0x9d839db0))) << (2));
  r2 = t + fMult(r2, (roundedCoefficient(0xd18053ce)));
  s1 = pDat[3] + pDat[9];
  s4 = pDat[3] - pDat[9];
  s3 = pDat[5] + pDat[7];
  s2 = pDat[5] - pDat[7];
  t = fMult((s1 - s3), (roundedCoefficient(0x478dde64)));
  s1 = s1 + s3;
  pDat[1] = pDat[1] + s1;
  s1 = pDat[1] + (fMultDiv2(s1, (roundedCoefficient(0xb0000001))) << (2));
  s3 = s1 - t;
  s1 = s1 + t;
  t = fMult((s4 + s2), (roundedCoefficient(0x79bc3854)));
  s4 = t + (fMultDiv2(s4, (roundedCoefficient(0x9d839db0))) << (2));
  s2 = t + fMult(s2, (roundedCoefficient(0xd18053ce)));
  pDat[2] = r1 + s2;
  pDat[8] = r1 - s2;
  pDat[4] = r3 - s4;
  pDat[6] = r3 + s4;
  pDat[3] = s1 - r2;
  pDat[9] = s1 + r2;
  pDat[5] = s3 + r4;
  pDat[7] = s3 - r4;
}

static inline void fft15(FIXP_DBL* pInput) {
  FIXP_DBL aDst[2 * 15];
  FIXP_DBL aDst1[2 * 15];
  int i, k, l;
  {
    const FIXP_DBL* pSrc = pInput;
    FIXP_DBL* __restrict pDst = aDst;
    for (i = 0, l = 0, k = 0; i < 5; i++, k += 6) {
      pDst[k + 0] = pSrc[l];
      pDst[k + 1] = pSrc[l + 1];
      l += 2 * 5;
      if (l >= (2 * 15)) {
        l -= (2 * 15);
      }
      pDst[k + 2] = pSrc[l];
      pDst[k + 3] = pSrc[l + 1];
      l += 2 * 5;
      if (l >= (2 * 15)) {
        l -= (2 * 15);
      }
      pDst[k + 4] = pSrc[l];
      pDst[k + 5] = pSrc[l + 1];
      l += (2 * 5) + (2 * 3);
      if (l >= (2 * 15)) {
        l -= (2 * 15);
      }
      FIXP_DBL r1, r2, r3;
      FIXP_DBL s1, s2;
      r1 = pDst[k + 2] + pDst[k + 4];
      r2 = fMult((pDst[k + 2] - pDst[k + 4]), (roundedCoefficient(0x91261468)));
      s1 = pDst[k + 0];
      pDst[k + 0] = (s1 + r1) >> 2;
      r1 = s1 - (r1 >> 1);
      s1 = pDst[k + 3] + pDst[k + 5];
      s2 = fMult((pDst[k + 3] - pDst[k + 5]), (roundedCoefficient(0x91261468)));
      r3 = pDst[k + 1];
      pDst[k + 1] = (r3 + s1) >> 2;
      s1 = r3 - (s1 >> 1);
      pDst[k + 2] = (r1 - s2) >> 2;
      pDst[k + 4] = (r1 + s2) >> 2;
      pDst[k + 3] = (s1 + r2) >> 2;
      pDst[k + 5] = (s1 - r2) >> 2;
    }
  }
  {
    const FIXP_DBL* pSrc = aDst;
    FIXP_DBL* __restrict pDst = aDst1;
    for (i = 0, l = 0, k = 0; i < 3; i++, k += 10) {
      l = 2 * i;
      pDst[k + 0] = pSrc[l + 0];
      pDst[k + 1] = pSrc[l + 1];
      pDst[k + 2] = pSrc[l + 0 + (2 * 3)];
      pDst[k + 3] = pSrc[l + 1 + (2 * 3)];
      pDst[k + 4] = pSrc[l + 0 + (4 * 3)];
      pDst[k + 5] = pSrc[l + 1 + (4 * 3)];
      pDst[k + 6] = pSrc[l + 0 + (6 * 3)];
      pDst[k + 7] = pSrc[l + 1 + (6 * 3)];
      pDst[k + 8] = pSrc[l + 0 + (8 * 3)];
      pDst[k + 9] = pSrc[l + 1 + (8 * 3)];
      fft5(&pDst[k]);
    }
  }
  {
    const FIXP_DBL* pSrc = aDst1;
    FIXP_DBL* __restrict pDst = pInput;
    for (i = 0, l = 0, k = 0; i < 3; i++, k += 10) {
      pDst[k + 0] = pSrc[l];
      pDst[k + 1] = pSrc[l + 1];
      l += (2 * 6);
      if (l >= (2 * 15)) {
        l -= (2 * 15);
      }
      pDst[k + 2] = pSrc[l];
      pDst[k + 3] = pSrc[l + 1];
      l += (2 * 6);
      if (l >= (2 * 15)) {
        l -= (2 * 15);
      }
      pDst[k + 4] = pSrc[l];
      pDst[k + 5] = pSrc[l + 1];
      l += (2 * 6);
      if (l >= (2 * 15)) {
        l -= (2 * 15);
      }
      pDst[k + 6] = pSrc[l];
      pDst[k + 7] = pSrc[l + 1];
      l += (2 * 6);
      if (l >= (2 * 15)) {
        l -= (2 * 15);
      }
      pDst[k + 8] = pSrc[l];
      pDst[k + 9] = pSrc[l + 1];
      l += 2;
    }
  }
}

static const FIXP_STP fft16_w16[2] = {
  {{roundedCoefficient(0x7641af3d), roundedCoefficient(0x30fbc54d)}},
  {{roundedCoefficient(0x30fbc54d), roundedCoefficient(0x7641af3d)}}};
inline void fft_16(FIXP_DBL* __restrict x) {
  FIXP_DBL vr, vi, ur, ui;
  FIXP_DBL y[32];
  vr = (x[0 + 0] >> 1) + (x[16 + 0] >> 1);
  vi = (x[8 + 0] >> 1) + (x[24 + 0] >> 1);
  ur = (x[1 + 0] >> 1) + (x[17 + 0] >> 1);
  ui = (x[9 + 0] >> 1) + (x[25 + 0] >> 1);
  y[0 + 0] = vr + vi;
  y[4 + 0] = vr - vi;
  y[1 + 0] = ur + ui;
  y[5 + 0] = ur - ui;
  vr -= x[16 + 0];
  vi = vi - x[24 + 0];
  ur -= x[17 + 0];
  ui = ui - x[25 + 0];
  y[2 + 0] = ui + vr;
  y[6 + 0] = vr - ui;
  y[3 + 0] = ur - vi;
  y[7 + 0] = vi + ur;
  vr = (x[0 + 4] >> 1) + (x[16 + 4] >> 1);
  vi = (x[8 + 4] >> 1) + (x[24 + 4] >> 1);
  ur = (x[1 + 4] >> 1) + (x[17 + 4] >> 1);
  ui = (x[9 + 4] >> 1) + (x[25 + 4] >> 1);
  y[0 + 8] = vr + vi;
  y[4 + 8] = vr - vi;
  y[1 + 8] = ur + ui;
  y[5 + 8] = ur - ui;
  vr -= x[16 + 4];
  vi = vi - x[24 + 4];
  ur -= x[17 + 4];
  ui = ui - x[25 + 4];
  y[2 + 8] = ui + vr;
  y[6 + 8] = vr - ui;
  y[3 + 8] = ur - vi;
  y[7 + 8] = vi + ur;
  vr = (x[0 + 2] >> 1) + (x[16 + 2] >> 1);
  vi = (x[8 + 2] >> 1) + (x[24 + 2] >> 1);
  ur = (x[1 + 2] >> 1) + (x[17 + 2] >> 1);
  ui = (x[9 + 2] >> 1) + (x[25 + 2] >> 1);
  y[0 + 16] = vr + vi;
  y[4 + 16] = vr - vi;
  y[1 + 16] = ur + ui;
  y[5 + 16] = ur - ui;
  vr -= x[16 + 2];
  vi = vi - x[24 + 2];
  ur -= x[17 + 2];
  ui = ui - x[25 + 2];
  y[2 + 16] = ui + vr;
  y[6 + 16] = vr - ui;
  y[3 + 16] = ur - vi;
  y[7 + 16] = vi + ur;
  vr = (x[0 + 6] >> 1) + (x[16 + 6] >> 1);
  vi = (x[8 + 6] >> 1) + (x[24 + 6] >> 1);
  ur = (x[1 + 6] >> 1) + (x[17 + 6] >> 1);
  ui = (x[9 + 6] >> 1) + (x[25 + 6] >> 1);
  y[0 + 24] = vr + vi;
  y[4 + 24] = vr - vi;
  y[1 + 24] = ur + ui;
  y[5 + 24] = ur - ui;
  vr -= x[16 + 6];
  vi = vi - x[24 + 6];
  ur -= x[17 + 6];
  ui = ui - x[25 + 6];
  y[2 + 24] = ui + vr;
  y[6 + 24] = vr - ui;
  y[3 + 24] = ur - vi;
  y[7 + 24] = vi + ur;
  vr = y[8];
  vi = y[9];
  ur = y[0] >> 1;
  ui = y[1] >> 1;
  x[0] = ur + (vr >> 1);
  x[1] = ui + (vi >> 1);
  x[8] = ur - (vr >> 1);
  x[9] = ui - (vi >> 1);
  vr = y[13];
  vi = y[12];
  ur = y[4] >> 1;
  ui = y[5] >> 1;
  x[4] = ur + (vr >> 1);
  x[5] = ui - (vi >> 1);
  x[12] = ur - (vr >> 1);
  x[13] = ui + (vi >> 1);
  vr = y[24];
  vi = y[25];
  ur = y[16] >> 1;
  ui = y[17] >> 1;
  x[16] = ur + (vr >> 1);
  x[17] = ui + (vi >> 1);
  x[24] = ur - (vr >> 1);
  x[25] = ui - (vi >> 1);
  vr = y[29];
  vi = y[28];
  ur = y[20] >> 1;
  ui = y[21] >> 1;
  x[20] = ur + (vr >> 1);
  x[21] = ui - (vi >> 1);
  x[28] = ur - (vr >> 1);
  x[29] = ui + (vi >> 1);
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(y[10], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(y[11], roundedCoefficient(0x5a82799a));
    vi = wb - wa;
    vr = wb + wa;
  }
  ur = y[2];
  ui = y[3];
  x[2] = (ur >> 1) + vr;
  x[3] = (ui >> 1) + vi;
  x[10] = (ur >> 1) - vr;
  x[11] = (ui >> 1) - vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(y[14], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(y[15], roundedCoefficient(0x5a82799a));
    vr = wb - wa;
    vi = wb + wa;
  }
  ur = y[6];
  ui = y[7];
  x[6] = (ur >> 1) + vr;
  x[7] = (ui >> 1) - vi;
  x[14] = (ur >> 1) - vr;
  x[15] = (ui >> 1) + vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(y[26], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(y[27], roundedCoefficient(0x5a82799a));
    vi = wb - wa;
    vr = wb + wa;
  }
  ur = y[18];
  ui = y[19];
  x[18] = (ur >> 1) + vr;
  x[19] = (ui >> 1) + vi;
  x[26] = (ur >> 1) - vr;
  x[27] = (ui >> 1) - vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(y[30], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(y[31], roundedCoefficient(0x5a82799a));
    vr = wb - wa;
    vi = wb + wa;
  }
  ur = y[22];
  ui = y[23];
  x[22] = (ur >> 1) + vr;
  x[23] = (ui >> 1) - vi;
  x[30] = (ur >> 1) - vr;
  x[31] = (ui >> 1) + vi;
  vr = x[16];
  vi = x[17];
  ur = x[0] >> 1;
  ui = x[1] >> 1;
  x[0] = ur + (vr >> 1);
  x[1] = ui + (vi >> 1);
  x[16] = ur - (vr >> 1);
  x[17] = ui - (vi >> 1);
  vi = x[24];
  vr = x[25];
  ur = x[8] >> 1;
  ui = x[9] >> 1;
  x[8] = ur + (vr >> 1);
  x[9] = ui - (vi >> 1);
  x[24] = ur - (vr >> 1);
  x[25] = ui + (vi >> 1);
  cplxMultDiv2(&vi, &vr, x[19], x[18], fft16_w16[0]);
  ur = x[2];
  ui = x[3];
  x[2] = (ur >> 1) + vr;
  x[3] = (ui >> 1) + vi;
  x[18] = (ur >> 1) - vr;
  x[19] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[27], x[26], fft16_w16[0]);
  ur = x[10];
  ui = x[11];
  x[10] = (ur >> 1) + vr;
  x[11] = (ui >> 1) - vi;
  x[26] = (ur >> 1) - vr;
  x[27] = (ui >> 1) + vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(x[20], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(x[21], roundedCoefficient(0x5a82799a));
    vi = wb - wa;
    vr = wb + wa;
  }
  ur = x[4];
  ui = x[5];
  x[4] = (ur >> 1) + vr;
  x[5] = (ui >> 1) + vi;
  x[20] = (ur >> 1) - vr;
  x[21] = (ui >> 1) - vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(x[28], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(x[29], roundedCoefficient(0x5a82799a));
    vr = wb - wa;
    vi = wb + wa;
  }
  ur = x[12];
  ui = x[13];
  x[12] = (ur >> 1) + vr;
  x[13] = (ui >> 1) - vi;
  x[28] = (ur >> 1) - vr;
  x[29] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[23], x[22], fft16_w16[1]);
  ur = x[6];
  ui = x[7];
  x[6] = (ur >> 1) + vr;
  x[7] = (ui >> 1) + vi;
  x[22] = (ur >> 1) - vr;
  x[23] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[31], x[30], fft16_w16[1]);
  ur = x[14];
  ui = x[15];
  x[14] = (ur >> 1) + vr;
  x[15] = (ui >> 1) - vi;
  x[30] = (ur >> 1) - vr;
  x[31] = (ui >> 1) + vi;
}

static const FIXP_STP fft32_w32[6] = {
  {{roundedCoefficient(0x7641af3d), roundedCoefficient(0x30fbc54d)}},
  {{roundedCoefficient(0x30fbc54d), roundedCoefficient(0x7641af3d)}},
  {{roundedCoefficient(0x7d8a5f40), roundedCoefficient(0x18f8b83c)}},
  {{roundedCoefficient(0x6a6d98a4), roundedCoefficient(0x471cece7)}},
  {{roundedCoefficient(0x471cece7), roundedCoefficient(0x6a6d98a4)}},
  {{roundedCoefficient(0x18f8b83c), roundedCoefficient(0x7d8a5f40)}}};
inline void fft_32(FIXP_DBL* x) {
  FIXP_DBL vr, vi, ur, ui;
  FIXP_DBL y[64];
  vr = (x[0] + x[32]) >> 1;
  vi = (x[16] + x[48]);
  ur = (x[1] + x[33]) >> 1;
  ui = (x[17] + x[49]);
  y[0] = vr + (vi >> 1);
  y[4] = vr - (vi >> 1);
  y[1] = ur + (ui >> 1);
  y[5] = ur - (ui >> 1);
  vr -= x[32];
  vi = (vi >> 1) - x[48];
  ur -= x[33];
  ui = (ui >> 1) - x[49];
  y[2] = ui + vr;
  y[6] = vr - ui;
  y[3] = ur - vi;
  y[7] = vi + ur;
  vr = (x[8] + x[40]) >> 1;
  vi = (x[24] + x[56]);
  ur = (x[9] + x[41]) >> 1;
  ui = (x[25] + x[57]);
  y[8] = vr + (vi >> 1);
  y[12] = vr - (vi >> 1);
  y[9] = ur + (ui >> 1);
  y[13] = ur - (ui >> 1);
  vr -= x[40];
  vi = (vi >> 1) - x[56];
  ur -= x[41];
  ui = (ui >> 1) - x[57];
  y[10] = ui + vr;
  y[14] = vr - ui;
  y[11] = ur - vi;
  y[15] = vi + ur;
  vr = (x[4] + x[36]) >> 1;
  vi = (x[20] + x[52]);
  ur = (x[5] + x[37]) >> 1;
  ui = (x[21] + x[53]);
  y[16] = vr + (vi >> 1);
  y[20] = vr - (vi >> 1);
  y[17] = ur + (ui >> 1);
  y[21] = ur - (ui >> 1);
  vr -= x[36];
  vi = (vi >> 1) - x[52];
  ur -= x[37];
  ui = (ui >> 1) - x[53];
  y[18] = ui + vr;
  y[22] = vr - ui;
  y[19] = ur - vi;
  y[23] = vi + ur;
  vr = (x[12] + x[44]) >> 1;
  vi = (x[28] + x[60]);
  ur = (x[13] + x[45]) >> 1;
  ui = (x[29] + x[61]);
  y[24] = vr + (vi >> 1);
  y[28] = vr - (vi >> 1);
  y[25] = ur + (ui >> 1);
  y[29] = ur - (ui >> 1);
  vr -= x[44];
  vi = (vi >> 1) - x[60];
  ur -= x[45];
  ui = (ui >> 1) - x[61];
  y[26] = ui + vr;
  y[30] = vr - ui;
  y[27] = ur - vi;
  y[31] = vi + ur;
  vr = (x[2] + x[34]) >> 1;
  vi = (x[18] + x[50]);
  ur = (x[3] + x[35]) >> 1;
  ui = (x[19] + x[51]);
  y[32] = vr + (vi >> 1);
  y[36] = vr - (vi >> 1);
  y[33] = ur + (ui >> 1);
  y[37] = ur - (ui >> 1);
  vr -= x[34];
  vi = (vi >> 1) - x[50];
  ur -= x[35];
  ui = (ui >> 1) - x[51];
  y[34] = ui + vr;
  y[38] = vr - ui;
  y[35] = ur - vi;
  y[39] = vi + ur;
  vr = (x[10] + x[42]) >> 1;
  vi = (x[26] + x[58]);
  ur = (x[11] + x[43]) >> 1;
  ui = (x[27] + x[59]);
  y[40] = vr + (vi >> 1);
  y[44] = vr - (vi >> 1);
  y[41] = ur + (ui >> 1);
  y[45] = ur - (ui >> 1);
  vr -= x[42];
  vi = (vi >> 1) - x[58];
  ur -= x[43];
  ui = (ui >> 1) - x[59];
  y[42] = ui + vr;
  y[46] = vr - ui;
  y[43] = ur - vi;
  y[47] = vi + ur;
  vr = (x[6] + x[38]) >> 1;
  vi = (x[22] + x[54]);
  ur = (x[7] + x[39]) >> 1;
  ui = (x[23] + x[55]);
  y[48] = vr + (vi >> 1);
  y[52] = vr - (vi >> 1);
  y[49] = ur + (ui >> 1);
  y[53] = ur - (ui >> 1);
  vr -= x[38];
  vi = (vi >> 1) - x[54];
  ur -= x[39];
  ui = (ui >> 1) - x[55];
  y[50] = ui + vr;
  y[54] = vr - ui;
  y[51] = ur - vi;
  y[55] = vi + ur;
  vr = (x[14] + x[46]) >> 1;
  vi = (x[30] + x[62]);
  ur = (x[15] + x[47]) >> 1;
  ui = (x[31] + x[63]);
  y[56] = vr + (vi >> 1);
  y[60] = vr - (vi >> 1);
  y[57] = ur + (ui >> 1);
  y[61] = ur - (ui >> 1);
  vr -= x[46];
  vi = (vi >> 1) - x[62];
  ur -= x[47];
  ui = (ui >> 1) - x[63];
  y[58] = ui + vr;
  y[62] = vr - ui;
  y[59] = ur - vi;
  y[63] = vi + ur;
  FIXP_DBL* xt = &x[0];
  FIXP_DBL* yt = &y[0];
  int j = 4;
  do {
    vr = yt[8];
    vi = yt[9];
    ur = yt[0] >> 1;
    ui = yt[1] >> 1;
    xt[0] = ur + (vr >> 1);
    xt[1] = ui + (vi >> 1);
    xt[8] = ur - (vr >> 1);
    xt[9] = ui - (vi >> 1);
    vr = yt[13];
    vi = yt[12];
    ur = yt[4] >> 1;
    ui = yt[5] >> 1;
    xt[4] = ur + (vr >> 1);
    xt[5] = ui - (vi >> 1);
    xt[12] = ur - (vr >> 1);
    xt[13] = ui + (vi >> 1);
    {
      FIXP_DBL wa, wb;
      wa = fMultDiv2(yt[10], roundedCoefficient(0x5a82799a));
      wb = fMultDiv2(yt[11], roundedCoefficient(0x5a82799a));
      vi = wb - wa;
      vr = wb + wa;
    }
    ur = yt[2];
    ui = yt[3];
    xt[2] = (ur >> 1) + vr;
    xt[3] = (ui >> 1) + vi;
    xt[10] = (ur >> 1) - vr;
    xt[11] = (ui >> 1) - vi;
    {
      FIXP_DBL wa, wb;
      wa = fMultDiv2(yt[14], roundedCoefficient(0x5a82799a));
      wb = fMultDiv2(yt[15], roundedCoefficient(0x5a82799a));
      vr = wb - wa;
      vi = wb + wa;
    }
    ur = yt[6];
    ui = yt[7];
    xt[6] = (ur >> 1) + vr;
    xt[7] = (ui >> 1) - vi;
    xt[14] = (ur >> 1) - vr;
    xt[15] = (ui >> 1) + vi;
    xt += 16;
    yt += 16;
  } while (--j != 0);
  vr = x[16];
  vi = x[17];
  ur = x[0] >> 1;
  ui = x[1] >> 1;
  x[0] = ur + (vr >> 1);
  x[1] = ui + (vi >> 1);
  x[16] = ur - (vr >> 1);
  x[17] = ui - (vi >> 1);
  vi = x[24];
  vr = x[25];
  ur = x[8] >> 1;
  ui = x[9] >> 1;
  x[8] = ur + (vr >> 1);
  x[9] = ui - (vi >> 1);
  x[24] = ur - (vr >> 1);
  x[25] = ui + (vi >> 1);
  vr = x[48];
  vi = x[49];
  ur = x[32] >> 1;
  ui = x[33] >> 1;
  x[32] = ur + (vr >> 1);
  x[33] = ui + (vi >> 1);
  x[48] = ur - (vr >> 1);
  x[49] = ui - (vi >> 1);
  vi = x[56];
  vr = x[57];
  ur = x[40] >> 1;
  ui = x[41] >> 1;
  x[40] = ur + (vr >> 1);
  x[41] = ui - (vi >> 1);
  x[56] = ur - (vr >> 1);
  x[57] = ui + (vi >> 1);
  cplxMultDiv2(&vi, &vr, x[19], x[18], fft32_w32[0]);
  ur = x[2];
  ui = x[3];
  x[2] = (ur >> 1) + vr;
  x[3] = (ui >> 1) + vi;
  x[18] = (ur >> 1) - vr;
  x[19] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[27], x[26], fft32_w32[0]);
  ur = x[10];
  ui = x[11];
  x[10] = (ur >> 1) + vr;
  x[11] = (ui >> 1) - vi;
  x[26] = (ur >> 1) - vr;
  x[27] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[51], x[50], fft32_w32[0]);
  ur = x[34];
  ui = x[35];
  x[34] = (ur >> 1) + vr;
  x[35] = (ui >> 1) + vi;
  x[50] = (ur >> 1) - vr;
  x[51] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[59], x[58], fft32_w32[0]);
  ur = x[42];
  ui = x[43];
  x[42] = (ur >> 1) + vr;
  x[43] = (ui >> 1) - vi;
  x[58] = (ur >> 1) - vr;
  x[59] = (ui >> 1) + vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(x[20], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(x[21], roundedCoefficient(0x5a82799a));
    vi = wb - wa;
    vr = wb + wa;
  }
  ur = x[4];
  ui = x[5];
  x[4] = (ur >> 1) + vr;
  x[5] = (ui >> 1) + vi;
  x[20] = (ur >> 1) - vr;
  x[21] = (ui >> 1) - vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(x[28], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(x[29], roundedCoefficient(0x5a82799a));
    vr = wb - wa;
    vi = wb + wa;
  }
  ur = x[12];
  ui = x[13];
  x[12] = (ur >> 1) + vr;
  x[13] = (ui >> 1) - vi;
  x[28] = (ur >> 1) - vr;
  x[29] = (ui >> 1) + vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(x[52], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(x[53], roundedCoefficient(0x5a82799a));
    vi = wb - wa;
    vr = wb + wa;
  }
  ur = x[36];
  ui = x[37];
  x[36] = (ur >> 1) + vr;
  x[37] = (ui >> 1) + vi;
  x[52] = (ur >> 1) - vr;
  x[53] = (ui >> 1) - vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(x[60], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(x[61], roundedCoefficient(0x5a82799a));
    vr = wb - wa;
    vi = wb + wa;
  }
  ur = x[44];
  ui = x[45];
  x[44] = (ur >> 1) + vr;
  x[45] = (ui >> 1) - vi;
  x[60] = (ur >> 1) - vr;
  x[61] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[23], x[22], fft32_w32[1]);
  ur = x[6];
  ui = x[7];
  x[6] = (ur >> 1) + vr;
  x[7] = (ui >> 1) + vi;
  x[22] = (ur >> 1) - vr;
  x[23] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[31], x[30], fft32_w32[1]);
  ur = x[14];
  ui = x[15];
  x[14] = (ur >> 1) + vr;
  x[15] = (ui >> 1) - vi;
  x[30] = (ur >> 1) - vr;
  x[31] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[55], x[54], fft32_w32[1]);
  ur = x[38];
  ui = x[39];
  x[38] = (ur >> 1) + vr;
  x[39] = (ui >> 1) + vi;
  x[54] = (ur >> 1) - vr;
  x[55] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[63], x[62], fft32_w32[1]);
  ur = x[46];
  ui = x[47];
  x[46] = (ur >> 1) + vr;
  x[47] = (ui >> 1) - vi;
  x[62] = (ur >> 1) - vr;
  x[63] = (ui >> 1) + vi;
  vr = x[32];
  vi = x[33];
  ur = x[0] >> 1;
  ui = x[1] >> 1;
  x[0] = ur + (vr >> 1);
  x[1] = ui + (vi >> 1);
  x[32] = ur - (vr >> 1);
  x[33] = ui - (vi >> 1);
  vi = x[48];
  vr = x[49];
  ur = x[16] >> 1;
  ui = x[17] >> 1;
  x[16] = ur + (vr >> 1);
  x[17] = ui - (vi >> 1);
  x[48] = ur - (vr >> 1);
  x[49] = ui + (vi >> 1);
  cplxMultDiv2(&vi, &vr, x[35], x[34], fft32_w32[2]);
  ur = x[2];
  ui = x[3];
  x[2] = (ur >> 1) + vr;
  x[3] = (ui >> 1) + vi;
  x[34] = (ur >> 1) - vr;
  x[35] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[51], x[50], fft32_w32[2]);
  ur = x[18];
  ui = x[19];
  x[18] = (ur >> 1) + vr;
  x[19] = (ui >> 1) - vi;
  x[50] = (ur >> 1) - vr;
  x[51] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[37], x[36], fft32_w32[0]);
  ur = x[4];
  ui = x[5];
  x[4] = (ur >> 1) + vr;
  x[5] = (ui >> 1) + vi;
  x[36] = (ur >> 1) - vr;
  x[37] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[53], x[52], fft32_w32[0]);
  ur = x[20];
  ui = x[21];
  x[20] = (ur >> 1) + vr;
  x[21] = (ui >> 1) - vi;
  x[52] = (ur >> 1) - vr;
  x[53] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[39], x[38], fft32_w32[3]);
  ur = x[6];
  ui = x[7];
  x[6] = (ur >> 1) + vr;
  x[7] = (ui >> 1) + vi;
  x[38] = (ur >> 1) - vr;
  x[39] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[55], x[54], fft32_w32[3]);
  ur = x[22];
  ui = x[23];
  x[22] = (ur >> 1) + vr;
  x[23] = (ui >> 1) - vi;
  x[54] = (ur >> 1) - vr;
  x[55] = (ui >> 1) + vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(x[40], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(x[41], roundedCoefficient(0x5a82799a));
    vi = wb - wa;
    vr = wb + wa;
  }
  ur = x[8];
  ui = x[9];
  x[8] = (ur >> 1) + vr;
  x[9] = (ui >> 1) + vi;
  x[40] = (ur >> 1) - vr;
  x[41] = (ui >> 1) - vi;
  {
    FIXP_DBL wa, wb;
    wa = fMultDiv2(x[56], roundedCoefficient(0x5a82799a));
    wb = fMultDiv2(x[57], roundedCoefficient(0x5a82799a));
    vr = wb - wa;
    vi = wb + wa;
  }
  ur = x[24];
  ui = x[25];
  x[24] = (ur >> 1) + vr;
  x[25] = (ui >> 1) - vi;
  x[56] = (ur >> 1) - vr;
  x[57] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[43], x[42], fft32_w32[4]);
  ur = x[10];
  ui = x[11];
  x[10] = (ur >> 1) + vr;
  x[11] = (ui >> 1) + vi;
  x[42] = (ur >> 1) - vr;
  x[43] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[59], x[58], fft32_w32[4]);
  ur = x[26];
  ui = x[27];
  x[26] = (ur >> 1) + vr;
  x[27] = (ui >> 1) - vi;
  x[58] = (ur >> 1) - vr;
  x[59] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[45], x[44], fft32_w32[1]);
  ur = x[12];
  ui = x[13];
  x[12] = (ur >> 1) + vr;
  x[13] = (ui >> 1) + vi;
  x[44] = (ur >> 1) - vr;
  x[45] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[61], x[60], fft32_w32[1]);
  ur = x[28];
  ui = x[29];
  x[28] = (ur >> 1) + vr;
  x[29] = (ui >> 1) - vi;
  x[60] = (ur >> 1) - vr;
  x[61] = (ui >> 1) + vi;
  cplxMultDiv2(&vi, &vr, x[47], x[46], fft32_w32[5]);
  ur = x[14];
  ui = x[15];
  x[14] = (ur >> 1) + vr;
  x[15] = (ui >> 1) + vi;
  x[46] = (ur >> 1) - vr;
  x[47] = (ui >> 1) - vi;
  cplxMultDiv2(&vr, &vi, x[63], x[62], fft32_w32[5]);
  ur = x[30];
  ui = x[31];
  x[30] = (ur >> 1) + vr;
  x[31] = (ui >> 1) - vi;
  x[62] = (ur >> 1) - vr;
  x[63] = (ui >> 1) + vi;
}

static inline void fft_apply_rot_vector(FIXP_DBL* __restrict pData,
                                        const int cl, const int l,
                                        const FIXP_STB* pVecRe,
                                        const FIXP_STB* pVecIm) {
  FIXP_DBL re, im;
  FIXP_STB vre, vim;
  int i, c;
  for (i = 0; i < cl; i++) {
    re = pData[2 * i];
    im = pData[2 * i + 1];
    pData[2 * i] = re >> 2;
    pData[2 * i + 1] = im >> 2;
  }
  for (; i < l; i += cl) {
    re = pData[2 * i];
    im = pData[2 * i + 1];
    pData[2 * i] = re >> 2;
    pData[2 * i + 1] = im >> 2;
    for (c = i + 1; c < i + cl; c++) {
      re = pData[2 * c] >> 1;
      im = pData[2 * c + 1] >> 1;
      vre = *pVecRe++;
      vim = *pVecIm++;
      cplxMultDiv2(&pData[2 * c + 1], &pData[2 * c], im, re, vre, vim);
    }
  }
}

static inline void fft60(FIXP_DBL* pInput, INT* pScalefactor) {
  {
    int i, j;
    FIXP_DBL aDst[60 * 2];
    FIXP_DBL aDst2[15 * 2];
    {
      const FIXP_DBL* pSrc = pInput;
      FIXP_DBL* __restrict pDst = aDst;
      for (i = 0; i < 15; i++) {
        for (j = 0; j < 4; j++) {
          pDst[2 * j] = pSrc[2 * j * 15];
          pDst[2 * j + 1] = pSrc[2 * j * 15 + 1];
        }
        fft_4(pDst);
        pSrc += 2;
        pDst = pDst + 2 * 4;
      }
    }
    fft_apply_rot_vector(aDst, 4, 60, RotVectorReal60, RotVectorImag60);
    {
      const FIXP_DBL* pSrc = aDst;
      FIXP_DBL* __restrict pDst = aDst2;
      FIXP_DBL* __restrict pDstOut = pInput;
      for (i = 0; i < 4; i++) {
        for (j = 0; j < 15; j++) {
          pDst[2 * j] = pSrc[2 * j * 4];
          pDst[2 * j + 1] = pSrc[2 * j * 4 + 1];
        }
        fft15(pDst);
        for (j = 0; j < 15; j++) {
          pDstOut[2 * j * 4] = pDst[2 * j];
          pDstOut[2 * j * 4 + 1] = pDst[2 * j + 1];
        }
        pSrc += 2;
        pDstOut += 2;
      }
    }
  }
  *pScalefactor += 5;
}

static inline void fft240(FIXP_DBL* pInput, INT* pScalefactor) {
  {
    int i, j;
    FIXP_DBL aDst[240 * 2];
    FIXP_DBL aDst2[15 * 2];
    {
      const FIXP_DBL* pSrc = pInput;
      FIXP_DBL* __restrict pDst = aDst;
      for (i = 0; i < 15; i++) {
        for (j = 0; j < 16; j++) {
          pDst[2 * j] = pSrc[2 * j * 15];
          pDst[2 * j + 1] = pSrc[2 * j * 15 + 1];
        }
        fft_16(pDst);
        pSrc += 2;
        pDst = pDst + 2 * 16;
      }
    }
    fft_apply_rot_vector(aDst, 16, 240, RotVectorReal240, RotVectorImag240);
    {
      const FIXP_DBL* pSrc = aDst;
      FIXP_DBL* __restrict pDst = aDst2;
      FIXP_DBL* __restrict pDstOut = pInput;
      for (i = 0; i < 16; i++) {
        for (j = 0; j < 15; j++) {
          pDst[2 * j] = pSrc[2 * j * 16];
          pDst[2 * j + 1] = pSrc[2 * j * 16 + 1];
        }
        fft15(pDst);
        for (j = 0; j < 15; j++) {
          pDstOut[2 * j * 16] = pDst[2 * j];
          pDstOut[2 * j * 16 + 1] = pDst[2 * j + 1];
        }
        pSrc += 2;
        pDstOut += 2;
      }
    }
  }
  *pScalefactor += 7;
}

static inline void fft480(FIXP_DBL* pInput, INT* pScalefactor) {
  {
    int i, j;
    FIXP_DBL aDst[480 * 2];
    FIXP_DBL aDst2[15 * 2];
    {
      const FIXP_DBL* pSrc = pInput;
      FIXP_DBL* __restrict pDst = aDst;
      for (i = 0; i < 15; i++) {
        for (j = 0; j < 32; j++) {
          pDst[2 * j] = pSrc[2 * j * 15];
          pDst[2 * j + 1] = pSrc[2 * j * 15 + 1];
        }
        fft_32(pDst);
        pSrc += 2;
        pDst = pDst + 2 * 32;
      }
    }
    fft_apply_rot_vector(aDst, 32, 480, RotVectorReal480, RotVectorImag480);
    {
      const FIXP_DBL* pSrc = aDst;
      FIXP_DBL* __restrict pDst = aDst2;
      FIXP_DBL* __restrict pDstOut = pInput;
      for (i = 0; i < 32; i++) {
        for (j = 0; j < 15; j++) {
          pDst[2 * j] = pSrc[2 * j * 32];
          pDst[2 * j + 1] = pSrc[2 * j * 32 + 1];
        }
        fft15(pDst);
        for (j = 0; j < 15; j++) {
          pDstOut[2 * j * 32] = pDst[2 * j];
          pDstOut[2 * j * 32 + 1] = pDst[2 * j + 1];
        }
        pSrc += 2;
        pDstOut += 2;
      }
    }
  }
  *pScalefactor += 8;
}

void fft(int length, FIXP_DBL* pInput, INT* pScalefactor) {
  if (length == 32) {
    fft_32(pInput);
    *pScalefactor += 4;
  }
  else {
    switch (length) {
      case 16:
        fft_16(pInput);
        *pScalefactor += 3;
        break;
      case 8:
        fft_8(pInput);
        *pScalefactor += 2;
        break;
      case 3:
        fft3(pInput);
        break;
      case 4:
        fft_4(pInput);
        *pScalefactor += 1;
        break;
      case 5:
        fft5(pInput);
        break;
      case 15:
        fft15(pInput);
        *pScalefactor += 2;
        break;
      case 60:
        fft60(pInput, pScalefactor);
        break;
      case 64:
        dit_fft(pInput, 6, SineTable512, 512);
        *pScalefactor += 5;
        break;
      case 240:
        fft240(pInput, pScalefactor);
        break;
      case 256:
        dit_fft(pInput, 8, SineTable512, 512);
        *pScalefactor += 7;
        break;
      case 480:
        fft480(pInput, pScalefactor);
        break;
      case 512:
        dit_fft(pInput, 9, SineTable512, 512);
        *pScalefactor += 8;
        break;
      default:
        break;
    }
  }
}

void dct_III(FIXP_DBL* pDat, FIXP_DBL* tmp, int L, int* pDat_e) {
  int i;
  FIXP_DBL xr, accu1, accu2;
  int inc;
  int M = L >> 1;
  int ld_M;
  if (L == 64) {
    ld_M = 5;
  }
  else {
    ld_M = 4;
  }
  inc = (64 / 2) >> ld_M;
  FIXP_DBL* pTmp_0 = &tmp[2];
  FIXP_DBL* pTmp_1 = &tmp[(M - 1) * 2];
  for (i = 1; i < M >> 1; i++, pTmp_0 += 2, pTmp_1 -= 2) {
    FIXP_DBL accu3, accu4, accu5, accu6;
    cplxMultDiv2(&accu2, &accu1, pDat[L - i], pDat[i],
                 sin_twiddle_L64[i * inc]);
    cplxMultDiv2(&accu4, &accu3, pDat[M + i], pDat[M - i],
                 sin_twiddle_L64[(M - i) * inc]);
    accu3 >>= 1;
    accu4 >>= 1;
    cplxMultDiv2(&accu6, &accu5, (accu3 - (accu1 >> 1)), ((accu2 >> 1) + accu4),
                 sin_twiddle_L64[(4 * i) * inc]);
    xr = (accu1 >> 1) + accu3;
    pTmp_0[0] = (xr >> 1) - accu5;
    pTmp_1[0] = (xr >> 1) + accu5;
    xr = (accu2 >> 1) - accu4;
    pTmp_0[1] = (xr >> 1) - accu6;
    pTmp_1[1] = -((xr >> 1) + accu6);
  }
  xr = fMultDiv2(pDat[M], sin_twiddle_L64[64 / 2].v.re);
  tmp[0] = ((pDat[0] >> 1) + xr) >> 1;
  tmp[1] = ((pDat[0] >> 1) - xr) >> 1;
  cplxMultDiv2(&accu2, &accu1, pDat[L - (M / 2)], pDat[M / 2],
               sin_twiddle_L64[64 / 4]);
  tmp[M] = accu1 >> 1;
  tmp[M + 1] = accu2 >> 1;
  fft(M, tmp, pDat_e);
  pTmp_1 = &tmp[L];
  for (i = M >> 1; i--;) {
    FIXP_DBL tmp1, tmp2, tmp3, tmp4;
    tmp1 = *tmp++;
    tmp2 = *tmp++;
    tmp3 = *--pTmp_1;
    tmp4 = *--pTmp_1;
    *pDat++ = tmp1;
    *pDat++ = tmp3;
    *pDat++ = tmp2;
    *pDat++ = tmp4;
  }
  *pDat_e += 2;
}

void dct_II(FIXP_DBL* pDat, FIXP_DBL* tmp, int L, int* pDat_e) {
  FIXP_DBL accu1, accu2;
  FIXP_DBL *pTmp_0, *pTmp_1;
  int i;
  int inc;
  int M = L >> 1;
  int ld_M;
  ld_M = 4 + (L >> 6);
  inc = (64 / 2) >> ld_M;
  FIXP_DBL* pdat = &pDat[0];
  FIXP_DBL accu3, accu4;
  pTmp_0 = &tmp[0];
  pTmp_1 = &tmp[L - 1];
  for (i = M >> 1; i--;) {
    accu1 = *pdat++;
    accu2 = *pdat++;
    accu3 = *pdat++;
    accu4 = *pdat++;
    accu1 >>= 1;
    accu2 >>= 1;
    accu3 >>= 1;
    accu4 >>= 1;
    *pTmp_0++ = accu1;
    *pTmp_0++ = accu3;
    *pTmp_1-- = accu2;
    *pTmp_1-- = accu4;
  }
  fft(M, tmp, pDat_e);
  pTmp_0 = &tmp[2];
  pTmp_1 = &tmp[(M - 1) * 2];
  for (i = 1; i < M >> 1; i++, pTmp_0 += 2, pTmp_1 -= 2) {
    FIXP_DBL a1, a2;
    FIXP_DBL accu3, accu4;
    a1 = ((pTmp_0[1] >> 1) + (pTmp_1[1] >> 1));
    a2 = ((pTmp_1[0] >> 1) - (pTmp_0[0] >> 1));
    cplxMultDiv2(&accu1, &accu2, a2, a1, sin_twiddle_L64[(4 * i) * inc]);
    accu1 <<= 1;
    accu2 <<= 1;
    a1 = ((pTmp_0[0] >> 1) + (pTmp_1[0] >> 1));
    a2 = ((pTmp_0[1] >> 1) - (pTmp_1[1] >> 1));
    cplxMultDiv2(&accu3, &accu4, (a1 + accu2), -(accu1 + a2),
                 sin_twiddle_L64[i * inc]);
    pDat[L - i] = accu4;
    pDat[i] = accu3;
    cplxMultDiv2(&accu3, &accu4, (a1 - accu2), -(accu1 - a2),
                 sin_twiddle_L64[(M - i) * inc]);
    pDat[M + i] = accu4;
    pDat[M - i] = accu3;
  }
  cplxMultDiv2(&accu1, &accu2, tmp[M], tmp[M + 1],
               sin_twiddle_L64[(M / 2) * inc]);
  pDat[L - (M / 2)] = accu2;
  pDat[M / 2] = accu1;
  pDat[0] = (tmp[0] >> 1) + (tmp[1] >> 1);
  pDat[M] =
    fMult(((tmp[0] >> 1) - (tmp[1] >> 1)), sin_twiddle_L64[64 / 2].v.re);
  *pDat_e += 2;
}

static void getTables(const FIXP_WTP** twiddle, const FIXP_STP** sin_twiddle,
                      int* sin_step, int length) {
  int ld2_length;
  ld2_length = 32 - 1 - fNormz((FIXP_DBL)length) - 1;
  switch ((length) >> (ld2_length - 1)) {
    case 0x4:
      *sin_twiddle = SineTable512;
      *sin_step = 1 << (9 - ld2_length);
      *twiddle = sineWindows[0][ld2_length - 1];
      break;
    case 0x7:
      *sin_twiddle = SineTable480;
      *sin_step = 1 << (8 - ld2_length);
      *twiddle = sineWindows[1][ld2_length];
      break;
    default:
      *sin_twiddle = nullptr;
      *sin_step = 0;
      *twiddle = nullptr;
      break;
  }
}

void dct_IV(FIXP_DBL* pDat, int L, int* pDat_e) {
  int sin_step = 0;
  int M = L >> 1;
  const FIXP_WTP* twiddle;
  const FIXP_STP* sin_twiddle;
  getTables(&twiddle, &sin_twiddle, &sin_step, L);
  {
    FIXP_DBL* __restrict pDat_0 = &pDat[0];
    FIXP_DBL* __restrict pDat_1 = &pDat[L - 2];
    int i;
    for (i = 0; i < M - 1; i += 2, pDat_0 += 2, pDat_1 -= 2) {
      FIXP_DBL accu1, accu2, accu3, accu4;
      accu1 = pDat_1[1];
      accu2 = pDat_0[0];
      accu3 = pDat_0[1];
      accu4 = pDat_1[0];
      cplxMultDiv2(&accu1, &accu2, accu1, accu2, twiddle[i]);
      cplxMultDiv2(&accu3, &accu4, accu4, accu3, twiddle[i + 1]);
      pDat_0[0] = accu2;
      pDat_0[1] = accu1;
      pDat_1[0] = accu4;
      pDat_1[1] = -accu3;
    }
    if (M & 1) {
      FIXP_DBL accu1, accu2;
      accu1 = pDat_1[1];
      accu2 = pDat_0[0];
      cplxMultDiv2(&accu1, &accu2, accu1, accu2, twiddle[i]);
      pDat_0[0] = accu2;
      pDat_0[1] = accu1;
    }
  }
  fft(M, pDat, pDat_e);
  {
    FIXP_DBL* __restrict pDat_0 = &pDat[0];
    FIXP_DBL* __restrict pDat_1 = &pDat[L - 2];
    FIXP_DBL accu1, accu2, accu3, accu4;
    int idx, i;
    accu1 = pDat_1[0];
    accu2 = pDat_1[1];
    pDat_1[1] = -(pDat_0[1] >> 1);
    pDat_0[0] = (pDat_0[0] >> 1);
    for (idx = sin_step, i = 1; i < (M + 1) >> 1; i++, idx += sin_step) {
      FIXP_STP twd = sin_twiddle[idx];
      cplxMultDiv2(&accu3, &accu4, accu1, accu2, twd);
      pDat_0[1] = accu3;
      pDat_1[0] = accu4;
      pDat_0 += 2;
      pDat_1 -= 2;
      cplxMultDiv2(&accu3, &accu4, pDat_0[1], pDat_0[0], twd);
      accu1 = pDat_1[0];
      accu2 = pDat_1[1];
      pDat_1[1] = -accu3;
      pDat_0[0] = accu4;
    }
    if ((M & 1) == 0) {
      accu1 = fMultDiv2(accu1, roundedCoefficient(0x5a82799a));
      accu2 = fMultDiv2(accu2, roundedCoefficient(0x5a82799a));
      pDat_1[0] = accu1 + accu2;
      pDat_0[1] = accu1 - accu2;
    }
  }
  *pDat_e += 2;
}

void dst_IV(FIXP_DBL* pDat, int L, int* pDat_e) {
  int sin_step = 0;
  int M = L >> 1;
  const FIXP_WTP* twiddle;
  const FIXP_STP* sin_twiddle;
  getTables(&twiddle, &sin_twiddle, &sin_step, L);
  {
    FIXP_DBL* __restrict pDat_0 = &pDat[0];
    FIXP_DBL* __restrict pDat_1 = &pDat[L - 2];
    int i;
    for (i = 0; i < M - 1; i += 2, pDat_0 += 2, pDat_1 -= 2) {
      FIXP_DBL accu1, accu2, accu3, accu4;
      accu1 = pDat_1[1];
      accu2 = pDat_0[0];
      accu3 = pDat_0[1];
      accu4 = pDat_1[0];
      {
        int32_t real = fMultDiv2(accu1, twiddle[i].v.re) -
                       multiplyNegatedDiv2(accu2, twiddle[i].v.im);
        accu2 = fMultDiv2(accu1, twiddle[i].v.im) +
                multiplyNegatedDiv2(accu2, twiddle[i].v.re);
        accu1 = real;
      }
      {
        int32_t real = multiplyNegatedDiv2(accu4, twiddle[i + 1].v.re) -
                       fMultDiv2(accu3, twiddle[i + 1].v.im);
        accu4 = multiplyNegatedDiv2(accu4, twiddle[i + 1].v.im) +
                fMultDiv2(accu3, twiddle[i + 1].v.re);
        accu3 = real;
      }
      pDat_0[0] = accu2;
      pDat_0[1] = accu1;
      pDat_1[0] = accu4;
      pDat_1[1] = -accu3;
    }
    if (M & 1) {
      FIXP_DBL accu1, accu2;
      accu1 = pDat_1[1];
      accu2 = pDat_0[0];
      {
        int32_t real = fMultDiv2(accu1, twiddle[i].v.re) -
                       multiplyNegatedDiv2(accu2, twiddle[i].v.im);
        accu2 = fMultDiv2(accu1, twiddle[i].v.im) +
                multiplyNegatedDiv2(accu2, twiddle[i].v.re);
        accu1 = real;
      }
      pDat_0[0] = accu2;
      pDat_0[1] = accu1;
    }
  }
  fft(M, pDat, pDat_e);
  {
    FIXP_DBL* __restrict pDat_0;
    FIXP_DBL* __restrict pDat_1;
    FIXP_DBL accu1, accu2, accu3, accu4;
    int idx, i;
    pDat_0 = &pDat[0];
    pDat_1 = &pDat[L - 2];
    accu1 = pDat_1[0];
    accu2 = pDat_1[1];
    pDat_1[1] = -(pDat_0[0] >> 1);
    pDat_0[0] = (pDat_0[1] >> 1);
    for (idx = sin_step, i = 1; i < (M + 1) >> 1; i++, idx += sin_step) {
      FIXP_STP twd = sin_twiddle[idx];
      cplxMultDiv2(&accu3, &accu4, accu1, accu2, twd);
      pDat_1[0] = -accu3;
      pDat_0[1] = -accu4;
      pDat_0 += 2;
      pDat_1 -= 2;
      cplxMultDiv2(&accu3, &accu4, pDat_0[1], pDat_0[0], twd);
      accu1 = pDat_1[0];
      accu2 = pDat_1[1];
      pDat_0[0] = accu3;
      pDat_1[1] = -accu4;
    }
    if ((M & 1) == 0) {
      accu1 = fMultDiv2(accu1, roundedCoefficient(0x5a82799a));
      accu2 = fMultDiv2(accu2, roundedCoefficient(0x5a82799a));
      pDat_0[1] = -accu1 - accu2;
      pDat_1[0] = accu2 - accu1;
    }
  }
  *pDat_e += 2;
}

}

/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  See licenses/fdk-aac/LICENSE.txt and TRANSFORMS_CHANGES.md.
*/
