#include <iostream>
#include <cmath>

int main() {
    double x;
    int n;

    // Введення значень x та n
    std::cout << "Введіть значення x (1 < x < 5): ";
    std::cin >> x;

    std::cout << "Введіть значення n: ";
    std::cin >> n;

    // Ініціалізація суми
    double sum = 0.0;

    for (int k = 1; k <= n; ++k) {
        // Обчислення чисельника
        double numerator = k * sqrt(x);

        // Обчислення знаменника
        double denominator = pow(x, k - 1);

        // Додавання або віднімання елемента залежно від k
        sum += pow(-1, k) * (numerator / denominator);
    }

    // Виведення результату
    std::cout << "Результат суми: " << sum << std::endl;

    return 0;
}
