// Print the below pattern
/*

n = 5
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1

*/
#include<iostream>
using namespace std;

int main(void){
  int numLines;
  bool one;

  cout<<"Enter the number of lines: ";
  cin>>numLines;

  cout<<"Pattern 2: \n";
  for(int i=0; i<numLines; i++){
    one = true;
    for(int j=0; j<i+1; j++){
      cout<<(one?1:0)<<" ";
      one = !one;
    }
    cout<<endl;
  }

  /*
  Pattern 3
  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1
  */

 cout<<"\nPattern 3: \n";
  for(int i=0; i<numLines; i++){
    one = (i%2 == 0);
    for(int j=0; j<i+1; j++){
      cout<<(one?1:0)<<" ";
      one = !one;
    }
    cout<<endl;
  }

  return 0;
}
