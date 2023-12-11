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

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN




//Shaayan's Tests
TEST_CASE("Catch2 test on the Square Root function.")
{
  cout << "Running tests on Square Root." << endl;
  Complex x;
  REQUIRE(x.re == x.sqrt(x).re);
}

TEST_CASE("Catch2 test on the Power function.")
{
  cout << "Running tests on Power." << endl;
  Complex y;
  REQUIRE(y.re == y.powi(y, 1).re);
}

TEST_CASE("Catch2 test on Hyperbolic Cosine.")
{
  cout << "Running tests on COSH." << endl;
  Complex z;
  REQUIRE(z.re == z.cosh(z).re);
}

TEST_CASE("Catch2 test on returning the Real Number.")
{
  cout << "Running tests on Real Numbers." << endl;
  Complex a;
  REQUIRE(a.real(a) == 0.0);
}

TEST_CASE("Catch2 test on returning the angle of a complex number.")
{
  Complex b;
  cout << "Running tests on Angles." << endl;
  REQUIRE(b.arg(b) == 0.0);
}

//Isabel's Tests
// TEST_CASE("Quick Catch2 test on tanh")
// {
//   cout << "Running tests on tanh" << endl;
//   Complex c (0.0, 1.0);
//   REQUIRE (c.re == tanh(c).re);
// }

// TEST_CASE("Quick Catch2 test on pow"){
//   cout << "Running tests on pow" << endl;
//   const Complex c (0.0, 1.0);
//   REQUIRE (c.re == powc(t0.0, c).re);
// }

// TEST_CASE("Quick Catch2 test on log"){
//   cout<< "Running tests on log" << endl;
//   Complex c (0.0, 1.0);
//   REQUIRE (c.re == log(c).re);
// }

// TEST_CASE("Quick Catch2 test on asin"){
//   cout << "Running tests on asin" << endl;
//   const Complex c (0.0, 1.0);
//   REQUIRE (c.re == asin(c).re);
// }

//  TEST_CASE("Quick Catch2 test imag"){
//   cout << "Running tests on imag" << endl;
//   const Complex c (0.0, 1.0);
//   REQUIRE(c.re == imag(c));
// }

// Miles' Tests
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
//   REQUIRE(c.re == c.polar(c.re).re);
// }

// TEST_CASE("Quick Catch2 test abs") {
//   cout << "Running tests on abs" << endl;
//   Complex c(0.0, 1.0);
//   REQUIRE(c.re == c.abs(c));
// }

//Ryan's tests
// TEST_CASE("Quick Catch2 test pow") {
//   cout << "Running tests on pow" << endl;
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