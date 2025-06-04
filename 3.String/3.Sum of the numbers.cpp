/***************************
求各位数字之和
描述
输入一个正整数N（0 <= N <= 2147483647），求它的各位数字之和。
输入描述
一行，一个正整数N。
输出描述
一行，一个整数。
用例输入 1 
189
用例输出 1 
18
 ****************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int sum = 0;
/*******************************
isalpha()用来判断一个字符是否为字母
isalnum（）用来判断一个字符是否为数字或者字母，也就是说判断一个字符是否属于a~ z||A~ Z||0~9
isdigit() 用来检测一个字符是否是十进制数字0-9
islower()用来判断一个字符是否为小写字母，也就是是否属于a~z
isupper()和islower相反，用来判断一个字符是否为大写字母
*******************************/
    for (char c : input) {
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    cout << sum << endl;
    return 0;
}