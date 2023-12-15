#include "../src/Complex.h"     

using namespace std;

bool Complex::operator ==(const Complex &value){
  double r = real(value);
  double i = imag(value);

  return(r == re && i == im);
}