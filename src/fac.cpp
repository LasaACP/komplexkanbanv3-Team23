#include "fac.h"
#include "Complex.h"

/* Simple test to try catch2 */
unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

Complex sqrt(Complex x){
  return x;
}

Complex PowerStub(Complex y, int exp){
  return y;
}

Complex HyperbolicCosineStub(Complex z){
  return z;
}

Complex RealStub(Complex a){ // work on this
  return a;
}

Complex ArgStub(Complex b)
{
  return b;
}