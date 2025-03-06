#include <iostream>
using namespace std;
#include <algorithm>
#include <string.h>
#include <ctype.h>
int main(){
  char arr[256];
  cin.getline(arr,256);
  int cnt =0;
  for(int i = 0 ; i < strlen(arr);i++ ){
    cnt += isdigit(arr[i]);
  }
  cout << cnt << endl;
}