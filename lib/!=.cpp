#include "../src/Complex.h" 
using namespace std;

bool Complex::operator!=(const Complex &num) {
  return !(*this == num);
}