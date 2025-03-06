#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void selectcoin(vector<long long> & coins, int & curPlayer, vector<long long> & sum){
  curPlayer = (curPlayer + 1) % 2;
    int max = -1;
    int min = 0;
    bool found = false;
    int len = coins.size();
    for(int i = 0; i < len; i++){
      if(coins[i] <= sum[curPlayer] ){
        if(coins[max] < coins[i] || max == -1){
          max = i;
          found = true;
        }
      }
      if(coins[i] > sum[curPlayer]){
        for(int j = 1; j < len; j++){
          if(coins[j] < coins[min]){  
            min = j;
          }
        }
      }
    }
    if(!found) max = min;
    sum[curPlayer] += coins[max];
    coins.erase(coins.begin() + max);
    // if(found){
    //   sum[curPlayer] += coins[max];
    //   coins.erase(coins.begin() + max);
    //   //coins.erase(coins.begin() + max, coins.begin() + max + 1);
    // } else{
    //   sum[curPlayer] += coins[min]; 
    //   coins.erase(coins.begin() + min, coins.begin() + min + 1);
    // }
}
int main(){
  int n;
  cin >> n;
  vector<long long> sum(2,0);
  vector<long long> coins(n); // 0 f  1 b
  int curPlayer = 1;
  for(auto & x : coins) cin >> x;
  int a = n;
  while(a--){
    selectcoin(coins, curPlayer, sum);
  }
  cout << sum[0] << " " << sum[1] << endl;
}
