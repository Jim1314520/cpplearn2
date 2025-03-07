#include <iostream>
using namespace std;
#include <vector>
int main(){
  vector<vector<int>> matrix(5, vector<int>(5));
  for(auto & line :matrix){
    for(auto & x : line){
      cin >> x;
    }
  }
  bool anyfound = true;
  for(int i = 0; i < 5; i++){
    int max = matrix[i][0];
    int index = -1;
    for(int j = 0; j < 5; j++){
      if(index == -1 ||  matrix[i][j] > max){
        max = matrix[i][j];
        index = j; // 找到该行的最大值所在的列
      }
    }
    bool found = true;
    for(int k = 0; k < 5; k++){
      if(matrix[i][index] > matrix[k][index]){
        found = false; //有更加小的 说明该点不是鞍点
        break;
      }
    }
    if(found) {
      anyfound = false; // 表示找到了 
      cout << i + 1 << " " << index + 1 << " " << matrix[i][index] << endl;
    } 
  }
  if(anyfound){
    cout << "not found" << endl;
  }
}
