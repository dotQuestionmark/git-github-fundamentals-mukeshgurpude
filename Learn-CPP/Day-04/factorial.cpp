#include<iostream>
using namespace std;

int main(void){
  int n;
  unsigned long long int fact=1;
  cout<<"Enter n: ";
  cin>>n;

  for(int i=2; i<=n; i++) fact*=i;
  cout<<fact;

  return 0;
}
