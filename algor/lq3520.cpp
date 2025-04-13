#include<iostream>
using namespace std;

#include <string>

int main(){
   int d;
  cin >> d;

  while(d--){
    string t,s;
    cin >> t >> s;
    int n = t.size();
    if(t == s) {
      cout << 0 << endl;
      continue;
    } 
    if(s[0] != t[0] || s[n -1] != t[n - 1]) {
      cout << -1 << endl;
      continue;
    } 
    int cnt = 0;
    for(int i = 1; i < n -1;i++){
      if(s[i] != t[i] && s[i - 1] != s[i] && s[i + 1] != s[i]){
        s[i] = t[i];
        cnt ++;
      }
    }
    if(s == t){
      cout << cnt << endl;
    } else{
      cout << -1 << endl;
    }
  }

}