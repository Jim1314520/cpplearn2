#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
int main(){
 int a ,b;
 cin >> a >> b;
 // 幂 a^b的末 3 位数是取余1000的余数
 int ret =1;
 while(b--){
  ret *=a;
  ret %=1000;
 

 }
 cout << setw(3) << setfill('0') << ret <<endl;
}