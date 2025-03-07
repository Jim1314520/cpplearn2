#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for(auto & line : a){
    for(auto & x : line){
      cin >> x;
    }
  }
  vector<vector<int>> b(m, vector<int>(n));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
         b[j][n - i - 1]  = a[i][j]; // (0, 2) -> (2, 2)  (1,2) -> (2, 1)
    }                                // 3 - 0 -1 = 2     3 - 1 - 1 = 1
  }                                  // (1, 0) -> (0, 1)  
  for(auto & line : b){
    for(auto & x : line){
      cout << x << " ";
    }
    cout << endl;
  }
}
