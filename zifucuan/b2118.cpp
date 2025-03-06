#include <iostream>
using namespace std;
#include <algorithm>
#include <ctype.h>
#include <string.h>
int main(){
  char s1[25], s2[25];
  cin >> s1 >> s2;
  if(strstr(s1, s2)){
    cout << s2 << " is substring of " << s1 << endl;
  }else if(strstr(s2, s1)){
    cout << s1 << " is substring of " << s2 << endl;
  } else{
    cout << "No substring" << endl;
  }
  
}