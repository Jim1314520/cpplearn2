#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main(){
  int n, q;
  cin >> n >> q;
  vector<int> a, b, c;
  while(n--){
    string ques;
    cin >> ques;
    int plus =  ques.find("x");// 1 2
    int eq = ques.find("=");// 4 6   
    a.push_back( stoi(ques.substr(0,plus))) ;//这里要用puls 负数前面有负号 
    b.push_back(stoi(ques.substr(plus + 1, eq - plus - 1) ));
    c.push_back(stoi(ques.substr(eq + 1)));
  }
  // for(auto & x : a){
  //   cout << x ;
  // } 
  // cout << endl;
  // for(auto & x : b){
  //   cout << x ;
  // } 
  // cout << endl;
  // for(auto & x : c){
  //   cout << x ;
  // } 
  // cout << endl;
  while(q--){
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    // for(int i = 0; i < a.size(); i ++){ // 遍历所有的a
    //   for(int j = l; j <= r; j++){
    //     if(a[i] * j + b[i] == c[i]){ // 遍历范围的x，看有多少x至少满足一个方程
    //       cnt ++ ;
    //       break;
    //     }
    //   }
    // }
    //不能先遍历所有的方程，因为给出的范围可能有多个数字满足多个方程，要遍历数组的范围
    for(int x = l; x <= r; x++){
      for(int i = 0; i < a.size(); i++){
          if(a[i] * x + b[i] == c[i]){ // 遍历范围的x，看有多少x至少满足一个方程
            cnt ++ ;
            break;
         }
      }
    }


    cout << cnt << endl;
  }
}