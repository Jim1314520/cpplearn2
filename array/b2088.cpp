#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int arr[10];
  for(auto & x: arr) cin >> x;
  double sum = 0;
  double books [10] ={28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
  for(int i = 0;i<10;i++){
    sum += arr[i] * books[i];
  }
  cout.precision(1);
  cout<<fixed;
  cout<<sum;
}