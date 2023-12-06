/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "../tests/catch_amalgamated.hpp"
#include "../src/fac.h"
#include "Complex.h"
#include "../lib/asin.cpp"
#include "../lib/imag.cpp"
#include "../lib/log.cpp"
#include "../lib/powc.cpp"
#include "../lib/tanh.cpp"

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
  REQUIRE(SquareRootStub(Complex x) == x);
}

TEST_CASE("Catch2 test on the Power function.")
{
  cout << "Running tests on Power." << endl;
  REQUIRE(PowerStub(Complex y) == y);
}


TEST_CASE("Catch2 test on Hyperbolic Cosine.")
{
  cout << "Running tests on COSH." << endl;
  REQUIRE(HyperbolicCOsineStub(Complex z) == z);
}


TEST_CASE("Catch2 test on returning the Real Number.")
{
  cout << "Running tests on Real Numbers." << endl;
  REQUIRE(RealStub(Complex a) == a);
}

TEST_CASE("Catch2 test on returning the angle of a complex number.")
{
  cout << "Running tests on Angles." << endl;
  REQUIRE(ArgStub(Complex b) == b);

}

// Isabel's Tests
TEST_CASE("Quick Catch2 test on tanh")
{
  cout << "Running tests on tanh" << endl;
  Complex c (0.0, 1.0);
  REQUIRE (c.re == tanh(c).re);
}

TEST_CASE("Quick Catch2 test on pow"){
  cout << "Running tests on pow" << endl;
  const Complex c (0.0, 1.0);
  REQUIRE (c.re == powc(0.0, c).re);
}

TEST_CASE("Quick Catch2 test on log"){
  cout<< "Running tests on log" << endl;
  Complex c (0.0, 1.0);
  REQUIRE (c.re == log(c).re);
}

TEST_CASE("Quick Catch2 test on asin"){
  cout << "Running tests on asin" << endl;
  const Complex c (0.0, 1.0);
  REQUIRE (c.re == asin(c).re);
}

TEST_CASE("Quick Catch2 test imag"){
  cout << "Running tests on imag" << endl;
  const Complex c (0.0, 1.0);
  REQUIRE(c.re == imag(c));
}

#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN