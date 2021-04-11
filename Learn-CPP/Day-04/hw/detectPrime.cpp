// Check if the number is prime
#include<iostream>
using namespace std;

int main(void){
  int num;
  bool isPrime = true;

  cout<<"Enter the number to check: ";
  cin>>num;

  
  // Check till i*i<=num
  for(int i=2; i<num/2+1; i++){
    if(num%i==0){
      isPrime = false;
      break;
    }
  }

  cout<<num<<" is a "<<(isPrime?"Prime":"Composite")<<" number...";

  return 0;
}
