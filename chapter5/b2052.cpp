#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
int main(){
  int a,b;
  char c;
  cin>> a >> b >> c;
  switch (c) {
  case '+':
   cout<< a + b <<endl;
    break;
  case '-':
    cout<< a - b <<endl;
     break;
  case '*':
     cout<< a * b <<endl;
      break;
  case '/':
    if(b == 0){
      cout<<"Divided by zero!"<<endl;
    }else{
      cout<< a / b <<endl;
    }
   
     break;
  default:
    cout<<"Invalid operator!"<<endl;
    break;
  }
 
}