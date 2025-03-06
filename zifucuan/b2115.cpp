#include <iostream>
using namespace std;
#include <algorithm>
#include <string.h>
int main(){
  char str[10001], str2[10001];
  cin.getline(str,10001);
  int len = strlen(str);
  for(int i = 0; i < len; i++){
    if(isalpha(str[i])){
        // 如果是 'a' 或 'A'，需要特殊处理
        if(str[i]=='a')
            str2[i] = 'z';
        else if(str[i]=='A')
            str2[i] = 'Z';
        else
            str2[i] = str[i] - 1;
    } else {
        str2[i] = str[i];
    }
  } 
      
  // for(int i = 0;i < strlen(str2) -1; i++){
  //   cout << str2[i];
  // }
  // cout << endl;
  str2[len] = '\0';
  cout << str2 << endl;
}
/*
在 C 语言中，字符串是由字符数组表示的，并以空字符（`'\0'`）作为
结束标志。citeturn0search4这意味着，字符串处理函数（如 `strlen`、
`printf` 等）会从数组的起始位置开始读取字符，直到遇到 `'\0'`，才认为字符串结束。
**问题分析：**
在你的代码中，存在以下问题：
1. **未正确设置字符串结束符：**
   ```cpp
   str2[strlen(str2)] = '\0';
   这行代码试图在 `str2` 的末尾添加 `'\0'`，但由于此时 `str2` 尚
   未被正确初始化，`strlen(str2)` 的结果是未定义的，可能导致在错误的位置
   设置 `'\0'`，从而引发未定义行为。
**解决方案：**
在填充完 `str2` 后，直接在已知的字符串长度位置添加 `'\0'`：
```cpp
str2[len] = '\0';
```
这样，`str2` 就被正确地标记为以 `'\0'` 结尾的字符串，确保后续的字符
串操作函数能正常工作。
**总结：**
在 C 语言中，确保字符串以 `'\0'` 结尾对于字符串处理函数的正确运行至
关重要。未正确设置结束符可能导致函数无法确定字符串的结束位置，进而引发错误或未定义行为。 */