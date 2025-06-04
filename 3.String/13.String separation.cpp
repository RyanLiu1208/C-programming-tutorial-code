/************************************
字符串分离
描述
对输入的一行字符串做如下操作：将大写字母反向连成字符串，将小写字母正向连成字符串，最后输出一个字符串。
输入描述
一行，包含若干个字符(个数不超过255，不含空格）
输出描述
一行，包含所有分离后符合条件的字符连接成的字符串。
用例输入
7DVesb#Ft%
用例输出
FVDesbt
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string upper = "", lower = "";
    for (char c : str) {
        if (isupper(c)) {
            upper = c + upper;  // 反向连接大写字母
        } else if (islower(c)) {
            lower += c;  // 正向连接小写字母
        }
    }
    cout << upper + lower << endl;
    return 0;
}