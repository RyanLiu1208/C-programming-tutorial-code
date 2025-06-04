/************************************
倒置输出字符串
描述
随机输入一个长度不超过255的字符串，将其倒置后输出。
输入描述
只有一行。
输出描述
只有一行。
用例输入 1 
asdfghjkl123456
用例输出 1 
654321lkjhgfdsa
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    /*****input.rbegin()：返回 input 字符串的反向迭代器的起始位置（即最后一个字符）。
    input.rend()：返回 input 字符串的反向迭代器的结束位置（即第一个字符的前一个位置）。
    string(input.rbegin(), input.rend())：用 input 的反向迭代器区间构造一个新的字符串，也就是把 input 从后往前依次取出字符，生成一个倒序的新字符串。
    最终，reversed 就是 input 的倒置字符串。*****/
    string reversed = string(input.rbegin(), input.rend());
    cout << reversed << endl;
    return 0;
}