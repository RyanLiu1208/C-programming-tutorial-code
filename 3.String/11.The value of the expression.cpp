/************************************
表达式的值
描述
给出一个表达式,其中运算符仅包含+,要求求出表达式的最终值。
如：1+1，则结果为2，1+2+3则结果为6，12+23则结果35。
输入描述
仅一行，即为含有正整数和+号的表达式。
输出描述
仅一行，既为表达式算出的结果（所有数据保证计算结果<=100000000）。
用例输入
1+1
用例输出
2
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str); // 读取一行字符串
    int sum = 0;
    string num = "";
    for (char c : str) {
        if (c == '+') {
            sum += stoi(num);
            num = "";
        } else {
            num += c;
        }
    }
    sum += stoi(num); // 处理最后一个数字
    cout << sum << endl;
    return 0;
}