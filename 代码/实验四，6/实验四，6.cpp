#include <iostream>
#include <cctype>


void count(const char s[], int counts[]);

int main() {
    const int SIZE = 80;
    char str[SIZE];
    int counts[26] = { 0 };

    std::cout << "请输入一个字符串：";
    std::cin.getline(str, SIZE);

    count(str, counts);

    std::cout << "每个字母出现的次数（非零）：" << std::endl;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            std::cout << "字母 " << char('A' + i) << " 出现了 " << counts[i] << " 次" << std::endl;
        }
    }

    return 0;
}
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]); 
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++; 
        }
    }
}