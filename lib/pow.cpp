#include "../src/Complex.h"
#include <cmath>

Complex Complex::pow(const Complex c, const Complex exp) {
  double e = 2.71828;
  double r = std::sqrt(std::pow(c.re, 2) + std::pow(c.im, 2));
  double theta = std::atan(c.im / c.re);
  double p1re = std::pow(r, c.re) * (std::cos(c.im * (std::log10(r))));
  double p1im = std::sin(c.im * (std::log10(r)));
  double p2re = std::cos(theta * c.re);
  double p2im = std::sin(theta * c.im) * std::pow(e, -theta);
  double fnre = (p1re * p2re) - (p1im * p2im);
  double fnim = (p1re * p2im) - (p1im * p2re);
  Complex fn = Complex(fnre, fnim);
  return fn;
}