#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int n ,m;
  cin >> n >> m;
  int a[n][m];
  for(auto & line : a){
    for(auto &x :line){
      cin >> x;
    }
  }
  int b[m][n] = {};
  for(int i = 0 ; i < n;i++){
    for(int j = 0 ; j < m; j++){
      b[j][i] =  a[i][j];
    } 
  }
  for(int i = 0 ; i < m;i++){//这里转置过后矩阵发生了改变
    for(int j = 0 ; j < n; j++){
      cout<<b[i][j]<<" ";
    } 
    cout<<endl;
  }
}