#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <numeric>
int main()
{
  int t;
  cin >> t;
  
  while(t--){
    long long l, r;
    cin >> l >> r;
    vector<long long> num(1);
    //num[1] = 1;
    for(int i = 1; i <= r; i++){
      //num.push_back(i);
      for(int j = 1; j <= i; j++){
        num.push_back(j);
      }
    }
    partial_sum(num.begin(), num.end(), num.begin());
    for(auto  & x : num) cout << x << " " << endl;
    cout << num[r] - num[l - 1 ] << endl; 

  }
  // 请在此输入您的代码
  return 0;
}