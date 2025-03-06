#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main(){
  int n ,t;
  cin >> n >> t;
  vector<int> ids(n);
  for(auto & x : ids) cin >> x;
  vector<int> newIds;
  while(t --){
    int k;
    cin >> k;
    for(int i = 0; i < k ;i++){
      for(int j = i ; j < n;j +=k){
        newIds.push_back(ids[j]);
      }
    }
    ids = newIds;
    newIds.clear();
  }
  for(auto id :ids){
    cout << id << " ";
  }
  cout << endl;
}