#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n ,t;
  cin >> n >> t;
  vector<int> ids(n);

  for(auto & id : ids) cin >> id;
 // vector<int> temp ;//由于每次都要操作数组，创建一个临时数组
  while(t--){
    int k;
    cin >> k;
    vector<int> temp ;//由于每次都要操作数组，创建一个临时数组
    for(int i = 0; i < k; i++){
      for(int j = i; j < n;j += k){
        temp.push_back(ids[j]);
      }
    }
    ids = temp;
    temp.clear();
  }
  for(auto & id : ids) {
    cout << id << " ";
  }
  cout << endl;
}