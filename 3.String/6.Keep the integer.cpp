/************************************
保留整数
描述
输入一个字符串str1，把其中的连续非数字的字符子串换成一个‘*’，存入字符数组str2 中，所有数字字符也必须依次存入 str2 中。输出str2。
输入描述
输入为一行字符串str1，其中可能包含空格。字符串长度不超过80个字符。
输出描述
输出处理好的字符串str2。
用例输入 1 
$Ts!47&*s456  a23* +B9
用例输出 1 
*47*456*23*9
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str); // 读取字符串
    string result;
    bool in_number = false; // 标记是否已经遇到数字
    for (char ch : str) {
        if (isdigit(ch)) {
            if (!in_number) { // 第一次遇到数字前加*
                result += '*';
                in_number = true;
            }
            result += ch;
        } else {
            in_number = false;
        }
    }
    cout << result << endl;
    return 0;
}