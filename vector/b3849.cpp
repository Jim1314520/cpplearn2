#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main(){
  int n,r;
  cin >> n >> r;
  vector<int> digits;
  while(n){
    digits.push_back( n % r);
    n /= r;
  }
  reverse(digits.begin(),digits.end());
  for(auto & x : digits){
    if(x < 10){
      cout<<x;
    } else{
      cout<< char('A' + (x -10)) ;
    }
  }
}