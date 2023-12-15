#include "../src/Complex.h"
#include <cmath>

using namespace std;

bool Complex::operator==(const Complex& c) {
  double r1 = std::round(re*1000000)/1000000;
  double r2 = std::round(c.re*1000000)/1000000;
  double i1 = std::round(im*1000000)/1000000;
  double i2 = std::round(c.im*1000000)/1000000;
  return ((r1==r2) && (i1==i2));

}