void f( int & x ){}

int main(){
   const int x = 10;
   
   // f( x ); // compilation error
   // f( 3 + 5 ); // compilation error
   
   // suppress 'unused variable'
   (void)x;
   return 0;
}   