// Pointer saves the address of similar data type variables
#include<bits/stdc++.h>
using namespace std;

int main(void){
  int var = 7;
  
  // Create pointer with * before the variable name, and assign the address of a variable to it
  int *ptr = &var;

  cout<<"Value of var: "<<var;
  cout<<"\nAddress of var: "<<ptr;
  cout<<"\nValue of var, from ptr: "<<(*ptr);
  return 0;
}
