#include <iostream>
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    int gcdValue = gcd(a, b);
    int lcmValue = lcm(a, b);
    cout << "最大公约数是：" << gcdValue << endl;
    cout << "最小公倍数是：" << lcmValue << endl;

    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; 
}