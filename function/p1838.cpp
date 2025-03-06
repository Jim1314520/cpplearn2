#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
bool isSame(int a, int b,  int c, int x){
  if(a == b && b == c && c == x) return true;
  return false;
}
bool isWin(vector<vector<int>> board,  int a){
  for(int i = 0; i < 3; i++){
    if(isSame(board[i][0], board[i][1], board[i][2], a)) return true ;
    if(isSame(board[0][i], board[1][i], board[2][i], a)) return true ;
  }
  if(isSame(board[0][0], board[1][1], board[2][2], a)) return true ;
  if(isSame(board[0][2], board[1][1], board[2][0], a)) return true ;
  return false;
}
int main(){
  string str;
  cin >> str;
  vector<vector<int>> board(3, vector<int>(3, -1));
  for(size_t i = 0; i < str.size(); i++){
    int pos = str[i]  - '1';// 一定要减去字符串1， 而不是数字1
    int x = pos /3;
    int y = pos % 3;//坐标的转换技巧  pos = x * 3 + y
    int a = i % 2; // 0 小 a     1 uim
    board[x][y] = a;//修改棋盘的数字  
  }
 if(isWin(board, 0)) {
  cout << "xiaoa wins." << endl;
 } else if(isWin(board, 1)){
  cout << "uim wins." << endl;
 } else{
  cout << "drew." << endl;
 } 
}
