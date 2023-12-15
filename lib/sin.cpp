#include "../src/Complex.h"
#include <cmath>

Complex Complex::sin(const Complex c){
  double r = real(c);
  double i = imag(c);
  double fi = ((std::sin(r)*std::cosh(i)*10)+.5)/10;
  double sec = ((std::cos(r)*std::sinh(i)*10)+.5)/10;
  Complex ret = Complex(fi,sec);
  return ret;
}