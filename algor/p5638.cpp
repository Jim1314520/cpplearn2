#include <iostream>
using namespace std;
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
int main(){
  int n, k;
  cin >> n >> k;
  vector<long long> roads(n-1), sumRoad(n, 0);
  for(auto & x : roads) cin >> x;
  partial_sum(roads.begin(), roads.end(), sumRoad.begin() + 1);
  long long maxK = 0;

  for(int i = k; i  <= n - 1; i ++){
    long long max1 =  sumRoad[i] - sumRoad[i - k];
    if(max1 > maxK){
      maxK = max1;
    }
  }
  long long res = sumRoad[n -1]  - maxK;
  cout << res << endl;
  
  

}