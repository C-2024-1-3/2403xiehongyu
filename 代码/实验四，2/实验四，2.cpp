#include <iostream>
#include <vector>
#include <algorithm>

void bubbleSort(std::vector<double>& list) {
    bool changed = true;
    int listSize = list.size();
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                std::swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    std::vector<double> numbers(10);
    std::cout << "请输入10个双精度数字：" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }

    bubbleSort(numbers);

    std::cout << "排序后的数字为：" << std::endl;
    for (double num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
