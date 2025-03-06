#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
  int t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    if(n % 4 == 0){
      cout << "Yes" << endl;
      continue;
    } else{
      vector<int> num;
      while(n){
        num.push_back(n % 10);
        n /=10;
      }
      reverse(num.begin(),num.end());
      bool found = false;
      for(int i = num.size()-1; i >= 0 && !found;i--){
        for(int j = i; j >= 0 && !found; j--){
          vector<int> test = num;
          test.erase(test.begin() + j, test.begin() + i  + 1);
          if(test.empty()) continue;
        //  int temp = 0;
          long long temp = 0;
          for(auto & x : test){
            // temp *=10; 
            // temp += x ;
            temp = temp * 10 + x;
          }
          if(temp % 4 == 0){
            found = true;
            cout << "Yes" << endl;    
          }
        }
      }
      if(!found){
        cout << "No" << endl;
      }
      
    }
  }
}