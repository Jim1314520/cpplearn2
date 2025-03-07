#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
  int a, b, n, res;
  cin >> a >> b >> n;
  a %= b; // 20 / 6 = 3 .... 2   2 * 10 = 20 第一位小数 20 / 6 = 3...2
  while(n--){
    a *= 10;
    res = a / b;
    a %= b;
  }
  cout << res << endl;
}
