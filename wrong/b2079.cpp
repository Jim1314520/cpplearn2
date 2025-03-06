#include <iostream>
using namespace std;
#include <algorithm>
#include <string.h>
#include <ctype.h>
int main(){
  double e = 1;
  int n;
  cin >> n;
  for(int i = 1; i <= n ;i++){
    double res = 1;
    for(int j = 1; j <= i ;j++){
      res *= j;
    }
    e += 1/res;
  }
  cout.precision(10);
  cout<<fixed;
  cout << e << endl;
}