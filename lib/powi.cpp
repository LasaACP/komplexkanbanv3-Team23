#include "../src/Complex.h"
#include <cmath>
#include <math.h>

Complex Complex::powi(const Complex y, int exp){
  double real = y.re;
  double imaginary = y.im;

  double R = std::sqrt(real*real + imaginary*imaginary);

  double returnR = std::pow(R, exp) * (std::cos(exp*std::atan(imaginary/real)));
  double returnI = std::pow(R, exp) * (std::sin(exp*std::atan(imaginary/real)));

  Complex ret = Complex(returnR, returnI);
  
  return ret;
  
}
