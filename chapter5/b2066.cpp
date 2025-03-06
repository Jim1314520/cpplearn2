#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
int main(){
  int n;
  cin>>n;
  double sum = 0;//救援时间
  for(int i =0;i < n;i++){
    double x,y,a;
    cin>>x>>y>>a;
    double ship = 2 * hypot(x,y) / 50;
    sum += ship + 1.5 * a;

  }
  cout<<(int) ceil(sum) <<endl;
}