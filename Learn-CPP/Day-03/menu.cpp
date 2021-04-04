#include<iostream>
using namespace std;

int main(void){
  string time, name;
  cout<<"Enter your name: ";
  cin>>name;

  cout<<"What's the section of the day now?(morning, afternoon, eve): ";
  cin>>time;

  switch(time){     // May throw, switch quantity is not integer, in CPP version<17
    case "morning":
      cout<<"Good morning "<<name<<". Did you have breakfast yet?\n";
      break;
    case "afternoon":
      cout<<"Good afternoon "<<name<<". Did you have lunch yet?\n";
      break;
    case "eve":
    case "evening":
      cout<<"Good evening "<<name<<". Did you have evening yet?\n";
      break;
    case "night":
      cout<<"Good night "<<name<<".🥱\n";
      break;
    
    default:
      cout<<"Well, maybe you're living in different dimension\a";
  }

  return 0;
}
