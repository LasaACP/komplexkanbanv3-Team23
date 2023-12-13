#include "../src/Complex.h"
#include <cmath>

double Complex::arg(const Complex b)
{
  double real = b.re;
  double imaginary = b.im;
  
  return (std::atan(imaginary/real)) * 57.29578;
}
