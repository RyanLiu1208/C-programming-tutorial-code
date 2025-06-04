#include <iostream>//引用一个库文件，iostream是C++的标准输入输出流库
using namespace std;//使用标准命名空间，避免在使用标准库中的对象时需要加上std::前缀
int main() {
    // 主函数，程序的入口点
    int a = 111; // 定义一个整型变量a并初始化为111
    int b = 2; // 定义一个整型变量b并初始化为2
    cout<<"Please input two integers: " << endl; // 输出提示信息到标准输出
    cin >> a; // 从标准输入读取一个整数并赋值给a
    cin >> b; // 从标准输入读取一个整数并赋值给b
    int c = a + b; // 定义一个整型变量c，计算a和b的和
    cout << c << endl;
    return 0;
}