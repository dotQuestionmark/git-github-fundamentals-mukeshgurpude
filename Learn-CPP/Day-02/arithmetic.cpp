#include<iostream>
using namespace std;

int main(void){

  char a = 'a';
  char b = 'b';

  char c = a + b;

  cout<<"Printing directly the sum: "<<a+b <<endl;    // Output is 195(97 + 98), as internally char are stored as integers(ASCII values)
  cout<<"Printing variable declared as `char`: "<<c<<endl;      // Outputs ├ because `c` is declared as the `char`, so 195 is converted back to character

  // Integers

  int Int1 = 5;
  int Int2 = 7;

  int sum = Int1 + Int2;
  int diff = Int1 - Int2;
  int product = Int1 * Int2;
  int remainder = Int1 % Int2;    // It's called a modulo operator

  cout<<"Working with Integers";
  cout<<"Sum: "<<sum<<endl;
  cout<<"Diff: "<<diff<<endl;
  cout<<"Product: "<<product<<endl;
  cout<<"Remainder: "<<remainder<<endl;

  return 0;
}
