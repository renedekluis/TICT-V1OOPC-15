#include "ostream"
#include "vector.hpp"

// needed to get Catch working with MinGW
#define TWOBLUECUBES_CATCH_REPORTER_JUNIT_HPP_INCLUDED
namespace Catch{ class JunitReporter{ ~JunitReporter(); }; };

#include "catch_with_main.hpp"

bool operator==( vector lhs, vector rhs ){
   return ( lhs.x == rhs.x ) && ( lhs.y == rhs.y );
}

std::ostream & operator<<( std::ostream & lhs, vector pos ){
   lhs << "(" << pos.x << "," << pos.y << ")";
   return lhs;
}

TEST_CASE( "constructors, default" ){
   vector v;
   REQUIRE( v == vector( 1, 7 ) );   
}


