#include <iostream>
using namespace std;
#include <string>
#include <vector>
int isWin(char a, char b){
  if(a == b) return 1;
  if(a == 'S' &&  b == 'P') return 2;
  if(a == 'S' &&  b == 'R') return 0;
  if(a == 'P' &&  b == 'S') return 0;
  if(a == 'P' &&  b == 'R') return 2;
  if(a == 'R' &&  b == 'P') return 0;
  if(a == 'R' &&  b == 'S') return 2;
}
int main(){
  int r;
  cin >> r;
  string seven;
  cin >> seven;
  int n;
  cin >> n;
  vector<string> friends(n);
  for(auto & str : friends) cin >> str;
  int cnt = 0;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < n; j++){
      cnt += isWin(seven[i],friends[j][i]);
    }
  }
  cout << cnt << endl;
  int cnt2 = 0, cnt4 = 0;
  string choice = {"SPR"};
  for(int i = 0; i < r; i++){
    int cnt3 = 0;
    for(int k = 0; k < 3; k++){ //第一轮 遍历3种手势
      cnt2 = 0;
      for(int j = 0; j < n; j++){ 
        cnt2 += isWin(choice[k],friends[j][i])   ; //  第一轮  S  对手： P R 
      } // k  = 0 ,2  k = 1, 3
      cnt3 = max(cnt3 , cnt2); 
    }
     cnt4 += cnt3;
  }
  cout << cnt4 << endl;
}
