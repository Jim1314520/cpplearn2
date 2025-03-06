#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int n;
  cin >> n;
  int arr [n+1];
  fill(arr,arr + n+1,1);//1表示开着灯，0表示关灯
  for(int i = 1;i <= n;i++){
    //for(int j = n;j >= 1;j--){//当j == 1时，
    for(int j = i ;j <= n;j++){//这样写符合常规
      if(j % i == 0){
        arr[j] = (arr[j] +1) % 2 ;//当j == n 这样写第二次循环的时候，灯会一直保存关着的状态
      }
    }
  }
  for(int i = 1;i<=n;i++){
    if(arr[i] == 0){
      cout<<i<<" ";
    }
  }
  cout<<endl;

} 