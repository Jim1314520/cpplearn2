#include <bits/stdc++.h>
using namespace std;
int ans = 0;
void dfs(int step, int score){
  if(step > 30 || score == 100) return;
  if(score + (30 - step) * 10 < 70) return;
  if(score == 70) {
    ans ++;
    //return;
  }
  
  
  dfs(step + 1, 0);
   dfs(step + 1, score + 10);

}

int main() {
    
    dfs(0,0);
    cout << ans << endl;
    return 0;
}
