#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main(){
  int n, q;
  cin >> n >> q;
  // 遍历出所有的参数 a b c
  vector<int> a, b, c;
  while(n--){
    string s;
    cin >> s;
    a.push_back(stoi( s.substr(0, s.find('x',0)))) ;
    b.push_back(stoi( s.substr(s.find('x',0) + 1, s.find('=',0) - s.find('x',0) - 1))) ;
    c.push_back(stoi( s.substr( s.find('=',0) + 1))); 
  }
  
  while(q--){
    int cnt = 0;
    int l, r;
    cin >> l >>r;
    for(int i = l; i <= r; i++){
      for(int j = 0; j < a.size(); j++){
        if(a[j] * i + b[j] == c[j]){
          cnt ++;
          break; // 
        }

      }
    }
    cout << cnt << endl;
    
  }

}
