// Introduction to for_each loop
#include<bits/stdc++.h>
using namespace std;

typedef long int ll;

void utility(ll element){
  cout<<element<<"*5 = "<<element*5<<endl;
}

int main(void){
  ll arr[] = {6, 8, 5, 6, 12};
  ll n = sizeof(arr)/sizeof(ll);

  ll sum = 0;

  // Have to multiply every element by multiplying by 5

  // Starting address, last address, callback function
  for_each(arr, arr+n, utility);

  return 0;
}
