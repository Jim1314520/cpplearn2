#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main(){
  string wrong;
  cin >> wrong;
  string right;
  int len = wrong.size();
  for(int i = 0; i < len; i++){
    if( isalpha(wrong[i])){
   // if( isupper(wrong[i]) || islower(wrong[i])){
      right.push_back(wrong[i]);
    }
  }
  cout << right << endl;
}