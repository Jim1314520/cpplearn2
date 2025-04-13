#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
int main()
{
  // 请在此输入您的代码
 
  auto isNum = [] (int a){
    for(int i = 2; i <= sqrt(a); i++){
      if(a % i == 0){
        int b = a / i;
        vector<int> n(10);
        int c = a;
        int t = i;
        while(c){
          n[c % 10]--;
          c /= 10;
        }
        while(b){
          n[b % 10] ++;
          b /= 10;
        }
        while(t){
          n[ t % 10] ++;
          t /= 10;
        }
        int count = 0;
        for(auto & x : n){
          if(x == 0){
            count ++;
          }
        }
        if(count == 10) return true; 
      }
    }
    return false;

  };
  int cnt = 0;
  for(int i = 4; i <= 1000000 ; i++){
    if(isNum(i)) cnt ++;
  }
  cout << cnt << endl;
}