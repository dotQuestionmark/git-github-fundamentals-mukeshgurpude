#include<iostream>

using namespace std;

int main(void){
  // Comma(,) Operator returns last output
  int a=5, b=6, c=7;
  if(a<b, b>c){
    cout<<"This is inside if statement";
  }else{
    cout<<"Though the first expression is true, else is getting processed...";
  }
  return 0;
}
