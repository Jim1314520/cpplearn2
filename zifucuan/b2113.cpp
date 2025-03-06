#include <iostream>
using namespace std;
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
int main(){
  char str[101] ,str2[101];
  cin.getline(str,101);

  int len = strlen(str);
  for(int i = 0; i < len; i++){
    str2[i] = str[i] + str[(i+1) % len]; 
  }
  str2[len] = 0;//设置终止符
  cout << str2 << endl;

}