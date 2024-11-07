#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    //fh是“符号”的意思
    char fh;
    cout << "请输入两个数字和一个运算符（例如：5 + 3）: ";
    cin >> num1 >> fh >> num2;

    if (fh != '+' && fh != '-' && fh != '*' && fh != '/' && fh != '%') {
        cout << "非法的运算符！" << endl;
        return 1;
    }
    // 根据运算符进行计算
    switch (fh) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "除数不能为0！" << endl;
            return 1;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "取模运算的除数不能为0！" << endl;
            return 1;
        }
        else {
            cout << num1 << " % " << num2 << " = " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
        break;
    default:
        cout << "未知错误！" << endl;
        return 1;
    }
    return 0;
}
