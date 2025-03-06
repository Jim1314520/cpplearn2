#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> matrix(n,vector<int>(m));
  for(auto & line : matrix){
    for(auto & x : line){
      cin >> x;
    }
  }
  vector<vector<int>> matrix2(m,vector<int>(n));
  for(int i = 0; i< n; i++){
    for(int j = 0; j < m; j++){
      matrix2[j][i] = matrix[i][j];
    }
  }
  for(auto & line : matrix2){
    for(auto & x : line){
      cout << x << " ";
    }
    cout << endl;
  }
}