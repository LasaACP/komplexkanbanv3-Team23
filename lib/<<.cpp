<<<<<<< HEAD
#include "../src/Complex.h"
#include <cmath>
=======
#include "../src/Complex.h"     
>>>>>>> f15b7712595bf77b89cb07a772f79bd09a0dbac2
#include <ostream>
using namespace std;

ostream& operator <<(ostream& o, const Complex & value){
  o << value.re << " + " << value.im << "i" << endl;

  return o;
}