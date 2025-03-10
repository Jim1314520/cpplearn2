#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
  int t;
  cin >> t;
  while(t--){
    long long n ;
    cin >> n;
    if(n % 4 == 0){
      cout << "Yes" << endl;
      continue;
    }
    vector<int> num; //使用push_back 要看里面有没有数据
    while(n){
      num.push_back(n % 10);
      n /= 10;
    }
    bool found = false;
    for(size_t i = 0; i < num.size() && !found;  i++){
      for(size_t j = i; j< num.size() && !found; j++){
        vector<int> temp = num;
        temp.erase(temp.begin() + i, temp.begin() + j + 1);
        if(temp.empty()) continue;
        reverse(temp.begin(), temp.end());

        long long res = 0;
        for(size_t k = 0; k < temp.size(); k++){
          res *= 10; // 0 20    230 
          res += temp[k];  //2 23  234                  
        }
        if(res % 4 == 0) {
          cout << "Yes" << endl;
          found = true;
        }
        temp.clear();
      }
    }

    if(!found) cout << "No" << endl;
  }
}
