// Range based for loop, we don't need the array size for this
#include<bits/stdc++.h>
using namespace std;

typedef long int ll;

int main(void){
  ll arr[] = {6, 8, 5, 6, 12};

  ll sum = 0;

  // Range based for loop
  // for(type element variable: iterable)
  for(int element: arr){    // As the array elements are of int type
    sum += element;
  }

  for(auto element: arr){   // To automatically fetch the data type of array elements
    sum += element;
  }
  cout<<sum;

  return 0;
}
