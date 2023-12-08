#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
  double re = 0.0; 
  double im = 0.0;

  Complex() {
    re = 0.0;
    im = 0.0;
  } 

  Complex(double r, double i) {
    re = r;
    im = i;
  }

  Complex tanh(Complex x);
  Complex tan(const Complex c);
  Complex sqrt(const Complex c); // Shaayan
  Complex sinh(const Complex c);
  Complex pow(const Complex c, const Complex exp);
  Complex sin(const Complex c);
  Complex powd(const Complex c, double exp);
  Complex powi(const Complex c, int exp); // Shaayan
  Complex powc(double c, const Complex exp);
  Complex log10(const Complex c);
  Complex log(const Complex c);
  Complex exp(const Complex);
  Complex cosh(const Complex c); // Shaayan
  Complex cos(const Complex c);
  Complex atan(const Complex c);
  Complex asin(const Complex c);
  Complex acos(const Complex c);
  double real(const Complex &c); // Shaayan
  Complex polar(double mag, double ang = 0.0);
  double norm(const Complex c);
  double imag(const Complex &c);
  Complex conj(const Complex c);
  double arg(const Complex c); //Shaayan
  double abs(const Complex c);
};

#endif //COMPLEX_H