#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <iomanip>
int main(){
  int a , b;
  cin>>a>>b;
  int res= 1;
  while( b--){
    res *=a;
    res %=7;
  }
  switch (res)
  {
  case 1:
    cout<< "Monday"<<endl;
    break;
  case 2:
    cout<< "Tuesday"<<endl;
    break;
  case 3:
    cout<< "Wednesday"<<endl;
    break;
  case 4:
    cout<< "Thursday"<<endl;
    break;
  case 5:
    cout<< "Friday"<<endl;
    break;
  case 6:
    cout<< "Saturday"<<endl;
    break;
  default:
    cout<< "Sunday"<<endl;
    break;
  }
}