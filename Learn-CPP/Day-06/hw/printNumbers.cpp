// Print the following pattern
/*
n = 5
        1
      1   2
    1   2   3
  1   2   3   4
1   2   3   4   5

*/
#include<iostream>
using namespace std;

int main(void){
  int numLines, gaps;
  cout<<"Enter the number of lines: ";
  cin>>numLines;

  for(int i=1; i<=numLines; i++){
    gaps = (numLines - i)*2;
    for(int j=0; j<gaps; j++) cout<<" ";
    for(int j=1; j<=i; j++) cout<<j<<"   ";
    cout<<endl;
  }

  return 0;
}
