#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int sum = 0;
  int m =n;
  while (n--){//这里后面n会发生变化
    int a;
    cin>>a;
    sum += a;
  }
  cout.precision(5);
  cout<<fixed;
  //cout<<sum<<" "<< sum * 1.0 /m;
  cout<<sum<<" "<<  (double) sum/m;
  
}