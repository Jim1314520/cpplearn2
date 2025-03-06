#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto &x : v){
    cin >> x;
  }
  // while(1){
  //     int temp = v[n-1];
  //     for(int i = n-1;i >0; i--){       //看清楚题目要求是往后移动
  //         v[i]  = v[i-1];
  //     }
  //     v[0] = temp; 
  //     for(auto x : v){
  //       cout<< x << " ";
  //     }
  //     cout<< endl;
  //     if( v[n-1] == n){
  //       break;
  //     }
  // }
  do{
    int back = v.back();
    v.erase(v.begin() + n -1);
    v.insert(v.begin(),back);
    for(auto x : v){
          cout<< x << " ";
    }
   cout<< endl;
 
  }while(v.back() != n);

}