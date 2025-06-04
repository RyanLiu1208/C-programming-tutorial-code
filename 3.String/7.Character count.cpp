/************************************
字符统计
描述
输入一串小写字母(以‘.’为结束标志)，统计出每个字母在该字符串中出现的次数(若某字母不出现，则不要输出)。 要求：每行输出5项，每项以空格隔开。
输入描述
输入一行以’.'结束的字符串
输出描述
输出相应小写字母的个数。
用例输入 1 
aaaabbbccc.
用例输出 1 
a:4 b:3 c:3
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str); // 读取字符串
    int count[26] = {0}; // 统计a-z出现次数
    for (char ch : str) {
        if (ch == '.') break;
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++;
        }
    }
    for (int i = 0; i < 26; ++i) {
        if (count[i] > 0) {
            cout << char('a' + i) << ":" << count[i] << " ";
        }
    }
    return 0;
}