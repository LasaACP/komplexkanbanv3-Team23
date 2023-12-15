#include "../src/Complex.h"   

using namespace std;

Complex operator *(const Complex& value){
  double r = value.re;
  double i = value.im;

  double newR = r * re; 
  double newI = (r * im) + (i * re); 
  double newR2 = i * im * -1; 
  double finalR = newR + newR2;

  Complex *ret = new Complex(finalR, newI);
  return *ret;
 

}