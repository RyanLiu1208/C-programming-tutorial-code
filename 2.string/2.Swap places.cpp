/***************************
调换位置
将用逗号隔开的两个英语单词交换位置输出。
输入描述
一行以逗号隔开的两个英文单词
输出描述
将两个单词交换后输出的结果
用例输入 1 
abc,de
用例输出 1 
de,abc
 ****************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int commaPos = input.find(',');
    string word1 = input.substr(0, commaPos);
    string word2 = input.substr(commaPos + 1);
    cout << word2 << "," << word1 << endl;
    return 0;
}