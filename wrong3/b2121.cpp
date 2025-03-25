#include <iostream>
using namespace std;
#include <string>
#include <cstring>
int main(){
  char str[30000];
  cin.getline(str, 30000);
  char longest[201];
  char shortest[201];
  const char * delimeter = " ,.";
  char * token = strtok(str, delimeter);
  strcpy(longest,token);
  strcpy(shortest, token);
  while(token){
    if(strlen(token) > strlen(longest)){
      strcpy(longest, token);
    }
    if(strlen(token) < strlen(shortest)){
      strcpy(shortest, token);
    }
    token = strtok(nullptr, delimeter);
  }
  cout << longest << endl;
  cout << shortest << endl;


}