// 蓝桥杯 23 年 Python A 组省赛 A 题
// 特殊日期
// https://www.lanqiao.cn/problems/3495/learning/
#include <iostream>
using namespace std;
#include <vector>
bool Leapyear(int a){
  if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) return true;
  return false;
}
int main(){
  vector<int> months{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for(auto & x : months){
    cout << x ;
  }
  cout << endl;
  //遍历
  int cnt = 1; // 最后一天是符合条件的，要提前加上
  for(int i = 2000; i < 2000000 ; i++){ // 遍历年份
    //由于闰年2月是有29天
    for(int j = 1; j <= 12; j++){
      int month = months[j]; 
      if(Leapyear(i) && j == 2)  ++month ; //加上1天 这里修改了变量，以后也要发生变化
      for(int k = 1; k <= month; ++k){
        if(i % j == 0 && i % k == 0) ++cnt;
      }
    }
  }
  // cout << cnt << endl;
}