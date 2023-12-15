#include "../src/Complex.h"
#include <cmath>

using namespace std;

Complex Complex::operator/(const Complex& c){
  Complex t;
  double tRe = (re*c.re) + (im * c.im);
  tRe /= std::pow(c.re, 2) + std::pow(c.im, 2);
  double tempImaginary = (c.re*im) - (c.im*re);
  tempImaginary /= std::pow(c.re, 2) + std::pow(c.im, 2);
  t.re = tRe;
  t.im = tempImaginary;
  return t;
}