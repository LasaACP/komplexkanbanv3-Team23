/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../src/fac.h"
#include "Complex.h"
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


















































TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Factorial" << endl;
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(4) == 24);
  REQUIRE(Factorial(5) == 1);
}

TEST_CASE("Catch2 test on the Square Root function.")
{
  cout << "Running tests on Square Root." << endl;
  double real = 
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


// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN