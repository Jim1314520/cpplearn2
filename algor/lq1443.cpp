#include <iostream>
using namespace std;
#include <vector>
int main(){
  vector<int> v(10,2021);
  for(int i = 1;;i++){
    if(![&](int x){
      for(;x;x /=10){
        int digit = x % 10;
        if(v[digit] == 0) return false;
        v[digit] --;
      }
      return true;
    }(i)) {
      cout << i - 1 << endl;
      break;
    }
  }
}