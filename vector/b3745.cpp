#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main(){
  int n ,m, r;//牌数 花色 点数
  cin >> n >> m >>r;
  vector<int> f1(n);
  vector<int> p1(n);
  vector<int> f2(n);
  vector<int> p2(n);
  for(auto & x :f1) cin >> x;
  for(auto & x :p1) cin >> x;
  for(auto & x :f2) cin >> x;
  for(auto & x :p2) cin >> x;
  while(n --){//假如后续n--不使用了就可以while 要使用就用for 
    int order;
    cin >>order;
    order--; //由于数组是从0开始的
    // 第order张牌的点数和花色 p[order] f1[order] 
    int index = -1;
    for(int i = 0;i < f2.size(); i++){//这里不能使用n
      if(f2[i] == f1[order] && p2[i] > p1[order] ){//由于要出最小的点数,需要更新i
        if(p2[i] < p2[index] || index == -1){ // 用于更新第一次找到符合条件的牌， 但不一定是最小的点数，所以后续需要更新
          index = i;
        }
      }
    }
    if(index != -1){//找到符合条件的牌了
      f2.erase(f2.begin() + index);
      p2.erase(p2.begin() + index);
    }   
  }
  cout<< f2.size() << endl;

}
   

