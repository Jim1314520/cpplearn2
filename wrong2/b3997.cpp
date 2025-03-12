#include <iostream>
using namespace std;
#include <string>
bool isRever(string & s){
  bool flag = false;
  int len = s.length();
  string res = s;
  int cnt = 0;
  for(int i = 0; i < len; i++){
    //s[i] = res[len - i - 1]; // caac  0  4 - 0
    if(s[i] == res[len - i - 1]){
      flag = true;
      cnt ++;
    }
  }
  return cnt == len ? true : false;
}

int main(){
  string s;
  cin >> s;
  int cnt = 0;
  int len = 1, index = 0;
  while(index < s.size()){
    string res = s.substr(index,len); // 0 1 
    if(isRever(res)) cnt++;
    index += len;
    len ++;
    res.clear();
  }
  cout << cnt << endl;
}
