#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
public:
  double re; 
  double im;

  friend ostream& operator << (ostream&, const Complex&);
  friend istream& operator >> (istream&, const Complex&);

  Complex() {
    re = 0.0;
    im = 0.0;
  }

  Complex(double r, double i) {
    re = r;
    im = i;
  }
  Complex operator +(const Complex& c);
Complex operator -(const Complex& c);
Complex operator !=(const Complex& c);
Complex operator *(const Complex& c);
Complex operator <<(const Complex& c);
Complex operator >>(const Complex& c);
Complex operator ==(const Complex& c);

  Complex tanh(Complex x);
  Complex tan(const Complex c);
  Complex sqrt(const Complex c); //changed
  Complex sinh(const Complex c);
  Complex pow(const Complex c, const Complex exp);
  Complex sin(const Complex c);
  Complex powd(const Complex c, double exp);
  Complex powi(const Complex c, int exp);
  Complex powc(double c, const Complex exp);
  Complex log10(const Complex c);
  Complex log(const Complex c);
  Complex exp(const Complex c);
  Complex cosh(const Complex c);
  Complex cos(const Complex c);
  Complex atan(const Complex c);
  Complex asin(const Complex c);
  Complex acos(const Complex c);
  double real(const Complex &c);
  Complex polar(double mag, double ang = 0.0);
  double norm(const Complex c);
  double imag(const Complex &c);
  Complex conj(const Complex c);
  double arg(const Complex c);
  double abs(const Complex c);
};

#endif //COMPLEX_H