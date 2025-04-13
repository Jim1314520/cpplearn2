#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
  // 请在此输入您的代码
  int n;
  cin >> n;
  vector<int> num(n,0);
 
  vector<int> close = {1, 0, 0, 0, 1, 0, 1, 0, 2, 1};
  for(int i = 0; i < n; i++){
  	int x;
  	cin >> x;
  	num[i] = x;
  }
  
  
  
  sort(num.begin(), num.end(), [&]( int a, int b){
    vector<int> va,vb;
    int A = a;
    int B = b;
    while(a){
      va.push_back(a % 10);
      a /= 10;
    }
    while(b){
      vb.push_back(b % 10);
      b /= 10;
    }
    int cnta = 0, cntb = 0;
    for(auto & x : va){
      cnta += close[x];
    }
    for(auto & x : vb){
      cntb += close[x];
    }
    if(cnta != cntb) {
      return cnta < cntb;  

    } else {
      return  A < B;
    }
  });
 
  for(auto & x : num){
    cout << x << " ";
  }
  cout << endl;
  return 0;
}