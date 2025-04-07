#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #ifndef  DEBUG  
// #define debug

// #endif
#include <vector>
int main(){
  int n,m, c;
  cin >> n >> m >> c;
  vector<vector<int>> map(n + 1,vector<int>(m + 1)), prefix(n + 1,vector<int>(m + 1));
  for(int i = 1; i <= n; i++){ //输入地图
    for(int j = 1; j <= m; j++){
      // int x;
      // cin >> x;
      // map[i][j] = x;
      cin >> map[i][j];
    }
  }
    for(int i = 1; i <= n; i ++){ // 计算每个位置的前缀和
      for(int j = 1; j <= m; j++){
        prefix[i][j] = map[i][j] + prefix[i - 1][j] + prefix[i][j-1] - prefix[i-1][j-1];
      }
    }
  // debug(prefix);

  int maxV = INT_MIN;
  int x = 1, y = 1;
  for(int i = 0; i <= n - c; i++){
    for(int j = 0; j <= m - c; j++){
      int sum = prefix[i + c][j + c] - prefix[i + c][j] - prefix[i][j + c] + prefix[i][j];
      if(sum > maxV){
        maxV = sum;
        x = i + 1;
        y = j + 1;
      }
    }
  }
  cout << x << " " << y << endl;


}