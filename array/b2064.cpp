#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int n;
  cin >> n;
  int arr[31];
  fill(arr,arr+31,1);
  for(int i =2;i < 31;i++){
    arr[i] = arr[i - 2] + arr[i - 1];
  }
  while(n--){
    int a;
    cin>>a;
    cout<<arr[a-1]<<endl;//注意这里的索引

  }
}