#include <iostream>

int main() {
    setlocale(LC_ALL, "Rus");
    std::cout << "Введите количество машин (целое неотрицательное): ";
    int n;
    if (!(std::cin >> n)) {
        std::cerr << "Ошибка ввода. Введите целое число машин.";
        return 1;
    }

    if (n < 0) {
        std::cout << "Количество машин не может быть отрицательным";
        return 1;
    }

    // Ограничение для типа int: безопасно до 12!
    if (n > 12) {
        std::cout << "Внимание: при n > 12 значение факториала не помещается в int и будет неверным.";
        std::cout << "Введите n от 0 до 12 для корректного результата в этом варианте.";
        return 1;
    }

    int nums = 1;
    int i = 1;
    while (i <= n) {
        nums = nums * i;
        ++i;
    }

    std::cout << n << "! = " << nums << '\n';
    return 0;
}