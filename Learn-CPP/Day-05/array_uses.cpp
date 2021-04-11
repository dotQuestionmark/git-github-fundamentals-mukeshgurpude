// sum of array elements
#include<iostream>
using namespace std;

int main(void){
  int n;
  cout<<"What's the size of your array: ";
  cin>>n;

  int arr[n];

  cout<<"\nDrop in "<<n<<" elements separated by space: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int sum = 0;
  for(int i=0; i<n; i++) sum+=arr[i];

  cout<<"\nSum of your array elements is: "<<sum;
  return 0;
}
