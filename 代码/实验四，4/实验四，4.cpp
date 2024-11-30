#include <iostream>
#include <vector>

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
    for (int q = 0; q < size1 + size2 - 1; q++) {
        for (int d = 0; d < size1 + size2 - 1 - q; d++) {
            if (list3[d] > list3[d + 1]) {
                int temp = list3[d];
                list3[d] = list3[d + 1];
                list3[d + 1] = temp;
            }
        }
    }
}

int main() {
    const int MAX_SIZE = 80;
    int size1, size2;
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];

    std::cout << "请输入第一个数组的元素数量：";
    std::cin >> size1;
    std::cout << "请输入第一个数组的元素：" << std::endl;
    for (int i = 0; i < size1; ++i) {
        std::cin >> list1[i];
    }

    std::cout << "请输入第二个数组的元素数量：";
    std::cin >> size2;
    std::cout << "请输入第二个数组的元素：" << std::endl;
    for (int i = 0; i < size2; ++i) {
        std::cin >> list2[i];
    }

    merge(list1, size1, list2, size2, list3);

    std::cout << "合并后的数组为：" << std::endl;
    for (int i = 0; i < size1 + size2; ++i) {
        std::cout << list3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}