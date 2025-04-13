#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
#include <algorithm>
int main(){
  int n, m;
  cin >> n >> m;
  int offset = 1e6 + 1;
  vector<int> sum(offset * 2);
  while(n--){ //读入矿点
    int x;
    cin >> x;
    sum[x + offset]++;
  }
  partial_sum(sum.begin(), sum.end(), sum.begin());
  int ans = 0;
  for(int step = 0; step <= m / 2; step++){
    int l = - step + offset, r = m - 2 * step + offset;
    r = min(r, offset * 2 - 1);
    ans = max(ans, sum[r] - sum[l-1]);
    int r = step + offset, l = -(m - 2 * step) + offset;
    l = min(l,offset * 2 - 1);
    ans = max(ans, (sum[r] - sum[l -1]));
  }
  cout  << ans << endl;
  
  // parm([string]$f,[string]$i)
  // c++ "$f.cpp" -o "$f.exe" -O2 --std=c++11
  // if($i) {
  //   Get-Content $i | & "./$f.exe"
  // } else { 
  // & "./$f.exe"
  // }

}