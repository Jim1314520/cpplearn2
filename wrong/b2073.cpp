#include <iostream>
using namespace std;
#include <algorithm>
#include <string.h>
#include <ctype.h>
int main(){
  int a, b, n;
  cin >> a >> b >> n;
   a %= b;// 先去掉小数部分
   int x;
   while(n--){
     a *= 10;
     x  = a / b;
     a %= b;
   }
  cout << x << endl;
}