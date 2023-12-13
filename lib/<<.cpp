#include "../src/Complex.h"     
#include <ostream>
using namespace std;

ostream& operator <<(ostream& o, const Complex & value){
  o << value.re << " + " << value.im << "i" << endl;

  return o;
}