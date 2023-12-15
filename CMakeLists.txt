# Complete the CMake buid files
cmake_minimum_required(VERSION 3.10)
project(MyProject)

add_library(MyLibrary STATIC
  lib/-.cpp
  lib/!=.cpp
  lib/*.cpp
  lib/+.cpp
  lib/<<.cpp
  lib/==.cpp
  lib/>>.cpp
  lib/abs.cpp
  lib/acos.cpp
  lib/arg.cpp
  lib/asin.cpp
  lib/atan.cpp
  lib/conj.cpp
  lib/cos.cpp
  lib/cosh.cpp
  lib/div.cpp
  lib/exp.cpp
  lib/imag.cpp
  lib/log.cpp
  lib/log10.cpp
  lib/norm.cpp
  lib/polar.cpp
  lib/pow.cpp
  lib/powc.cpp
  lib/powd.cpp
  lib/powi.cpp
  lib/real.cpp
  lib/sin.cpp
  lib/sinh.cpp
  lib/sqrt.cpp
  lib/tan.cpp
  lib/tanh.cpp
)

add_executable(MyProgram
  lib/-.cpp
  lib/!=.cpp
  lib/*.cpp
  lib/+.cpp
  lib/<<.cpp
  lib/==.cpp
  lib/>>.cpp
  lib/abs.cpp
  lib/acos.cpp
  lib/arg.cpp
  lib/asin.cpp
  lib/atan.cpp
  lib/conj.cpp
  lib/cos.cpp
  lib/cosh.cpp
  lib/div.cpp
  lib/exp.cpp
  lib/imag.cpp
  lib/log.cpp
  lib/log10.cpp
  lib/norm.cpp
  lib/polar.cpp
  lib/pow.cpp
  lib/powc.cpp
  lib/powd.cpp
  lib/powi.cpp
  lib/real.cpp
  lib/sin.cpp
  lib/sinh.cpp
  lib/sqrt.cpp
  lib/tan.cpp
  lib/tanh.cpp
)

target_link_libraries(MyProgram PRIVATE MyLibrary)





