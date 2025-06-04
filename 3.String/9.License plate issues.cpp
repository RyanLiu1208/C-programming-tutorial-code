/************************************
贝贝的车牌问题
描述
广州市车管所为每一辆入户的汽车都发放一块车牌，车牌的号码由六个字符组成，如A99452、B88888等，
这个字符串从左边数起的第一个字符为大写英文字母，如A、B、C等，表示这辆车是属于广州市区内的汽车还是郊区的汽车，
后面的五位由数字组成。假定以字母A、B、C、D、E、F、G、R、S、T开头的表示是市区车牌，而以其他字母开头的表示郊区车牌。
车管所把这个任务交给贝贝。请你帮贝贝找出所给出的车牌中有多少辆是广州郊区的汽车。
输入描述
第1行是一个正整数N（1<=N<=10^6），表示共有N个车牌。接下来的N行，每行是一个车牌号。题目保证给出的车牌不会重复。
输出描述
只有1行，即广州郊区车牌的数量。
用例输入
3
G54672
Q87680
P77771
用例输出
2
*******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N; // 读取车牌数量
    int count = 0; // 统计郊区车牌数量
    for (int i = 0; i < N; ++i) {
        string plate;
        cin >> plate; // 读取每个车牌号
        char firstChar = plate[0]; // 获取第一个字符（字母）
        // 判断是否为市区车牌，如果不是则为郊区车牌
        if (firstChar != 'A' && firstChar != 'B' && firstChar != 'C' &&
            firstChar != 'D' && firstChar != 'E' && firstChar != 'F' &&
            firstChar != 'G' && firstChar != 'R' && firstChar != 'S' &&
            firstChar != 'T') {
            count++; // 郊区车牌数量加1
        }
    }
    cout << count << endl; // 输出郊区车牌数量
    return 0;
}