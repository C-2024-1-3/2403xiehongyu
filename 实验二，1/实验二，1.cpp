#include <iostream>
using namespace std;

int main() {
    char ch;

    // 提示用户输入一个字符
    cout << "请输入一个字符：";
    cin >> ch;

    // 判断字符是否为小写字母
    if (ch >= 'a' && ch <= 'z') {
        // 转换为大写字母并输出
        cout << "转换为大写字母: " << char(ch - 'a' + 'A') << endl;
    }
    else {
        // 输出后继字符的ASCII码值
        cout << "后继字符的ASCII码值: " << int(ch + 1) << endl;
    }

    return 0;
}