// Uses of typedef
#include <iostream>

using namespace std;

// Instead of writing long long int, now we have to write only ll, to define a long long int
typedef long long int ll;

int main(void){
  ll myLongInt;
  cout<<sizeof(ll);
}
