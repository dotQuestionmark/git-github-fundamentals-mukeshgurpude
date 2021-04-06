// Print below rhombus
/*

n = 4
      * * * *
    * * * *
  * * * *
* * * *

*/

#include<iostream>
using namespace std;

int main(void){
  int numLines, gaps;
  
  cout<<"Enter the number of lines: ";
  cin>>numLines;

  cout<<"Pattern 4 - Rhombus: \n";
  for(int i=0; i<numLines; i++){
    gaps = (numLines - i -1)*2;
    for(int j=0; j<gaps; j++) cout<<" ";
    for(int j=0; j<numLines; j++){
      cout<<"* ";
    }
    cout<<endl;
  }

  return 0;
}
