#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
int main(){
 int a, b;
 cin >> a >> b;
 int c = a;
 while(b--){
  a %= 1000;
  a *= c;
  //cout << a << " ";
  
 }
 cout << setfill('0') << setw(3)  << a / c << endl;
}
