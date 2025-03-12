#include <iostream>
using namespace std;
#include <vector>
#include <string>
bool isSame(int a, int b, int c, int x){
  if(a == x && b == x && c == x) return true;
  return false;
}
bool isWin(vector<vector<int>> & board, int a){
  for(int i = 0; i < 3; i++){
    if(isSame(board[i][0], board[i][1], board[i][2], a)) return true;
    if(isSame(board[0][i], board[1][i], board[2][i], a)) return true;
  }
  if(isSame(board[0][0], board[1][1], board[2][2], a)) return true;
  if(isSame(board[0][2], board[1][1], board[2][0], a)) return true;
  return false;
}
int main(){
  string s;
  cin >> s;
  vector<vector<int>> board(3,vector<int>(3));
  int a = 1;
  for(int i = 0; i < s.length(); i++){
    a = (a + 1) % 2;
    int x = ( int(s[i] - '1')) / 3;
    int y = (int(s[i] - '1')) % 3;
    board[x][y] = a;
  }
  if(isWin(board, 0)){
    cout << "xiaoa wins." << endl;
  } else if(isWin(board, 1)){
    cout << "uim wins." << endl;
  } else{
    cout << "drew." << endl;
  }
}
