// #include <iostream>
// using namespace std;
// #include <algorithm>
// #include <vector>
// int main(){
//   int t;
//   cin >> t;
//   while(t --){
//     long long n;
//     cin >> n;
//     if(n % 4 == 0){
//       cout<<"Yes" << endl;
//       continue;
//     }
//     //用一个数组存储每一位数
//     vector<int> digits;
//     while(n){
//       digits.push_back(n % 10);
//       n /= 10;
//     }
//     reverse(digits.begin(),digits.end());
//     bool found = false;
//     for(int i =0; i < digits.size() && ! found ;i++){//n在之前已经被使用过，这里不能使用n
//       for(int j = i+1 ;j <= digits.size() && ! found ;j++){
//         vector <int> temp = digits;//用一个临时数组操作，因为是多次循环判断
//         temp.erase(temp.begin() + i ,temp.begin() + j );//erase 是左闭右开的区间
//         if(temp.empty()) continue;
//         //讲数组还原为数字
//         long long x = 0;
//         for(auto & d : temp){
//           x =  x * 10 + d;
//         }
//         if(x % 4 == 0){
//           //由于找到后需要退出循环，用一个标志
//           found = true;
//         }
//       }
//     }
//     if(!found){
//       cout<<"No" << endl;
//     } else{
//       cout << "Yes" << endl;
//     }

    
//   }

// }
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        
        // 如果原数字能被4整除，直接输出"Yes"
        if (n % 4 == 0) {
            cout << "Yes" << endl;
            continue;
        }
        
        // 将数字分解成每一位
        vector<int> num;
        while (n) {
            num.push_back(n % 10);
            n /= 10;
        }

        reverse(num.begin(), num.end()); // 反转数字，使得最低位在前
        
        bool found = false;
        
        // 尝试删除连续的一段数字
        for (int i = num.size() - 1; i >= 0 && !found; i--) {
            for (int j = i; j >= 0 && !found; j--) {
                vector<int> test = num;
                test.erase(test.begin() + j, test.begin() + i + 1);
                
                // 确保剩下的数字非空
                if (test.empty()) continue;
                
                // 判断剩余部分的最后两位是否能被4整除
                long long temp = 0;
                for (auto& x : test) {
                    temp = temp * 10 + x;
                }
                
                if (temp % 4 == 0) {
                    found = true;
                    cout << "Yes" << endl;
                }
            }
        }

        // 如果没有找到符合条件的，输出"No"
        if (!found) {
            cout << "No" << endl;
        }
    }

    return 0;
}
