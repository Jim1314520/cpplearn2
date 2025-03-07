#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int>> a(n, vector<int>(m));
  vector<vector<int>> b(m, vector<int>(k));
  vector<vector<int>> c(n, vector<int>(k));
  for(auto & line : a){
    for(auto & x : line){
      cin >> x;
    }
  }
  for(auto & line : b){
    for(auto & x : line){
      cin >> x;
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < k; j++){
      for(int l = 0; l < m; l++){
        c[i][j] += a[i][l] * b[l][j];

      }

    }
  }
  for(auto & line : c){
    for(auto & x : line){
      cout << x << " ";
    }
    cout << endl;
  }



}
