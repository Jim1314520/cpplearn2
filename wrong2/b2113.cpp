#include <iostream>
using namespace std;
#include <string>
int main(){
  string s, res;
  cin >> s;
  int len =  s.length();
  res.resize(len);
  for(size_t i = 0; i < s.length(); i++){
    res[i] =   s[i] + s[(i + 1) % len];

  }
  //cout << s << endl;
  cout << res << endl;

}
