#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
  int a = 520;
  vector<int> dayInmonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  auto timeTodate = [&](int month, int day, int hour, int min, int second){
    long long res = 0;
    int secondInday = 24 * 60* 60;
    for(int i = 1; i < month; i++){
      res += dayInmonth[i] * secondInday;
    }
    res += (day - 1) * secondInday;
    res += hour * 3600;
    res += min * 60;
    res += second;
    return res;

  };
  long long sum = 0;
  vector<long long> num;

  while(a--){
  	int y, m, d, hh, mm, ss;
    scanf("%d-%d-%d %d:%d:%d",&y,&m,&d,&hh,&mm,&ss);
    num.push_back(timeTodate( m, d, hh, mm, ss));
  }
  sort(num.begin(), num.end());
  for(int i = 0;i < 520;i += 2){
    sum += num[i + 1] - num[i];
  }
  // 请在此输入您的代码
  cout << sum << endl;
  return 0;
}
