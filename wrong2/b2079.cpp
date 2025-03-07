#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  double e = 1.0;
  for(int i = 1; i <= n; i++){
    double res = 1.0;
    for(int j = 1; j <= i; j++){  // n = 4 i = 0 j = 1 ,j = 2 ,
      res *= j;   //   res =  1 * 2 * 3
      
    }
    e += 1 / res;
   
  }
  cout.precision(10);
  cout << fixed;
  cout << e << endl;

}
