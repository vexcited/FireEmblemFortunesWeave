#include "math/kalman_transition.hpp"

namespace fw::math {

namespace {

void Publish(KalmanCovariance* state, const size_t* indices, size_t count,
  const float* block, size_t stride, const float cross[27][33]) {
  bool selected[33] = {};

  for (size_t row = 0; row < count; ++row) {
    selected[indices[row]] = true;

    for (size_t column = 0; column < count; ++column) {
      state->elements[indices[row]][indices[column]] =
        block[row * stride + column];
    }
  }

  for (size_t row = 0; row < count; ++row) {
    for (size_t column = 0; column < state->rows; ++column) {
      if (!selected[column]) {
        state->elements[indices[row]][column] = cross[row][column];
        state->elements[column][indices[row]] = cross[row][column];
      }
    }
  }

  for (size_t row = 1; row < count; ++row) {
    for (size_t column = 0; column < row; ++column) {
      float& lower = state->elements[indices[row]][indices[column]];
      float& upper = state->elements[indices[column]][indices[row]];
      const float mean = (lower + upper) * 0.5f;
      lower = mean;
      upper = mean;
    }
  }
}

}

void ResetCovarianceDynamic(KalmanCovariance* state, const size_t* dimension,
  const void*, const DynamicStateIndices* keys, const DynamicNoise* noise) {
  size_t indices[27];
  float block[27][27] = {};
  float cross[27][33] = {};

  for (size_t i = 0; i < keys->count; ++i) {
    indices[i] = *LookupStateIndex(&state->indices, keys->values + i);
  }

  for (size_t row = 0; row < *dimension; ++row) {
    for (size_t column = 0; column < *dimension; ++column) {
      block[row][column] = 0.0f + noise->elements[row][column];
    }
  }

  Publish(state, indices, keys->count, &block[0][0], 27, cross);
}

template<size_t Inputs, size_t Outputs>
void Transition(KalmanCovariance* state, const float* transition,
  const size_t* input_keys, const size_t* output_keys, const float* noise) {
  size_t input[Inputs];
  size_t output[Outputs];
  bool selected[33] = {};
  float product[Outputs][Inputs];
  float block[Outputs][Outputs];
  float cross[27][33] = {};

  for (size_t i = 0; i < Inputs; ++i) {
    input[i] = *LookupStateIndex(&state->indices, input_keys + i);
  }

  for (size_t i = 0; i < Outputs; ++i) {
    output[i] = *LookupStateIndex(&state->indices, output_keys + i);
    selected[output[i]] = true;
  }

  for (size_t row = 0; row < Outputs; ++row) {
    for (size_t column = 0; column < state->rows; ++column) {
      if (!selected[column]) {
        float sum = 0.0f;

        for (size_t k = 0; k < Inputs; ++k) {
          sum = __builtin_fmaf(transition[row * Inputs + k],
            state->elements[input[k]][column], sum);
        }

        cross[row][column] = sum;
      }
    }
  }

  for (size_t row = 0; row < Outputs; ++row) {
    for (size_t column = 0; column < Inputs; ++column) {
      float sum = 0.0f;

      for (size_t k = 0; k < Inputs; ++k) {
        sum = __builtin_fmaf(transition[row * Inputs + k],
          state->elements[input[k]][input[column]], sum);
      }

      product[row][column] = sum;
    }
  }

  for (size_t row = 0; row < Outputs; ++row) {
    for (size_t column = 0; column < Outputs; ++column) {
      float sum = 0.0f;

      for (size_t k = 0; k < Inputs; ++k) {
        sum = __builtin_fmaf(product[row][k],
          transition[column * Inputs + k], sum);
      }

      block[row][column] = sum + noise[row * Outputs + column];
    }
  }

  Publish(state, output, Outputs, &block[0][0], Outputs, cross);
}

void TransitionCovariance3(KalmanCovariance* state, const float* transition,
  const size_t* input, const size_t* output, const float* noise) {
  Transition<3, 3>(state, transition, input, output, noise);
}

void TransitionCovariance9To3(KalmanCovariance* state, const float* transition,
  const size_t* input, const size_t* output, const float* noise) {
  Transition<9, 3>(state, transition, input, output, noise);
}

void TransitionCovariance9To6(KalmanCovariance* state, const float* transition,
  const size_t* input, const size_t* output, const float* noise) {
  Transition<9, 6>(state, transition, input, output, noise);
}

void TransitionCovariance18To3(KalmanCovariance* state, const float* transition,
  const size_t* input, const size_t* output, const float* noise) {
  Transition<18, 3>(state, transition, input, output, noise);
}

}
