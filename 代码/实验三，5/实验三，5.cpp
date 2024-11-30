#include <iostream>

int peaches(int day);

int main() {
    int totalPeaches = peaches(10);
    std::cout << "第一天猴子共摘了 " << totalPeaches << " 个桃子。" << std::endl;
    return 0;
}

int peaches(int day) {
    if (day == 1) {
        return 1;
    }
    else {
        return (peaches(day - 1) + 1) * 2;
    }
}