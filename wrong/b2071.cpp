#include <iostream>
using namespace std;
#include <cmath>
int main(){
 int a , b, c;
 cin >> a >> b >> c;
 for(int i = 2; ; i++){
  if( (a % i == b % i ) && (b % i == c % i) ){
    cout << i << endl;
    break;
  }
 }
}