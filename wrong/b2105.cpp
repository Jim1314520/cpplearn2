#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int>> n1(n,vector<int>(m));
  vector<vector<int>> n2(m,vector<int>(k));
  vector<vector<int>> n3(n,vector<int>(k));
  for(auto & line : n1){
    for(auto & x : line){
      cin >> x;
    }
  }
  for(auto & line : n2){
    for(auto & x : line){
      cin >> x;
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < k; j++){//变量增加错误
      for(int l = 0; l < m; l++){
        n3[i][j] += n1[i][l] * n2[l][j];
      }
    }
  }
  for(auto & line : n3){
    for(auto & x : line){
      cout << x << " ";
    }
    cout << endl;
  }
}