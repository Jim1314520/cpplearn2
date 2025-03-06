#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n;
  cin >> n;
  vector<vector<long long >> players(2);//2个用户 每个用户有一个钱包
  vector<long long > sum(2);//钱包
  vector<long long> coins(n);
  for(auto & x : coins ) cin >> x;
  int currentPlayer = 1;
  while(n--){
    currentPlayer = (currentPlayer + 1) % 2;
    int max = -1;
    int min = -1;
    bool found =false;
    for(auto i = 0; i < coins.size(); i++){
      if(coins[i] <= sum[currentPlayer] ){
        if( max == -1 || coins[i] > coins[max] ){
          max = i;
          found = true;
        }
      }  
    }
    for(auto i = 0; i < coins.size(); i++){
      if(coins[i] >  sum[currentPlayer] ){
        if(  min == -1 ||coins[i] < coins[min] ){
           min = i;
        } 
      } 
    }
    if(found){
      players[currentPlayer].push_back(coins[max]);
     //sum[currentPlayer] += coins[max];
      coins.erase(coins.begin() + max);
    } else{
       players[currentPlayer].push_back(coins[min]);
     // sum[currentPlayer] += coins[min];
      coins.erase(coins.begin() + min);
      
    }
    long long a = 0;
    for(auto & x :players[currentPlayer]) a += x;
    sum[currentPlayer] = a;
    
  }
  for(auto x : sum){
    cout << x << " ";
  }
  cout << endl;

}