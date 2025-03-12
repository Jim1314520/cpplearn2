#include <iostream>
using namespace std;
#include <string>
int main(){
  string s;
  cin >> s;
  int len = s.length();
  if(s.substr(len - 2) == "er" || s.substr(len - 2) == "ly" ){
    s = s.substr(0, len - 2);
    //s[len - 2] = '\0';
  } else if(s.substr(len - 3) == "ing"){
    s = s.substr(0, len - 3);
   // s[len - 3] = '\0';  只能在c语言的字符串才行
  }
  cout << s <<endl;
}
