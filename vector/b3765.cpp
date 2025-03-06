#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main(){
  int n;
  cin >> n;
  vector<vector<int>> urls(n);
  //将网页全部输入到其中
  for(auto & url :urls){
    int m ;
    cin >> m;
    url.resize(m);
    for(auto & id :url) cin >> id;
  }
  vector<int> v(1,0);
  //urls.insert(urls.begin(),vector<int>());//插入一个vector就实现urls从1-N开始编号
  urls.insert(urls.begin(),v);
  vector<int> visited(n+1);//网页是从1-N
  for(auto & id :urls[1]){//遍历第0个网页的包含那些网页 because urls is 0 ----n-1
    visited[1] = true;
    visited[id] = true;
    for(auto & id2 : urls[id ]){ // 遍历第0个网页中的每一个网页包含那些网页
      visited[id2] = true;
    }
  }
  int cnt =0;
  for(auto x : visited){
    cnt += x;
  }
  cout<< cnt ;

//注意题目编号是1-N 
}