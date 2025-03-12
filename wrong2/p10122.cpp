#include <iostream>
using namespace std;
#include <vector>
#include <string>
bool isSame(char a, char b, char c, char x, char y){
  if(x == y) return a == x && b == x && c == x; 
  int cnt1 = 0, cnt2 = 0;
  cnt1 = (x == a) + (x == b) + (x == c)  ;
  cnt2 = (y == a) + (y == b) + (y == c)  ;
  if(cnt1 + cnt2 == 3 && cnt1 != 3 && cnt2 != 3) return true;
  return false;
}
bool isWin(vector<string> & board, char a, char b){
  for(int i = 0; i < 3; i++){
    if(isSame(board[i][0], board[i][1], board[i][2], a, b)) return true;
    if(isSame(board[0][i], board[1][i], board[2][i], a, b)) return true;
  }
  if(isSame(board[0][0], board[1][1], board[2][2], a, b)) return true;
  if(isSame(board[0][2], board[1][1], board[2][0], a, b)) return true;
  return false;
}
int main(){
  vector<string> board(3);
  for(auto & line : board) {
    string s;
    cin >> s;
    line +=s;
  }
  int cnt1 = 0, cnt2 = 0;
  for(int i = 0; i < 26; i ++){
    if(isWin(board, 'A' + i, 'A' + i))  cnt1 ++;
    for(int j = i + 1; j < 26; j++){
      if(isWin(board, 'A' + i, 'A' + j))  cnt2 ++;
    }
  }
  cout << cnt1 << endl << cnt2 << endl;
}
