// Trying to find efficient algorithm to find if the number is a Perfect Number
#include<iostream>
#include<assert.h>
using namespace std;

typedef long int l;

bool isPerfect(int num){
  l sum = 1;
  for (int i = 2; i < num/2; i++){
    if(num%i == 0){
      sum += i;
      if(num/i >= num/2 && num/i != i){
        sum += num/i;
      }
    }
  }
  return num==sum;
}

int main(void){
  assert(isPerfect(6));
  assert(isPerfect(28));
  assert(isPerfect(496));
  assert(!isPerfect(5));
  cout<<"Yupp";
}
