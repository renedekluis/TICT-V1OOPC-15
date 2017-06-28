#include "ostream"
#include "vector.hpp"

// needed to get Catch working with MinGW
#define TWOBLUECUBES_CATCH_REPORTER_JUNIT_HPP_INCLUDED

namespace Catch{ class JunitReporter{ ~JunitReporter(); }; };

#include "catch_with_main.hpp"


TEST_CASE( "constructor, two_parameters" ){
   vector v( 3, 4 );
   std::stringstream s;
   s << v;
   REQUIRE(s.str() == "(3,4)");
}

TEST_CASE( "add two vectors" ){
  	vector v(1,4);
	vector r = v + vector(2,4);
	REQUIRE(v == vector(1,4) );
	REQUIRE(r == vector(3,8) );
}

//TEST_CASE( "add two vectors, failure" ){
//  	vector v(1,4);
//	vector r = v + vector(2,4);
//	REQUIRE(v == vector(1,4) );
//	REQUIRE(r == vector(3,9) );
//}

TEST_CASE("add vector into vector "){
	vector v(1,4);
	v += vector(2,2);
	REQUIRE(v == vector(3,6) );
}

//TEST_CASE("add vector into vector, failure"){
//	vector v(1,4);
//	v += vector(2,2);
//	REQUIRE(v == vector(3,7) );
//}


TEST_CASE("substract two vectors "){
	vector v(2,4);
	vector x = v - vector(1,2);
	REQUIRE(v == vector(2,4));
	REQUIRE(x == vector(1,2));
}

//TEST_CASE("substract vector from vector, failure"){
//	vector v(2,4);
//	vector x = v - vector(1,2);
//	REQUIRE(v == vector(1,4));
//	REQUIRE(x == vector(2,2));
//}

TEST_CASE("substract vector from another vector "){
	
	vector v(4,6);
	v -= vector(3,4);
	REQUIRE(v == vector(1,2));
	
}

TEST_CASE("Multiply two vectors "){
	
	vector v(2,3);
	vector x = v * vector(2,3);
	REQUIRE(v == vector(2,3));
	REQUIRE(x == vector(4,9));
	
}

//TEST_CASE("Multiply two vectors, failure"){
//	
//	vector v(2,3);
//	vector x = v * vector(2,3);
//	REQUIRE(v == vector(2,3));
//	REQUIRE(x == vector(5,9));
//	
//}

TEST_CASE("Multiply vector into other vector"){
	
	vector v(2,3);
	v *= vector(2,3);
	REQUIRE(v == vector(4,9));
	
}

//TEST_CASE("Multiply vector into other vector, failure"){
//	
//	vector v(2,3);
//	v *= vector(2,3);
//	REQUIRE(v == vector(5,9));
//	
//}

TEST_CASE("Devide two vectors"){
	
	vector v(4,6);
	vector x = v/vector(2,3);
	REQUIRE(v == vector(4,6));
	REQUIRE(x == vector(2,2));
	
}

//TEST_CASE("Devide two vectors"){
//	
//	vector v(4,6);
//	vector x = v/vector(2,3);
//	REQUIRE(v == vector(4,5));
//	REQUIRE(x == vector(3,2));
//	
//}

TEST_CASE("Devide vector from another vector"){
	
	vector v(2,4);
	v /= vector(2,2);
	REQUIRE(v == vector(1,2));
	
}

//TEST_CASE("Devide vector from another vector, failure"){
//	
//	vector v(2,4);
//	v /= vector(2,2);
//	REQUIRE(v == vector(0,2));
//	
//}

TEST_CASE("multiply vector by integer"){
	
	vector v(2,4);
	vector x = v * 3;
	REQUIRE(v == vector(2,4));
	REQUIRE(x == vector(6,12));
	
}


//TEST_CASE("multiply vector by integer"){
//	
//	vector v(2,4);
//	vector x = v * 3;
//	REQUIRE(v == vector(2,5));
//	REQUIRE(x == vector(6,2));
//	
//}
