#include <iostream>
using namespace std;

// 使用const定义圆周率PI
const double PI = 3.14159;

int main() {
    double radius, height, volume;

    // 从键盘输入圆锥底的半径和高
    cout << "请输入圆锥底的半径：";
    cin >> radius;
    cout << "请输入圆锥的高：";
    cin >> height;

    // 计算圆锥的体积
    volume = (1.0 / 3) * PI * radius * radius * height;

    // 输出圆锥的体积
    cout << "圆锥的体积是：" << volume << endl;

    return 0;
}