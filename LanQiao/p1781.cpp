#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
int main(){
  int n;
  cin >> n;
  string max ="";
  int id ;
  for(int i = 1; i <= n; i++){
    string s;
    cin >> s;
    int len1 = s.length();
    int len2 = max.length();
    if(len1 > len2 || (s > max && len1 == len2)){
      id = i;
      max = s;
    }
  }
  cout << id << endl << max << endl;

}