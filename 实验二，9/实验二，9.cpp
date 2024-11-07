#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    const double pricePerApple = 0.8; 
    int dailyApples = 2; 
    double totalCost = 0; 
    int dayCount = 1; 

    while (dailyApples <= 100) {
        totalCost += dailyApples * pricePerApple; 
        dailyApples *= 2;
        dayCount++;
    }

    double averageCost = totalCost / dayCount;

    cout << "平均每天花费：" << fixed << averageCost << "元" << endl;

    return 0;
}