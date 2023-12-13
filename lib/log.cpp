#include "../src/Complex.h"
#include <cmath>

Complex Complex::log(const Complex c){
  double real = std::sqrt((c.re*c.re) + (c.im*c.im));
  double imag = atan2(c.im, c.re);
  return Complex(std::log(real), imag);

}