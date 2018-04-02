// System includes --------------------
#include <iostream>
#include <iomanip>

// Boost includes --------------------
#include <boost/version.hpp>

//-------------------------------------------------------------------------
// Function Prototypes
void BoostVersion( );
//-------------------------------------------------------------------------
// ========================================================================
//
//                          IMPLEMENTATION
//
// ========================================================================

void BoostVersion( ) {
  std::cout << "Boost version: " 
	    << BOOST_VERSION / 100000
	    << "."
	    << BOOST_VERSION / 100 % 1000
	    << "."
	    << BOOST_VERSION % 100 
	    << std::endl;
}
