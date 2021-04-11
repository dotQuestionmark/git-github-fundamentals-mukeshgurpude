// https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56#problem
#include<bits/stdc++.h>
using namespace std;

int main(void){
  int n, b, t;
  cin>>t;
  
  for(int _=0; _<t; _++){
      cin>>n>>b;
    
      int arr[n];
      for(int i=0; i<n; i++) cin>>arr[i];
    
      sort(arr, arr+n);
    
      int ptr = 0;
      while(ptr<n && b>=arr[ptr]){
        b -= arr[ptr++];
      }
      cout<<ptr;
      if(_ != t-1) cout<<endl;
  }
  return 0;
}
