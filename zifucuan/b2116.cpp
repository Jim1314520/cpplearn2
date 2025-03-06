#include <iostream>
using namespace std;
#include <algorithm>
#include <ctype.h>
#include <string.h>
int main(){
  char str[50], str2[50];
  cin.getline(str, 50);
  int len = strlen(str);
  reverse(str,str + len);
  for(int i = 0; i < len; i++){
    if( isupper(str[i])){
      str[i] = tolower(str[i]);//假设为y还原为b, y - a = 24 ,+ 3 = 27 % 26 = 1 
      str2[i] = (str[i] - 'a' + 3 ) % 26 + 'a';   // b - a,得到相对a的值 ，再返回之前的数字
    } else{
      str[i] = toupper(str[i]);
      str2[i] = (str[i] - 'A' + 3 ) % 26 + 'A';
    }
  }
  str2[len] = 0;
  cout << str2 << endl;
  
}