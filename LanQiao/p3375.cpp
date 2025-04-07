#include <iostream>
using namespace std;
#include <vector>
int main(){
  vector<int> vec(12);
  vec.shrink_to_fit();
  vector<int> (vec).swap(vec);
}