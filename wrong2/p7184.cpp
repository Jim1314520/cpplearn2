#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
int Win(char a, char b){
  if(a == 'S' && b == 'P') return 2;
  if(a == 'P' && b == 'R') return 2;
  if(a == 'R' && b == 'S') return 2;
  if(a == b ) return 1;
  return 0;
}
int main(){
  int r;
  cin >> r;
  string sven;
  cin >> sven;
  int n;
  cin >> n;
  vector<string> Friends(n);
  int socres = 0, max = 0;
  string choice = "SPR";
  for(auto & Friend : Friends) cin >> Friend;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < n; j++){
      socres += Win(sven[i], Friends[j][i]);
    }
  }

  for(int i = 0; i < r; i++){
    int max2 = 0;
    for(int k = 0; k < 3; k++){
      int max1 = 0;
      for(int j = 0; j < n; j++){
       max1 += Win(choice[k], Friends[j][i]); // 假设 Sven出S 一次遍历朋友的第一轮
      }
      if(max1 > max2){
        max2 = max1;
      }
    }
    max += max2;
  }
  cout << socres << endl << max << endl;


}
