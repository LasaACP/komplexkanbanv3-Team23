#include "../src/Complex.h"
#include <cmath>

Complex Complex::cos(const Complex c) {
  double e = 2.71828;
  double co = std::cos(c.re);
  double ch = ((std::pow(e, c.im) + std::pow(e, -c.im)) / 2);
  double si = std::cos(c.re);
  double sh = ((std::pow(e, c.im) + std::pow(e, -c.im) / 2));
  Complex fn = Complex(co * ch, si * sh);
  return fn;
}