#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<long long>> indexs(n);
  vector<long long> sum(n);
  for(int j = 0; j < m;j++){
    int t;
    cin >> t;
    int min = -1;
    for(int i = 0; i < n; i++){
      if( min == -1 || sum[i] <  sum[min]){
        min = i;
      }
    }
    indexs[min].push_back(j);
    sum[min] += t;
  }
  for(auto & line : indexs){
    if(line.size() == 0){
      cout << 0 << " " << endl;
    } else{
      for(auto & x :line){
        cout << x + 1 << " ";
      }
      cout << endl;
    }
  }
}