#include "../src/Complex.h"
#include <cmath>

double Complex::norm(const Complex c){
  return (c.re * c.re) + (c.im * c.im);
}