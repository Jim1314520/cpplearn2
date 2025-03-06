#include <iostream>
using namespace std;
#include <algorithm>
#include <string.h>
int main(){
  char str[101];
  cin.getline(str , 101);
  char str1[101];

  int cnt = 0;
  for(int i = 0; i < strlen(str) ; i++){
    if(str[i] == str[strlen(str)-  i - 1]) {
      cnt++;
    }
  }
  if(cnt == strlen(str)){
    cout<< "yes" << endl;
  } else{
    cout << "no" << endl;
  }
  // reverse(str,str + strlen(str));

}