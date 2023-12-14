#include "../src/Complex.h"     
#include <ostream>
using namespace std;

istream &operator >> (istream&i, Complex& value){
  i >> value.re;
  i >> value.im;

  return i;
}