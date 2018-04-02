#ifndef PERMUTATION_HPP
#define PERMUTATION_HPP

// System includes --------------------
#include <iostream>
#include <string>

// Boost includes --------------------
#include <boost/math/special_functions/factorials.hpp>

//-------------------------------------------------------------------------
// Function Prototypes
void RecursivePermute( std::string input, std::string output,
		       std::vector< std::string >& perms  );
std::vector< std::string > GeneratePermuations( std::string input, std::string output );
//-------------------------------------------------------------------------
// ========================================================================
//
//                          IMPLEMENTATION
//
// ========================================================================
std::vector< std::string > GeneratePermuations( std::string input, std::string output ) {
  auto nperms = boost::math::factorial<double>(input.size( ));
  std::vector< std::string > perms;
  perms.reserve( static_cast<size_t>(nperms) );
  RecursivePermute( input, output, perms );
  return perms;
}

void RecursivePermute( std::string input, std::string output,
		       std::vector< std::string >& perms  ) {
  if ( input.size( ) == 0 ) {
    perms.push_back( output );
  }
  for ( size_t i = 0; i < input.size( ); ++i ) {
    RecursivePermute( input.substr( 1 ), output + input.at( 0 ), perms );
    std::rotate( input.begin( ), input.begin( ) + 1, input.end( ) );
  }
}

#endif // PERMUTATION_HPP
