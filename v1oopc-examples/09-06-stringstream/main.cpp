#include "ostream"
#include "vector.hpp"

// needed to get Catch working with MinGW
#define TWOBLUECUBES_CATCH_REPORTER_JUNIT_HPP_INCLUDED
namespace Catch{ class JunitReporter{ ~JunitReporter(); }; };

#include "catch_with_main.hpp"

std::ostream & operator<<( std::ostream & lhs, vector pos ){
   lhs << "(" << pos.x << "," << pos.y << ")";
   return lhs;
}

TEST_CASE( "operator<<" ){
   std::stringstream s;
   
   vector v( 1, 2 );
   
   s << v;
   
   REQUIRE( s.str() == "(1,2)" );   
}


