#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iomanip>
int main(){
 double fac[16];//这里要注意数组的大小
 fac[0] = 1;
 for(int i = 1;i < 16;i++){
  fac[i] = fac[i-1] * i;
 }
 int n;
 cin >> n;
 double e =1;
 for(int j = 1;j <= n;j++){
  e += 1/fac[j];
 }
 cout.precision(10);
 cout<<fixed;
 cout<<e<<endl;
// cout<<accumulate(fac,fac + n +1,0.0);

}