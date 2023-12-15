#include "../src/Complex.h"
#include <cmath>

Complex Complex::asin(const Complex c){
  Complex root = powd(c, 2.0);
  root.re = root.re-1;
  root = sqrt(root);
  Complex tempC = c;
  double temp = c.re;
  tempC.re = -c.im;
  tempC.im = temp;
  tempC = log(tempC + root);
  Complex i = Complex(0, -1);
  return tempC * i;
}