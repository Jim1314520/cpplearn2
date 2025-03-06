#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    int a;
    cin>>a;
    arr[n-i-1] = a;

  }
  for(auto x:arr){
    cout<<x<<" ";
  }
  
  cout<<endl;
  
}