#include<iostream>
using namespace std;

int main(void){
  int choice;
  cout<<"Enter your choice: ";
  cin>>choice;

  // Compare the value of `choice` variable
  switch(choice){
    case 0:
      cout<<"Choice 0"<<endl;
      break;
    case 1:
      cout<<"Choice 1"<<endl;
      break;
    case 2:
      cout<<"Choice 2"<<endl;
      break;
    
    default:
      cout<<"Not defined case"<<endl;
  }
  return 0;
}
