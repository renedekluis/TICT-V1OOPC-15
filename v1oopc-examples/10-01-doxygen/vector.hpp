/// @file

/// \brief
/// 2D integer vector ADT
/// \details
/// This is 2D vector ADT that stores its two components as (signed) integers.
/// The x and y components are public attributes. 
/// The appropriate constructors and operators are provided.
class vector {
public:   

   /// \brief
   /// default constructor
   /// \details
   /// This constructor does not initialize the x and y attributes.
   vector();

   /// \brief
   /// multiply vector by integer
   /// \details
   /// This operator multiplies a vector by an integer, yielding a vector.
   /// The resulting vector points in the same direction as the original,
   /// but its length is rhs times longer than the original.
   /// In other words, the x and y attributes of the result are
   /// the x and y of the original, multiplied by the rhs.
   vector operator*( int rhs ) const;

};
