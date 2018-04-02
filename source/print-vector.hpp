// System includes --------------------
#include <iostream>
#include <vector>

//-------------------------------------------------------------------------
// Function Prototypes
template< typename T >
void PrintVectorH( const std::vector< T >& v, std::ostream& os = std::cout  );

template< typename T >
void PrintVectorV( const std::vector< T >& variable );
//-------------------------------------------------------------------------
// ========================================================================
//
//                          IMPLEMENTATION
//
// ========================================================================

template< typename T >
void PrintVectorH( const std::vector< T >& v, std::ostream& os ) {
  size_t n = v.size( );
  for ( size_t i = 0; i < n-1; ++i ) {
    os << v[i] << " "; 
  }
  os << v[n-1];
}

template< typename T >
void PrintVectorV( const std::vector< T >& v, std::ostream& os = std::cout ) {
  size_t n = v.size( );
  for ( size_t i = 0; i < n-1; ++i ) {
    os << v[i] << "\n"; 
  }
  os << v[n-1];
}

template< typename T >
std::ostream& operator<<(std::ostream& os, const std::vector< T >& c)
{
  PrintVectorH( c, os );
  return os;
}
