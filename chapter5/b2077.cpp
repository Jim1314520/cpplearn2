#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
int main(){
 long long  n;
 cin>>n;
 while(1){
  if(n == 1){
  cout<<"End"<<endl;
  break;
 }else if(n % 2 == 0){
  cout<<n<<"/2="<<n/2<<endl;
  n /=2;
  continue;
 }else{
  cout<<n<<"*3+1="<<n * 3 + 1<<endl;
  n = n * 3 + 1;
  continue;
 }
 }
 
}