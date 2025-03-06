#include <iostream>
using namespace std;
#include <algorithm>
#include <ctype.h>
#include <string>
#include <string.h>
int main(){
  char s[30000];
  cin.getline(s, 30000);
  auto delimiter = " ,.";
  char * token = strtok(s,delimiter);
  char longest[201], shortest[201];
  strcpy(longest, token);
  strcpy(shortest, token);
  while(token){
    if(strlen(token) > strlen(longest) ){
      strcpy(longest, token);
    } 
    if(strlen(token) < strlen(shortest)){
      strcpy(shortest, token);
    }
    token = strtok(nullptr, delimiter);
  }
  cout << longest << endl;
  cout << shortest << endl;
  
}