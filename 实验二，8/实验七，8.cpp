#include <iostream>
#include <iomanip> 

using namespace std;

double squareRoot(double a) {
    if (a < 0) {
        throw "负数没有实数平方根";
    }
    double x = a; 
    double b;
    double jd = 0.00001; 
    double newX;

    do {

        newX = (x + a / x) / 2; 
        b = x;
        x = newX;
    } while (b-x > jd);

    return newX;
}

int main() {
    double a;
    cout << "请输入一个正数：";
    cin >> a;

    double result = squareRoot(a);

    cout << "平方根为：" << result;

    return 0;
}