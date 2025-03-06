#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int x;
  for(int i =2;;i++){
    if( (a % i == b % i)  && (b %i == c % i)){
      x = i;
      break;
    }
  }
  cout<<x<<endl;
}