#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int n, m, k;
  cin >> n >> m >> k;
  int a[n][m];
  int b [m][k];
  for(auto & line :a){
    for(auto & x : line){
      cin>>x;
    }
  }
  for(auto & line :b){
    for(auto & x : line){
      cin>>x;
    }
  }
  int c [n][k] ={};
 // int c [n][k];
  for(int i = 0 ;i < n ; i++){
    for(int j = 0;j < k; j++){
      for(int l = 0;l < m;l++){
        c[i][j] += a[i][l] * b[l][j]; 
      }
    }
  }
  for(auto & line : c){
    for(auto & x : line){
      cout<<x<<" ";
    }
    cout<<endl;
  }
} 