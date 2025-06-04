/************************************
字典排序
描述
输入N（N<=10）个不超过4位的整数，并要求按字典顺序（字典顺序的方法：先比较第一个数字，小者在先，若相同再比较第2位数字，以此类推），由小到大排序输出。
输入描述
第一行为一个整数N 第2-N+1行为N个不超过4位的整数
输出描述
一行，按字典顺序由小到大排序输出这N个整数。
用例输入
5
13
130
39
27
4
用例输出
13 130 27 39 4
*******************************************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    string nums[10];
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }
    sort(nums, nums + N);
    for (int i = 0; i < N; ++i) {
        cout << nums[i] << " ";
    }
    return 0;
}