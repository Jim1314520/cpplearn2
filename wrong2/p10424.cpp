#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
bool isGood(int  a){
  vector<int> n;
  while(a){  // 234     432 
    n.push_back(a % 10);
    a /= 10;
  }
  //reverse(n.begin(), n.end()); // 234 
  bool flag = false;
  size_t cnt = 0;
  for(size_t i = 1; i <= n.size(); i++){
    if(i % 2 == n[i - 1] % 2){
      cnt++;
    }
  }
  if(cnt == n.size()){
    flag = true;
  }
  return flag;
}
int main(){
  int n;
  cin >> n;
  int cnt = 0;
  for(int i = 1; i <= n; i++){
    if( isGood(i)) cnt ++;
  }
  cout << cnt << endl;

}