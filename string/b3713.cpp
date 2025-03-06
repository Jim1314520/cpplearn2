#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <format>

int main(){
  //     X.zip/X/Y/Y.cpp 
  int n, m;
  cin >> n >> m;
  vector<string> questions(m); //问题
  for(auto & str: questions) cin >> str;
  while(n--){
    string name;
    cin >> name;
    for(int i = 0; i < m; i++){
      string ans;
      cin >> ans;
      string cmp = name + ".zip/" + name + "/" + questions[i] + "/" + questions[i] + ".cpp";
     if(ans == cmp ){
      cout << "Fusu is happy!" << endl;
     } else{
      cout << "Fusu is angry!" << endl;
     }
    }
  }
}