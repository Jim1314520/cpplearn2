#include <iostream>
using namespace std;
#include <vector>
// int main(){
//   vector<vector<int>> matix(5,vector<int>(5));
//   for(auto & line :matix){
//     for(auto & x : line){
//       cin >> x;
//     }
//   }
//   for(int i = 0; i < 5 ; i++){
//     int max = matix[i][0]  ;//假设最大值初始化为第一列的数
//     int index = 0;//一行中最大的数所在的列
//     for(int j =0; j < 5; j++){  
//       if(matix[i][j] > max ){
//         max = matix[i][j];
//         index = j;
//       }
//     }
//     bool found = true;
//     for(int k =0; k < 5; k++){
//       if(max > matix[k][index] ){
//         //不是该列的最小值
//         found = false; 
//         break;
//       }
//     }
//     if(found){
//       cout << i +1<< " " << index +1<<" "<< max <<endl;//注意输出
//       return 0;
//     }   
//   }
//   cout << "not found" << endl;
// }

int main(){
  vector<vector<int>>  matrix(5,vector<int>(5));
  for(auto & line : matrix){
    for(auto & x : line){
      cin >> x;
    }
  }
  for(int i = 0; i < 5; i++){
    int max = matrix[i][0];
    int index = 0;
    for(int j = 0; j < 5; j++){
      if(matrix[i][j] > max ){
        max = matrix[i][j];
        index = j;
      }
    }
    bool found = true;
    for(int k = 0; k < 5; k++){
      if(max > matrix[k][index]){
        found = false;
        break;
      }
    }
    if(found){
      cout << i + 1 << " " << index + 1 << " "<< max << endl;
      return 0;
    }
  }
  cout <<"not found" << endl;


}