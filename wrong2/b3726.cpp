#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main(){
  int n, q;
  cin >> n >> q;
  vector<string> strs(n);
  for(auto & str : strs) cin >> str;
  while(q--){
    int a;
    cin >> a;
    if(a == 1){
      int x, y, b;
      cin >> x >> y >> b;
      strs[y -1].insert(b,strs[x - 1]);
    } else{
      int y;
      cin >> y;
      cout << strs[y - 1] << endl;
    }
  }

}
