/*
Write a code, that takes an year as in input. and prints it it was a leap year.
Input-1: 2000 | Ouput-1: Leap Year!
Input-2: 2004 | Ouput-2: Leap Year!
Input-3: 1700 | Ouput-3: Not a Leap Year!
*/
#include<iostream>
using namespace std;

int main(void){
  int year;
  cout<<"Enter the year to check if it's leap year: ";
  cin>>year;

  bool isLeap = (year%100==0)?(year%400==0):(year%4==0);

  cout<<year<<" is a "<<(isLeap?"Leap":"Non leap")<<" year";

  return 0;
}
