/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/

//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include "../tests/catch_amalgamated.hpp"
#include "Complex.h"
#include <iostream>
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main(int argc, char *argv[]) {
  // global setup...

  int result = Catch::Session().run(argc, argv);

  // global clean-up...
  cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else // Not CATCH_AMALGAMATED_CUSTOM_MAIN



// Isabel's Tests
// TEST_CASE("Quick Catch2 test on tanh") {
//   cout << "Running tests on tanh" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == (c.tanh(c)).re);
// }

// TEST_CASE("Quick Catch2 test on powc") {
//   cout << "Running tests on powc" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.powc(0.0, c).re);
// }

// TEST_CASE("Quick Catch2 test on asin") {
//   cout << "Running tests on asin" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.asin(c).re);
// }

TEST_CASE("Quick Catch2 test on log"){
  cout<< "Running tests on log" << endl;
  Complex c (0.0, 1.0);
  REQUIRE (c.log(c).re == 0.0);
  REQUIRE (float(c.log(c).im) == float(1.5707963268));
}

TEST_CASE("Quick Catch2 test imag") {
  cout << "Running tests on imag" << endl;
  Complex c(0.0, 1.0);
  REQUIRE(c.imag(c) == 1.0);
  Complex d(0.0, -1.0);
  REQUIRE(d.imag(d) == -1.0);
}


// Shaayan's Tests
TEST_CASE("Catch2 test on the Square Root function.")
{
  cout << "Running tests on Square Root." << endl;
  Complex x = Complex(1.0, 2.0);
  REQUIRE(float(x.sqrt(x).re) == float(1.2720196495)) ;
  REQUIRE(float(x.sqrt(x).im) == float(0.7861513778));
}

TEST_CASE("Catch2 test on the Power function.")
{
  cout << "Running tests on Power." << endl;
  Complex y = Complex(1.0,2.0);
  REQUIRE(float(y.powi(y, 2).re) == float(-3));
  REQUIRE(float(y.powi(y,2).im) == float(4));
}

TEST_CASE("Catch2 test on Hyperbolic Cosine.")
{
  cout << "Running tests on COSH." << endl;
  Complex z = Complex(1.0,2.0);
  REQUIRE(float(z.cosh(z).re) == float(-0.6421481247));
  REQUIRE(float(z.cosh(z).im) == float(1.0686074214));
}

TEST_CASE("Catch2 test on returning the Real Number.")
{
  cout << "Running tests on Real Numbers." << endl;
  Complex a = Complex(1.0,2.0);
  REQUIRE(a.real(a) == 1.0);
}

TEST_CASE("Catch2 test on returning the angle of a complex number.")
{
  Complex b = Complex(1.0,2.0);
  cout << "Running tests on Angles." << endl;
  REQUIRE(float(b.arg(b)) == float(63.4349488229));
}


//Miles' Tests
// TEST_CASE("Quick Catch2 test on sin"){
//   cout << "Running tests on sin" << endl;
//   Complex c (0.0, 1.0);
//   REQUIRE(c.re == c.sin(c).re);
// }

// TEST_CASE("Quick Catch2 test on log10"){
//   cout << "Running tests on log10" << endl;
//   Complex c (0.0, 1.0);
//   REQUIRE(c.re == c.log10(c).re);
// }

// TEST_CASE("Quick Catch2 tes on atan"){
//   cout << "Running tests on atan" << endl;
//   Complex c (0.0, 1.0);
//   REQUIRE(c.re == c.atan(c).re);
// }

// TEST_CASE("Quick Catch2 test on norm"){
//   cout << "Running tests on norm" << endl;
//   Complex c (0.0, 1.0);
//   REQUIRE(c.re == c.norm(c).re);
// }


//Vince's Tests
// TEST_CASE("Quick Catch2 test sinh") {
//   cout << "Running tests on sinh" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.sinh(c).re);
// }

// TEST_CASE("Quick Catch2 test pow") {
//   cout << "Running tests on pow" << endl;
//   Complex c(0.0, 1.0);
//   Complex c1(0.0, 1.0);
//   REQUIRE(c.re == c.pow(c, c1).re);
// }

// TEST_CASE("Quick Catch2 test cos") {
//   cout << "Running tests on cos" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.cos(c).re);
// }

// TEST_CASE("Quick Catch2 test polar") {
//   cout << "Running tests on polar" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.polar(c.re, c.im).re);
//   REQUIRE(c.re == c.polar(c.re).re);
// }

// TEST_CASE("Quick Catch2 test abs") {
//   cout << "Running tests on abs" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.abs(c));
// }


//Ryan's tests
// TEST_CASE("Quick Catch2 test powd") {
//   cout << "Running tests on powd" << endl;
//   Complex q(0.0, 1.0);
//   REQUIRE(q.re == q.powd(q, 1).re);
// }
// TEST_CASE("Quick Catch2 test tan") {
//   cout << "Running tests on tan" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE (c.re == c.tan(c).re);
// }
// TEST_CASE("Quick Catch2 test exp") {
//   cout << "Running tests on exp" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.exp(c).re);
// }
// TEST_CASE("Quick Catch2 test acos") {
//   cout << "Running tests on acos" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.acos(c).re);
// }
// TEST_CASE("Quick Catch2 test conj") {
//   cout << "Running tests on conj" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.conj(c).re);
// }


#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
