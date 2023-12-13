#include "../src/Complex.h"
#include <cmath>

Complex Complex::polar(double mag, double ang) {
  Complex c = Complex(std::cos(ang) * mag, std::sin(ang) * mag);
  return c;
}