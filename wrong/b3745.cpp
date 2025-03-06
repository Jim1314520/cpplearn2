#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n , m, r;
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
    int min = -1;
    int len = f2.size();
    for(int i = 0;i < len; i++){
      if( f1[order] == f2[i] && p2[i] > p1[order]){
          if(p2[min] > p2[i] || min == -1){
            min = i;
          }
        }
      }
    if(min != -1){
      f2.erase(f2.begin() + min);
      p2.erase(p2.begin() + min);
      
    }
     
  }
  cout << f2.size() << endl;
}