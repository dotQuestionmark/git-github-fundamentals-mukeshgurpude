// Find the sum of n natural numbers
#include<iostream>
using namespace std;

int main(void){
  int n, _sum = 0;

  cout<<"Enter the number: ";
  cin>>n;

  for(int i=1; i<=n; i++) _sum += i;

  // Alternative: cout<<n*(n+1)/2;

  cout<<"Sum of "<<n<<" natural numbers = "<<_sum;
  
  return 0;
}
