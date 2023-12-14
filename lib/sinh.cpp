#include "../src/Complex.h"
#include <cmath>

Complex Complex::sinh(const Complex c) {
  // formula sinh(complex) = sinh(real) * cos(imaginary) + cosh(real) * sin(imaginary)
  float e = 2.71828;
  double sh = ((std::pow(e, c.re) - std::pow(e, -c.re)) / 2);
  double co = std::cos(c.im);
  double ch = ((std::pow(e, c.re) + std::pow(e, -c.re)) / 2);
  double si = std::sin(c.im);
  Complex fnc = Complex(sh * co, ch * si);
  return fnc;
}