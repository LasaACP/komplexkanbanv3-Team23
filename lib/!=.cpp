<<<<<<< HEAD
#include "../src/Complex.h" #include < ostream>
#include <cmath>
using namespace std;

bool const Complex::operator!=(const Complex &num) {
  double real1 = real(num);
  double imag1 = imag(num);
  return !(real1 == re && imag1 == im);
=======
<<<<<<< HEAD
#include <cmath>
#include "../src/Complex.h"     
#include <ostream>
using namespace std;

Complex Complex::operator !=(const Complex &num){
  double real1 =real(num);
  double imag1 =  imag(num);
=======
#include "../src/Complex.h"     

using namespace std;

bool Complex::operator !=(const Complex &num){
  double real1 = real(num);
  double imag1 = imag(num);
>>>>>>> 58fa45a2510d35d5024ca8d81b2184c782d1380c
    return !(real1 == re && imag1 == im);
>>>>>>> f15b7712595bf77b89cb07a772f79bd09a0dbac2
}