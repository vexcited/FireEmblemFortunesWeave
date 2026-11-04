#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio::util {

template<class T>
struct NintType {
  T value;
  int exponent;
};

template<>
struct NintType<short> {
  short value;
  short exponent;
};

static_assert(sizeof(NintType<short>) == 4);
static_assert(sizeof(NintType<int>) == 8);

int RoundInt32(int64_t value);
int MulInt32Int32(int first, int second);
short RoundInt16(int value);
short MulInt16Int16(short first, short second);

template<class T>
int CountRsb(T value);

template<class Nint, int Fraction>
Nint NormalizeFloat(float value);

template<class T>
void VecFill(T* output, T value, int count);

template<class Output, class Input>
void VecCopy(Output* output, const Input* input, int count);

template<class T>
bool VecIsZero(const T* input, int count);

void MemSet(void* output, int value, size_t size);
void MemSet_Explicit(void* output, int value, size_t size);

float GetMixBusWeight(int outputs, int output, int inputs, int input);
float GetMicBusWeight(int outputs, int output, int inputs, int input);

}
