#include <iostream>
using namespace std;
#include <vector>
int main(){
  int m, n;
  cin >> m >> n;
  vector<vector<int>> matrix(m,vector<int>(n));
  for(auto & line :matrix){
    for(auto & x : line){
      cin >> x;
    }
  }
  int res = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(i == 0 || i == m -1 || j == 0 || j == n-1){
        res += matrix[i][j];
      }
    }
  }
  cout << res << endl;
}
