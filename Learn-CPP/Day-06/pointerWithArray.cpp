// pointer to an array
#include<iostream>
using namespace std;

int main(void){
  int arr[5] = {4, 2, 6, 0, 15};
  int *arrPtr = arr;

  for(int i=0; i<(sizeof(arr)/sizeof(int)); i++){
    // Below ptr has changed the value
    // cout<<"\narr["<<i<<"] = "<<*arrPtr<<" Address: "<<arrPtr++;   // Increase the arrPtr after operation in each loop
    cout<<"\narr["<<i<<"] = "<<*(arrPtr+i)<<" Address: "<<(arrPtr + i);   // Increase the arrPtr after operation in each loop
  }
  free(arrPtr);
  return 0;
}
