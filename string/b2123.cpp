#include <iostream>
using namespace std;
#include <string>
#include <vector>
// int main(){
//   string str, res;
//   cin >> str;
//   int len = str.length();
//   int length = 1;
//   char lastchar = str[0];// 保留第一个字符
//   for(int i = 1; i <= len; i++){
//     if(str[i] == lastchar){
//       length ++ ;
//     } else{
//       res += to_string(length) + lastchar;
//       lastchar = str[i];
//       length = 1;
//     }
//   }
//   cout << res << endl;
// }

int main(){
  string str, res;
  cin >> str;
  char lastchar = str[0];
  int length = 1;
  for(int i = 1; i <= str.length(); i++){
    if(str[i] == lastchar){
      length ++;
    } else{
      res += to_string(length) + lastchar;
      lastchar = str[i];
      length = 1;
    }
  }
  cout << res << endl; 
}
