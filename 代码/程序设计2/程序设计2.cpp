#include <iostream>
#include <cstdlib> 

int parseHex(const char* const hexString);

int main() {
    const int MAX_SIZE = 9; 
    char hexString[MAX_SIZE];

    std::cout << "请输入一个16进制数（不包含前缀0x）：";
    std::cin >> hexString;
    int decimal = parseHex(hexString);

    std::cout << "16进制数 " << hexString << " 对应的10进制数为：" << decimal << std::endl;

    return 0;
}

int parseHex(const char* const hexString) {
    return std::strtol(hexString, nullptr, 16);
}