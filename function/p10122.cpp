#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
bool isSame(int a, int b,  int c, int x, int y){
  if(x == y) {
    if(a == b && b == c && c == x) return true;
    return false;
  }
  int cnt1 = (x == a) + (x == b) + (x == c);
  int cnt2 = (y == a) + (y == b) + (y == c);
  return cnt1 + cnt2 == 3 && cnt1 != 3 && cnt2 != 3;
}

bool isWin(vector<string> & board,  int a,int b ){
  for(int i = 0; i < 3; i++){
    if(isSame(board[i][0], board[i][1], board[i][2], a, b)) return true ;
    if(isSame(board[0][i], board[1][i], board[2][i], a, b )) return true ;
  }
  if(isSame(board[0][0], board[1][1], board[2][2], a, b)) return true ;
  if(isSame(board[0][2], board[1][1], board[2][0], a, b)) return true ;
  return false;
}
int main(){ 
  vector<string> board(3);
  for(auto & str : board) cin >> str;
  int cnt1 = 0, cnt2 = 0;
  for(int i = 0; i < 26; i++){
    if(isWin(board, i + 'A',  i + 'A' )) cnt1 ++;
    for(int j = i + 1; j < 26; j++){
      if(isWin(board,i + 'A',  j + 'A') ) cnt2 ++;
    }
  }
  cout << cnt1 << endl << cnt2 << endl;
}
