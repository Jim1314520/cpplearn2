#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
int main(){
 int a , b, c;
 cin >> a >> b >> c;
 a %=b;
 int x;
 while(c--){
   a *=10;
   x = a /b;//改位数的小数
   a %=b;//下一次的a
 }
 cout<<x;
}