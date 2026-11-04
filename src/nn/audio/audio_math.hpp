#pragma once

namespace nn::audio::detail {

// The SDK build keeps errno semantics, so every libm use stays a real call.
float Exp(float value) __asm__("expf");
float Log10(float value) __asm__("log10f");
float Pow(float base, float exponent) __asm__("powf");

}
