// Arrays are the lists of similar data types
#include<iostream>
using namespace std;

int main(void){
  // <datatype> arrayName [arraySize]

  int arr[] = {1, 2, 3, 4, 5};  // With size as much as the given initialzers
  int arr1[5] = {1, 2, 3};       // Give the values for 3 places, remaining are 0
  int arr2[5] = {};              // All five elements are 0
  // int arr[3] = {1, 2, 3, 4};    // Gives erros, as size of array is 3, but 4 initializers are given

  // print array
  for(int i=0; i<5; i++) cout<<arr[i]<<" ";
  cout<<endl;

  // Read array from the user
  for(int i=0; i<5; i++) cin>>arr2[i];

  return 0;
}
