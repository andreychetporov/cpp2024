#include <iostream>

bool Sirakyza(int n) {
    while (n != 1) {
        if (n % 2 == 0) {
            n /= n;
        }
        else {
            n = (3 * n + 1) / 2;
        }
    }
    if (n == 1) {
        return true;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    int n;
    std::cout << "Введите число \n";
    std::cin >> n;
    if (Sirakyza(n)) {
        std::cout << "Число " << n << " удовлетворяет гипотезе Сиракуза";
    }
}
