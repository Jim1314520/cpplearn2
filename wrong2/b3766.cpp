#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
  int n, t;
  cin >> n >> t;
  vector<int> ids(n);
  for(auto &  id : ids) cin >> id;
  while(t--){
    int k;
    cin >> k;
    vector<int> temp ;
    for(int i = 0; i < k; i++){
      for(int j = i; j < n; j += k){
        temp.push_back(ids[j]);
      }
    }
    ids = temp;
    temp.clear();
  }
  for(auto & line : ids){
      cout << line << " ";
  }
  cout << endl;
}
