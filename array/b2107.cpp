#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int n ,m;
  cin >> n >>m;
  int a[n][m];
  for(auto & line : a){
    for(auto &x :line){
      cin >> x;
    }
  }
  int b[m][n] = {};
  for(int i =0;i < n ;i++){
    for(int j = 0; j < m; j++){
      b[j][n-1-i] =  a[i][j];
    }
  }
  for(auto & line :b){
    for(auto & x:line){
      cout<<x<<" ";
    }
    cout<<endl;
  }
  
}