#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int num);

int main() {
    vector<int> primes;
    int num = 2;

    while (primes.size() < 200) {
        if (is_prime(num)) {
            primes.push_back(num);
        }
        num++;
    }

    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i];
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
        else {
            cout << " ";
        }
    }

    return 0;
}

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
