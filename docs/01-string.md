# string 字串

C++ 整數與字串轉換 int string conversion  

整數轉字串 int to string  
使用C++11標準函式庫string的std::to_string()可把整數轉為字串。
```c++
main.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 123;
    string s = to_string(i);

    return 0;
}
```

字串轉整數 string to int  
使用C++11標準函式庫string的std::stoi()可把字串轉為整數。
```c++
main.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "123";
    int i = stoi(s);

    return 0;
}
```