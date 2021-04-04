// Check if the number is a Perfect number

#include<iostream>
using namespace std;

typedef long long int ll;

int main(void){
  ll sum=1, num;
  cout<<"Enter the number: ";
  cin>>num;

  // Working, but time inefficient
  for(int i=2; i<num; i++){
    if(num%i == 0){
      sum += i;
    }
  }
  cout<<(sum == num && num!=1);

  return 0;
}
