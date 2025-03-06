#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int a,b;
  cin>>a>>b;
  int res =1;
  while(b--){
    res *= a; // (a * a) % 1000
    res %= 1000;
  }
  cout<< setfill('0')<<setw(3)<<res<<endl;
}