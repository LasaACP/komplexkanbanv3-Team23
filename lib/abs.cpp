#include "../src/Complex.h"
#include <cmath>

double Complex::abs(const Complex c) {
  double z = std::sqrt(std::pow(c.re, 2) + std::pow(c.im, 2));
  return z;
}