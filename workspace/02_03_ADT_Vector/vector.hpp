#ifndef VECTOR_HPP
#define VECTOR_HPP



/// Vector ADT
//
/// This is an ADT that implements vectors.
/// The x and y are stored as two (signed) integers.
/// The appropriate constructors and operators are provided.
class vector{
private:
	int x;
	int y;
	
public:
	/// constructor from explicit values
	//
	/// This constructor initializes a vector from its x and y.
	vector(int x, int y):
	x(x),
	y(y)
	{}
	
	/// compare two vectors
	//
	/// This operator tests for equality. It returns true
	/// if and only if the x and y of both
	/// operands are equal.
	bool operator==(const vector & rhs)const{
		return (x == rhs.x && y == rhs.y);
	}
	
	
	/// output operator for a vector
	//
	/// This operator<< prints a constructor in the format
	/// (x,y) where both values are printed as
	/// decimal values.
	friend std::ostream & operator<<(std::ostream & lhs, const vector & rhs){
		return lhs
		<< "("
		<< rhs.x
		<< ","
		<< rhs.y
		<< ")";
	}
	
	/// add a vector by an other vector
	//
	/// This operator+ adds a vector by an vector value.
	vector operator+(const vector & rhs) const{
		
		return vector(
		x + rhs.x,
		y + rhs.y
		);
	}
	
	/// add a vector to another vector
	//
	/// This operator+= adds a vector value by a vector variable.
	vector & operator+=(const vector & rhs){
		
		x = x + rhs.x;
		y = y + rhs.y;
		return *this;
	}
	
	/// substract a vector from another vector
	//
	/// This operator- substracts a vector value from a vector variable.
	vector operator-(const vector & rhs)const{
		return vector(
		x - rhs.x,
		y - rhs.y
		);
	}
	
	/// substract a vector from another vector
	//
	/// This operator-= substracts a vector value from an other vector.
	vector & operator-=(const vector & rhs){
	
		x = x - rhs.x;
		y = y - rhs.y;
		return *this;
	}
	
	
	/// multiply a vector by an integer
	//
	/// This operator* multiplies a vector by an integer value.
	vector operator*( const int rhs ) const {
		return vector( x * rhs, y * rhs );
	}
	
	/// multiply a vector by a vector
	//
	/// This operator* multiplies a vector by an other vector.
	vector operator*( const vector & rhs) const {
		return vector( x * rhs.x, y * rhs.y );
	}
	
	/// multiply a vector to another vector
	//
	/// This operator*= multiplys a vector value by an other vector.
	vector & operator*=( const vector & rhs){
		x = x * rhs.x;
		y = y * rhs.y;
		return *this;
	}
	
	/// devide a vector from another vector
	//
	/// This operator/ devides a vector value from an other vector variable.
	vector operator/(const vector & rhs)const{
		return vector(x / rhs.x, y / rhs.y);
	}
	
	/// devide a vector from another vector
	//
	/// This operator/= devides a vector value from an other vector variable.
	vector & operator/=( const vector & rhs){
		x = x / rhs.x;
		y = y / rhs.y;
		return *this;
	}
};


#endif