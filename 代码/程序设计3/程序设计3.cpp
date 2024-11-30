#include <iostream>

void sortArray(int* arr, int size);

int main() {
    int* arr = nullptr; 
    int size;

    std::cout << "请输入数组的元素个数：";
    std::cin >> size;

    arr = new int[size];

    std::cout << "请输入 " << size << " 个数组元素：" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i]; 
    }

    sortArray(arr, size);

    std::cout << "排序后的数组元素为：" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    arr = nullptr; 

    return 0;
}

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
