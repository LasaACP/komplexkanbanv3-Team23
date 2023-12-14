#include "../src/Complex.h"     

using namespace std;

Complex Complex:: operator +(const Complex &value){
  double r = re + real(value);
  double i = re + imag(value);

  Complex *ret = new Complex(r, i);
  return *ret;
}