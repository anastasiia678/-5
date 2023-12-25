#include <iostream>
#include <cmath>

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    // Введення значення n
    std::cout << "Введіть значення n: ";
    std::cin >> n;

    // Ініціалізація суми
    double sum = 0.0;

    for (int i = 1; i <= n; ++i) {
        // Обчислення чисельника
        double numerator = pow(2, i) * factorial(i - 1);

        // Обчислення знаменника
        double denominator = pow(i, sqrt(i));

        // Додавання до суми
        sum += numerator / denominator;
    }

    // Виведення результату
    std::cout << "Результат суми: " << sum << std::endl;

    return 0;
}
