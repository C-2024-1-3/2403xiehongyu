#include <iostream>

int indexOf(const char s1[], const char s2[]);

int main() {
    const int MAX_SIZE = 80; 
    char s1[MAX_SIZE], s2[MAX_SIZE];

    std::cout << "请输入第一个C字符串 s1: ";
    std::cin.getline(s1, MAX_SIZE);

    std::cout << "请输入第二个C字符串 s2: ";
    std::cin.getline(s2, MAX_SIZE);

    int index = indexOf(s1, s2);

    if (index != -1) {
        std::cout << "C字符串 s1 是 C字符串 s2 的子串，下标为: " << index << std::endl;
    }
    else {
        std::cout << "C字符串 s1 不是 C字符串 s2 的子串。" << std::endl;
    }

    return 0;
}

int indexOf(const char s1[], const char s2[]) {
    int len1 = 0, len2 = 0;
    const char* s1Ptr = s1, * s2Ptr = s2;

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    if (len1 > len2) return -1;

    for (int i = 0; i <= len2 - len1; i++) {
        bool found = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) return i; 
    }

    return -1;
}
