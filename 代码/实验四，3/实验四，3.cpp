#include <iostream>
#include <vector>

int main() {
    const int NUM_LOCKERS = 100; 
    std::vector<bool> lockers(NUM_LOCKERS, false); 
    for (int i = 1; i <= NUM_LOCKERS; ++i) {
        for (int j = i; j < NUM_LOCKERS; j += i) {
            lockers[j] = !lockers[j];
        }
    }
    std::cout << "开着的存物柜号码：" << std::endl;
    for (int i = 0; i < NUM_LOCKERS; ++i) {
        if (lockers[i]) {
            std::cout << (i + 1) << " "; 
        }
    }
    std::cout << std::endl;

    return 0;
}
