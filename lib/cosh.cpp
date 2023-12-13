#include "../src/Complex.h"
#include <bits/stdc++.h>
#include <cmath>

Complex Complex::cosh(const Complex z){
  double real = z.re;
  double imaginary = z.im;
  
  double returnR = std::cosh(real) * std::cos(imaginary);
  double returnI = std::sinh(real) * std::sin(imaginary);

  Complex temp = Complex(returnR, returnI);
  
  return temp;
}