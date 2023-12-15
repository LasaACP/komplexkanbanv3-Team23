#include "../src/Complex.h"

Complex Complex::atan(const Complex c){
  double topi = 1 + c.im;
  double boti = 1 - c.im;

  Complex top (c.re, topi);
  Complex bot (c.re, boti);

  Complex topc = log(top);
  Complex botc = log(bot);

  double donei = topc.im - botc.im;
  double doner = topc.re - botc.re;

  Complex done (((1/2) * doner), ((1/2)*donei));
  return done;
}