// System includes --------------------
#include <iostream>

// Own includes --------------------
#include "permutation.hpp"
#include "boost-version.hpp"
#include "print-vector.hpp"

int main(int argc, char *argv[]) {
  BoostVersion( );
  std::string input("ABCDEF");
  auto perms = GeneratePermuations( input, "" );
  std::cout << perms << std::endl;
  return 0;
}
