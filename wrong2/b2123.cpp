#include <iostream>
using namespace std;
#include <string>
int main(){
  string s, res;
  cin >> s;
  int len = 1;
  char front = s[0];
  for(int i = 1; i <= s.size(); i++){
    if(front == s[i]){
      len ++;
    } else{
      res += to_string(len) + front;
      front = s[i];
      len = 1;
    }
  }
  cout << res << endl;

}
