#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main(){
  // abc axyijkabczbc
  // ijk 
  // xyz xyijkabcz 
  int n, q;
  cin >> n >> q;
  vector<string> strs(n);
  for(auto & str : strs) cin >> str;
  for(int i = 0; i < q; i++){
    int a;
    cin >> a;
    if(a == 1){
      int b, c, d;
      cin >> b >> c >> d;
      strs[c-1].insert(d, strs[b-1]);
    } 
    if(a == 2){
      int e;
      cin >> e;
      cout << strs[e - 1] << endl;
    }
  }
}