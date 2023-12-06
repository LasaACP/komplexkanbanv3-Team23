struct Complex {
public:
  double real = 0.0;
  double imaginary = 0.0;

  Complex() {
    real = 0.0;
    imaginary = 0.0;
  }

  Complex(double r, double i) {
    real = r;
    imaginary = i;
  }

  Complex tanh(const Complex c);
  Complex tan(const Complex c);
  Complex sqrt(const Complex c);
  Complex sinh(const Complex c);
  Complex cosh(const Complex c);
};