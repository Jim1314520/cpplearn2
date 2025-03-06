#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
int main(){
  int n;
  cin>>n;
  int cnt = 0;//计数器
  for(int i = 2; ;i++){//1不是质数
    bool isPrime =true;
    for(int j = 2; j * j <= i;j++){//质数是除去1和本身，所以这里不能取等号
      if(i % j == 0){//当前i不是质数
        isPrime = false;
        break;
      }
    }
    if(isPrime){
      cnt++;
      if(cnt == n){
        cout<<i<<endl;
        break;
      }
    }
   // cnt ++;//无论怎么样都会进行++,所以要进行一个判断
    
  }
}