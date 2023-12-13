#include "../src/Complex.h"
#include <cmath>
#define e 2.718281828459045
using namespace std;

Complex Complex::exp(const Complex c){
  double thinger = std::pow(e, c.re) * std::sin(c.im);
  return Complex(std::pow(e, c.re) * std::cos(c.im), thinger);
}