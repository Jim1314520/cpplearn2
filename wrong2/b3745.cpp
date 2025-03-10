#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n, m, r;
  cin >> n >> m >> r;
  vector<int> f1(n);
  vector<int> p1(n);
  vector<int> f2(n);
  vector<int> p2(n);
  for(auto & x : f1) cin >> x;
  for(auto & x : p1) cin >> x;
  for(auto & x : f2) cin >> x;
  for(auto & x : p2) cin >> x;
  while(n--){
    int order;
    cin >> order;
    order --;
    int index = -1;
    bool found = false;
    for(size_t i = 0; i < f2.size(); i++){
      if(f1[order] == f2[i] && p1[order] < p2[i]){
        if(p2[i] < p2[index] || index == -1){
          index = i;
          found = true;
        }
      }
    }
    if(found){
      f2.erase(f2.begin() + index);
      p2.erase(p2.begin() + index);
    }
  }
  cout << f2.size() << endl;





}
