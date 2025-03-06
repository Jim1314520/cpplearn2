#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>
void gamePlay(string & game, int a){
  int win = 0, lose =0;
  for(auto & c : game){
    if(c == 'E'){
      cout << win << ":" << lose << endl;
      return;
    } 
    if(c == 'W') win ++;
    if(c == 'L') lose ++;
    if(abs(win - lose) >= 2 && (win >= a || lose >= a)) {
      cout << win << ":" << lose << endl;
      win = lose = 0;//达到标准后需要重新初始化
    }
  }
}
int main(){
  string game, str;
  while(cin){
    cin >> str;
    game += str;
  }
  gamePlay(game, 11);
  cout << endl;
  gamePlay(game, 21);


}
