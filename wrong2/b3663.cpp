#include <iostream>
using namespace std;
#include <vector>
int main(){
  string s;
  cin >> s;
  int index = 0;
  int cnt = 0;
  while(s.find("luogu",index) != string::npos){   
    cnt ++;
    index = s.find("luogu",index) + 1 ;
  }
  cout << cnt << endl;
}
