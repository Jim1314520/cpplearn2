#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n;
  cin >> n;
  vector<vector<int>> urls(n);
  for(auto & line : urls){
    int m;
    cin >> m;
    line.resize(m);
    for(auto & x : line) cin >> x;


  }
  vector<bool> visited(n,false);
  visited[0] = true;
  for(auto & ids : urls[0]){ // 遍历的是第一个网页中包含的其他网页
    visited[ids - 1] = true;
    for(auto & id : urls[ids - 1]){ // 遍历第二层网页中的其他网页
      visited[id - 1] = true; 
    }
  }
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    cnt += (int) visited[i];
  }
  cout << cnt << endl;
}
