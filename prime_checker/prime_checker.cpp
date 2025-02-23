#include <iostream>
#include <limits>
#include <cmath>

// Функция для проверки, является ли число простым
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    // Проверка на корректный ввод
    if (std::cin.fail()) {
        std::cerr << "Error: This is not a number." << std::endl;
        return 1;
    }

    if (n < 0) {
        std::cerr << "Error: This is negaive number." << std::endl;
        return 1;
    }

    if (n > std::numeric_limits<int>::max()) {
        std::cerr << "Error: This is too big number." << std::endl;
        return 1;
    }

    if (isPrime(n)) {
        std::cout << n << " This is a simple number." << std::endl;
    }
    else {
        std::cout << n << " This is not a simple number." << std::endl;
    }

    return 0;
}