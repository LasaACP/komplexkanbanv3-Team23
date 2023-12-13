#include "../src/Complex.h"
#include <cmath>

#define e 2.718281828459045

using namespace std;

Complex Complex::powd(const Complex b, double exp){
  double a = b.re;
  double be = b.im;
  double r = std::abs(be);
  double theta = arg(b);

  double newR = std::pow(r, exp) * std::cos(exp * theta);
  double newI = std::pow(r, exp) * std::sin(exp * theta);
  
  return Complex(newR, newI);
}