#include <iostream>
using namespace std;
#include <string>
int main(){
  string s;
  cin >> s;
  int cnt = 0;
  int a = 0;
  while( (a = s.find("luogu",a)) != string::npos){ 
    cnt ++;
    a ++;
  }
  cout << cnt << endl;
  
}