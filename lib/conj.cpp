#include "../src/Complex.h"
#include <cmath>
#include <ostream>
using namespace std;

Complex Complex::conj(const Complex &c){
  return Complex(c.re, -c.im);
}