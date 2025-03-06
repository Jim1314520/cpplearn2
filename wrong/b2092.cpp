#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n;
  cin >> n;
  vector<bool> light(n+1,0);//0 是关闭 1 开
  for(int i = 2; i <= n;i++){
    for(int j = i;j <= n ;j+=i){
      light[j] = !light[j];
    }
  }
  for(int i =1;i<n+1;i++){
    if(light[i]==0){
      cout << i << " ";
    }
  }
  cout << endl;
}