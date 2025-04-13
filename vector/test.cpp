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

  
//   int cnt =0;
//   for(auto x : visited){
//     cnt += x;
//   }
//   cout<< cnt ;

//注意题目编号是1-N 
}