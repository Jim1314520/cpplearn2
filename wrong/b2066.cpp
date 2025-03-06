 #include <iostream>
 using namespace std;
 #include <cmath>
 int main(){
  int n ;
  cin >> n;
  double sum = 0;
  while(n --){
    double x ,y;
    int num;
    cin >> x >> y >>num;
    sum += hypot(x, y) / 25.0 + num * 1.5;
  }
  cout << (int)ceil(sum) << endl;
 }