#include<iostream>

using namespace std;

int main(void){
  /*

  Primitive Data types: (int, char): Integral, bool, (float, double): Decimal
  Data type    
  signed        - Default one , one bit is reserved for the sign  
  unsigned      - All bits are used, minimum number will be 0
  short         - Almost half the size
  long          - Almost double the size (depends on compiler)

  */

  int var = 5;
  signed int svar = 6;
  unsigned int uvar = 6;
  short int shvar = 6;
  long int lvar = 6;


  cout<<"Size of int: "<<sizeof(var)<<endl;    // 4
  cout<<"Size of signed int: "<<sizeof(svar)<<endl;   // 4
  cout<<"Size of unsigned int: "<<sizeof(uvar)<<endl;   // 4
  cout<<"Size of short int: "<<sizeof(shvar)<<endl;  // 2
  cout<<"Size of long int: "<<sizeof(lvar)<<endl;   // 8

  return 0;
}
