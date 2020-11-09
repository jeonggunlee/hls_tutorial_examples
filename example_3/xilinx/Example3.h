#pragma once

constexpr int N = 10;
constexpr int M = 10;
constexpr int T = 10;

void Stencil2D(float const memory_in[N * M], float memory_out[N * M]);

void Example3(float const *in, float *out);
