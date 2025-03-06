#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
int main(){
  int arr[5][5];
  for(auto & line:arr){
    for(auto &x:line){
      cin>>x;
    }
  }

  for(int i =0;i<5;i++){
    int maxval = arr[i][0];//先遍历出每一行的最大值
    int colIndex = 0;//假设一行的最大值是第一列
    for(int j =0;j<5;j++){
      if(arr[i][j] > maxval){
        maxval = arr[i][j];
        colIndex = j;//假设第0行的最大值在第3列
      }
    }
    bool isPoint = true;//先假设该数就是该列的最小值
    //再检查这个数是改列的最小值
    for(int k =0;k<5;k++){
      if(arr[k][colIndex] < maxval){
        isPoint = false;//该数不是最小值,也不是鞍点，表示第0行没有鞍点
        break;
      }
    }
    if(isPoint) {
      cout<< i+1 <<" "<< colIndex+1 <<" "<<maxval << endl;
      return 0;
    } 
  }
  cout<<"not found" << endl;
  return 0;

}