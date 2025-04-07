#include <bits/stdc++.h>
using namespace std;
bool isGood(int a){
  vector<int> v;
  while(a){
    v.push_back(a % 10);
    a /= 10;
  }
  int cnt = 0;
  for(int i = 1; i <= v.size(); i++){
    if(i % 2 == v[i - 1] % 2){
      cnt ++;
    }
  }
  return cnt == v.size();
}
int main(){
  int n;
  cin >> n;
  int cnt = 0;
  for(int i = 1; i <= n; i++){
   cnt += isGood(i);
  }
  cout << cnt <<endl;

}