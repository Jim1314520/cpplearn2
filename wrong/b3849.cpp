#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main(){
  int n ,r;
  cin >> n >> r;
  vector<int> num(n);

  while(n){
    num.push_back(n % r);
    n /=r;  
  }
  reverse(num.begin(),num.end());
  for(auto & x : num){
    if (x < 10){
      cout << x ;
    } else{
      cout << char('A'+(x-10) );
    }
  }
  cout << endl;
}