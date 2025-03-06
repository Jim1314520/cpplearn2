#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
int main(){
 long long m;
 int k;
 cin>>m>>k;
 int cnt =0;
 while(m){
  if(m % 10 == 3){
    cnt++;
  }
  m /=10;
 }
 if(cnt == k){
  cout<<"YES"<<endl;
 }else{
  cout<<"NO";
 }
}