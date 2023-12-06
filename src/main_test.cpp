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

TEST_CASE("Quick Catch2 test on tanh")
{
  cout << "Running tests on tanh" << endl;
  Complex c (0.0, 1.0);
  REQUIRE (c.realp == tanh(c).realp);
}

TEST_CASE("Quick Catch2 test on pow"){
  cout << "Running tests on pow" << endl;
  const Complex c (0.0, 1.0);
  REQUIRE (c.realp == powc(0.0, c).realp);
}

TEST_CASE("Quick Catch2 test on log"){
  cout<< "Running tests on log" << endl;
  Complex c (0.0, 1.0);
  REQUIRE (c.realp == log(c).realp);
}

TEST_CASE("Quick Catch2 test on asin"){
  cout << "Running tests on asin" << endl;
  const Complex c (0.0, 1.0);
  REQUIRE (c.realp == asin(c).realp);
}

TEST_CASE("Quick Catch2 test imag"){
  cout << "Running tests on imag" << endl;
  const Complex c (0.0, 1.0);
  REQUIRE(c.realp == imag(c));
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN