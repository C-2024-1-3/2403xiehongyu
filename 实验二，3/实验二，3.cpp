#include <iostream>
using namespace std;

bool canFormTriangle(int a, int b, int c) {
    // 检查是否能够构成三角形：任意两边之和大于第三边
    return a + b > c && a + c > b && b + c > a;
}

int main() {
    int a, b, c, perimeter;
    cout << "请输入三角形的三条边长：";
    cin >> a >> b >> c;
    if (canFormTriangle(a, b, c)) {
        // 计算周长
        perimeter = a + b + c;
        cout << "三角形的周长是：" << perimeter << endl;

        // 判断是否为等腰三角形
        if (a == b || b == c || a == c) {
            cout << "该三角形是等腰三角形。" << endl;
        } else {
            cout << "该三角形不是等腰三角形。" << endl;
        }
    } else {
        cout << "输入的边长不能构成三角形，请重新输入。" << endl;
    }

    return 0;
}
