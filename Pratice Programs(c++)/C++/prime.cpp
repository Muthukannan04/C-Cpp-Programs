#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num = 101; // Starting from 101, the first prime number in the series
    int count = 10; // Generating 10 prime numbers in the series

    std::cout << "Generating prime numbers in the series: ";

    while (count > 0) {
        if (isPrime(num)) {
            std::cout << num << " ";
            --count;
        }
        ++num;
    }

    return 0;
}