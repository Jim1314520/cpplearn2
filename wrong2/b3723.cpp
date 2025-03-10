#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
  int n;
  cin >> n;
  vector<long long> coins(n);
  for(auto & x : coins) cin >> x;
  //定义每个人的钱包
  vector<long long> sum(2); // 0 f 1 bessise
  int curPlayer = 1;
  while(!coins.empty()){
    curPlayer =  (1 + curPlayer) % 2;
    int max = -1;
    int min = 0;
    bool found = false;
    for(size_t i = 0; i < coins.size(); i ++){
      if(coins[i] <= sum[curPlayer]){
        if(max == -1  ||coins[i] > coins[max]){
          max = i;
          found = true;
        }
      } else{
        if(coins[i] < coins[min]){
          min = i;
        }
      }

    }
    if(found){
      sum[curPlayer] += coins[max];
      coins.erase(coins.begin() + max);
    } else{
      sum[curPlayer] += coins[min];
      coins.erase(coins.begin() + min);
    }
   // cout << sum[curPlayer];
  }
  cout << sum[0] << " " << sum[1] << endl;
}
