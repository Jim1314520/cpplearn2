#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n;
  cin >> n;
  vector<bool> visited(n + 1, false);
  vector<vector<int>> urls(n);
  for(auto & url : urls){
    int m;
    cin >> m;
    url.resize(m); //要先指定大小才行
    for(auto & x : url){
      cin >> x;
    }
  }

  visited[1] = true;
  for(auto & id : urls[0]){
    visited[id] = true;
    for(auto & id2 : urls[id -1]){
      visited[id2] = true;
    }
  }
  int cnt = 0;
  for(auto  x : visited){
    cnt += x;
  }
  cout << cnt;
}