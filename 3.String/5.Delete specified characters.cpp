/************************************
删除指定字符
描述
从键盘输入一个字符串str和一个字符c，删除str中的所有字符c并输出删除后的字符串str。
输入描述
第一行是一个字符串； （不含空格）
第二行是一个字符。
输出描述
删除指定字符后的字符串。
用例输入
sdf$$$sdf$$
$
用例输出
sdfsdf
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char c;
    getline(cin, str); // 读取字符串
    cin >> c; // 读取要删除的字符
    string result; // 用于存储删除指定字符后的结果
    for (char ch : str) {
        if (ch != c) { // 如果当前字符不是要删除的字符
            result += ch; // 将其添加到结果字符串中
        }
    }
    cout << result << endl; // 输出删除指定字符后的字符串
    return 0;
}