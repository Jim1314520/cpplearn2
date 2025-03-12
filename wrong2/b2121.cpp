#include <iostream>
using namespace std;
#include <string>
#include <cstring>
int main(){
 char s[30000];
  cin.getline(s, 30000);
  const char * dilemter = " ,.";
  char *  token = strtok(s, dilemter);
  char longest[101], shortest[101];
  strcpy(longest, token);
  strcpy(shortest, token);
  while(token){
    
    if(strlen(token) > strlen(longest)){
      strcpy(longest, token);

    } 
    if(strlen(token) < strlen(shortest)){
      strcpy(shortest, token);
    }
    token = strtok(nullptr, dilemter);
  }
  cout << longest << endl << shortest << endl;
}
