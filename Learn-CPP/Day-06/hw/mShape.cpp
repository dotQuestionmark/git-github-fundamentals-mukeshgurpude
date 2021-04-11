// Construct the following m-shape

/*
n = 10    : 2 on 1st row((n-3)/4 +1, 5 on second row(n/2), 3 on third row((n-1)/4+1)

    *       *
  *   *   *   *   *
*       *       *
*/
#include<iostream>
using namespace std;

int main(void){
  // numPoints: Total points, points: points on each line(calculated separately for each line)
  int numPoints, points;
  cout<<"Enter the number of points: ";
  cin>>numPoints;

  // Draw first line
  // Initial padding is 4 space
  cout<<"    ";
  points = (numPoints-3)/4 + 1;
  for(int i=0; i<points; i++) cout<<"*       ";   // Leave 7 spaces
  
  // Second Line
  // Leave 2 spaces
  cout<<"\n  ";
  points = numPoints/2;
  for(int i=0; i<points; i++) cout<<"*   ";     // 3 spaces

  // Last line
  cout<<endl;
  points = (numPoints-1)/4 + 1;
  for(int i=0; i<points; i++) cout<<"*       ";   // 7 spaces

  return 0;
}
