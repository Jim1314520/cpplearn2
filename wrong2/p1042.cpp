#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
void isWin(string s, int a){
  int cnt = 0; // 华华
  int cnt1 = 0;// 
  for(int i = 0; ; i++){
    if(s[i] == 'E'){
      cout << cnt <<  ":" << cnt1 << endl;
      return;
    }else if(s[i] == 'W'){
      cnt ++;
    } else {
      cnt1 ++;
    }
    if((cnt >= a || cnt1 >= a) &&  abs(cnt - cnt1) >= 2){
      cout << cnt << ":" << cnt1 << endl;
      cnt = cnt1 = 0;
    }  
  }
}
int main(){
  string str;
  while(cin){
    string s;
    cin >> s;
    str += s;
  }
  isWin(str, 11);
  cout << endl;
  isWin(str, 21);
}
