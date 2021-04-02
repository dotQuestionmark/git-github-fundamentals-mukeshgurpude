#include<iostream>

using namespace std;


// Typedef is just like defining a new keyword with properties or behaviour of existing keyword
typedef int rollno;     // rollno has properties of `int` now


// enum is like defining a counter to the given set of items
// By default this counter will start from 0, but we can specify the counter value for specific item, and others will have there counters updated
enum working {mon=1, tue, wed, fri=5, sat, sun};
//              1     2    3    5      6    7    

int main(void){

  rollno myRollNo = 46;     // myRollNo is of type `int` only, but this version of code is much more readable
  cout<<"Size of 'myRollNo': "<<sizeof(myRollNo)<<endl<<endl;

  // Value wed, will be 3, as it second after the mon(1)
  cout<<"Value for wed: "<<working::wed<<endl;
  cout<<"Value for sat: "<<working::sat<<endl;
  // sat will be 6, as it comes just after fri(5)

  return 0;
}
