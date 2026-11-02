#pragma once

#include "nn/mii/store_data.hpp"

namespace nn::mii {

enum FacelineColor : int;
enum CommonColor : int;
enum GlassType : int;

namespace detail {

enum Ver3GlassType : int;
int GetFacelineColorToVer3(FacelineColor value);
int GetHairColorToVer3(CommonColor value);
int GetEyeColorToVer3(CommonColor value);
int GetMouthColorToVer3(CommonColor value);
int GetGlassColorToVer3(CommonColor value);
int GetGlassTypeToVer3(GlassType value);
int GetGlassTypeFromVer3(Ver3GlassType value);

}
}
