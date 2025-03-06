#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
string toBase(int n, int p){
  string res;
  while(n){
    int mod = n % p; // 120 % 10 = 0
    res += (mod < 10 ? mod + '0' : mod - 10 + 'A');
    n /= p;
  }
  reverse(res.begin(),res.end());
  return res;
}
int main(){
  int p;
  cin >> p;
  for(int i = 1; i < p; i++){
    for(int j = 1; j <= i; j++){
      cout << toBase(i, p) << "*" << toBase(j, p) << "=" << toBase(j * i, p) << " ";
    }
    cout << endl;
  }
}
/*
200 转换为12 进制
200 % 12 = 5
65 /= 12  5
5 5
*/