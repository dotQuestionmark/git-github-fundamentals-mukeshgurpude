// Let's start with Relational and Logical operators
#include<iostream>

using namespace std;

int main(void){

  /*
  Relational Operators
  >     : Greater than
  <     : Less than
  >=    : Greater than or equal to
  <=    : Greater than or equal to
  ==    : Is equal
  !=    : Not equal
  */

  int a = 8, b = 7;

  cout<<"a = 8\nb = 7\n";
  cout<<"a > b: "<<(a>b);
  cout<<"\na < b: "<<(a<b);
  cout<<"\na >= b: "<<(a>=b);
  cout<<"\na <= b: "<<(a<=b);
  cout<<"\na == b: "<<(a==b);
  cout<<"\na != b: "<<(a!=b);


  /*
  Logical Operators
  &&    : AND
  ||    : OR
  !     : NOT   : Unary Operator
  */

  int c = 5;
  cout<<"\n\na>b and a>c  (Is a greatest of them): "<<(a>b) && (a>c);
  cout<<"\nb>c and b>a  (Is b greatest of them): "<<(b>c) && (b>a);
  cout<<"\nc>a and c>b  (Is a greatest of them): "<<(c>a) && (c>b);

  return 0;
}
