// Find max of 3 numbers using ternary operators
#include<iostream>
using namespace std;

int main(void){

  int a, b, c, _MAX;
  cout<<"Type in 3 integers: ";
  cin>>a>>b>>c;

  // Just use ternary operators to minimise the LOC (lines of code)
  _MAX = (a>b && a>c)?a:(b>c?b:c);
  cout<<"Maximum is: "<<_MAX;
  
  return 0;
}
