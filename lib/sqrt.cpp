#include "../src/Complex.h"
#include <cmath>

Complex Complex::sqrt(Complex x)
{
  double rea = x.re;
  double imaginary = x.im;

  double returnR = std::sqrt((std::sqrt(rea*rea + imaginary*imaginary) + rea)/2);
  double returnI = (imaginary/std::abs(imaginary))* std::sqrt((std::sqrt(rea*rea + imaginary*imaginary) - rea)/2);

  Complex ret = Complex(returnR, returnI);
  return ret;

}