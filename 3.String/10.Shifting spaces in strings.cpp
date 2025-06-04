/************************************
字符串中的空格移位
描述
输入一个字符串，将其中的所有空格都移到最前面，然后输出。
输入描述
一个字符串。如：a□b□c（为了能看清空格， □代表一个空格，但实际测试数据中不用 □表示空格 ）
输出描述
空格全部移到了串前的字符串。如： □ □abc
用例输入
a b c
用例输出
  abc
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str); // 读取一行字符串
    string result;
    int spaceCount = 0;
    for (char c : str) {
        if (c == ' ') {
            spaceCount++;
        } else {
            result += c;
        }
    }
    // 在结果前添加空格
    result.insert(0, spaceCount, ' ');
    cout << result << endl;
    return 0;
}