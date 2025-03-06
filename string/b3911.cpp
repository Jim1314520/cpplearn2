#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main(){
  int n, k;
  cin >> n >> k;
  vector<string> varies(n);
  vector<int> nums(n);
  for(int i = 0; i < n ; i++){
    string a;
    int b;
    cin >> a >> b;
    varies[i] = a;
    nums[i] = b;
  }
  
  cin.ignore();
  while(k--){
    string sectence;
    getline(cin, sectence);//  s {abc} 2 6 
    int index = 0;
    while(true){
      int a =sectence.find("{",index);
      int b = sectence.find("}",index);
      if(a == string::npos) {
        cout << sectence << endl;
        break;
      } 
      string s = sectence.substr(a + 1, b - a -1);
      for(int i = 0; i < n; i++){
        if(varies[i] == s){
          sectence.replace(a, b - a + 1, to_string(nums[i]));
        }
      }
      index = a + 1;//一定要是左括号开始
    }

  } 
}