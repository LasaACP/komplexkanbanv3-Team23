#include "../src/Complex.h"

Complex Complex::polar(double mag, double ang) {
  Complex c = Complex(mag, ang);
  return c;
}