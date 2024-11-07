#include <iostream>
#include <iomanip> // 用于设置输出精度
using namespace std;

int main() {
    double fahrenheit, celsius;

    // 提示用户输入华氏温度
    cout << "请输入华氏温度：";
    cin >> fahrenheit;

    // 华氏温度转换为摄氏温度的公式：C = (F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5 / 9;

    // 设置输出精度为两位小数
    cout << fixed << setprecision(2);

    // 输出摄氏温度
    cout << "对应的摄氏温度是：" << celsius << "°C" << endl;

    return 0;
}