#include <iostream>
#include <vector>

int main() {
    const int SIZE = 10; 
    std::vector<int> numbers(SIZE); 
    bool seen[10] = { false }; 
    int uniqueCount = 0; 

    for (int i = 0; i < SIZE; ++i) {
        int num;
        std::cin >> num;
        if (!seen[num]) {
            seen[num] = true; 
            numbers[uniqueCount++] = num; 
        }
    }

    std::cout << "不同的数有：";
    for (int i = 0; i < uniqueCount; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
