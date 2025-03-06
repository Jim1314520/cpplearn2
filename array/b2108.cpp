#include <iostream>
using namespace std;
#include <cmath>
int main(){
  int n ,m;
  cin >> n >> m;
  int a[n][m];
  for(auto & line : a){
    for(auto &x :line){
      cin >> x;
    }
  }
  int b[n][m] ={};
  for(int i = 0;i < n; i++){
    for(int j = 0; j < m; j++){
      if( i ==0 || i == n -1 || j == 0 || j == m-1){//也可以修改i j的初始值
        b[i][j] = a [i][j];
      }else{
        b[i][j] =(int) round(( a[i][j-1] + a[i][j + 1] + a[i-1][j] + a[i+1][j] + a[i][j]) / 5.0 );
      }
    }
  }
  for(auto & line :b){
    for(auto & x:line){
      cout<<x<<" ";
    }
    cout<<endl;
  }
  
}