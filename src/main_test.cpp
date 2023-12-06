/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "../tests/catch_amalgamated.hpp"
#include "Complex.h"
#include "../lib/sqrt.cpp"
#include "../lib/powi.cpp"
#include "../lib/cosh.cpp"
#include "../lib/real.cpp"
#include "../lib/arg.cpp"

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
  Complex x = Complex();
  REQUIRE(sqrt(x).realp == x.realp);
}

TEST_CASE("Catch2 test on the Power function.")
{
  cout << "Running tests on Power." << endl;
  Complex y = Complex();
  REQUIRE(powi(y, 1).realp == y.realp);
}


TEST_CASE("Catch2 test on Hyperbolic Cosine.")
{
  cout << "Running tests on COSH." << endl;
  Complex z = Complex();
  REQUIRE(cosh(z).realp == z.realp);
}


TEST_CASE("Catch2 test on returning the Real Number.")
{
  cout << "Running tests on Real Numbers." << endl;
  Complex a = Complex();
  //REQUIRE();
}

TEST_CASE("Catch2 test on returning the angle of a complex number.")
{
  Complex b = Complex();
  cout << "Running tests on Angles." << endl;
  REQUIRE(arg(b) == 0.0);
}

// Isabel's Tests
// TEST_CASE("Quick Catch2 test on tanh")
// {
//   cout << "Running tests on tanh" << endl;
//   Complex c (0.0, 1.0);
//   REQUIRE (c.realp == tanh(c).realp);
// }

// TEST_CASE("Quick Catch2 test on pow"){
//   cout << "Running tests on pow" << endl;
//   const Complex c (0.0, 1.0);
//   REQUIRE (c.realp == powc(0.0, c).realp);
// }

// TEST_CASE("Quick Catch2 test on log"){
//   cout<< "Running tests on log" << endl;
//   Complex c (0.0, 1.0);
//   REQUIRE (c.realp == log(c).realp);
// }

// TEST_CASE("Quick Catch2 test on asin"){
//   cout << "Running tests on asin" << endl;
//   const Complex c (0.0, 1.0);
//   REQUIRE (c.realp == asin(c).realp);
// }

// TEST_CASE("Quick Catch2 test imag"){
//   cout << "Running tests on imag" << endl;
//   const Complex c (0.0, 1.0);
//   REQUIRE(c.realp == imag(c));
// }

#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN