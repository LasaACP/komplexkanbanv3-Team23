struct Complex {
public:
  double realp = 0.0;
  double imaginary = 0.0;

  Complex() {
    realp = 0.0;
    imaginary = 0.0;
  }

  Complex(double r, double i) {
    realp = r;
    imaginary = i;
  }

  Complex tanh(const Complex c);
  Complex tan(const Complex c);
  Complex sqrt(const Complex c);
  Complex sinh(const Complex c);
  Complex pow(const Complex c, const Complex exp);
  Complex sin(const Complex c);
  Complex powd(const Complex c, double exp);
  Complex powi(const Complex c, int exp);
  Complex powc(double c, const Complex exp);
  Complex log10(const Complex c);
  Complex log(const Complex c);
  Complex exp(const Complex);
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