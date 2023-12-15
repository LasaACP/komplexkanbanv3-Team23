#include "../src/Complex.h"
#include <cmath>

Complex Complex::log10(const Complex c){
  double divi = std::log(10);
  Complex top = log(c);
  Complex ret (top.re/divi, top.im/divi);

  return ret;
}