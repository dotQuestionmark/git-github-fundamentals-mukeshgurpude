// Write a code, that asks for n and then takes n integers and stores in an array. 
// Output the first number that is positive and even.
#include<bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cout<<"Size of array?: ";
  cin>>n;

  int arr[n] = {};

  cout<<"Enter the array elements: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  for(auto element:arr){
    if(element%2==0 && element>0){
      cout<<element;
      break;
    }
  }

  return 0;
}
