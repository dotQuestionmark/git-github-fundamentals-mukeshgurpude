// 
#include<bits/stdc++.h>   // Includes most needed libraries, no other needed
using namespace std;

int main(void){
  int n;
  cout<<"What's the size: ";
  cin>>n;

  int arr[n] = {};
  
  cout<<"Type in all of the elements here separated by space: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  // Sort in the increasing order
  sort(arr, arr + n);

  // Sort in decreasing order
  sort(arr, arr+n, greater<int>());

  // Print the array
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
