#include "../src/Complex.h"     

using namespace std;

Complex Complex::operator -(const Complex &value){
  double i = re - real(value);
  double r = im - imag(value);

  Complex ret = Complex(r,i);

  return ret;

}