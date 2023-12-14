#include <cmath>
#include "../src/Complex.h"
#include <ostream>
using namespace std;

Complex Complex::tan(const Complex c){
    double realNum = real(c);
    double imagNum = imag(c);
  double firstNum = floor(std::sin(2*realNum)/(std::cos(2*realNum)+std::cosh(2*imagNum))+0.5)/1;
  double secondNum = floor(std::sinh(2*imagNum)/(std::cos(2*realNum) + std::cosh(2*imagNum))+0.5)/1;
  Complex *finished = new Complex(firstNum, secondNum);
    return *finished;
}