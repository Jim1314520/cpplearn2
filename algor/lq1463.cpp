#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
int main()
{
 long long cnt = 0;
  long long n = 2021041820210418;
  vector<long long> num;
  for(long long i = 1; i <= 44955998 ;i++){
    if(n % i == 0){
      num.push_back(i);
      if( i * i != n) num.push_back(n / i);
    }
    
  }
  for(int i = 0; i < num.size(); i++){
    for(int j = 0; j < num.size(); j++){
      for(int k = 0; k < num.size(); k++){
        if(num[i] * num[j] * num[k] == n) cnt ++;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}