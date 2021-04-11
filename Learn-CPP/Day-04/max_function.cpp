// Use of max function to get max of 3 variables
#include<iostream>
using namespace std;

int main(void){
  int a, b, c, _max;

  cout<<"Type in 3 integers: ";
  cin>>a>>b>>c;

  // Only takes to arguments
  _max = max(a, max(b, c));
  cout<<"Greatest of these numbers: "<<_max;

  return 0;
}
