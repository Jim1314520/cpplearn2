#include <iostream>
#include <cmath>
using namespace std;
#include <bits/stdc++.h>
int main(){
  // for(int t = 1; ; t++){
  //   if(t * 15 % 343720 == 0 && t * 17 % 233333 == 0){
  //     cout.precision(2);
  //     cout << fixed;
  //     cout << 2 *  hypot(t * 15, t * 17) << endl;
  //     break;  
  //   }
  // }
  // vector<int> v = {1, 2, 3, 4, 5};
  // partial_sum(v.begin(), v.end(), v.begin());
  vector<int> v(10);
  iota(v.begin(), v.end(), 2); // 从开始到结束进行赋值， 第三个参数是从哪里开始赋值
  for(auto & x : v){
    cout << x << " ";
  }
  cout << endl;
}