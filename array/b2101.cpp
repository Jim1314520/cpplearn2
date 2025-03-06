#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
int main(){
  int m,n;
  cin >> m >> n;
  int arr[m][n];
  // for(auto & line:arr){
  //   for(auto &x :line){
  //     cin>>x;
  //   }
  // }
  for(int i =0;i<m;i++){
    for(int j =0;j < n;j++){
      cin>>arr[i][j];
    }
  }
  int sum =0;
  for(int i = 0;i<m;i++){
    for(int j = 0;j <n;j++){
      if(i == 0 || i == m-1 || j == 0 || j == n-1){
        sum +=arr[i][j];
      }
    }
  }
 // cout<< sum - arr[0][0]- arr[0][n-1] - arr[m-1][0] -arr[m-1][n-1]; 在之前的计算中，并没有重复计算
  cout<<sum;
}