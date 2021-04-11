// Print the below array
/*

for n = 5
*
**
***
****
*****

*/

#include<iostream>
using namespace std;

int main(void){

  // Number of lines
  int numLines;
  cout<<"Enter the number of lines: ";
  cin>>numLines;

  for(int i=0; i<numLines; i++){
    for(int j=0; j<i+1; j++){
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}
