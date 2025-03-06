#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n; 
  cin >> n;
  vector<int> p(n);
  for(auto & x : p) cin >> x;
  while(true){
  int back = p.back();
  p.erase(p.begin() + n);
  p.insert(p.begin(),back);
  for(auto & x : p) {
    cout << x << " ";
  } 
  cout << endl;
   if(p.back() == n){
    break;
  }
  }
}