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

#else  // Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Quick Catch2 test on tanh") {
  cout << "Running tests on tanh" << endl;
  Complex c;
  REQUIRE(c.realp == tanh(0.0));
}

/*TEST_CASE("Quick Catch2 test on pow"){
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
#endif // ifndef CATCH_AMALGAMATED_CUSTOM_MAIN