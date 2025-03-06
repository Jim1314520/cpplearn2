#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
int main(){
  string s, res;
  cin >> s;
  int cnt = 1;
  int index = 1, length = 2;
  while(index < s.length()){
    string substr = s.substr(index, length); // 之前是因为index没有考虑好
    index += length;
    length ++;
    string rev = substr;
    reverse(substr.begin(), substr.end());
    cnt += (rev == substr); 
  }
  cout << cnt << endl;
}