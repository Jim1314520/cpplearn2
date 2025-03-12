#include <iostream>
using namespace std;
#include <string>
int main(){
  string s, res;
  getline(cin, s);
  for(int i = 0; i < s.length(); i++){
    if(islower(s[i])){
      res.push_back( (s[i] - 'a' + 25) % 26 +  'a'); // z 25 + 1  a - a = 0 - 1 
    } else if(isupper(s[i])){
      res.push_back( (s[i] - 'A' + 25) % 26 + 'A' ); // B - A = 1 + 25 % 26 = 0 = A
    } else{
      res.push_back(s[i]);
    }
  }
  cout << res << endl;

}
