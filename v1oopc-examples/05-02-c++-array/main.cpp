// example:
// C++-style 'clear array'
// what is wrong?
   
const int array_size = 1000;
int array[ array_size ];  

void f(){
   const int array_size = 20;
   char my_array[ array_size ];
   (void)my_array;
}

int main(){
   
   for( int i = 0; i < array_size; i++ ){ // correct array_size
      array[ i ] = 0;
   }

}   

