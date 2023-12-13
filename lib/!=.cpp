#include <cmath>
#include "../src/Complex.h"     
#include <ostream>
using namespace std;

bool Complex::operator !=(const Complex &num){
  double real1 = real(num);
  double imag1 = imag(num);
  return !(real1 == re && imag1 == im);
}