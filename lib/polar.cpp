#include "../src/Complex.h"

Complex Complex::polar(double mag, double ang = 0.0) {
  Complex c = Complex(mag, mag);
  return c;
}