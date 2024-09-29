#include <cmath>
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    float num1, num2;
    int operation;

    std::cout << "Выберите операцию:" << std::endl;
    std::cout << "1. Сложение" << std::endl;
    std::cout << "2. Вычитание" << std::endl;
    std::cout << "3. Умножение" << std::endl;
    std::cout << "4. Деление" << std::endl;
    std::cout << "5. Остаток от деления" << std::endl;
    std::cout << "6. Округление чисел" << std::endl;
    std::cout << "7. Квадратный корень" << std::endl;
    std::cout << "8. Возведение в степень" << std::endl;
    std::cin >> operation;

    if (operation >= 1 && operation <= 5 || operation == 8) {
        std::cout << "Введите первое число: ";
        std::cin >> num1;

        std::cout << "Введите второе число: ";
        std::cin >> num2;
    }
    else if (operation >= 6 && operation <= 7) {
        std::cout << "Введите число: ";
        std::cin >> num1;
    }

    switch (operation) {
    case 1:
        std::cout << "Результат сложения: " << num1 + num2 << std::endl;
        break;
    case 2:
        std::cout << "Результат вычитания: " << num1 - num2 << std::endl;
        break;
    case 3:
        std::cout << "Результат умножения: " << num1 * num2 << std::endl;
        break;
    case 4:
        if (num2 != 0) {
            std::cout << "Результат деления: " << num1 / num2 << std::endl;
        }
        else {
            std::cout << "Ошибка! Деление на ноль" << std::endl;
        }
        break;
    case 5:
        if (num2 != 0) {
            std::cout << "Остаток от деления: " << fmod(num1, num2) << std::endl;
        }
        else {
            std::cout << "Ошибка! Деление на ноль" << std::endl;
        }
        break;
    case 6:
        std::cout << "Округленное первое число: " << round(num1) << std::endl;
        break;
    case 7:
        std::cout << "Квадратный корень первого числа: " << sqrt(num1)
            << std::endl;
        break;
    case 8:
        std::cout << "Первое число в степени второго числа: " << pow(num1, num2) << std::endl;
        break;
    default:
        std::cout << "Ошибка! Некорректная операция" << std::endl;
        break;
    }