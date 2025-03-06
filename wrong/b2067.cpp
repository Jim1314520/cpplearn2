#include <iostream>
using namespace std;
#include <cmath>
int main(){
 int m, n;
 cin >> m >>n;
 int cnt =0;// 记录取不到药的人数
 while(n--){
  int a;
  cin >> a;
  if( m < a){
    cnt++;
  } else{
    m -= a;
  }
 }
 cout << cnt << endl;
}