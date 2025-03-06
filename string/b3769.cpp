#include <iostream>
using namespace std;
#include <string>
int main(){
  string s, t;
  cin >> s >>t;
  int q;
  cin >> q;
  while(q--){
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    string s1, t1;
    s1 = s.substr(l1 - 1, r1 - l1 + 1);//第一个是位置， 第二个代表长度
    t1 = t.substr(l2 - 1, r2 - l2 + 1);
    if(s1 < t1){
      cout << "yifusuyi" << endl;
    } else if(s1 > t1){
      cout << "erfusuer" << endl;
    } else{
      cout << "ovo" << endl;
    }
    s1.clear();
    t1.clear();
  }
  
}