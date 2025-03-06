#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int max = 0;
  while(n--){
    int a;
    cin>>a;
    if(a > max){
      max = a;
    }
  }
  cout<<max<<endl;
}