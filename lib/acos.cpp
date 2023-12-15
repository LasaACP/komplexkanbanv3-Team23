#include "../src/Complex.h"
#include<cmath>
Complex Complex::acos(const Complex c){
if (c.im == 0){
  return Complex(std::acos(c.re), 0);
}
  else{
    return Complex(0, -1)*log(sqrt(powi(c, 2)-Complex(1, 0))+Complex(1, 1));
  }

}