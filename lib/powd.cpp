#include "../src/Complex.h"
#include <cmath>

#define e 2.718281828459045

using namespace std;

Complex Complex::powd(const Complex b, double exp){
  double a = b.re;
  double be = b.im;
  double r = Complex::abs(be);
  double theta = arg(b);

  double newR = Complex::pow(r, exp) * std::cos(exp * theta);
  double newI = Complex::pow(r, exp) * Complex::sin(exp * theta);
  
  return Complex(newR, newI);
}