#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main(){
  int n, k;
  cin >> n >> k;
  vector<int> nums(n);
  vector<string> varies(n);
  for(int i = 0; i < n; i++){
    string s;
    int a;
    cin >> s >> a;
    varies[i] = s;
    nums[i] = a;
  }
  cin.ignore();
  while(k--){
    string words;
    getline(cin, words);
                                         //  a {      } 
    int left = words.find("{",0);           // a 4 
    while(left != string::npos){
      int right =  words.find("}",left + 1); // a{2} 1 3 
      string str = words.substr(left + 1, right - left -1);
      for(int i = 0; i < n; i++){
        if(str == varies[i]){
          words.replace(left, right - left + 1, to_string(nums[i]));
          break;
        }
      }
      //index += left; // 不能这样判断 因为index会越来越大，句子随着替换 ，长度会发生改变
      left = words.find("{", left + 1);
    }
    cout << words << endl; 
  }
}
