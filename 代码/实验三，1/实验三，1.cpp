#include <iostream>
using namespace std;

void gcd_lcm(int m, int n, int& gcd, int& lcm);

int main() {
    int m, n, gcd, lcm;
    cout << "请输入两个自然数 m 和 n: ";
    cin >> m >> n;
    gcd_lcm(m, n, gcd, lcm);
    cout << "最大公约数(GCD)是: " << gcd << endl;
    cout << "最小公倍数(LCM)是: " << lcm << endl;

    return 0;
}

void gcd_lcm(int m, int n, int& gcd, int& lcm) {
    int a = m, b = n;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (m * n) / gcd;
}
