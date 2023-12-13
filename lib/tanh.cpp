#include "../src/Complex.h"
#include <cmath>

Complex Complex::tanh(Complex x){
  Complex num = sinh(x);
  Complex dem = cosh(x);
  Complex c = num/dem; 
  return c;
}