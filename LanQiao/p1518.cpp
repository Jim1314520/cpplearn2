#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>
int main(){
  vector<string> grid(10);
  for(auto & s: grid) getline(cin, s);
  //定义Famer f 和c 的位置 （0：北，1：东，2：南，3：西）
  int fx, fy, cx, cy;
  int fdir = 0, cdir = 0;
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(grid[i][j] == 'F'){
        fx = i;
        fy = j;
      }
      if(grid[i][j] == 'C'){
        cx = i;
        cy = j;
      }
    }
  }
  //定义方向
  int dx[4] = {-1, 0, 1, 0}; // 方向对应的是北 东 南 西
  int dy[4] = {0, 1, 0, -1};
  int minutes = 0;
  for(int i = 0; i < 160000; i++){
    //检查是否相遇
    if(fx == cx && fy == cy){
      cout << minutes << endl;
      return 0;
    }
    //// Farmer John 的移动：判断前方是否可走
    int nfx = fx + dx[fdir], nfy = fy + dy[fdir];
    if(nfx < 0 || nfx >= 10 || nfy < 0 || nfy >= 10 || grid[nfx][nfy] == '*'){
      //前方不可走，顺时针旋转90°
      fdir = (fdir + 1) %4 ;
    } else{
      fx = nfx; fy = nfy;
    }
    // 牛的移动
    int ncx = cx + dx[cdir], ncy = cy + dy[cdir];
    if(ncx < 0 || ncx >= 10 || ncy < 0 || ncy >= 10 || grid[ncx][ncy] == '*'){
      cdir = (cdir + 1) % 4;
    } else{
      cx = ncx; cy = ncy;
    }
    minutes ++;
  }
  cout << 0 << endl;

}