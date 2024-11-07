#include <iostream>
using namespace std;

int main() {
    char c;
    int n;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "请输入字符个数：" << endl;
    cin >> n;
    cout << "请输入一行字符：" << endl;
    for(int i=0;i<n;i++ ){
        cin >> c;
        if (isalpha(c)) { 
            letters++;
        }
        else if (isspace(c)) { 
            spaces++;
        }
        else if (isdigit(c)) { 
            digits++;
        }
        else { 
            others++;
        }
    }
    // 输出统计结果
    cout << "英文字母个数: " << letters << endl;
    cout << "空格个数: " << spaces << endl;
    cout << "数字字符个数: " << digits << endl;
    cout << "其他字符个数: " << others << endl;

    return 0;
}
