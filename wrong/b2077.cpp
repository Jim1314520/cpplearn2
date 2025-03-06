#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
int main(){
  long long  n ;
  cin >> n;
  while(true){
    if(n % 2 == 0){
      cout << n << "/2=" << n /2 << endl;
      n /= 2;
      continue;
    } else{
      if(n == 1 ) {
        cout << "End" << endl;
        break;
      } 
      cout << n <<"*3+1=" << n * 3 +1 << endl;
      n = n * 3 +1 ;
      continue;
    }
  }
}