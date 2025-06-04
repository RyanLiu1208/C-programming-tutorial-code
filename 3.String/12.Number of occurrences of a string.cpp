/************************************
字符串出现次数
描述
一个字符串中任意个连续的字符组成的子序列为该字符串的子串。给定子串s1和它的一个字符串s2，求s1在 s2中出现的次数。
输入描述
第一行， 表示 字符串s1， 第二行，表示字符串s2
输出描述
一个整数，代表s1在s2中出现的次数。
用例输入
ab
abbaabcaabc
用例输出
3
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int count = 0;
    for (int i = 0; i <= str2.length() - str1.length(); i++) {
        if (str2.substr(i, str1.length()) == str1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}