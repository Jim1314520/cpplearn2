#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
string Base(int a, int p){
  string num;
  if(p <= 10){
    while(a){  // a = 9 p = 4 12  4   30    123 10  321
      num +=(a % p + '0');  //  1 2  0 3
      a /= p;
    }
    reverse(num.begin(), num.end()); // 21
    return  num;
  } else{  
    while(a){   //  120 转换为12   为 A0    100 12 84 
    if(a % p >= 10){
      num +=(a % p - 10 + 'A');
    } else{
      num +=(a % p + '0');
    }
    a /= p;
    }
    reverse(num.begin(), num.end());
    return  num;
  }
}
int main(){
  int p;
  cin >> p;
  for(int i = 1; i < p; i++){
    for(int j = 1; j <= i; j++){
      cout << Base(i, p) << "*" << Base(j, p) << "=" << Base(i * j, p)  << " ";
    }
    cout << endl;
  }




}