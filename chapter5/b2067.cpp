#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
int main(){
  int m,n;
  cin>>m>>n;
  int cnt = 0;
  
  while(n--){
    int a;
    cin>>a;
    if(a > m){
        cnt ++;
    }else{
      m -=a;
    }
  }
  cout<< cnt<<endl;
}