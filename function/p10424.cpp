#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
  int n; 
  cin >> n;
  int cnt = 0;
  for(int i = 1; i <= n; i++){
    vector<int> num;
    int a =i;
    while(a){
       num.push_back(a % 10);
       a /= 10;
    }
    //reverse(num.begin(), num.end());
    int len = num.size();
    int cnt2 = 0;
    for(int j = 1; j <= len; j++){//表示的是第几位
      if((j % 2 == num[j-1] % 2 )){
        cnt2++;
      } 
    }
    if(cnt2 == len){
      cnt++;
    }
  }
  cout << cnt << endl;
}
