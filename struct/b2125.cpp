#include <iostream>
using namespace std;
#include <algorithm>
struct stu{
  int score;
  string name;
};
int main(){
  int n;
  cin >> n;
  stu * students  = new stu[n];
  for(int i = 0; i < n; i++){
    cin >> students[i].score >> students[i].name;
    
  }
  sort(students, students + n,[](stu & a, stu &b){
    return a.score > b.score;
  });
  cout << students[0].name << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<pair<int, string>> vec(n);
  for (auto &[score, name] : vec) cin >> score >> name;
  cout << max_element(vec.begin(), vec.end())->second << endl;
  // (*max_element(vec.begin(), vec.end())).second;
} 