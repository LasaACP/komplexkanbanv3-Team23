#include "../src/Complex.h" 
using namespace std;

bool const operator!=(const Complex &num, const Complex &num2) {
  double real1 = num.re;
  double imag1 = num.im;

  double real2 = num2.re;
  double imag2 = num2.im;
  
  return !(real1 == real2 && imag1 == imag2);
}