#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  int a = 1e6;
  vector<int> pos(a * 2);
  while(n--){
    int l, r;
    cin >> l >> r;
    pos[l + r]++;
  }
  partial_sum(pos.begin(), pos.end(), pos.begin());
  while(m--){
    int L,R;
    cin >> L >> R;
    cout << pos[R * 2] - pos[L * 2 - 1] << endl;
  }
}