#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int testUint = 65534;

    // 输出unsigned int类型的值
    cout << "output in unsigned int type: " << testUint << endl;

    // 输出char类型的值
    cout << "output in char type: " << static_cast<char>(testUint) << endl;

    // 输出short类型的值
    cout << "output in short type: " << static_cast<short>(testUint) << endl;

    // 输出int类型的值
    cout << "output in int type: " << static_cast<int>(testUint) << endl;

    // 输出double类型的值
    cout << "output in double type: " << static_cast<double>(testUint) << endl;

    // 输出设置精度为4位的double类型的值
    cout << "output in double type with precision 4: " << setprecision(4) << static_cast<double>(testUint) << endl;

    // 输出16进制unsigned int类型的值
    cout << "output in Hex unsigned int type: " << hex << testUint << endl;

    // 输出8进制unsigned int类型的值
    cout << "output in Oct unsigned int type: " << oct << testUint << endl;

    // 将一个实数转换成int
    double realNumber = 123.456;
    cout << "real number converted to int: " << static_cast<int>(realNumber) << endl;

    system("pause");
    return 0;
}