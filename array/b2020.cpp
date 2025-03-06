#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int array [5];
  for(auto& x:array){
    cin >> x;
  }
  int sum = 0;
  for(int i =0;i<5;i++){
    sum += array[i] % 3;
    array[i] /= 3;
    array[(i+1) %5] += array[i];
    array[(i + 4) % 5 ] += array[i];
  }
  for(auto x:array){
    cout<<x<<" ";
  }
  cout<<endl;
  cout<<sum<<endl;

}