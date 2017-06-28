// example:
// use a line class 
// that is declared and defined in separate header and implementayion files

#include "line.hpp"

int main(int argc, char **argv){
   line diagonal_line( 20, 20, 40, 40 );
   diagonal_line.print();
}
