#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
//判断是否是回文数
bool isCheck1(string s1){
  string ss = s1;
  reverse(s1.begin(),s1.end());
  return ss == s1;
}
// 判断是否是质数
bool ischeck2(int s2){
  for(int i = 2; i <= sqrt(s2); i++){
    if(s2 % i == 0) return false;
  }
  return true;
}

int main(){
  int a, b;
  cin >> a >> b;
  for(int i = a; i < b; i++){
    if(ischeck2(i) && isCheck1(to_string(i))){
      cout << i << endl;
    }
  }

}
